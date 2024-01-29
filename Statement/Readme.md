# Quick Guide for ```LaTeX```

## Equations

|  type   |  LaTeX   |
|:-------:|:--------:|
| inline  |  `$eq$`  |
| display | `$$eq$$` |

---

## Math

| Description    | LaTeX                |       Result       |
|----------------|----------------------|:------------------:|
| Addition       | `$a+b$`              |       $a+b$        |
| Subtraction    | `$a-b$`              |       $a-b$        |
| Multiplication | `$a \times b$`       |    $a \times b$    |
| Division       | `$\dfrac{a}{b}$`     |   $\dfrac{a}{b}$   |
| Sqrt           | `$\sqrt{a}$`         |     $\sqrt{a}$     |
| Summation      | `$$\sum_{a=0}^{b}$$` | $$\sum_{a=0}^{b}$$ |
| Dots           | `$\cdots$`           |      $\cdots$      |
| Element of     | `$\in$`              |       $\in$        |
| Dash           | `---`                |         -          |
| gcd            | `$\gcd$`             |       $\gcd$       |
| mod            | `$\mod{2}$`          |     $\mod{2}$      |
| less than      | `$\le$`              |       $\le$        |
| greater than   | `$\ge$`              |       $\ge$        |
| subscript      | `$a_i$`              |       $a_i$        |
| superscript    | `$a^b$`              |       $a^b$        |

---

## Text format

| Description | LaTeX               |       Result        |
|-------------|---------------------|:-------------------:|
| Bold        | `$\textbf{ Bold }$` |  $\textbf{ Bold }$  |
| Italic      | `$\textit$`         | $\textit{ Italic }$ |
| Monospaced  | `$\tt$`             | $\tt{ Monospaced}$  |

---

## List

- unordered list

```latex
\begin{itemize}
    \item item1
    \item item2
\end{itemize}
```

Result:

- item1
- item2

- ordered list

```latex
\begin{enumerate}
    \item item1
    \item item2
\end{enumerate}
```

Result:

1. item1
2. item2

---

## HyperLinks

```latex
Follow me, \href{https://github.com/3bbaas}{3bbaas}.
``` 

Result:

Follow me, [3bbaas](https://github.com/3bbaas).

## Add images

```latex
\begin{center}
    \includegraphics[scale=1.5]{img.png} \\
    \small{caption}
\end{center}
```
