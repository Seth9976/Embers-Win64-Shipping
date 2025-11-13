// 函数: sub_14093f370
// 地址: 0x14093f370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = j_sub_140a82f30(0x18)
int64_t* result_1 = result

if (result != 0)
    __builtin_memset(result_1, 0, 0x14)
    
    if (arg2 != &result_1[1] && arg2[1].d != 0)
        int64_t* rcx = *arg2
        
        if (rcx != 0)
            (*(*rcx + 0x40))(rcx)
    
    int64_t* result_2 = *(arg1 + 0xb0)
    *(arg1 + 0xb0) = result_1
    result = result_2
    *result
    *result = result_1

return result
