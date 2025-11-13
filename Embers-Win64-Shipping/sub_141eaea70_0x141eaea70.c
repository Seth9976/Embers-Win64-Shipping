// 函数: sub_141eaea70
// 地址: 0x141eaea70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4] = arg2
int64_t result = (*(*arg1 + 0x260))()
arg2 = arg3
int32_t zmm2

if (arg2[0] != 0f)
    zmm2 = arg1[7].d
else
    zmm2 = *(arg1 + 0x3c)

if (not(zmm2 f> 0f))
    arg1[8].d = arg2[0]
    return result

arg3 = arg1[8].d
bool cond:0 = arg3[0] <= arg2[0]
zmm6[0] = zmm6[0] f/ zmm2

if (cond:0)
    zmm6[0] = zmm6[0] + arg3[0]
    arg1[8].d = _mm_min_ss(zmm6[0], arg2[0])[0]
    return result

arg3[0] = arg3[0] - zmm6[0]
arg1[8].d = _mm_max_ss(arg3[0], arg2[0])[0]
return result
