## How to use it
___

Now you can see the start of the program. For correcting input some buttons are blocked:

![](graphics/images/start_screenshot.png)

The Dotted square showes where are you now. After entering a function it will be inside it automatically:

![](graphics/images/entered_func_screenshot.png)

If you want you can manage him by pressing the arrow button:

![](graphics/images/moved_square_screenshot.png)

You can also enter a power of the function. To enter it you need to press power button. Pay attention that you must be inside of this func:

![](graphics/images/entered_pow_screenshot.png)

In order to escape from power mode you need to press arrow button:

![](graphics/images/escape_from_pow_mode_screenshot.png)

Also you can copy entered function or derivative function by pressing copy button

## How it works

___

Basically the function entered by user is a tree. All mathematical operations in program split in two groups:
* functions (sin(), cos(), exp(), x, 0, 1 etc.)
* operators (+, -, *, /)

First inputed math operator (head) must be a function. Let's take any fucntion and represent in on the scheme. For example it will be simple fuction ***cos(x) * x***. For making scheme all functions I'll locate on the left and all operators on the right. So we'll get something like that:

```mermaid
graph TD
    COS(cos)
    X_COS(x)
    MULTIPLY(*)
    X(x)

    COS      --> X_COS
    COS      --> MULTIPLY
    MULTIPLY --> X

    style COS      fill:#ffffff,stroke:#000000,stroke-width:2px
    style X_COS    fill:#ffffff,stroke:#000000,stroke-width:2px
    style MULTIPLY fill:#ffffff,stroke:#000000,stroke-width:2px
    style X        fill:#ffffff,stroke:#000000,stroke-width:2px
```

As you can see, multiply operator is locating on the left (because it is operator of cos) and x is locating on the right (because it is arguments of cos)
Next scheme represents function ***cos(sin(4 * x) * x + 3) * x + 13***:

```mermaid
graph TD
    COS(cos)
    SIN(sin)
    FOUR(4)
    MULTIPLY_SIN(*)
    X_SIN(x)
    X_COS(x)
    MULTIPLY_COS(*)
    PLUS_COS(+)
    THREE(3)
    MULTIPLY(*)
    X(x)
    PLUS(+)
    THIRTEEN(13)

    COS          --> SIN
    COS          --> MULTIPLY
    SIN          --> FOUR
    SIN          --> MULTIPLY_COS
    FOUR         --> MULTIPLY_SIN
    MULTIPLY_SIN --> X_SIN
    MULTIPLY_COS --> X_COS
    X_COS        --> PLUS_COS
    PLUS_COS     --> THREE
    MULTIPLY     --> X
    X            --> PLUS
    PLUS         --> THIRTEEN

    style COS          fill:#ffffff,stroke:#000000,stroke-width:2px
    style SIN          fill:#ffffff,stroke:#000000,stroke-width:2px
    style FOUR         fill:#ffffff,stroke:#000000,stroke-width:2px
    style MULTIPLY_SIN fill:#ffffff,stroke:#000000,stroke-width:2px
    style X_SIN        fill:#ffffff,stroke:#000000,stroke-width:2px
    style MULTIPLY_COS fill:#ffffff,stroke:#000000,stroke-width:2px
    style PLUS_COS     fill:#ffffff,stroke:#000000,stroke-width:2px
    style THREE        fill:#ffffff,stroke:#000000,stroke-width:2px
    style MULTIPLY     fill:#ffffff,stroke:#000000,stroke-width:2px
    style X            fill:#ffffff,stroke:#000000,stroke-width:2px
    style PLUS         fill:#ffffff,stroke:#000000,stroke-width:2px
    style THIRTEEN     fill:#ffffff,stroke:#000000,stroke-width:2px
    style X_COS        fill:#ffffff,stroke:#000000,stroke-width:2px
```

So this is how we can split entire function and move it into the tree. After that speciall recursive algorithm'll go through all tree and count derivative

## How to run it
___

First you should install Qt Creator from [this link](https://www.qt.io/download-dev#eval-form-modal). Next open file ***Derivative_calculator.pro*** from Qt Creator and build project. Done!
