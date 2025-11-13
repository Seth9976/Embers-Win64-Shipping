// 函数: sub_14281d19c
// 地址: 0x14281d19c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    arg1[2].d = 0
    *arg1 = nullptr
    return 

*arg1 = 1

if (arg2 == arg1[2].d)
    return 

arg1[2].d = arg2

if (arg2 == 2)
    arg1 = &arg1[8]
    arg1[2] = 0
    
    if (arg1[3] u>= 0x10)
        arg1 = *arg1
    
    *arg1 = nullptr
else
    if (arg2 == 3)
        return sub_14281d14c(arg1) __tailcall
    
    if (arg2 == 4)
        return sub_14281d0dc(arg1) __tailcall
