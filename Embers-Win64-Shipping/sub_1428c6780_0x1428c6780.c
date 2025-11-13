// 函数: sub_1428c6780
// 地址: 0x1428c6780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rsi = arg4
int32_t arg_18 = *(arg3 + 4)
int32_t r14 = 0
uint64_t rbx = zx.q(sub_1428c65c0(arg1, 0, &arg_18, arg3))
int32_t rax_2 = arg_18
int32_t rbp

if (rax_2 - 0x10 u<= 1 || rax_2 == 0xfffffffd)
    rbp = 0
else
    rbp = 1

if (rbx.d == 0xffffffff)
    return 0

if (rbx.d == 0xfffffffe)
    rbx = 0
    r14 = 2

if (rsi == 0xffffffff)
    rsi = rax_2

if (arg2 != 0)
    if (rbp != 0)
        sub_1428f3130(arg2, r14, rbx.d, rsi, rbx, arg5)
    
    sub_1428c65c0(arg1, *arg2, &arg_18, arg3)
    
    if (r14 == 0)
        *arg2 += sx.q(rbx.d)
    else
        sub_1428f3110(arg2)

if (rbp == 0)
    return zx.q(rbx.d)

return sub_1428f30c0(r14, rbx.d, rsi)
