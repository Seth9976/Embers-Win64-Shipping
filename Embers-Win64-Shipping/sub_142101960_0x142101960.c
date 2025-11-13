// 函数: sub_142101960
// 地址: 0x142101960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x58)
*(arg1 + 0x80) = arg2
int64_t zmm3 = data_143dbb208
int32_t var_20 = data_143dbb200
int32_t var_10 = data_143dbb210
char var_c = 0
float var_28[0x4]
var_28[0].q = data_143dbb1f8.q
float temp0[0x4] = _mm_shuffle_ps(var_28, var_28, 0x93)
temp0[0] = 0x42b40000
*(arg1 + 0x88) = _mm_shuffle_ps(temp0, temp0, 0x39)
float var_18[0x4]
var_18[0].q = zmm3
*(arg1 + 0x98) = var_18
int32_t rsi = *(arg1 + 0x10)
int32_t rdi = *(arg1 + 0x3c)
int32_t result = sub_142101330(arg1 + 8, arg2)

if (rsi - rdi s> 0)
    result = *(arg1 + 0x10)
    
    if (result == *(arg1 + 0x3c))
        result = sub_140d2af80(&data_143e1d990, arg1)

if (arg1 == -0x58)
    return result

return LeaveCriticalSection(arg1 + 0x58)
