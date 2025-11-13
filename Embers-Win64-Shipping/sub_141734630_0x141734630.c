// 函数: sub_141734630
// 地址: 0x141734630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(arg3)
float zmm7[0x4] = *(arg1 + (rax << 2))
zmm7[0] = zmm7[0] f- arg5
float zmm6[0x4] = arg2[rax]
zmm6[0] = zmm6[0] f- arg5
zmm7[0] = zmm7[0] f* arg4
zmm6[0] = zmm6[0] f* arg4
float zmm0[0x4]
int64_t zmm2
float zmm4[0x4]

if (not(zmm7[0] <= 0f))
    zmm6[0] - 0f
    
    if (not(zmm6[0] <= 0f))
        rax.b = 0
        return rax
    
    if (not(zmm6[0] >= 0f))
        zmm4 = *arg1
        zmm4[0] = zmm4[0] f- *arg2
        zmm2 = *(arg1 + 4)
        zmm6[0] = zmm6[0] - zmm7[0]
        zmm2.d = zmm2.d f- arg2[1]
        zmm6[0] = zmm6[0] / zmm6[0]
        zmm0 = *(arg1 + 8)
        zmm0[0] = zmm0[0] f- arg2[2]
        zmm4[0] = zmm4[0] * zmm6[0]
        zmm2.d = zmm2.d f* zmm6[0]
        zmm4[0] = zmm4[0] f+ *arg2
        zmm0[0] = zmm0[0] * zmm6[0]
        zmm2.d = zmm2.d f+ arg2[1]
        zmm0[0] = zmm0[0] f+ arg2[2]
        float var_30_1 = zmm0[0]
        *arg1 = (_mm_unpacklo_ps(zmm4, zmm2)).q
        *(arg1 + 8) = var_30_1
        float rax_1
        rax_1.b = 1
        return rax_1

if (not(zmm6[0] <= 0f) && not(zmm7[0] >= 0f))
    zmm4 = *arg2
    zmm4[0] = zmm4[0] f- *arg1
    zmm2 = arg2[1]
    zmm7[0] = zmm7[0] - zmm6[0]
    zmm2.d = zmm2.d f- *(arg1 + 4)
    zmm7[0] = zmm7[0] / zmm7[0]
    zmm0 = arg2[2]
    zmm0[0] = zmm0[0] f- *(arg1 + 8)
    zmm4[0] = zmm4[0] * zmm7[0]
    zmm2.d = zmm2.d f* zmm7[0]
    zmm4[0] = zmm4[0] f+ *arg1
    zmm0[0] = zmm0[0] * zmm7[0]
    zmm2.d = zmm2.d f+ *(arg1 + 4)
    zmm0[0] = zmm0[0] f+ *(arg1 + 8)
    rax = zx.q(zmm0[0])
    *arg2 = (_mm_unpacklo_ps(zmm4, zmm2)).q
    arg2[2] = rax.d

rax.b = 1
return rax
