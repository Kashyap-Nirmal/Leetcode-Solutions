[![Hello programmer Welcome](https://img.shields.io/badge/Hello,Programmer!-Welcome-orange.svg?style=flat&logo=github)](https://github.com/Kashyap-Nirmal)
![Lines of code](https://img.shields.io/tokei/lines/github/Kashyap-Nirmal/Leetcode-Solutions?style=plastic)
[![Connect on LinkedIn](https://img.shields.io/badge/--linkedin?label=LinkedIn&logo=LinkedIn&style=social)](https://www.linkedin.com/in/kashyap-nirmal/) 
[![Connect on Gmail](https://img.shields.io/badge/--Gmail?label=Gmail&logo=Gmail&style=social)](mailto:kashyapnirmal18@gmail.com)
![Last Commit](https://img.shields.io/github/last-commit/Kashyap-Nirmal/Leetcode-Solutions?style=plastic)
<br>
<img src="https://forthebadge.com/images/badges/for-you.svg" />
<img src="https://forthebadge.com/images/badges/built-with-love.svg" />
<img src="http://ForTheBadge.com/images/badges/made-with-c-plus-plus.svg" />
<img src="http://ForTheBadge.com/images/badges/made-with-go.svg" />

<p align="center">
<img src="https://capsule-render.vercel.app/api?type=rect&color=gradient&height=100&section=header&text=LeetCode%20Solutions&fontSize=70&fontAlignY=70" /> 
<h2 align="center">👉 A Collection of Solutions to Leetcode Problems 👈</h2>
</p>

- My ***C++ as well as Go*** solutions.
- I will be adding the solutions eventually as I go on.
- My solutions may **not always be optimal**.
- I am also mentioning the Go concepts used in these problems along with the basic syntax. 

<br>Creator [`Kashyap Nirmal`](https://github.com/Kashyap-Nirmal/)

Duration ` Aug 2022 - Present `

## `📋 Table of Contents 📋`

<!--||[]()| [C++]()|[Go]()|Easy|-->
| # | Title | C++ Solution | Go Solution| Difficulty |
|---| ----- | -------- | ---------- | ---------- |
|234|[Palindrome Linked List](https://leetcode.com/problems/palindrome-linked-list/)| [C++](./234.%20Palindrome%20Linked%20List.cpp)|[Go]()|Easy|
|342|[Power of Four](https://leetcode.com/problems/power-of-four/) | [C++](./342.%20Power%20of%20Four.cpp)|[Go]()|Easy|
|383|[Ransom Note](https://leetcode.com/problems/ransom-note/) | [C++](./383.%20Ransom%20Note.cpp)|[Go]()|Easy|
|876|[Middle of the Linked List](https://leetcode.com/problems/middle-of-the-linked-list/) | [C++](./876.%20Middle%20of%20the%20Linked%20List.cpp)|[Go]()|Easy|
|1431|[Kids With the Greatest Number of Candies](https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/)| [C++](./1431.%20Kids%20With%20the%20Greatest%20Number%20of%20Candies.cpp)|[Go]()|Easy|
|1480|[Running Sum of 1d Array](https://leetcode.com/problems/running-sum-of-1d-array/submissions/)| [C++](./1480.%20Running%20Sum%20of%201d%20Array.cpp)|[Go]()|Easy|
|1784|[Check if Binary String Has at Most One Segment of Ones](https://leetcode.com/problems/check-if-binary-string-has-at-most-one-segment-of-ones/)| [C++](./1784.%20Check%20if%20Binary%20String%20Has%20at%20Most%20One%20Segment%20of%20Ones.cpp)|[Go]()|Easy|
|1816|[Truncate Sentence](https://leetcode.com/problems/truncate-sentence/)| [C++](./1816.%20Truncate%20Sentence.cpp)|[Go]()|Easy|
|1920|[Building Array from Permutation](https://leetcode.com/problems/build-array-from-permutation/)|[C++]()|[Go]()|Easy|
|2285|[Add Two Integers](https://leetcode.com/problems/add-two-integers/)|[C++]()|[Go]()|Easy|

#Notes and Basic go syntaxes

---

250822:

---

2235. Add Two Integers <br>
https://leetcode.com/problems/add-two-integers/

    Return sum

---

1480. Running Sum of 1d Array <br>
https://leetcode.com/problems/running-sum-of-1d-array/ 

Topics: For Loop, len() of Array
    
    for i:=1;i<len(nums);i++ {}

---

1920. Build Array from Permutation <br>
https://leetcode.com/problems/build-array-from-permutation/

Topics: Make Slice
    
    //Making a slice of specific length
    var num = make([]int, len(nums))

---

383. Ransom Note <br>
https://leetcode.com/problems/ransom-note/ 

Topics: Make Map, String, 
Range
Frequency count

    // Make Map
    magmap := make(map[string]int)

    // Range
    for key, element := range rnmap {}

    // Character Frequency Count    
    for i=0; i<len(magazine); i++ {
            if _, ok := magmap[string(magazine[i])]; ok == true {
                    magmap[string(magazine[i])] += 1
            } else {
                    magmap[string(magazine[i])] = 1
            }
    }

---

1431. Kids With the Greatest Number of Candies <br>
https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/

---

876. Middle of the Linked List
https://leetcode.com/problems/middle-of-the-linked-list/ 

Topics: LinkedList (Struct), Struct Pointer & Literal

     // Pointer to Struct Literal
     temp := &ListNode{}
         temp = head

---

260822:

---

234. Palindrome Linked List <br>
https://leetcode.com/problems/palindrome-linked-list/ 

Topics: LinkedList (Struct), Struct Pointer & Literal, Empty Slice, Slice Append
    
//Empty Slice
    var nums []int

    // nil for Pointer
    for ; temp != nil ; temp=temp.Next {
        // Slice Append
        nums = append(nums , temp.Val)
    }
    
---

1816. Truncate Sentence <br>
https://leetcode.com/problems/truncate-sentence/ 

Topics: Array, String, Empty Slice, If-else

    // Empty Slice
    s1 := s[ : 0]

    // Be careful for scope of If-else variables

## Note
- Some things added in the README.md file may be borrowed from some other repositories. 
- `Credit to the rightful owner.`
- The ***Go code files*** are ***purely my submissions***. Until unless I needed to look for a ***solution from Internet source*** or ask for ***help from few of my friends***.
