// 函数: sub_14066df00
// 地址: 0x14066df00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = *(arg1 + 0x28)
int32_t result_1
sub_14062d6e0(rsi, &result_1, arg2)
int64_t result = sx.q(result_1)

if (result.d != 0xffffffff)
    int64_t rcx_1 = *rsi + result * 0x28
    result = rcx_1 + 0x10
    
    if (rcx_1 == 0)
        result = 0
    
    if (result != 0)
        result = *result
        
        if (result != 0 && *(result + 8) == 4)
            return sub_140b75220(*(arg1 + 0x28), arg2) __tailcall

result.b = 0
return result
