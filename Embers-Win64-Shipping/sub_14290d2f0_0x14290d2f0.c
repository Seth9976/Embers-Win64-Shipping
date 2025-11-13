// 函数: sub_14290d2f0
// 地址: 0x14290d2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
void* rcx = *(arg1 + 0x28)

if (rcx != 0)
    int32_t r8_1 = **(arg1 + 0x10)
    int64_t rdx_2
    
    if (r8_1 == 0x40a || r8_1 == 0x43f)
        rdx_2 = 0x20
    else
        int64_t rdx_1
        rdx_1.b = r8_1 != 0x40b
        rdx_2 = rdx_1 + 0x38
    
    sub_1428a7140(*(rcx + 0x40), rdx_2, "crypto\ec\ecx_meth.c", 0x101)
    rcx = *(arg1 + 0x28)

return sub_1428a6780(rcx) __tailcall
