// 函数: sub_141baef10
// 地址: 0x141baef10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float* rsi = arg2

if (arg1 != 0)
    char rax
    float zmm1_1
    rax, zmm1_1 = sub_14226df60(arg1, arg2, arg3, arg4)
    
    if (rax != 0)
        int64_t result
        float zmm0
        zmm0, result = sub_141bb2040(arg1, zmm1_1)
        result.b = 1
        float zmm2 = 1f / zmm0
        *rsi = zmm2 * *rsi
        *arg3 = zmm2 f* *arg3
        return result

return 0
