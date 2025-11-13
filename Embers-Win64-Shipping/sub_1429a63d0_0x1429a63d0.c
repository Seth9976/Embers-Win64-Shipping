// 函数: sub_1429a63d0
// 地址: 0x1429a63d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10

if (arg2 s< 0)
    int32_t rax_5
    
    if (arg1 s< 0)
        rax_5 = not.d(arg1) - arg2
    else
        rax_5 = arg1 - arg2 - 1
    
    r10 = neg.d(divs.dp.d(sx.q(rax_5), arg1))
else
    r10 = divs.dp.d(sx.q(arg2), arg1)

int32_t r8

if (arg3 s< 0)
    int32_t rax_14
    
    if (arg1 s< 0)
        rax_14 = not.d(arg1) - arg3
    else
        rax_14 = arg1 - arg3 - 1
    
    r8 = neg.d(divs.dp.d(sx.q(rax_14), arg1))
else
    r8 = divs.dp.d(sx.q(arg3), arg1)

int32_t rax_18
rax_18.b = r10 * arg1 s>= arg2
return zx.q(rax_18 - r10 + r8)
