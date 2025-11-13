// 函数: sub_141747290
// 地址: 0x141747290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x10)
float result[0x4] = zx.o(0)
float zmm5[0x4] = *(arg1 + 0x34)
zmm5[0] = zmm5[0] f* *arg2
float zmm2[0x4] = *(arg1 + 0x3c)
zmm2[0] = zmm2[0] f* arg2[2]
zmm5[0] = zmm5[0] f- *(rax + 0x10)
float zmm6[0x4] = *(arg1 + 0x38)
zmm6[0] = zmm6[0] f* arg2[1]
zmm2[0] = zmm2[0] f- *(rax + 0x18)
zmm6[0] = zmm6[0] f- *(rax + 0x14)
zmm5[0] = zmm5[0] * zmm5[0]
float zmm7[0x4] = zx.o(0)
zmm2[0] = zmm2[0] * zmm2[0]
zmm6[0] = zmm6[0] * zmm6[0]
zmm6[0] = zmm6[0] + zmm5[0]
zmm6[0] = zmm6[0] + zmm2[0]
float zmm4[0x4]

if (zmm6[0] >= 9.99999975e-05f)
    zmm7 = _mm_sqrt_ss(0, zmm6[0])
    zmm4 = 0x3f800000
    float zmm0[0x4] = 0x3f800000
    zmm0[0] = 1f / zmm7[0]
    zmm5[0] = zmm5[0] * zmm0[0]
    zmm6[0] = zmm6[0] * zmm0[0]
    zmm2[0] = zmm2[0] * zmm0[0]
else
    zmm4 = 0x3f800000
    zmm6 = zx.o(0)
    zmm5 = 0x3f800000
    zmm2 = zx.o(0)

zmm2[0] = zmm2[0] f* *(arg1 + 0x30)
zmm5[0] = zmm5[0] f* *(arg1 + 0x28)
zmm7[0] = zmm7[0] f- *(rax + 0x1c)
zmm6[0] = zmm6[0] f* *(arg1 + 0x2c)
float var_30 = zmm2[0]
zmm7[0] = zmm7[0] f- *(arg1 + 0x40)
*arg3 = (_mm_unpacklo_ps(zmm5, zmm6[0].q)).q
arg3[1].d = var_30
zmm5 = *(arg3 + 4)
zmm6 = *arg3
float zmm1[0x4] = arg3[1].d
zmm6[0] = zmm6[0] * zmm6[0]
zmm5[0] = zmm5[0] * zmm5[0]
zmm1[0] = zmm1[0] * zmm1[0]
zmm6[0] = zmm6[0] + zmm5[0]
zmm6[0] = zmm6[0] + zmm1[0]
float var_30_1

if (zmm6[0] >= 9.99999975e-05f)
    result = _mm_sqrt_ss(zx.o(0)[0], zmm6[0])
    zmm4[0] = zmm4[0] / result[0]
    zmm4[0] = zmm4[0] f* arg3[1].d
    zmm4[0] = zmm4[0] * zmm6[0]
    zmm4[0] = zmm4[0] * zmm5[0]
    var_30_1 = zmm4[0]
    *arg3 = (_mm_unpacklo_ps(zmm4, zmm4[0].q)).q
else
    var_30_1 = 0f
    *arg3 = (_mm_unpacklo_ps(zmm4, 0)).q

result[0] = result[0] * zmm7[0]
arg3[1].d = var_30_1
return result
