// 函数: sub_1429db040
// 地址: 0x1429db040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x30) == 0)
    int32_t rdi_1 = 1
    void* rax_1 = sub_1429dddd0(1, 0x578)
    
    if (rax_1 == 0)
        return 2
    
    int32_t rax_3 = *(arg1 + 0x20)
    *(arg1 + 0x30) = rax_1
    *(rax_1 + 8) = rax_3
    *(rax_1 + 0xe4) = 0x10
    *(rax_1 + 0x1a4) = 0
    int32_t* rax_4 = *(arg1 + 0x28)
    
    if (rax_4 == 0 || *rax_4 u<= 1 || (*(arg1 + 0x20) & 0x80000) == 0)
        rdi_1 = 0
    
    *(rax_1 + 0x1b8) = rdi_1
    int64_t* rax_5 = *(arg1 + 0x28)
    
    if (rax_5 != 0)
        *(rax_1 + 0xd8) = *rax_5
        *(rax_1 + 0xe0) = rax_5[1].d
        *(arg1 + 0x28) = rax_1 + 0xd8

return 0
