// 函数: sub_141faa2d0
// 地址: 0x141faa2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != arg1 + 0x28)
    if (*(arg1 + 0x48) != 0)
        *(arg1 + 0x48) = 0
    
    *(arg1 + 0x28) = &data_142d5a028
    *(arg1 + 0x30) = *(arg2 + 8)
    *(arg1 + 0x28) = &data_142fc8f88
    *(arg1 + 0x38) = *(arg2 + 0x10)
    *(arg1 + 0x40) = *(arg2 + 0x18)
    *(arg1 + 0x48) = 1

uint64_t result = sub_140d3e110(arg1 + 0x18)

if (result.b != 0 && *(arg2 + 8) != 0)
    void* rax_4 = sub_140d3c6e0(arg1 + 0x18)
    *(rax_4 + 0x750) = *(arg1 + 0x20)
    result = sub_140d3c6e0(arg1 + 0x18)
    uint64_t result_1 = result
    
    if (*(result + 0xb58) != 0)
        int64_t* rcx_3 = *(result + 0xb50)
        
        if (rcx_3 != 0)
            int64_t rdx_1 = *rcx_3
            result = (*(rdx_1 + 0x28))(rcx_3, rdx_1)
            
            if (result.b != 0)
                int64_t* rcx_4
                
                if (*(result_1 + 0xb58) == 0)
                    rcx_4 = nullptr
                else
                    rcx_4 = *(result_1 + 0xb50)
                
                result = (*(*rcx_4 + 0x50))(rcx_4, 0)
    
    if (*(result_1 + 0xb58) != 0)
        int64_t* rcx_5 = *(result_1 + 0xb50)
        
        if (rcx_5 != 0)
            result = (*(*rcx_5 + 0x38))(rcx_5, 0)
            int64_t rcx_6 = *(result_1 + 0xb50)
            
            if (rcx_6 != 0)
                result = sub_140a84c80(rcx_6, 0, 0)
                *(result_1 + 0xb50) = result
            
            *(result_1 + 0xb58) = 0

return result
