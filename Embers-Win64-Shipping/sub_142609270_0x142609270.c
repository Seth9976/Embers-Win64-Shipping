// 函数: sub_142609270
// 地址: 0x142609270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

int32_t i = 0

if (*(arg1 + 0x30) s> 0)
    void* rdi_1 = nullptr
    
    do
        int64_t rax_1 = *(arg1 + 0x90)
        
        if ((*(rdi_1 + rax_1 + 0x64) & 1) != 0)
            int64_t rcx = *(rdi_1 + rax_1 + 0x58)
            
            if (rcx != 0)
                data_143b50298(rcx)
                rax_1 = *(arg1 + 0x90)
            
            *(rdi_1 + rax_1 + 0x58) = 0
            *(*(arg1 + 0x90) + rdi_1 + 0x60) = 0
            rax_1 = *(arg1 + 0x90)
        
        int64_t rcx_1 = *(rdi_1 + rax_1 + 0x80)
        
        if (rcx_1 != 0)
            data_143b50298(rcx_1)
        
        int64_t rcx_2 = *(rdi_1 + rax_1 + 0x98)
        
        if (rcx_2 != 0)
            data_143b50298(rcx_2)
        
        i += 1
        rdi_1 += 0xb0
    while (i s< *(arg1 + 0x30))

int64_t rcx_3 = *(arg1 + 0x80)

if (rcx_3 != 0)
    data_143b50298(rcx_3)

int64_t rcx_4 = *(arg1 + 0x90)

if (rcx_4 != 0)
    data_143b50298(rcx_4)

data_143b50298(arg1)
