// 函数: sub_1428c38a0
// 地址: 0x1428c38a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)
int32_t r8 = 0
int64_t rdx = **arg1
char rax_1 = (*(arg4 + 0x20)).b

if ((rax_1 & 1) != 0 && rdx == 0)
    return 0xffffffff

if ((rax_1 & 2) != 0 && rdx s< 0)
    rdx = neg.q(rdx)
    r8 = 1

return sub_1428e53d0(arg2, rdx, r8) __tailcall
