// 函数: sub_141f071d0
// 地址: 0x141f071d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[0x82].d)
int32_t rax = (rdi + 1).d
arg1[0x82].d = rax

if (rax s> *(arg1 + 0x414))
    sub_1405c4ec0(&arg1[0x81])

int64_t* rdx_1 = arg1[0x81] + rdi * 0x28

if (rdx_1 != 0)
    rdx_1[2].d &= 0xfffffffe
    *rdx_1 = 0
    rdx_1[1] = 0

rdx_1[2].d &= 0xfffffffe
rdx_1[2].d |= zx.d(arg4)
rdx_1[4] = arg7
*(rdx_1 + 0x14) = arg5
rdx_1[3].d = arg6
*rdx_1 = arg2
rdx_1[1] = arg3
return sub_141ee8490(arg1) __tailcall
