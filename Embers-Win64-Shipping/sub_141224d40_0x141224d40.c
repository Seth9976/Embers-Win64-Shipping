// 函数: sub_141224d40
// 地址: 0x141224d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int64_t* rdx = arg5
int32_t i = 0
int32_t result_2 = *(arg3 + 0xc)
uint64_t result = arg8
uint64_t result_1 = result
int64_t* var_130 = arg4
int64_t* var_128 = rdx

if (result_2 s> 0)
    float zmm6[0x4] = 0x41200000
    int128_t zmm7 = 0x3f000000
    float zmm8[0x4] = 0x3f800000
    int128_t zmm9 = zx.o(0)
    
    do
        int32_t j = 0
        result = zx.q(result_2)
        
        if (result_2 s> 0)
            do
                int32_t k = 0
                result = zx.q(result_2)
                
                if (result_2 s> 0)
                    do
                        int64_t rdi_1 = sx.q((result_2 * i + j) * result_2 + k)
                        int64_t rax_9 = *rdx
                        int64_t rcx_1 = rdi_1 * 6
                        float zmm2[0x4] = *(rax_9 + (rcx_1 << 3))
                        float zmm3[0x4] = *(rax_9 + (rcx_1 << 3) + 0x10)
                        float zmm4[0x4] = *(rax_9 + (rcx_1 << 3) + 0x20)
                        int64_t rax_10 = *arg4
                        float var_e8[0x4] = zmm2
                        float var_d8_1[0x4] = zmm3
                        float var_c8_1[0x4] = zmm4
                        float zmm0[0x4] = *(rax_10 + (rdi_1 << 2))
                        int64_t var_f8
                        float zmm1
                        
                        if (not(zmm0[0] f<= zmm9.d))
                            bool cond:0_1 = data_1439b6334 == 0
                            zmm1 = zmm8[0] / zmm0[0]
                            var_f8 = 0
                            int64_t var_f0_1 = 0
                            var_f8 = 0
                            int64_t var_f0_2 = 0
                            var_f8 = 0
                            int64_t var_f0_3 = 0
                            zmm0 = zmm1
                            float temp0_2[0x4] = _mm_mul_ps(zmm2, _mm_shuffle_ps(zmm0, zmm0, 0))
                            zmm0 = zmm1
                            float temp0_4[0x4] = _mm_mul_ps(zmm3, _mm_shuffle_ps(zmm0, zmm0, 0))
                            zmm0 = zmm1
                            float temp0_6[0x4] = _mm_mul_ps(zmm4, _mm_shuffle_ps(zmm0, zmm0, 0))
                            var_e8 = temp0_2
                            var_d8_1 = temp0_4
                            var_c8_1 = temp0_6
                            
                            if (not(cond:0_1))
                                zmm6, zmm7, zmm8, zmm9 = sub_141214ca0(&var_e8)
                        
                        if (data_143e813b8 != 0 && arg2 != 0)
                            zmm0 = zx.o(0)
                            zmm0[0] = float.s(*(arg3 + 0xc))
                            zmm8[0] = zmm8[0] / zmm0[0]
                            zmm0 = zx.o(0)
                            zmm0[0] = float.s(k)
                            zmm1 = (float.s(j) f+ zmm7.d) * zmm8[0]
                            zmm0[0] = zmm0[0] f+ zmm7.d
                            zmm1 = zmm1 f* *(arg3 + 0x20)
                            zmm0[0] = zmm0[0] * zmm8[0]
                            zmm1 = zmm1 f+ *(arg3 + 0x14)
                            zmm0[0] = zmm0[0] f* *(arg3 + 0x1c)
                            float var_11c_1 = zmm1
                            zmm0[0] = zmm0[0] f+ *(arg3 + 0x10)
                            float var_120 = zmm0[0]
                            zmm0 = zx.o(0)
                            zmm0[0] = float.s(i)
                            zmm0[0] = zmm0[0] f+ zmm7.d
                            zmm0[0] = zmm0[0] * zmm8[0]
                            zmm0[0] = zmm0[0] f* *(arg3 + 0x24)
                            zmm0[0] = zmm0[0] f+ *(arg3 + 0x18)
                            float var_118_1 = zmm0[0]
                            var_f8.o = data_142d5beb0
                            
                            if (not(zmm8[0] f> *(arg2 + 0x2bc)))
                                float temp0_7[0x4] =
                                    __minss_xmmss_memss((*(arg2 + 0x294))[0], *(arg2 + 0x280))
                                zmm6[0] = zmm6[0] / temp0_7[0]
                            
                            zmm6, zmm7, zmm8, zmm9 =
                                sub_141e932a0(arg2 + 0x18e0, &var_120, zmm6, &var_f8, 0xffffffff)
                        
                        float var_138_4 = var_e8[0][0]
                        uint16_t rax_12 = (var_138_4 u>> 0x17).w
                        uint16_t r11_2 = (var_138_4 u>> 0x1f).w << 0xf
                        uint32_t rcx_4 = zx.d(rax_12.b)
                        
                        if (rcx_4 u> 0x70)
                            if (rcx_4 u< 0x8f)
                                r11_2 |= ((rax_12 - 0x10) & 0x1f) << 0xa
                                    | ((var_138_4 u>> 0xd).w & 0x3ff)
                            else
                                r11_2 |= 0x7bff
                        else if (0x70 - rcx_4 + 0xe s<= 0x18)
                            int32_t rdx_4 = (var_138_4 & 0x7fffff) | 0x800000
                            uint16_t rax_14 = ((rdx_4 u>> (0x70 - rcx_4 + 0xe).b).w & 0x3ff) | r11_2
                            r11_2 = rax_14
                            
                            if (((rdx_4 u>> ((0x70 - rcx_4).b + 0xd)).b & 1) != 0)
                                r11_2 = rax_14 + 1
                        
                        float var_138_5 = var_d8_1[0][0]
                        uint16_t rax_16 = (var_138_5 u>> 0x17).w
                        uint16_t r9_2 = (var_138_5 u>> 0x1f).w << 0xf
                        uint32_t rcx_7 = zx.d(rax_16.b)
                        
                        if (rcx_7 u> 0x70)
                            if (rcx_7 u< 0x8f)
                                r9_2 |= ((rax_16 - 0x10) & 0x1f) << 0xa
                                    | ((var_138_5 u>> 0xd).w & 0x3ff)
                            else
                                r9_2 |= 0x7bff
                        else if (0x70 - rcx_7 + 0xe s<= 0x18)
                            int32_t rdx_9 = (var_138_5 & 0x7fffff) | 0x800000
                            uint16_t rax_18 = ((rdx_9 u>> (0x70 - rcx_7 + 0xe).b).w & 0x3ff) | r9_2
                            r9_2 = rax_18
                            
                            if (((rdx_9 u>> ((0x70 - rcx_7).b + 0xd)).b & 1) != 0)
                                r9_2 = rax_18 + 1
                        
                        float var_138_6 = var_c8_1[0][0]
                        uint16_t rax_20 = (var_138_6 u>> 0x17).w
                        uint16_t r8_3 = (var_138_6 u>> 0x1f).w << 0xf
                        uint32_t rcx_10 = zx.d(rax_20.b)
                        
                        if (rcx_10 u> 0x70)
                            if (rcx_10 u< 0x8f)
                                r8_3 |= ((rax_20 - 0x10) & 0x1f) << 0xa
                                    | ((var_138_6 u>> 0xd).w & 0x3ff)
                            else
                                r8_3 |= 0x7bff
                        else if (0x70 - rcx_10 + 0xe s<= 0x18)
                            int32_t rdx_14 = (var_138_6 & 0x7fffff) | 0x800000
                            uint16_t rax_22 =
                                ((rdx_14 u>> (0x70 - rcx_10 + 0xe).b).w & 0x3ff) | r8_3
                            r8_3 = rax_22
                            
                            if (((rdx_14 u>> ((0x70 - rcx_10).b + 0xd)).b & 1) != 0)
                                r8_3 = rax_22 + 1
                        
                        float var_138_7 = var_e8[3][0]
                        uint16_t rax_24 = (var_138_7 u>> 0x17).w
                        uint16_t rdx_18 = (var_138_7 u>> 0x1f).w << 0xf
                        uint32_t rcx_13 = zx.d(rax_24.b)
                        
                        if (rcx_13 u> 0x70)
                            if (rcx_13 u< 0x8f)
                                rdx_18 |= ((rax_24 - 0x10) & 0x1f) << 0xa
                                    | ((var_138_7 u>> 0xd).w & 0x3ff)
                            else
                                rdx_18 |= 0x7bff
                        else if (0x70 - rcx_13 + 0xe s<= 0x18)
                            int32_t r10_4 = (var_138_7 & 0x7fffff) | 0x800000
                            uint16_t rax_26 =
                                ((r10_4 u>> (0x70 - rcx_13 + 0xe).b).w & 0x3ff) | rdx_18
                            rdx_18 = rax_26
                            
                            if (((r10_4 u>> ((0x70 - rcx_13).b + 0xd)).b & 1) != 0)
                                rdx_18 = rax_26 + 1
                        
                        float var_138_8 = var_e8[1][0]
                        int64_t rax_28 = *arg6
                        *(rax_28 + (rdi_1 << 3)) = r11_2
                        *(rax_28 + (rdi_1 << 3) + 2) = r9_2
                        *(rax_28 + (rdi_1 << 3) + 4) = r8_3
                        *(rax_28 + (rdi_1 << 3) + 6) = rdx_18
                        uint16_t rcx_17 = (var_138_8 u>> 0x17).w
                        uint16_t r10_8 = (var_138_8 u>> 0x1f).w << 0xf
                        uint32_t rdx_19 = zx.d(rcx_17.b)
                        
                        if (rdx_19 u> 0x70)
                            if (rdx_19 u< 0x8f)
                                r10_8 |= ((var_138_8 u>> 0xd).w & 0x3ff)
                                    | ((rcx_17 - 0x10) & 0x1f) << 0xa
                            else
                                r10_8 |= 0x7bff
                        else if (0x70 - rdx_19 + 0xe s<= 0x18)
                            int32_t rax_31 = (var_138_8 & 0x7fffff) | 0x800000
                            uint16_t rdx_21 =
                                ((rax_31 u>> (0x70 - rdx_19 + 0xe).b).w & 0x3ff) | r10_8
                            r10_8 = rdx_21
                            
                            if (((rax_31 u>> ((0x70 - rdx_19).b + 0xd)).b & 1) != 0)
                                r10_8 = rdx_21 + 1
                        
                        float var_138_9 = var_d8_1[1][0]
                        uint16_t rcx_21 = (var_138_9 u>> 0x17).w
                        uint16_t r9_4 = (var_138_9 u>> 0x1f).w << 0xf
                        uint32_t rdx_22 = zx.d(rcx_21.b)
                        
                        if (rdx_22 u> 0x70)
                            if (rdx_22 u< 0x8f)
                                r9_4 |= ((var_138_9 u>> 0xd).w & 0x3ff)
                                    | ((rcx_21 - 0x10) & 0x1f) << 0xa
                            else
                                r9_4 |= 0x7bff
                        else if (0x70 - rdx_22 + 0xe s<= 0x18)
                            int32_t rax_36 = (var_138_9 & 0x7fffff) | 0x800000
                            uint16_t rdx_24 =
                                ((rax_36 u>> (0x70 - rdx_22 + 0xe).b).w & 0x3ff) | r9_4
                            r9_4 = rdx_24
                            
                            if (((rax_36 u>> ((0x70 - rdx_22).b + 0xd)).b & 1) != 0)
                                r9_4 = rdx_24 + 1
                        
                        float var_138_10 = var_c8_1[1][0]
                        uint16_t rcx_25 = (var_138_10 u>> 0x17).w
                        uint16_t r8_7 = (var_138_10 u>> 0x1f).w << 0xf
                        uint32_t rdx_25 = zx.d(rcx_25.b)
                        
                        if (rdx_25 u> 0x70)
                            if (rdx_25 u< 0x8f)
                                r8_7 |= ((var_138_10 u>> 0xd).w & 0x3ff)
                                    | ((rcx_25 - 0x10) & 0x1f) << 0xa
                            else
                                r8_7 |= 0x7bff
                        else if (0x70 - rdx_25 + 0xe s<= 0x18)
                            int32_t rax_41 = (var_138_10 & 0x7fffff) | 0x800000
                            uint16_t rdx_27 =
                                ((rax_41 u>> (0x70 - rdx_25 + 0xe).b).w & 0x3ff) | r8_7
                            r8_7 = rdx_27
                            
                            if (((rax_41 u>> ((0x70 - rdx_25).b + 0xd)).b & 1) != 0)
                                r8_7 = rdx_27 + 1
                        
                        float var_138_11 = var_d8_1[3][0]
                        uint16_t rcx_29 = (var_138_11 u>> 0x17).w
                        uint16_t rdx_29 = (var_138_11 u>> 0x1f).w << 0xf
                        uint32_t r11_4 = zx.d(rcx_29.b)
                        
                        if (r11_4 u> 0x70)
                            if (r11_4 u< 0x8f)
                                rdx_29 |= ((var_138_11 u>> 0xd).w & 0x3ff)
                                    | ((rcx_29 - 0x10) & 0x1f) << 0xa
                            else
                                rdx_29 |= 0x7bff
                        else if (0x70 - r11_4 + 0xe s<= 0x18)
                            int32_t rax_46 = (var_138_11 & 0x7fffff) | 0x800000
                            uint16_t r11_6 =
                                ((rax_46 u>> (0x70 - r11_4 + 0xe).b).w & 0x3ff) | rdx_29
                            rdx_29 = r11_6
                            
                            if (((rax_46 u>> ((0x70 - r11_4).b + 0xd)).b & 1) != 0)
                                rdx_29 = r11_6 + 1
                        
                        float var_138_12 = var_e8[2][0]
                        int64_t rax_49 = *arg7
                        *(rax_49 + (rdi_1 << 3)) = r10_8
                        *(rax_49 + (rdi_1 << 3) + 2) = r9_4
                        *(rax_49 + (rdi_1 << 3) + 4) = r8_7
                        *(rax_49 + (rdi_1 << 3) + 6) = rdx_29
                        uint16_t rcx_33 = (var_138_12 u>> 0x17).w
                        uint16_t r10_10 = (var_138_12 u>> 0x1f).w << 0xf
                        uint32_t rdx_30 = zx.d(rcx_33.b)
                        
                        if (rdx_30 u> 0x70)
                            if (rdx_30 u< 0x8f)
                                r10_10 |= ((var_138_12 u>> 0xd).w & 0x3ff)
                                    | ((rcx_33 - 0x10) & 0x1f) << 0xa
                            else
                                r10_10 |= 0x7bff
                        else if (0x70 - rdx_30 + 0xe s<= 0x18)
                            int32_t rax_52 = (var_138_12 & 0x7fffff) | 0x800000
                            uint16_t rdx_32 =
                                ((rax_52 u>> (0x70 - rdx_30 + 0xe).b).w & 0x3ff) | r10_10
                            r10_10 = rdx_32
                            
                            if (((rax_52 u>> ((0x70 - rdx_30).b + 0xd)).b & 1) != 0)
                                r10_10 = rdx_32 + 1
                        
                        float var_138_13 = var_d8_1[2][0]
                        uint16_t rcx_37 = (var_138_13 u>> 0x17).w
                        uint16_t r9_6 = (var_138_13 u>> 0x1f).w << 0xf
                        uint32_t rdx_33 = zx.d(rcx_37.b)
                        
                        if (rdx_33 u> 0x70)
                            if (rdx_33 u< 0x8f)
                                r9_6 |= ((var_138_13 u>> 0xd).w & 0x3ff)
                                    | ((rcx_37 - 0x10) & 0x1f) << 0xa
                            else
                                r9_6 |= 0x7bff
                        else if (0x70 - rdx_33 + 0xe s<= 0x18)
                            int32_t rax_58 = (var_138_13 & 0x7fffff) | 0x800000
                            uint16_t rdx_35 =
                                ((rax_58 u>> (0x70 - rdx_33 + 0xe).b).w & 0x3ff) | r9_6
                            r9_6 = rdx_35
                            
                            if (((rax_58 u>> ((0x70 - rdx_33).b + 0xd)).b & 1) != 0)
                                r9_6 = rdx_35 + 1
                        
                        float var_138_14 = var_c8_1[2][0]
                        uint16_t rax_62 = (var_138_14 u>> 0x17).w
                        uint16_t r8_11 = (var_138_14 u>> 0x1f).w << 0xf
                        uint32_t rcx_40 = zx.d(rax_62.b)
                        
                        if (rcx_40 u> 0x70)
                            if (rcx_40 u< 0x8f)
                                r8_11 |= ((rax_62 - 0x10) & 0x1f) << 0xa
                                    | ((var_138_14 u>> 0xd).w & 0x3ff)
                            else
                                r8_11 |= 0x7bff
                        else if (0x70 - rcx_40 + 0xe s<= 0x18)
                            int32_t rdx_38 = (var_138_14 & 0x7fffff) | 0x800000
                            uint16_t rax_64 =
                                ((rdx_38 u>> (0x70 - rcx_40 + 0xe).b).w & 0x3ff) | r8_11
                            r8_11 = rax_64
                            
                            if (((rdx_38 u>> ((0x70 - rcx_40).b + 0xd)).b & 1) != 0)
                                r8_11 = rax_64 + 1
                        
                        float var_138_15 = var_c8_1[3][0]
                        uint16_t rcx_44 = (var_138_15 u>> 0x17).w
                        uint16_t rdx_42 = (var_138_15 u>> 0x1f).w << 0xf
                        uint32_t r11_8 = zx.d(rcx_44.b)
                        
                        if (r11_8 u> 0x70)
                            uint16_t rax_69
                            
                            if (r11_8 u< 0x8f)
                                rax_69 = ((var_138_15 u>> 0xd).w & 0x3ff)
                                    | ((rcx_44 - 0x10) & 0x1f) << 0xa
                            else
                                rax_69 = 0x7bff
                            
                            rdx_42 |= rax_69
                        else if (0x70 - r11_8 + 0xe s<= 0x18)
                            int32_t rax_67 = (var_138_15 & 0x7fffff) | 0x800000
                            uint16_t r11_10 =
                                ((rax_67 u>> (0x70 - r11_8 + 0xe).b).w & 0x3ff) | rdx_42
                            rdx_42 = r11_10
                            
                            if (((rax_67 u>> ((0x70 - r11_8).b + 0xd)).b & 1) != 0)
                                rdx_42 = r11_10 + 1
                        
                        k += 1
                        int64_t rax_71 = *result_1
                        *(rax_71 + (rdi_1 << 3)) = r10_10
                        *(rax_71 + (rdi_1 << 3) + 2) = r9_6
                        arg4 = var_130
                        *(rax_71 + (rdi_1 << 3) + 4) = r8_11
                        *(rax_71 + (rdi_1 << 3) + 6) = rdx_42
                        result = zx.q(*(arg3 + 0xc))
                        result_2 = result.d
                        rdx = var_128
                    while (k s< result.d)
                
                j += 1
                result_2 = result.d
            while (j s< result.d)
        
        i += 1
        result_2 = result.d
    while (i s< result.d)

__security_check_cookie(rax_1 ^ &var_168)
return result
