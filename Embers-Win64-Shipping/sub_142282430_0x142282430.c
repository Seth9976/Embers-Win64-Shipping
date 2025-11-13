// 函数: sub_142282430
// 地址: 0x142282430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = (*(*arg2 + 0x48))(arg2)

if (result.d != 0)
    void* result_1
    result = (*(*arg2 + 0x58))(arg2, &result_1, 1, 0)
    
    if (result.d != 0)
        result = result_1
        int32_t* rcx_2 = *(result + 0x10)
        
        if (rcx_2 != 0 && *rcx_2 == 1)
            void* rcx_3 = *(rcx_2 + 8)
            
            if (rcx_3 != 0)
                return sub_140d3c6e0(rcx_3 + 0xf8)

return result
