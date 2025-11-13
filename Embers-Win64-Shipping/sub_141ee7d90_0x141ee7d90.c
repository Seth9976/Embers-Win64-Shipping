// 函数: sub_141ee7d90
// 地址: 0x141ee7d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4] = arg3
char result = (*(*arg1 + 0x5c0))()

if (result == 0)
    return result

bool cond:0_1 = zmm6[0] >= 0f
float temp0_1[0x4] = _mm_max_ss(arg4[0], 0)

if (not(cond:0_1))
    zmm6 = zx.o(0)
else if (not(zmm6[0] < temp0_1[0]))
    zmm6 = temp0_1

return (*(*arg1 + 0x8b0))(arg1, arg2, zmm6, temp0_1, arg6, _mm_max_ss(arg5, 0), 0)
