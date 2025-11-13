// 函数: sub_141f108d0
// 地址: 0x141f108d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[0x84].d)
int32_t rax = (rdi + 1).d
arg1[0x84].d = rax

if (rax s> *(arg1 + 0x424))
    sub_1405c4ec0(&arg1[0x83])

uint64_t* rdx_1 = arg1[0x83] + rdi * 0x28

if (rdx_1 != 0)
    *rdx_1 = *arg2
    rdx_1[1].d = arg2[1].d
    uint128_t zmm0 = *arg3
    *(rdx_1 + 0x1c) = arg4.d
    *(rdx_1 + 0xc) = zmm0
    *(rdx_1 + 0x24) = arg5
    rdx_1[4].d = arg6

return sub_141ee8490(arg1) __tailcall
