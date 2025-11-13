// 函数: sub_141dce760
// 地址: 0x141dce760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x130)
int64_t var_18
float var_10
float zmm1[0x4]

if (rax == 0)
    var_18 = data_143dbb1f8.q
    var_10 = data_143dbb200
else
    zmm1 = *(rax + 0x1d0)
    var_18.d = zmm1[0]
    float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    var_10 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
    var_18:4.d = temp0_1[0]

float zmm0[0x4] = zx.o(var_18)
float temp0_3[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
zmm1 = zmm0
temp0_3[0] = temp0_3[0] f- arg2[1]
zmm1[0] = zmm1[0] f- *arg2
zmm0 = var_10
zmm0[0] = zmm0[0] f- arg2[2]
temp0_3[0] = temp0_3[0] * temp0_3[0]
zmm1[0] = zmm1[0] * zmm1[0]
zmm0[0] = zmm0[0] * zmm0[0]
temp0_3[0] = temp0_3[0] + zmm1[0]
temp0_3[0] = temp0_3[0] + zmm0[0]
float temp0_4 = *(arg1 + 0x100)
temp0_3[0] - temp0_4
float result
result.b = temp0_3[0] < temp0_4
return result
