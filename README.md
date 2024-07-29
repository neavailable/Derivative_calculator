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

First inputed math operator (head) must be a function. Let's take any fucntion and represent in on the scheme. For example it will be simple fuction cos(x) * x. For making scheme all functions I'll locate on the left and all operators on the right. So we'll get something like that:
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
