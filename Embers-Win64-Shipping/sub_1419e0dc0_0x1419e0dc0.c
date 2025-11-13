// 函数: sub_1419e0dc0
// 地址: 0x1419e0dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0 || arg4 == 0)
    return 

void* rax_1 = sub_142488170()
void* rdx = *(arg4 + 0x10)
int64_t rax_2 = sx.q(*(rax_1 + 0x38))

if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
    void* rax_4 = *(arg1 + 0x230)
    
    if (rax_4 != 0)
        float zmm0_1[0x4] = *(rax_4 + 0x1e0)
        int128_t zmm6 = *(rax_4 + 0x108)
        zmm6.d = zmm6.d f- zmm6.d
        float zmm7[0x4] = *(arg4 + 0x100)
        zmm7[0] = zmm7[0] f- *(rax_4 + 0x100)
        float zmm8[0x4] = *(arg4 + 0x104)
        zmm8[0] = zmm8[0] f- *(rax_4 + 0x104)
        float temp0_2[0x4] = _mm_min_ss(_mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)[0], zmm0_1[0])
        zmm7[0] = zmm7[0] * zmm7[0]
        zmm8[0] = zmm8[0] * zmm8[0]
        temp0_2[0] = temp0_2[0] f* *(rax_4 + 0x424)
        zmm7[0] = zmm7[0] + zmm8[0]
        zmm7[0] = zmm7[0] + zmm6.d f* zmm6.d
        
        if (not(zmm7[0] == 1f))
            if (zmm7[0] >= 9.99999994e-09f)
                float zmm3 = zmm7[0]
                float temp0_3[0x4] = _mm_rsqrt_ss(zmm7[0], zmm3)
                float zmm2[0x4] = 0x3f000000
                zmm3 = zmm3 * 0.5f
                temp0_3[0] = temp0_3[0] * temp0_3[0]
                zmm2[0] = 0.5f - zmm3 * temp0_3[0]
                temp0_3[0] = temp0_3[0] * zmm2[0]
                temp0_3[0] = temp0_3[0] + temp0_3[0]
                temp0_3[0] = temp0_3[0] * (0.5f - zmm3 * temp0_3[0] * temp0_3[0])
                temp0_3[0] = temp0_3[0] + temp0_3[0]
                zmm7[0] = zmm7[0] * temp0_3[0]
                zmm8[0] = zmm8[0] * temp0_3[0]
                zmm6.d = zmm6.d f* temp0_3[0]
            else
                zmm7 = data_143dbb1f8
                zmm8 = data_143dbb1fc
                zmm6 = data_143dbb200
        
        void* rax_5 = *(arg1 + 0x130)
        zmm7[0] = zmm7[0] * temp0_2[0]
        zmm8[0] = zmm8[0] * temp0_2[0]
        zmm7[0] = zmm7[0] f+ *(rax_5 + 0x100)
        zmm6.d = zmm6.d f* temp0_2[0]
        zmm8[0] = zmm8[0] f+ *(rax_5 + 0x104)
        zmm6.d = zmm6.d f+ *(rax_5 + 0x108)
        *(arg1 + 0x238) = (_mm_unpacklo_ps(zmm7, zmm8[0].q)).q
        *(arg1 + 0x240) = zmm6.d

rdx.b = 1
sub_141dd7200(arg1, rdx.b)
