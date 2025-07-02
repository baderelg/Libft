<p align="center">
  <img src="https://i.imgur.com/kZg8Wf0.png" alt="Willis">
</p>

> *“Look, I’m not here to inspire. I’m here to make sure you don’t waste your time and mine. A Makefile must be lean, efficient, and do exactly what it’s supposed to.”*

I'm assuming you already know what a Makefile is. So these are just some tips on top of that.

## 🛠️ Clean Sh...eet

No wasting cycles. If nothing’s changed, it doesn’t rebuild. That’s intentional. That’s respect for your machine and your time.

### ✅ Dependency Tracking

```makefile
.c.o:
```
Each `.c` becomes a `.o` (object).
<br>
```makefile
CFLAGS = -Wall -Wextra -Werror -I ./ -MMD -MP
```
Thanks to `-MMD -MP`, it also creates for each object a `.d` (dependency) file listing its dependencies. Still following?

* `-MMD`: auto-generates the `.d` file and thus tracks dependencies.
* `-MP`: avoids errors if a header gets removed.

At the end, we DO NOT forget to `-include $(DEPS)` (DEPS here refers to the .d files) in order to quietly track what depends on what.

If a header changes, only the relevant files get recompiled.

> *“Don't warm up the whole bench when only the goalie needs stretching.”*

### 🔁 No Unnecessary Relinking

The static library (`libft.a`) won’t be rebuilt unless it *has* to be.

```make
$(NAME): $(OBJS)
	$(AR) rcs $(NAME) $(OBJS)
```

Make checks timestamps. If nothing’s changed, it moves on. No noise.

* One change? One recompile.
* No change? No rebuild.

> THAT'S IT BABYYYYYYYYYY! LET'S GOOOOOO.
