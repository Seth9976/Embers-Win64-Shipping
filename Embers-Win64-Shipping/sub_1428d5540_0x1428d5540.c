// 函数: sub_1428d5540
// 地址: 0x1428d5540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t r14 = *(arg1 + 0x28)

if (arg2 u<= r14)
    return (arg2 << 4) + *(arg1 + 0x58)

int64_t rcx = *(arg1 + 0x30)

if (arg2 u>= rcx)
    int64_t rdx_3 = ((arg2 - rcx + 4) & 0xfffffffffffffffc) + rcx
    int64_t rcx_1 = *(arg1 + 0x58)
    *(arg1 + 0x30) = rdx_3
    int64_t rax_2 = sub_1428a67c0(rcx_1, rdx_3 << 4, "crypto\modes\ocb128.c", 0x71)
    
    if (rax_2 == 0)
        return rax_2
    
    *(arg1 + 0x58) = rax_2

if (r14 u< arg2)
    int64_t r15_2 = r14 << 4
    int64_t i_1 = arg2 - r14
    r14 = arg2
    int64_t i
    
    do
        char* rcx_3 = *(arg1 + 0x58) + r15_2
        uint8_t rdi_1 = neg.b(*rcx_3 u>> 7) & 0x87
        sub_1428d5190(rcx_3, 1, &rcx_3[0x10])
        rcx_3[0x1f] ^= rdi_1
        r15_2 += 0x10
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t rbx_4 = (arg2 << 4) + *(arg1 + 0x58)
*(arg1 + 0x28) = r14
return rbx_4
