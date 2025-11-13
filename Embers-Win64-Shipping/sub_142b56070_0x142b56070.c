// 函数: sub_142b56070
// 地址: 0x142b56070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x48)

if (rcx != 0)
    (**rcx)(rcx, 1)

void* rax_2 = *(arg1 + 0x50)
*(arg1 + 0x48) = 0

if (rax_2 != 0)
    if (*(rax_2 + 8) != 0)
        do
            int64_t* rax_3 = sub_142ae7500(*(arg1 + 0x50), 0)
            
            if (rax_3 != 0)
                int64_t r8_1 = *rax_3
                (*r8_1)(rax_3, 1, r8_1)
        while (*(*(arg1 + 0x50) + 8) != 0)
    
    int64_t* rcx_3 = *(arg1 + 0x50)
    
    if (rcx_3 != 0)
        (**rcx_3)(rcx_3, 1)
    
    *(arg1 + 0x50) = 0

void* result = *(arg1 + 0x58)

if (result != 0)
    while (*(result + 8) != 0)
        int64_t* rax_6 = sub_142ae7500(*(arg1 + 0x58), 0)
        
        if (rax_6 != 0)
            int64_t r8_2 = *rax_6
            (*r8_2)(rax_6, 1, r8_2)
        
        result = *(arg1 + 0x58)
    
    int64_t* rcx_6 = *(arg1 + 0x58)
    
    if (rcx_6 != 0)
        result = (**rcx_6)(rcx_6, 1)
    
    *(arg1 + 0x58) = 0

return result
