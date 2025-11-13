// 函数: sub_14224fe60
// 地址: 0x14224fe60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** result_2 = *(arg1 + 0x10)
void** result_1 = nullptr
void** result = nullptr
char r8 = *(result_2 + 0xc)

if (r8 u>= 2)
    result = result_2

if (result != 0)
    result = nullptr
    
    if (r8 u>= 1)
        result = result_2
    
    if (result != 0)
        if (*(result + 0xc) u>= 2)
            result_1 = result
        
        if (result_1 != 0 && *(sx.q(result_1[1].d) + (*result_1)[0x73]) == 4)
            result.b = 1
            return result

result.b = 0
return result
