// 函数: sub_141b66ae0
// 地址: 0x141b66ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_1
sub_140865c40(arg1 + 0xb8, &result_1, arg2)
int64_t result = sx.q(result_1)

if (result.d != 0xffffffff)
    result = *(arg1 + 0xb8) + result * 0x18
    
    if (result != 0)
        result = *(result + 8)
        
        if (result != 0)
            *(result + 0xc0) = arg3

return result
