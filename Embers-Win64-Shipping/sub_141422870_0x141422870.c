// 函数: sub_141422870
// 地址: 0x141422870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = zx.q(*arg1)
int128_t zmm6
int128_t var_18 = zmm6
int128_t zmm7
zmm7.d = (*(arg3 + 0x600)).d f- *(arg4 + 0x54)
int128_t zmm8
zmm8.d = (*(arg3 + 0x604)).d f- *(arg4 + 0x58)
int128_t zmm9
zmm9.d = (*(arg3 + 0x608)).d f- *(arg4 + 0x5c)
int32_t i = 0
int32_t var_5c = 0x3f800000
float result

do
    for (int32_t j = 0; j u< 2; j += 1)
        for (int32_t k = 0; k u< 2; )
            if (i == 0)
                zmm6 = zx.o(0)
            else
                zmm6 = 0x3f800000
            
            float zmm3[0x4]
            
            zmm3 = j == 0 ? 0x3f800000 : 0xbf800000
            
            float zmm1[0x4]
            
            zmm1 = k == 0 ? 0x3f800000 : 0xbf800000
            
            float var_68[0x4]
            var_68[0] = zmm1[0]
            float temp0_1[0x4] = _mm_shuffle_ps(var_68, var_68, 0xe1)
            int16_t r10_1 = k.w * 2 + j.w
            temp0_1[0] = zmm3[0]
            float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
            temp0_2[0] = zmm6.d
            float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc9)
            float temp0_5[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0xaa), *(arg4 + 0x140))
            float temp0_7[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0xff), *(arg4 + 0x150))
            float temp0_9[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0x55), *(arg4 + 0x130))
            uint64_t rcx = (zx.q(r10_1 * 2 + i.w) + rdi) * 3
            float temp0_10[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0)
            float temp0_14[0x4] = _mm_add_ps(_mm_add_ps(temp0_5, temp0_7), 
                _mm_add_ps(temp0_9, __mulps_xmmps_memps(temp0_10, *(arg4 + 0x120))))
            zmm1 = 0x3f800000
            float temp0_15[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0xff)
            float temp0_16[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0x55)
            zmm1[0] = 1f / temp0_15[0]
            float temp0_17[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0xaa)
            temp0_14[0] = temp0_14[0] * zmm1[0]
            temp0_16[0] = temp0_16[0] * zmm1[0]
            temp0_17[0] = temp0_17[0] * zmm1[0]
            temp0_14[0] = temp0_14[0] f+ zmm7.d
            temp0_16[0] = temp0_16[0] f+ zmm8.d
            temp0_17[0] = temp0_17[0] f+ zmm9.d
            *(arg2 + (rcx << 2)) = (_mm_unpacklo_ps(temp0_14, temp0_16[0].q)).q
            *(arg2 + (rcx << 2) + 8) = temp0_17[0]
            
            if (i == 0)
                zmm6 = zx.o(0)
            else
                zmm6 = 0x3f800000
            
            zmm3 = j == 0 ? 0x3f800000 : 0xbf800000
            
            zmm1 = k == 0xffffffff ? 0x3f800000 : 0xbf800000
            
            temp0_3[0] = zmm1[0]
            float temp0_19[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xe1)
            temp0_19[0] = zmm3[0]
            float temp0_20[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0xc6)
            temp0_20[0] = zmm6.d
            k += 2
            float temp0_21[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0xc9)
            var_68 = temp0_21
            float temp0_23[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_21, temp0_21, 0xaa), *(arg4 + 0x140))
            uint64_t rcx_1 = (zx.q((r10_1 + 2) * 2 + i.w) + rdi) * 3
            float temp0_25[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_21, temp0_21, 0xff), *(arg4 + 0x150))
            float temp0_27[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_21, temp0_21, 0x55), *(arg4 + 0x130))
            float temp0_28[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0)
            float temp0_32[0x4] = _mm_add_ps(_mm_add_ps(temp0_23, temp0_25), 
                _mm_add_ps(temp0_27, __mulps_xmmps_memps(temp0_28, *(arg4 + 0x120))))
            zmm1 = 0x3f800000
            float temp0_33[0x4] = _mm_shuffle_ps(temp0_32, temp0_32, 0xff)
            float temp0_34[0x4] = _mm_shuffle_ps(temp0_32, temp0_32, 0x55)
            zmm1[0] = 1f / temp0_33[0]
            float temp0_35[0x4] = _mm_shuffle_ps(temp0_32, temp0_32, 0xaa)
            temp0_32[0] = temp0_32[0] * zmm1[0]
            temp0_34[0] = temp0_34[0] * zmm1[0]
            temp0_35[0] = temp0_35[0] * zmm1[0]
            temp0_32[0] = temp0_32[0] f+ zmm7.d
            temp0_34[0] = temp0_34[0] f+ zmm8.d
            temp0_35[0] = temp0_35[0] f+ zmm9.d
            *(arg2 + (rcx_1 << 2)) = (_mm_unpacklo_ps(temp0_32, temp0_34[0].q)).q
            result = temp0_35[0]
            *(arg2 + (rcx_1 << 2) + 8) = result
    
    i += 1
while (i u< 2)

*arg1 += 8
return result
