// 函数: sub_1417c1cd0
// 地址: 0x1417c1cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *arg2
int64_t rbx = sx.q(*(result + 8))

if (rbx s> 0)
    int128_t zmm6
    int128_t var_18_1 = zmm6
    int64_t r9_1 = 0
    float zmm7[0x4]
    float var_28_1[0x4] = zmm7
    float zmm8[0x4]
    float var_38_1[0x4] = zmm8
    
    do
        int64_t r8 = **arg2
        int64_t rdx = sx.q(*(r8 + (r9_1 << 3))) * 3
        int64_t rcx = *arg2[1]
        zmm7 = *(rcx + (rdx << 2))
        zmm8 = *(rcx + (rdx << 2) + 4)
        zmm7[0] = zmm7[0] f- *(arg1 + 0x14)
        zmm8[0] = zmm8[0] f- *(arg1 + 0x18)
        zmm6.d = (*(rcx + (rdx << 2) + 8)).d f- *(arg1 + 0x1c)
        zmm7[0] = zmm7[0] * zmm7[0]
        zmm8[0] = zmm8[0] * zmm8[0]
        zmm8[0] = zmm8[0] + zmm7[0]
        zmm8[0] = zmm8[0] + zmm6.d f* zmm6.d
        
        if (not(zmm8[0] == 1f))
            if (zmm8[0] >= 9.99999994e-09f)
                float zmm4[0x4] = zx.o(0)
                zmm4[0] = 0x3f000000
                float zmm3 = zmm8[0]
                float temp0_1[0x4] = _mm_rsqrt_ss(zmm8[0], zmm3)
                zmm3 = zmm3 * 0.5f
                temp0_1[0] = temp0_1[0] * temp0_1[0]
                zmm4[0] = zmm4[0] - zmm3 * temp0_1[0]
                temp0_1[0] = temp0_1[0] * zmm4[0]
                temp0_1[0] = temp0_1[0] + temp0_1[0]
                zmm4[0] = 0.5f - zmm3 * temp0_1[0] * temp0_1[0]
                temp0_1[0] = temp0_1[0] * zmm4[0]
                temp0_1[0] = temp0_1[0] + temp0_1[0]
                zmm7[0] = zmm7[0] * temp0_1[0]
                zmm8[0] = zmm8[0] * temp0_1[0]
                zmm6.d = zmm6.d f* temp0_1[0]
            else
                zmm7 = data_143dbb1f8
                zmm8 = data_143dbb1fc
                zmm6 = data_143dbb200
        
        float zmm0[0x4] = *(arg1 + 0x10)
        int64_t rax_3 = sx.q(*(r8 + (r9_1 << 3) + 4))
        r9_1 += 1
        int64_t rcx_1 = *arg3
        zmm6.d = zmm6.d f* zmm0[0]
        zmm7[0] = zmm7[0] * zmm0[0]
        int64_t rdx_1 = rax_3 * 3
        zmm8[0] = zmm8[0] * zmm0[0]
        result = zx.q(zmm6.d)
        *(rcx_1 + (rdx_1 << 2)) = (_mm_unpacklo_ps(zmm7, zmm8[0].q)).q
        *(rcx_1 + (rdx_1 << 2) + 8) = result.d
    while (r9_1 s< rbx)

return result
