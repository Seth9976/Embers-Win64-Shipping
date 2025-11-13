// 函数: sub_142a6c230
// 地址: 0x142a6c230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = (*(*arg2 + 0x58))(arg2)
int64_t result_1 = result

if (result != 0)
    int64_t* rcx_1 = *(arg1 + 0xf0)
    
    if (rcx_1 != 0)
        int64_t r8_1 = *rcx_1
        result = (*r8_1)(rcx_1, 1, r8_1)
    
    *(arg1 + 0xf0) = result_1
    *(arg1 + 9) = 0

return result
