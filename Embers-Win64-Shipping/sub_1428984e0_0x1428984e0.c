// 函数: sub_1428984e0
// 地址: 0x1428984e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)
int64_t r8 = *(arg1 + 0x20)
int64_t r10_1 = *(arg1 + 0x28) - r8

if (r8 u>= *(arg1 + 0x28))
    r10_1 = 0

if (arg2 u< 1)
    sub_1428a5670(0x24, 0x73, 0x69, "crypto\rand\rand_lib.c", 0x231)
    return 0

int64_t rdx = *(arg1 + 8)
uint64_t rcx_3 = (zx.q(arg2) * r10_1 + 7) u>> 3

if (rcx_3 u> *(arg1 + 0x18) - rdx)
    sub_1428a5670(0x24, 0x73, 0x7d, "crypto\rand\rand_lib.c", 0x239)
    return 0

int64_t rax_4 = *(arg1 + 0x10)

if (rdx u< rax_4)
    uint64_t rax_5 = rax_4 - rdx
    
    if (rcx_3 u< rax_5)
        return rax_5

return rcx_3
