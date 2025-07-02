<p align="center">
  <img src="https://i.imgur.com/1aOCkRM.png" width="150" alt="Libft badge © @Cadets for Cadets — used under MIT License">
</p>

<div align="center">

</div>

  <div align="center">

[![42 School](https://img.shields.io/badge/42_Paris-blue)](https://42.fr/en/homepage/)
[![Bonus](https://img.shields.io/badge/Bonus_✔️-brightgreen)](https://github.com/baderelg/Libft) \
  <img src="https://i.imgur.com/HTci8UV.png" width="100" alt="Validation confirmation on the 42 Intra @baelgadi - May 13th 2025">

</div>

<h3 align="center">
  <a href="https://github.com/baderelg/Libft/tree/main/Makefile_tips.md">Makefile Tips (by Coach Beard) »</a>
</h3>

> [!NOTE]
> <details>
> <summary><strong>What is 42?</strong></summary>
>   
> > [42 School](https://42.fr/en/homepage/) is a coding school focused on peer to peer learning and being project driven. \
> > We are given a project, a set of rules and clear objectives, and then it's up to us to figure out how to achieve the goal. \
> > It pushes to learn how to learn. It may be intense and sometimes frustrating but the sense of accomplishment makes everything worth it. \
> > Short term comfort is thus sacrificed for long term growth and versatility.
> </details>
> <details>
> <summary><strong>What is Libft?</strong></summary>
> 
> > Libft is the first project of the common core at 42 School.
>  > <br>It requires students to rebuild a portion of the C Standard Library by re-implementing functions like `memcpy`, `strlen`, `calloc`, `strchr`, `atoi` and many more. But also some new additional functions such as `split`. 
> > <br>Keep in mind that it is not allowed to use the real standard library for help. Students are also required to handle edge cases, write clean and follow strict guidelines. Speaking of which... 
> > 
> > <b>📏 Norminette</b></br>
> > The Norm is a set of coding rules used in all 42 projects: 
> > ```markdown
> > - No more than 25 lines per function
> > - No more than 5 function definitions per file
> > - No ternary operators, no variable declarations after the first line of a function
> > - No for loops
> > - Function and file names must follow snake_case
> > - and many other rules...
> > ```
> > All your code must pass `norminette`, a linter built specifically for 42’s style.
> </details>
> 
> To make the journey entertaining, I chose to approach the project through the eyes and voice of a fictional character.
> 
> <details>
> <summary><strong>Why ?</strong></summary>
> 
> > Embodying a character while tackling a project isn't just entertaining, it forges stronger connections with the logic and makes it way more engaging.</br>
> > When you try expressing what you just learned with the voice of a fictional character, it helps cementing the newly acquired knowledge and even adds new perspectives.</br>
> > I chose to take on Libft through the eyes and the mustachioed optimism of Ted Lasso.
> </details>
> <details>
> <summary><strong>Why Ted Lasso?</strong></summary>
> 
> > Libft is about building <strong>fundamentals</strong> and Ted is the ultimate coach for that. Team driven and detail-oriented.
> > <br>In this set piece, each function is a player, and Ted knows how to bring out their best through structure, discipline and flashy encouragement.
> > <br>Libft isn’t the spotlight, it’s the locker room talk that makes everything else possible.
> > <br>So who better than Coach Lasso ?
> </details>

---

<p align="center">
  <img src="https://i.imgur.com/n6fzTXR.png" alt="Ted Lasso">
</p>

> "Howdy! I'm Ted Lasso. I might not know my malloc from my memcmp just yet, but I believe in hustle, clean code, and doing the work with a smile. You're about to walk through the fundamentals of C like you're running a championship playbook - and I'm here to call the plays."

Libft is your first real training camp in the world of C, partner. It’s where you stop relying on the built-in tools and start building your own. Like crafting your very own Swiss army knife... except it’s all pointers and null terminators.

# So, what is Libft?

What does ft mean anyway? Most folks say ft is for 'function' or 'forty-two'.
<br>
Me? I say it’s <strong>F</strong>aith and <strong>T</strong>enacity. Cause that's how you get through C and frankly, life too.

In this project, you'll rewrite some of the essential functions from the C standard library and that ain't just busywork. It’s learning how things are really under the hood.

Here’s what you’ll be building:

* 🥔 **Libc functions** - Your basics: character checks, memory operations, string manipulations. All the meat and potatoes of daily C work.
* 🧶 **Additional functions** - Slightly fancier stuff: memory allocation, string building, splitting and mapping.
* 🔗 **Bonus functions** - Linked lists, baby! Nodes, pointers to pointers, and that sweet, sweet recursion discipline.

> "You’re not just learning to code. You’re learning how to think like a builder. That’s Libft."

## 🥔 Libc Functions

> "These are your fundamentals: push-ups, sit-ups, and early morning drills. Once master these, everything else starts to make sense. Character checks, memory moves, and string juggling are the foundation for greatness, and this is right where your discipline gets forged."

<details>
<summary><strong>ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint</strong></summary>

[`ft_isalpha.c`](https://github.com/baderelg/Libft/tree/main/Libft/ft_isalpha.c) [`ft_isdigit.c`](https://github.com/baderelg/Libft/tree/main/Libft/ft_isdigit.c) [`ft_isalnum.c`](https://github.com/baderelg/Libft/tree/main/Libft/ft_isalnum.c) [`ft_isascii.c`](https://github.com/baderelg/Libft/tree/main/Libft/ft_isascii.c) [`ft_isprint.c`](https://github.com/baderelg/Libft/tree/main/Libft/ft_isprint.c)

> "Every one of these fellas is lookin' for something simple: a good ol' character that fits the job."

* ft_isalpha: Upper or lowercase letters from A to Z, a to z. Classic players.
* ft_isdigit: Numbers, 0 to 9. Solid, dependable.
* ft_isalnum: Combines the two above. Versatile, just like an utility midfielder.
* ft_isascii: 0 to 127. If it ain't ASCII, it ain't on the team.
* ft_isprint: Anything that can fit on a jersey (space to `~`). No invisible folks.

💡 **Coach's Tip:** When they succeed, all of these return a non-zero value, and you’re free to return 1, champ. It’s not about the exact number; it’s about showing up.

🚩 Watch out for deceptive sneaky lil' characters like control codes (`\n`, `\t`) or anything above 127 cause they don’t belong in the lineup.

💬 And don’t worry about that `<ctype.h>` fella, because you’re not here to use it. You’re here to *be* it.
<br><br>
</details>

<details>
<summary><strong>ft_strlen</strong></summary>

[`ft_strlen.c`](https://github.com/baderelg/Libft/tree/main/Libft/ft_strlen.c)
> "Even silence has a length, partner. Measure it with care."

* Counts how many characters are in a string until it hits that good ol' null terminator.

💡 **Coach's Tip:** Empty strings? That’s a zero, not a failure. A short pass is still a pass.

🚩 Don't go reading past `\0` coz' that's out of bounds and into segfault territory.
<br><br>
</details>

<details>
<summary><strong>ft_memset, ft_bzero</strong></summary>

[`ft_memset.c`](https://github.com/baderelg/Libft/tree/main/Libft/ft_memset.c) [`ft_bzero.c`](https://github.com/baderelg/Libft/tree/main/Libft/ft_bzero.c)
> "Sometimes you gotta clear the playbook and start fresh."

* ft_memset: Fills up memory with the same byte, over and over. Like painting a wall the same color.
* ft_bzero: Same idea, but always sets it to zero: fresh start, no surprises.

💡 **Coach's Tip:** If the number of bytes to set is 0, you still suit up and show up, but you keep your hands in your pockets. No need to touch memory that ain't asked for.

🚩 ft_bzero is just a specialized ft_memset, so keep it simple and reuse when you can.
<br><br>
</details>

<details>
<summary><strong>ft_memcpy, ft_memmove</strong></summary>

[`ft_memcpy.c`](https://github.com/baderelg/Libft/tree/main/Libft/ft_memcpy.c) [`ft_memmove.c`](https://github.com/baderelg/Libft/tree/main/Libft/ft_memmove.c)
> "You know, sometimes the play overlaps, but that don’t mean you panic!"

* ft_memcpy: Copy n bytes from one memory location to another in a clean and quick manner, assuming they don’t touch.
* ft_memmove: Same job, but way smarter. It handles overlapping areas like a seasoned quarterback.

💡 **Coach's Tip:** If n (the number of bytes to copy) is 0, well, that’s your cue to nod politely and stay still like a statue. No need to move what ain’t there, right?

🚩 Use ft_memmove when you’re unsure if your memory areas are elbowing each other in the locker room.
<br><br>
</details>

<details>
<summary><strong>ft_strlcpy, ft_strlcat</strong></summary>
  
[`ft_strlcpy.c`](https://github.com/baderelg/Libft/tree/main/Libft/ft_strlcpy.c) [`ft_strlcat.c`](https://github.com/baderelg/Libft/tree/main/Libft/ft_strlcat.c)
> "Copy smart and append smarter. Always provide room for the null terminator."

* ft_strlcpy: Copies from src to dst, up to (size - 1) characters. If size is greater than 0, always null terminate.
* ft_strlcat: Appends src to the end of dst, as much as it can without overflowing. Also null-terminates.

💡 **Coach's Tip:** size ain't how much you wanna copy, it's how much space you’ve got in the dst buffer. Know your limits, then work within 'em.

🚩 Return value tells you what would've happened in a perfect world. That is, the length it *tried* to build. Useful for checking if you ran outta room.
<br><br>
</details>

<details>
<summary><strong>ft_toupper, ft_tolower</strong></summary>

[`ft_toupper.c`](https://github.com/baderelg/Libft/tree/main/Libft/ft_toupper.c) [`ft_tolower.c`](https://github.com/baderelg/Libft/tree/main/Libft/ft_tolower.c)
> "Every letter deserves its moment; sometimes that’s loud and proud, sometimes it’s soft and steady."

* ft_toupper: If it’s a lowercase letter, it gets promoted to uppercase. Otherwise? It stays put.
* ft_tolower: Flips uppercase letters into lowercase. No drama.

💡 **Coach's Tip:** These functions don’t throw a fit if the input ain’t a letter. They just hand it back like a pro. Clean, quiet, respectful.

🚩 Works only for ASCII letters. Fancy Unicode fellas? Not invited to this game.
<br><br>
</details>

<details>
<summary><strong>ft_strchr, ft_strrchr</strong></summary>

[`ft_strchr.c`](https://github.com/baderelg/Libft/tree/main/Libft/ft_strchr.c) [`ft_strrchr.c`](https://github.com/baderelg/Libft/tree/main/Libft/ft_strrchr.c)
> "Whether you’re first on the field or last to leave, you gotta know where you stand."

* ft_strchr: Finds the first time a character shows up in a string. Even the null terminator gets a fair shake.
* ft_strrchr: Same idea, but it checks from the back of the line. Last one wins this round.

💡 **Coach's Tip:** Searching for `\0` is totally valid, and yeah, it should return a pointer to that null byte.

🚩 If the character ain’t found? Don’t fake it. Just return NULL and call it a day.
<br><br>
</details>

<details>
<summary><strong>ft_strncmp, ft_memchr, ft_memcmp</strong></summary>

[`ft_strncmp.c`](https://github.com/baderelg/Libft/tree/main/Libft/ft_strncmp.c) [`ft_memchr.c`](https://github.com/baderelg/Libft/tree/main/Libft/ft_memchr.c)
> "It’s all about the details, champ. Byte by byte, character by character. They all count."

* ft_strncmp: Compares two strings up to n characters. Stops at the first mismatch or null terminator.
* ft_memchr: Hunts down the first time a byte shows up in memory. No strings attached.
* ft_memcmp: Pits two memory areas against each other for n bytes. Fast and unforgiving.

💡 **Coach's Tip:** With ft_strncmp, null bytes are the finish line. Even if n says you can keep going. And ft_memcmp? It doesn’t care what the data means. Just the values.

🚩 All three return early if n == 0, and that’s fine. Not every play needs a snap. Also, don’t forget: these return differences, not just true or false. Read that return value like it’s your scoreboard.\
<br><br>
</details>

<details>
<summary><strong>ft_strnstr, ft_atoi</strong></summary>

[`ft_strnstr.c`](https://github.com/baderelg/Libft/tree/main/Libft/ft_strnstr.c) [`ft_atoi.c`](https://github.com/baderelg/Libft/tree/main/Libft/ft_atoi.c)
> "Finding the needle. Reading the signs. Both take patience... and a little grit."

* ft_strnstr: Searches for a substring (needle) inside another (haystack), but only for up to len characters.
* ft_atoi: Converts a string to an integer. Skips whitespace, respects signs, and calls it when numbers stop.

💡 **Coach's Tip:** For ft_strnstr, an empty needle means you just return the haystack, like spotting the goal before the whistle. And for ft_atoi, if there’s no digits at all? That’s a solid zero, friend.

🚩 Be mindful of overflows in ft_atoi. It’ll happen fast if you don’t stay alert, but don’t sweat the undefined behavior. Just stay in bounds like a good sport.
<br><br>
</details>

<details>
<summary><strong>ft_calloc</strong></summary>

[`ft_calloc.c`](https://github.com/baderelg/Libft/tree/main/Libft/ft_calloc.c)
> "Your locker room before kickoff: clean, ready, and just the right size."

* Allocates memory for count elements of size bytes each, and sets it all to zero. A clean slate, every time.

💡 **Coach's Tip:** A zeroed buffer means fewer surprises down the line. It’s like knowing your teammates showed up to practice.

🚩 Overflow can sneak up on you when multiplying count \* size. Make sure the math adds up before you trust the result.
<br><br>
</details>

<details>
<summary><strong>ft_strdup</strong></summary>
  
[`ft_strdup.c`](https://github.com/baderelg/Libft/tree/main/Libft/ft_strdup.c)
> "Every string deserves a fresh start."

* Allocates new memory and copies a null-terminated string into it. A perfect clone with room to breathe.

💡 **Coach's Tip:** This one's all about independence. Your copy shouldn't rely on the original, especially when cleanup time comes.

🚩 Always check that allocation succeeded, and don’t forget to copy the null terminator at the end. That little guy matters more than he lets on.
<br><br>
</details>

## 🧶 Additional Functions

> "This is where things start to open up. Memory allocation, string sculpting, splitting and mapping. You’re no longer just surviving in C, you’re starting to dance. These are the plays where style meets structure, and clarity wins games."

<details>
<summary><strong>ft_substr</strong></summary>

[`ft_substr.c`](https://github.com/baderelg/Libft/tree/main/Libft/ft_substr.c)
> "You don’t need the whole book, just the best chapter."

* Extracts a substring from a string, starting at start and up to len characters. Like picking the best part of a story.

💡 **Coach's Tip:** If start is past the end of the string, no need to panic; just return an empty string and move on. Not every play goes forward.

🚩 The substring must be null-terminated. Even a sliver of text deserves a proper ending.
<br><br>
</details>

<details>
<summary><strong>ft_strjoin</strong></summary>
  
[`ft_strjoin.c`](https://github.com/baderelg/Libft/tree/main/Libft/ft_strjoin.c)
> "Joining two strings? That’s chemistry, kid, like trust and teamwork wrapped in a null terminator."

* Combines two strings into one new string, freshly allocated and null-terminated.

💡 **Coach's Tip:** If one of those strings is empty, no big deal. The other still gets the spotlight. But if either is NULL? That’s a no-go, champ.

🚩 Make sure there’s enough space for both strings **plus** that little null-terminator at the end. No room for off-by-one errors in this locker room.
<br><br>
</details>

<details>
<summary><strong>ft_strtrim</strong></summary>
  
[`ft_strtrim.c`](https://github.com/baderelg/Libft/tree/main/Libft/ft_strtrim.c)
> "Trimming strings? That’s like sharpening your skates before the big game; clean edges, smooth moves."

* Removes all leading and trailing characters found in the `set` from `s1`. Returns a newly allocated string.

💡 **Coach's Tip:** If nothing needs trimming, no problem. Just copy the string. If `s1` or `set` is NULL, though? That’s a bench moment.

🚩 Watch out for off-by-one errors, and always ensure your new string is properly null-terminated. Precision wins matches.
<br><br>
</details>

<details>
<summary><strong>ft_split</strong></summary>
  
[`ft_split.c`](https://github.com/baderelg/Libft/tree/main/Libft/ft_split.c)
> "Splitting a string means making space for everyone; neat, clear, and no confusion on the field."

* Breaks a string into an array of substrings using a delimiter character. Each word gets its own spotlight.

💡 **Coach's Tip:** Two delimiters back-to-back? Don’t count that as a word. Just keep moving until the real content shows up.

🚩 Always null-terminate the array. And if malloc fumbles mid-play, you clean up. No orphaned pointers on my field. 
<br><br>
</details>

<details>
<summary><strong>ft_itoa</strong></summary>
  
[`ft_itoa.c`](https://github.com/baderelg/Libft/tree/main/Libft/ft_itoa.c)
> "Turning numbers into strings isn’t magic. It’s just knowing how to tell the story one digit at a time."

* Converts an integer into a newly allocated string representation.

💡 **Coach's Tip:** Handle negatives with care, especially that INT\_MIN fella. He’s tricky. And don’t forget to count the space for the minus sign.

🚩 Watch for edge cases like 0 or the biggest negative number. Every number deserves to be printed loud and clear.
<br><br>
</details>

<details>
<summary><strong>ft_strmapi & ft_striteri</strong></summary>
  
[`ft_strmapi.c`](https://github.com/baderelg/Libft/tree/main/Libft/ft_strmapi.c) [`ft_striteri.c`](https://github.com/baderelg/Libft/tree/main/Libft/ft_striteri.c)
> "Sometimes you guide the character from afar. Sometimes you coach it face to face. Either way, every letter counts."

* `ft_strmapi`: Applies a function to each character of a string, returns a new one with the results.
* `ft_striteri`: Applies a function directly to each character of a string, modifying it in place.

💡 **Coach's Tip:** Index matters - whether you're mapping or iterating, always pass it along. One builds a new squad, the other sharpens the current lineup.

🚩 NULL input? Step off the field. Always null-terminate that new string, and never forget to handle empty strings with respect.
<br><br>
</details>

<details>
<summary><strong>ft_putchar_fd, ft_putstr_fd & ft_putendl_fd</strong></summary>
  
[`ft_putchar_fd.c`](https://github.com/baderelg/Libft/tree/main/Libft/ft_putchar_fd.c) [`ft_putstr_fd.c`](https://github.com/baderelg/Libft/tree/main/Libft/ft_putstr_fd.c) [`ft_putendl_fd.c`](https://github.com/baderelg/Libft/tree/main/Libft/ft_putendl_fd.c)
> "Communication’s key, whether it’s one letter, a speech, or something that needs a good ol’ line break."

* `ft_putchar_fd`: Writes a single character to a file descriptor.
* `ft_putstr_fd`: Writes a string to a file descriptor.
* `ft_putendl_fd`: Writes a string followed by a newline to a file descriptor.

💡 **Coach's Tip:** Don’t assume your file descriptor’s gonna be 1 (stdout). Respect the `fd`. Whether you’re talkin’ to a log file or the screen.

🚩 NULL strings? Stay quiet, don’t write a thing. And make sure your newline lands where it’s supposed to.
<br><br>
</details>

<details>
<summary><strong>ft_putnbr_fd</strong></summary>
  
[`ft_putnbr_fd.c`](https://github.com/baderelg/Libft/tree/main/Libft/ft_putnbr_fd.c)
> "Sometimes the scoreboard matters. Make sure your numbers get seen and heard."

* Converts an integer to characters and writes it to a file descriptor.

💡 **Coach's Tip:** Negative numbers need that minus sign and INT_MIN will try to catch you off guard, so plan your plays.

🚩 Use recursion or loops wisely, and don’t forget to pass every digit, even if it’s just a zero sitting proud.
<br><br>
</details>

## 🔗 Bonus Functions

> "Now we’re talkin’ teamwork. Linked lists are the drills where coordination meets memory. You’re not just writing functions here. You’re managing relationships, passing data, and keeping it all stitched together. Real coaching stuff."

<details>
<summary><strong>ft_lstnew</strong></summary>
  
[`ft_lstnew.c`](https://github.com/baderelg/Libft/tree/main/Libft/ft_lstnew_bonus.c)
> "Every strong team starts with a solid first node - give it purpose, give it heart."
* Allocates and returns a new list node with `content` as its value and `next` set to NULL.

💡 **Coach's Tip:** The content can be NULL. That’s okay. What matters is that your node shows up ready to join the team.

🚩 Don’t forget to check if the allocation succeeded. Even your first player needs a clean uniform.
<br><br>
</details>

<details>
<summary><strong>ft_lstadd_front</strong></summary>

[`ft_lstadd_front.c`](https://github.com/baderelg/Libft/tree/main/Libft/ft_lstadd_front_bonus.c)
> "Leadership starts up front. When a new node’s ready to lead, give it the ball and let it run."

* Adds a new node to the beginning of a linked list. Updates the head of the list to point to the new node.

💡 **Coach's Tip:** Always check if your list exists; you can’t pass to a NULL playbook.

🚩 Don't lose the original head node. Make sure to re-link it properly after setting up the front.
<br><br>
</details>

<details>
<summary><strong>ft_lstsize</strong></summary>
  
[`ft_lstsize.c`](https://github.com/baderelg/Libft/tree/main/Libft/ft_lstsize_bonus.c)
> "Sometimes, you just gotta count who showed up before you draw the play."

* Counts the number of nodes in a linked list.

💡 **Coach's Tip:** Start from the head, move one node at a time, and don’t get fancy. Steady pace wins the count.

🚩 An empty list means zero. No shame in that, even the best teams start somewhere.
<br><br>
</details>

<details>
<summary><strong>ft_lstlast</strong></summary>
  
[`ft_lstlast.c`](https://github.com/baderelg/Libft/tree/main/Libft/ft_lstlast_bonus.c)
> "The last node? That’s your anchor; steady, patient, waiting for the handoff."

* Returns the last node of a linked list.

💡 **Coach's Tip:** If the list is empty, don't push. Just return NULL and regroup.

🚩 Keep walking until you hit a node with `next == NULL`. That’s your finisher.
<br><br>
</details>

<details>
<summary><strong>ft_lstadd_back</strong></summary>
  
[`ft_lstadd_back.c`](https://github.com/baderelg/Libft/tree/main/Libft/ft_lstadd_back_bonus.c)
> "Closing the line with care. Every team needs someone who can seal the deal."

* Adds a new node at the end of a linked list.

💡 **Coach's Tip:** Use `ft_lstlast` to find your anchor, then pass the ball. If the list is empty, your new node becomes the head.

🚩 Make sure you’re not pointing to nowhere. Handle NULLs with care.
<br><br>
</details>

<details>
<summary><strong>ft_lstdelone</strong></summary>
  
[`ft_lstdelone.c`](https://github.com/baderelg/Libft/tree/main/Libft/ft_lstdelone_bonus.c)
> "Sometimes you gotta let a player go; clean, quick, and with respect."

* Frees the memory of a single list node using a provided `del` function for the content.

💡 **Coach's Tip:** The function only handles one node. Don’t touch `next`. Focus on the task, not the whole bench.

🚩 Never call `free` directly on content. Always let the `del` function do the honors.
<br><br>
</details>

<details>
<summary><strong>ft_lstclear</strong></summary>
  
[`ft_lstclear.c`](https://github.com/baderelg/Libft/tree/main/Libft/ft_lstclear_bonus.c)
> "Clearing the whole bench? Do it with grace. Every node, every time."

* Deletes and frees all nodes of a list using the `del` function. Sets the head pointer to NULL when it’s done.

💡 **Coach's Tip:** Start from the top and walk it node by node. Free content first, then the node itself, no shortcuts.

🚩 Once cleanup is done, set that list pointer to NULL like you’re closing the locker room for the season.
<br><br>
</details>

<details>
<summary><strong>ft_lstiter</strong></summary>
  
[`ft_lstiter.c`](https://github.com/baderelg/Libft/tree/main/Libft/ft_lstiter_bonus.c)
> "Sometimes coaching means walking the line, giving every player a bit of advice."

* Applies a function to the `content` of each node in the list, one by one.

💡 **Coach's Tip:** This ain’t about changing structure. Just guiding each piece of content along its journey.

🚩 NULL list or function? Just sit this one out. Nothing to do, no one to coach.
<br><br>
</details>

<details>
<summary><strong>ft_lstmap</strong></summary>
  
[`ft_lstmap.c`](https://github.com/baderelg/Libft/tree/main/Libft/ft_lstmap_bonus.c)
> "Transform each player, build a whole new team and if someone can’t keep up, make sure you clean the field."

* Applies a function to the content of each node, creates a new list with the results. Uses `del` to clean up if allocation fails.

💡 **Coach's Tip:** This one’s tricky. You’re building something new while walking through the old. Keep it tight, keep it clean.

🚩 One failure? Shut it down, free everything you touched, and don’t leave anyone behind.
<br><br>
</details>

---

## Final Whistle

> "If you made it this far, that means you’ve wrestled with memory, tamed some wild pointers, and probably seen some segmentation faults. And guess what? You’re still standing."

Libft is a fundational toolbox that teaches you to build with discipline, understand what's under the hood, and earn every line you write.

So keep that compiler clean, those return values checked, and remember: the standard library’s got nothing on what you just built with your own two hands.

<p align="center">
  <img src="https://gifs.cackhanded.net/ted-lasso/the-diamond-dogs/barbecue-sauce.gif" alt="Barbecue Sauce!">
</p>
<hr>
<p align="center">
<sub><i>Libft badge © @Cadets for Cadets — used under MIT License.</i></sub>
<br>
<sub><a href="https://github.com/ayogun/42-project-badges/blob/main/LICENSE">See full license here</a></sub>
</p>
