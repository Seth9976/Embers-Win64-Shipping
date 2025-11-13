// 函数: sub_1429dc300
// 地址: 0x1429dc300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x1c8) s<= 0)
    return 

int64_t r14_1 = 0

do
    void* rsi_1 = **(*(arg1 + 0x1c0) + r14_1 + 0x18)
    void* rdi_1 = *(rsi_1 + 0x47e8)
    *(rsi_1 + 0x5a0) = 0xffffffff
    *(rsi_1 + 0x47b4) = *(arg1 + 0x1b0)
    *(rsi_1 + 0x47b8) = *(arg1 + 0x1b4)
    int64_t rax_4 = *(arg1 + 0x560)
    
    if (rax_4 == 0 || *(arg1 + 0x568) == 0)
        *(rdi_1 + 0x30) = sub_1429e1660
        *(rdi_1 + 0x38) = sub_1429e1760
        uint64_t rax
        int64_t r9_1
        rax, r9_1 = sub_1429e15b0(rdi_1 + 0xc70)
        
        if (rax.d != 0)
            sub_1429da010(rsi_1 + 0x270, 2, "Failed to initialize internal frame buffers", r9_1)
        
        *(rdi_1 + 0x28) = rdi_1 + 0xc70
    else
        *(rdi_1 + 0x30) = rax_4
        *(rdi_1 + 0x38) = *(arg1 + 0x568)
        *(rdi_1 + 0x28) = *(arg1 + 0x558)
    
    i += 1
    r14_1 += 0x30
while (i s< *(arg1 + 0x1c8))
