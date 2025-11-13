// 函数: sub_142441a10
// 地址: 0x142441a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result_1 = *(arg1 + 0x4f8)
int64_t r11 = sx.q(*(arg1 + 0x500))
int64_t* result = result_1
void* r9 = &result_1[r11]

if (result_1 != r9)
    while (*result != arg2)
        result = &result[1]
        
        if (result == r9)
            return result
    
    result = (result - result_1) s>> 3
    
    if (result.d != 0xffffffff)
        void* rcx_1 = &result_1[sx.q(result.d)]
        result = memmove(rcx_1, rcx_1 + 8, (r11.d - result.d - 1) << 3)
        *(arg1 + 0x500) -= 1

return result
