// 函数: png_set_IHDR
// 地址: 0x1403ccd60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0)
    return 

*arg2 = arg3
arg2[1] = arg4
arg2[9].b = arg5
*(arg2 + 0x25) = arg6
*(arg2 + 0x26) = arg8
*(arg2 + 0x27) = arg9
arg2[0xa].b = arg7
sub_1403bf1b0(arg1, arg3, arg4, zx.d(arg5), zx.d(arg6), zx.d(arg7), zx.d(arg8), zx.d(arg9))
char rax = *(arg2 + 0x25)
char rcx

if (rax != 3)
    rcx = (rax & 2) | 1
    *(arg2 + 0x29) = rcx
    
    if ((rax & 4) != 0)
        rcx += 1
        *(arg2 + 0x29) = rcx
else
    *(arg2 + 0x29) = 1
    rcx = 1

rax = mulu.dp.b(arg2[9].b, rcx)
*(arg2 + 0x2a) = rax
uint64_t rcx_1

if (arg3 u<= 0x1fffff8e)
    uint64_t rdx_3 = zx.q(arg3)
    uint64_t rcx_2 = zx.q(rax)
    
    if (rax u< 8)
        rcx_1 = (rcx_2 * rdx_3 + 7) u>> 3
    else
        rcx_1 = (rcx_2 u>> 3) * rdx_3
else
    rcx_1 = 0

*(arg2 + 0x10) = rcx_1
