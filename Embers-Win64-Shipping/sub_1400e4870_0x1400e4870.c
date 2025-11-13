// 函数: sub_1400e4870
// 地址: 0x1400e4870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm15[0x4]
float var_58[0x4] = zmm15
int32_t zmm14[0x4]
int32_t var_68[0x4] = zmm14
uint128_t zmm13
uint128_t var_78 = zmm13
uint128_t zmm12
uint128_t var_88 = zmm12
float zmm11[0x4]
float var_98[0x4] = zmm11
float zmm10[0x4]
float var_a8[0x4] = zmm10
int32_t zmm9[0x4]
int32_t var_b8[0x4] = zmm9
float zmm8[0x4]
float var_c8[0x4] = zmm8
int32_t zmm7[0x4]
int32_t var_d8[0x4] = zmm7
uint32_t zmm6[0x4]
uint32_t var_e8[0x4] = zmm6
uint128_t zmm1 = __mulps_xmmps_memps(*arg3 | arg3[1].d.q << 0x40, data_142e6d9f0)
uint128_t zmm2 = _mm_sub_ps(*arg2 | arg2[1].d.q << 0x40, zmm1)
int32_t var_2c8 = zmm2.d
uint128_t zmm0
zmm0.q = zmm2 u>> 0x40
int32_t var_2c4 = _mm_shuffle_ps(zmm2, zmm2, 0xe5).d
int32_t var_2c0 = zmm0.d
zmm2 = _mm_add_ps(*arg1 | arg1[1].d.q << 0x40, zmm1)
int32_t var_2d8 = zmm2.d
zmm0.q = zmm2 u>> 0x40
int32_t var_2d4 = _mm_shuffle_ps(zmm2, zmm2, 0xe5).d
int32_t var_2d0 = zmm0.d
int32_t r12_4 = ((arg10 s>> 0x1f u>> 0x1e) + arg10) & 0xfffffffc
uint128_t var_358
uint128_t var_348
uint128_t var_318
int32_t result
uint64_t rbp
uint128_t zmm3
float zmm4[0x4]
float zmm5[0x4]

if (r12_4 s<= 0)
    rbp = 0
    result = 0
else
    result = 0
    rbp = 0
    
    while (true)
        bool cond:1_1 = (result.b & 1) != 0
        result.b = 1
        
        if (not(cond:1_1))
            uint128_t var_298_1 =
                __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rbp.d), 0), data_142e11d00)
            int64_t rax_3 = sx.q((rbp << 2).d * 3)
            zmm4 = *(arg7 + rax_3)
            zmm0 = *(arg7 + rax_3 + 0x10)
            zmm1 = *(arg7 + rax_3 + 0x20)
            zmm6 = _mm_shuffle_ps(
                _mm_unpacklo_epi32(_mm_shuffle_epi32(zmm4, 0x4e), _mm_shuffle_epi32(zmm0, 0xe5).q), 
                zmm1, 0xc4)
            zmm2 = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(zmm1, zmm0, 0x21), 0x2c)
            float temp0_13[0x4] = _mm_shuffle_ps(zmm4, zmm0, 5)
            float temp0_16[0x4] = _mm_shuffle_ps(temp0_13, 
                _mm_shuffle_ps(zmm1, _mm_shuffle_ps(temp0_13, zmm0, 0xf8), 0x22), 0x28)
            var_318 = zmm2
            int128_t var_2e8_1 = zx.o(0)
            zmm0 = *(arg6 + 0xc)
            zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0)
            var_358 = zmm0
            var_348 = zmm0
            uint128_t var_338_1 = zmm0
            uint128_t var_328_1 = zmm0
            zmm9 = *arg6
            zmm8 = *(arg6 + 4)
            zmm10 = *(arg6 + 8)
            float temp0_18[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
            zmm3 = _mm_mul_ps(temp0_18, zmm6)
            float temp0_20[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
            float temp0_21[0x4] = _mm_mul_ps(temp0_20, zmm2)
            zmm9 = _mm_shuffle_ps(zmm9, zmm9, 0)
            zmm7 = _mm_mul_ps(zmm9, temp0_16)
            zmm3 = _mm_sub_ps(zmm3, _mm_mul_ps(temp0_16, temp0_20))
            float temp0_27[0x4] = _mm_sub_ps(temp0_21, _mm_mul_ps(zmm6, zmm9))
            zmm7 = _mm_sub_ps(zmm7, _mm_mul_ps(zmm2, temp0_18))
            zmm3 = _mm_add_ps(zmm3, zmm3)
            float temp0_31[0x4] = _mm_add_ps(temp0_27, temp0_27)
            zmm7 = _mm_add_ps(zmm7, zmm7)
            float temp0_33[0x4] = _mm_mul_ps(zmm0, zmm3)
            float temp0_34[0x4] = _mm_mul_ps(zmm0, temp0_31)
            float temp0_35[0x4] = __addps_xmmps_memps(temp0_33, var_318)
            float temp0_36[0x4] = __addps_xmmps_memps(temp0_34, temp0_16)
            zmm0 = __addps_xmmps_memps(_mm_mul_ps(zmm0, zmm7), zmm6)
            zmm1 = _mm_mul_ps(zmm7, temp0_18)
            zmm2 = _mm_mul_ps(zmm3, temp0_20)
            zmm6 = _mm_mul_ps(temp0_31, zmm9)
            zmm1 = _mm_add_ps(_mm_sub_ps(zmm1, _mm_mul_ps(temp0_31, temp0_20)), temp0_35)
            zmm2 = _mm_add_ps(_mm_sub_ps(zmm2, _mm_mul_ps(zmm7, zmm9)), temp0_36)
            zmm6 = _mm_add_ps(_mm_sub_ps(zmm6, _mm_mul_ps(zmm3, temp0_18)), zmm0)
            zmm3 = arg6[1].d
            zmm4 = *(arg6 + 0x14)
            zmm3 = _mm_add_ps(_mm_shuffle_ps(zmm3, zmm3, 0), zmm1)
            float temp0_54[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm4, zmm4, 0), zmm2)
            zmm0 = *(arg6 + 0x18)
            zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm6)
            uint128_t var_158 = zmm3
            float var_148[0x4] = temp0_54
            uint128_t var_2a8_1 = zmm0
            uint128_t var_138_1 = zmm0
            int64_t rax_4 = 0
            uint128_t var_218_1 = zmm3
            zmm0 = zmm3
            
            while (true)
                zmm2 = *(&var_2c8 + rax_4)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0)
                char temp0_59 = _mm_movemask_ps(_mm_cmpeq_ps(zmm1, zmm0, 1))
                
                if (temp0_59 != 0)
                    if ((temp0_59 & 1) == 0)
                        if ((temp0_59 & 2) != 0)
                            goto label_1400e4c9f
                        
                        goto label_1400e4bb3
                    
                    *(&var_358 + (rax_4 << 2)) = zmm2.d
                    
                    if ((temp0_59 & 2) != 0)
                    label_1400e4c9f:
                        *(&var_358:4 + (rax_4 << 2)) = zmm2.d
                        
                        if ((temp0_59 & 4) == 0)
                            goto label_1400e4bbd
                        
                        goto label_1400e4caf
                    
                label_1400e4bb3:
                    
                    if ((temp0_59 & 4) != 0)
                    label_1400e4caf:
                        *(&var_358:8 + (rax_4 << 2)) = zmm2.d
                        
                        if ((temp0_59 & 8) != 0)
                            *(&var_358:0xc + (rax_4 << 2)) = zmm2.d
                    else
                    label_1400e4bbd:
                        
                        if ((temp0_59 & 8) != 0)
                            *(&var_358:0xc + (rax_4 << 2)) = zmm2.d
                
                zmm1 = _mm_cmpeq_ps(zmm1, zmm0, 5)
                
                if (_mm_movemask_ps(zmm1) != 0)
                    zmm3 = *(&var_2d8 + rax_4)
                    zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0)
                    char temp0_65 = _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, zmm2, 1), zmm1))
                    
                    if (temp0_65 != 0)
                        if ((temp0_65 & 1) == 0)
                            if ((temp0_65 & 2) != 0)
                                goto label_1400e4cd3
                            
                            goto label_1400e4c13
                        
                        *(&var_358 + (rax_4 << 2)) = zmm3.d
                        
                        if ((temp0_65 & 2) != 0)
                        label_1400e4cd3:
                            *(&var_358:4 + (rax_4 << 2)) = zmm3.d
                            
                            if ((temp0_65 & 4) == 0)
                                goto label_1400e4c1d
                            
                            goto label_1400e4ce3
                        
                    label_1400e4c13:
                        
                        if ((temp0_65 & 4) != 0)
                        label_1400e4ce3:
                            *(&var_358:8 + (rax_4 << 2)) = zmm3.d
                            
                            if ((temp0_65 & 8) != 0)
                                *(&var_358:0xc + (rax_4 << 2)) = zmm3.d
                        else
                        label_1400e4c1d:
                            
                            if ((temp0_65 & 8) != 0)
                                *(&var_358:0xc + (rax_4 << 2)) = zmm3.d
                    
                    char temp0_68 = _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, zmm2, 5), zmm1))
                    
                    if (temp0_68 != 0)
                        zmm0 = *(&var_158 + (rax_4 << 2))
                        
                        if ((temp0_68 & 1) == 0)
                            if ((temp0_68 & 2) != 0)
                                goto label_1400e4d0c
                            
                            goto label_1400e4c59
                        
                        *(&var_358 + (rax_4 << 2)) = zmm0.d
                        
                        if ((temp0_68 & 2) != 0)
                        label_1400e4d0c:
                            *(&var_358:4 + (rax_4 << 2)) = _mm_shuffle_epi32(zmm0, 0xe5).d
                            
                            if ((temp0_68 & 4) == 0)
                                goto label_1400e4c63
                            
                            goto label_1400e4d21
                        
                    label_1400e4c59:
                        
                        if ((temp0_68 & 4) != 0)
                        label_1400e4d21:
                            *(&var_358:8 + (rax_4 << 2)) = _mm_shuffle_epi32(zmm0, 0x4e).d
                            
                            if ((temp0_68 & 8) != 0)
                                *(&var_358:0xc + (rax_4 << 2)) = _mm_shuffle_epi32(zmm0, 0xe7).d
                        else
                        label_1400e4c63:
                            
                            if ((temp0_68 & 8) != 0)
                                *(&var_358:0xc + (rax_4 << 2)) = _mm_shuffle_epi32(zmm0, 0xe7).d
                
                if (rax_4 == 8)
                    break
                
                zmm0 = *(&var_148 + (rax_4 << 2))
                rax_4 += 4
            
            zmm6 = var_358
            zmm4 = var_348
            zmm5 = *arg1
            zmm15 = *(arg1 + 4)
            float temp0_72[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
            zmm1 = _mm_sub_ps(zmm6, temp0_72)
            float temp0_74[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0)
            zmm7 = _mm_sub_ps(zmm4, temp0_74)
            zmm11 = arg1[1].d
            float temp0_76[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0)
            zmm0 = _mm_sub_ps(var_338_1, temp0_76)
            zmm2 = *arg3
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm1 = _mm_div_ps(zmm1, zmm2)
            zmm9 = arg3[1].d
            zmm14 = _mm_cvttps_epi32(zmm1)
            uint128_t var_248_1 = zmm2
            zmm3 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm14), zmm2), temp0_72)
            zmm12 = __divps_xmmps_memps(*arg3 | zmm9[0].q << 0x40, data_142fc9600)
            zmm13 = _mm_shuffle_ps(zmm12, zmm12, 0)
            zmm3 = _mm_cmpeq_ps(_mm_add_ps(zmm3, zmm13), zmm6, 1)
            zmm5 = __paddd_xmmdq_memdq(zmm14, data_142d3f800)
            zmm1 = _mm_and_ps(zmm14, zmm3)
            zmm3 = _mm_or_ps(_mm_andnot_ps(zmm3, zmm5), zmm1)
            zmm8 = *(arg3 + 4)
            float temp0_92[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
            zmm7 = _mm_div_ps(zmm7, temp0_92)
            zmm9 = _mm_shuffle_ps(zmm9, zmm9, 0)
            zmm0 = _mm_div_ps(zmm0, zmm9)
            zmm2 = _mm_cvttps_epi32(zmm7)
            zmm0 = _mm_cvttps_epi32(zmm0)
            zmm7 = _mm_mul_ps(_mm_cvtepi32_ps(zmm2), temp0_92)
            uint128_t var_2b8_1 = zmm0
            float temp0_101[0x4] = _mm_mul_ps(_mm_cvtepi32_ps(zmm0), zmm9)
            zmm7 = _mm_add_ps(zmm7, temp0_74)
            float temp0_103[0x4] = _mm_add_ps(temp0_101, temp0_76)
            float temp0_104[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0x55)
            zmm7 = _mm_add_ps(zmm7, temp0_104)
            zmm12 = _mm_shuffle_ps(zmm12, zmm12, 0xaa)
            var_358 = zmm3
            zmm1 = _mm_cmpeq_ps(zmm7, zmm4, 1)
            
            if (_mm_movemask_ps(zmm1) != 0)
                zmm14 = zmm2
            
            float temp0_109[0x4] = _mm_add_ps(temp0_103, zmm12)
            
            if (_mm_movemask_ps(_mm_cmpeq_ps(zmm7, zmm4, 5)) != 0)
                zmm5 = __paddd_xmmdq_memdq(zmm2, data_142d3f800)
            
            uint32_t var_228_1[0x4] = zmm6
            zmm0 = __subps_xmmps_memps(zmm6, var_218_1)
            zmm2 = __subps_xmmps_memps(zmm4, temp0_54)
            zmm7 = _mm_and_ps(zmm14, zmm1)
            zmm1 = _mm_or_ps(_mm_andnot_ps(zmm1, zmm5), zmm7)
            var_348 = zmm1
            zmm7 = var_338_1
            float temp0_118[0x4] = _mm_cmpeq_ps(temp0_109, zmm7, 1)
            
            if (_mm_movemask_ps(temp0_118) != 0)
                zmm14 = var_2b8_1
            
            zmm6 = __subps_xmmps_memps(zmm7, var_2a8_1)
            zmm0 = _mm_mul_ps(zmm0, zmm0)
            zmm2 = _mm_mul_ps(zmm2, zmm2)
            
            if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_109, zmm7, 5)) != 0)
                zmm5 = __paddd_xmmdq_memdq(var_2b8_1, data_142d3f800)
            
            zmm14 = _mm_and_ps(zmm14, temp0_118)
            zmm11 = _mm_or_ps(_mm_andnot_ps(temp0_118, zmm5), zmm14)
            float temp0_130[0x4] = _mm_add_ps(__addps_xmmps_memps(zmm0, data_142d8f750), zmm2)
            zmm5 = var_248_1
            zmm0 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm3), zmm5), temp0_72)
            zmm1 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm1), temp0_92), temp0_74)
            zmm2 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm11), zmm9), temp0_76)
            zmm13 = _mm_add_ps(zmm13, zmm0)
            float temp0_141[0x4] = _mm_add_ps(temp0_104, zmm1)
            zmm12 = _mm_add_ps(zmm12, zmm2)
            zmm0 = _mm_sub_ps(var_228_1, zmm13)
            float temp0_144[0x4] = _mm_sub_ps(zmm4, temp0_141)
            zmm7 = _mm_sub_ps(zmm7, zmm12)
            zmm0 = _mm_div_ps(zmm0, zmm5)
            float temp0_147[0x4] = _mm_div_ps(temp0_144, temp0_92)
            zmm7 = _mm_div_ps(zmm7, zmm9)
            var_318 = zmm0
            int32_t var_2f8_2[0x4] = zmm7
            zmm6 = _mm_mul_ps(zmm6, zmm6)
            int64_t rax_9 = 0
            int32_t temp0_150[0x4] = _mm_cmpeq_epi32(zmm9, zmm9)
            char i = _mm_movemask_ps(_mm_cmpeq_epi32(zmm3, temp0_150))
            
            if (i == 0)
                goto label_1400e501f
            
            do
                if ((i & 1) == 0)
                    if ((i & 2) != 0)
                        goto label_1400e50c1
                    
                    goto label_1400e4fdf
                
                *(&var_358 + (rax_9 << 2)) = 0
                
                if ((i & 2) != 0)
                label_1400e50c1:
                    *(&var_358:4 + (rax_9 << 2)) = 0
                    
                    if ((i & 4) == 0)
                        goto label_1400e4fe9
                    
                    goto label_1400e50d3
                
            label_1400e4fdf:
                
                if ((i & 4) == 0)
                label_1400e4fe9:
                    
                    if ((i & 8) != 0)
                        goto label_1400e50e5
                    
                    goto label_1400e4ff3
                
            label_1400e50d3:
                *(&var_358:8 + (rax_9 << 2)) = 0
                
                if ((i & 8) != 0)
                label_1400e50e5:
                    *(&var_358:0xc + (rax_9 << 2)) = 0
                    
                    if ((i & 1) == 0)
                        goto label_1400e4ffd
                    
                    goto label_1400e50f7
                
            label_1400e4ff3:
                
                if ((i & 1) == 0)
                label_1400e4ffd:
                    
                    if ((i & 2) != 0)
                        goto label_1400e5109
                    
                    goto label_1400e5007
                
            label_1400e50f7:
                *(&var_318 + (rax_9 << 2)) = 0
                
                if ((i & 2) != 0)
                label_1400e5109:
                    *(&var_318:4 + (rax_9 << 2)) = 0
                    
                    if ((i & 4) == 0)
                        goto label_1400e5011
                    
                    goto label_1400e511b
                
            label_1400e5007:
                
                if ((i & 4) != 0)
                label_1400e511b:
                    *(&var_318:8 + (rax_9 << 2)) = 0
                    
                    if ((i & 8) != 0)
                        *(&var_318:0xc + (rax_9 << 2)) = 0
                else
                label_1400e5011:
                    
                    if ((i & 8) != 0)
                        *(&var_318:0xc + (rax_9 << 2)) = 0
                
            label_1400e501f:
                int32_t rbx_1 = *(arg4 + rax_9)
                char temp0_157 = _mm_movemask_ps(__pcmpeqd_xmmdq_memdq(
                    _mm_shuffle_epi32(zx.o(rbx_1 - 1), 0), *(&var_358 + (rax_9 << 2))))
                
                if (temp0_157 != 0)
                    if ((temp0_157 & 1) == 0)
                        if ((temp0_157 & 2) != 0)
                            goto label_1400e514d
                        
                        goto label_1400e5057
                    
                    *(&var_358 + (rax_9 << 2)) = rbx_1 - 2
                    
                    if ((temp0_157 & 2) != 0)
                    label_1400e514d:
                        *(&var_358:4 + (rax_9 << 2)) = rbx_1 - 2
                        
                        if ((temp0_157 & 4) == 0)
                            goto label_1400e5061
                        
                        goto label_1400e515b
                    
                label_1400e5057:
                    
                    if ((temp0_157 & 4) == 0)
                    label_1400e5061:
                        
                        if ((temp0_157 & 8) != 0)
                            goto label_1400e5169
                        
                        goto label_1400e506b
                    
                label_1400e515b:
                    *(&var_358:8 + (rax_9 << 2)) = rbx_1 - 2
                    
                    if ((temp0_157 & 8) != 0)
                    label_1400e5169:
                        *(&var_358:0xc + (rax_9 << 2)) = rbx_1 - 2
                        
                        if ((temp0_157 & 1) == 0)
                            goto label_1400e5075
                        
                        goto label_1400e5177
                    
                label_1400e506b:
                    
                    if ((temp0_157 & 1) == 0)
                    label_1400e5075:
                        
                        if ((temp0_157 & 2) != 0)
                            goto label_1400e5189
                        
                        goto label_1400e507f
                    
                label_1400e5177:
                    *(&var_318 + (rax_9 << 2)) = 0x3f800000
                    
                    if ((temp0_157 & 2) != 0)
                    label_1400e5189:
                        *(&var_318:4 + (rax_9 << 2)) = 0x3f800000
                        
                        if ((temp0_157 & 4) == 0)
                            goto label_1400e5089
                        
                        goto label_1400e519b
                    
                label_1400e507f:
                    
                    if ((temp0_157 & 4) != 0)
                    label_1400e519b:
                        *(&var_318:8 + (rax_9 << 2)) = 0x3f800000
                        
                        if ((temp0_157 & 8) != 0)
                            *(&var_318:0xc + (rax_9 << 2)) = 0x3f800000
                    else
                    label_1400e5089:
                        
                        if ((temp0_157 & 8) != 0)
                            *(&var_318:0xc + (rax_9 << 2)) = 0x3f800000
                
                if (rax_9 == 8)
                    break
                
                zmm3 = *(&var_348 + (rax_9 << 2))
                rax_9 += 4
                i = _mm_movemask_ps(_mm_cmpeq_epi32(zmm3, temp0_150))
            while (i != 0)
            
            float temp0_158[0x4] = _mm_add_ps(temp0_130, zmm6)
            zmm8 = _mm_shuffle_epi32(zx.o(*(arg5 + 4)), 0)
            zmm7 = var_358
            zmm14 = var_348
            zmm10 = zmm11
            zmm0 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm7, 0xf5), zmm8), 0xe8)
            zmm2 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm8, zmm7), 0xe8), zmm0.q)
            zmm6 = _mm_add_epi32(zmm2, zmm14)
            zmm4 = _mm_shuffle_epi32(zx.o(*(arg5 + 8)), 0)
            zmm13 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm6, zmm4), 0xe8), 
                _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm6, 0xf5), zmm4), 0xe8)[0].q)
            zmm5 = _mm_add_epi32(zmm13, zmm10)
            float (* rax_11)[0x4] = *(arg5 + 0x10)
            zmm5 = _mm_slli_epi32(zmm5, 2)
            int64_t rsi_13 = sx.q(zmm5[0])
            int64_t rbx_4 = sx.q(_mm_shuffle_epi32(zmm5, 0xe5).d)
            int64_t rdi_2 = sx.q(_mm_shuffle_epi32(zmm5, 0x4e).d)
            int64_t rdx = sx.q(_mm_shuffle_epi32(zmm5, 0xe7).d)
            zmm5 = *(rax_11 + rdx + 4)
            zmm1 = _mm_unpacklo_ps(*(rax_11 + rdi_2), (*(rax_11 + rdx)).q)
            zmm0 = _mm_unpacklo_ps(*(rax_11 + rdi_2 + 4), zmm5[0].q)
            zmm11 = *(rax_11 + rsi_13 + 4)
            zmm5 = _mm_unpacklo_ps(*(rax_11 + rsi_13), (*(rax_11 + rbx_4)).q)[0].q | zmm1.q << 0x40
            zmm11 = _mm_unpacklo_ps(zmm11, (*(rax_11 + rbx_4 + 4)).q)[0].q | zmm0.q << 0x40
            int32_t temp0_183[0x4] = _mm_sub_epi32(zmm7, temp0_150)
            zmm0 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(temp0_183, 0xf5), zmm8), 0xe8)
            zmm12 =
                _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(temp0_183, zmm8), 0xe8), zmm0.q)
            zmm0 = _mm_add_epi32(zmm12, zmm14)
            zmm1 = _mm_shuffle_epi32(zmm0, 0xf5)
            zmm7 = _mm_slli_epi32(
                _mm_add_epi32(
                    _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm0, zmm4), 0xe8), 
                        _mm_shuffle_epi32(_mm_mul_epu32(zmm1, zmm4), 0xe8).q), 
                    zmm10), 
                2)
            zmm6 = _mm_add_epi32(zmm6, zmm8)
            zmm0 = _mm_shuffle_epi32(zmm6, 0xf5)
            zmm8 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm6, zmm4), 0xe8), 
                _mm_shuffle_epi32(_mm_mul_epu32(zmm0, zmm4), 0xe8).q)
            zmm1 = _mm_unpacklo_ps(*(rax_11 + sx.q(zmm7[0])), 
                (*(rax_11 + sx.q(_mm_shuffle_epi32(zmm7, 0xe5).d))).q)
            zmm0 = *(rax_11 + sx.q(_mm_shuffle_epi32(zmm7, 0x4e).d))
            zmm3 = _mm_shuffle_epi32(zmm7, 0xe7)
            zmm7 = temp0_158
            zmm0 = _mm_unpacklo_ps(zmm0, (*(rax_11 + sx.q(zmm3.d))).q)
            zmm1 = _mm_sub_ps(zmm1.q | zmm0.q << 0x40, zmm5)
            zmm9 = var_318
            zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
            zmm1 = _mm_add_ps(_mm_mul_ps(zmm1, zmm9), zmm5)
            int32_t temp0_215[0x4] = _mm_sub_epi32(zmm14, zmm0)
            zmm2 = _mm_add_epi32(zmm2, temp0_215)
            zmm0 = _mm_shuffle_epi32(zmm2, 0xf5)
            zmm3 = _mm_slli_epi32(
                _mm_add_epi32(
                    _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm2, zmm4), 0xe8), 
                        _mm_shuffle_epi32(_mm_mul_epu32(zmm0, zmm4), 0xe8).q), 
                    zmm10), 
                2)
            zmm2 = _mm_unpacklo_ps(*(rax_11 + sx.q(zmm3.d)), 
                (*(rax_11 + sx.q(_mm_shuffle_epi32(zmm3, 0xe5).d))).q).q | _mm_unpacklo_ps(
                *(rax_11 + sx.q(_mm_shuffle_epi32(zmm3, 0x4e).d)), 
                (*(rax_11 + sx.q(_mm_shuffle_epi32(zmm3, 0xe7).d))).q).q << 0x40
            int32_t temp0_230[0x4] = _mm_add_epi32(temp0_215, zmm12)
            zmm0 = _mm_shuffle_epi32(temp0_230, 0xf5)
            zmm5 = _mm_slli_epi32(
                _mm_add_epi32(
                    _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(temp0_230, zmm4), 0xe8), 
                        _mm_shuffle_epi32(_mm_mul_epu32(zmm0, zmm4), 0xe8).q), 
                    zmm10), 
                2)
            zmm3 = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(
                        _mm_unpacklo_ps(*(rax_11 + sx.q(zmm5[0])), 
                            (*(rax_11 + sx.q(_mm_shuffle_epi32(zmm5, 0xe5).d))).q).q | _mm_unpacklo_ps(
                            *(rax_11 + sx.q(_mm_shuffle_epi32(zmm5, 0x4e).d)), 
                            (*(rax_11 + sx.q(_mm_shuffle_epi32(zmm5, 0xe7)[0])))[0].q).q << 0x40, 
                        zmm2), 
                    zmm9), 
                zmm2)
            zmm4 = _mm_add_epi32(zmm4, zmm10)
            zmm13 = _mm_add_epi32(zmm13, zmm4)
            zmm4 = _mm_add_epi32(zmm4, zmm8)
            zmm8 = _mm_slli_epi32(_mm_add_epi32(zmm8, zmm10), 2)
            zmm2 = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(
                        _mm_unpacklo_ps(*(rax_11 + sx.q(zmm8[0]) + 4), 
                            (*(rax_11 + sx.q(_mm_shuffle_epi32(zmm8, 0xe5).d) + 4)).q).q |
                            _mm_unpacklo_ps(*(rax_11 + sx.q(_mm_shuffle_epi32(zmm8, 0x4e).d) + 4), 
                            (*(rax_11 + sx.q(_mm_shuffle_epi32(zmm8, 0xe7)[0]) + 4))[0].q).q << 0x40, 
                        zmm11), 
                    zmm9), 
                zmm11)
            zmm13 = _mm_slli_epi32(zmm13, 2)
            float temp0_262[0x4] = _mm_unpacklo_ps(*(rax_11 + sx.q(zmm13.d) + 4), 
                (*(rax_11 + sx.q(_mm_shuffle_epi32(zmm13, 0xe5).d) + 4)).q)
            zmm0 = _mm_unpacklo_ps(*(rax_11 + sx.q(_mm_shuffle_epi32(zmm13, 0x4e).d) + 4), 
                (*(rax_11 + sx.q(_mm_shuffle_epi32(zmm13, 0xe7)[0]) + 4))[0].q)
            zmm5 = temp0_262[0].q | zmm0.q << 0x40
            zmm4 = _mm_slli_epi32(zmm4, 2)
            zmm0 = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(
                        _mm_unpacklo_ps(*(rax_11 + sx.q(zmm4[0]) + 4), 
                            (*(rax_11 + sx.q(_mm_shuffle_epi32(zmm4, 0xe5)[0]) + 4))[0].q).q |
                            _mm_unpacklo_ps(*(rax_11 + sx.q(_mm_shuffle_epi32(zmm4, 0x4e)[0]) + 4), 
                            (*(rax_11 + sx.q(_mm_shuffle_epi32(zmm4, 0xe7)[0]) + 4))[0].q)[0].q
                            << 0x40, 
                        zmm5), 
                    zmm9), 
                zmm5)
            zmm3 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm3, zmm1), temp0_147), zmm1)
            zmm0 = _mm_add_ps(
                __mulps_xmmps_memps(
                    _mm_sub_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm0, zmm2), temp0_147), zmm2), 
                        zmm3), 
                    var_2f8_2), 
                zmm3)
            zmm2 = _mm_cmpeq_ps(zmm7, zx.o(0), 4)
            zmm1 = _mm_and_ps(_mm_cmpeq_ps(zmm7, zx.o(0), 7), zmm2)
            
            if (_mm_movemask_ps(zmm1) != 0)
                zmm2 = _mm_rsqrt_ps(zmm7)
                zmm7 = _mm_mul_ps(_mm_mul_ps(zmm7, zmm2), zmm2)
                zmm3 = __mulps_xmmps_memps(_mm_mul_ps(_mm_sub_ps(data_142ef1890, zmm7), zmm2), 
                    data_142d3f640)
                zmm2 = _mm_rcp_ps(zmm3)
                zmm3 = _mm_mul_ps(zmm3, zmm2)
                zmm4 = _mm_and_ps(
                    _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, zmm3), zmm2), zmm0), zmm1)
                zmm0 = _mm_or_ps(_mm_andnot_ps(zmm1, zmm0), zmm4)
            
            zmm1 = *arg9
            char i_3 = _mm_movemask_ps(_mm_cmpeq_ps(zmm0, _mm_shuffle_ps(zmm1, zmm1, 0), 1))
            
            if (i_3 == 0)
                result = 0
                rbp = zx.q(rbp.d + 4)
                
                if (rbp.d s>= r12_4)
                    break
                
                continue
            else
                uint64_t i_1 = zx.q(i_3)
                result = 0
                
                do
                    uint64_t rbx_5
                    
                    if (i_1 == 0)
                        rbx_5 = 0x40
                        i_1 &= 0xfffffffffffffffe
                        
                        if ((result.b & 1) == 0)
                        label_1400e5681:
                            uint128_t var_1e8 = zmm0
                            uint64_t rbx_6 = zx.q(rbx_5.d) & 3
                            *arg9 = (*(&var_1e8 + (rbx_6 << 2))).d
                            uint128_t var_1d8 = var_298_1
                            *arg8 = *(&var_1d8 + (rbx_6 << 2))
                    else
                        uint64_t rflags_1
                        rbx_5, rflags_1 = _bit_scan_forward(i_1)
                        i_1 &= not.q(1 << (rbx_5 u% 0x40))
                        
                        if ((result.b & 1) == 0)
                            goto label_1400e5681
                    result.b = 1
                while (i_1 != 0)
        
        rbp = zx.q(rbp.d + 4)
        
        if (rbp.d s>= r12_4)
            break

if (rbp.d s< arg10)
    bool cond:0_1 = result.b != 0
    result.b = 1
    
    if (not(cond:0_1))
        zmm3 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rbp.d), 0), data_142e11d00)
        zmm1 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(arg10), 0), zmm3)
        uint128_t var_298_2 = zmm3
        zmm2 = _mm_add_epi32(_mm_add_epi32(zmm3, zmm3), zmm3) & zmm1
        int64_t rdx_50 = sx.q(zmm2.d)
        void* rax_15 = &(*arg7)[rdx_50]
        zmm0 = (*arg7)[rdx_50]
        int64_t rsi_14 = sx.q(_mm_shuffle_epi32(zmm2, 0xe5).d)
        void* rdx_52 = &(*arg7)[rsi_14]
        zmm0 = _mm_unpacklo_ps(zmm0, (*arg7)[rsi_14].q)
        int64_t rdi_3 = sx.q(_mm_shuffle_epi32(zmm2, 0x4e).d)
        void* rsi_16 = &(*arg7)[rdi_3]
        zmm3 = (*arg7)[rdi_3]
        int64_t rdi_5 = sx.q(_mm_shuffle_epi32(zmm2, 0xe7).d)
        void* rbp_1 = &(*arg7)[rdi_5]
        zmm0 = zmm0.q | _mm_unpacklo_ps(zmm3, (*arg7)[rdi_5].q).q << 0x40
        zmm3 = data_142fc95e0 & zmm1
        uint64_t r12_5 = zx.q(zmm3.d)
        zmm8 = *(r12_5 + rax_15)
        uint64_t r15_1 = zx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0])
        float temp0_316[0x4] = _mm_unpacklo_ps(zmm8, (*(r15_1 + rdx_52))[0].q)
        float (* r14_2)[0x4] = zx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0])
        zmm4 = *(r14_2 + rsi_16)
        uint64_t rbx_7 = zx.q(_mm_shuffle_epi32(zmm3, 0xe7).d)
        float temp0_319[0x4] = _mm_unpacklo_ps(zmm4, (*(rbx_7 + rbp_1)).q)
        zmm8 = temp0_316[0].q | temp0_319[0].q << 0x40
        zmm3 = data_142fc95f0 & zmm1
        zmm6 = _mm_unpacklo_ps(*(zx.q(zmm3.d) + rax_15), 
            (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0]) + rdx_52))[0].q)
        float temp0_324[0x4] = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0]) + rsi_16), 
            (*(zx.q(_mm_shuffle_epi32(zmm3, 0xe7).d) + rbp_1)).q)
        zmm6 = zmm6[0].q | temp0_324[0].q << 0x40
        uint128_t var_1c8_1 = zmm0
        uint32_t var_1a8_1[0x4] = zmm6
        float var_198_1[0x4] = zx.o(0)
        zmm5 = *(arg6 + 0xc)
        float temp0_325[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
        var_358 = temp0_325
        var_348 = temp0_325
        zmm7 = *arg6
        zmm2 = *(arg6 + 4)
        zmm4 = *(arg6 + 8)
        zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0)
        zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
        zmm9 = _mm_mul_ps(zmm8, zmm7)
        zmm7 = _mm_mul_ps(zmm7, zmm6)
        zmm6 = _mm_mul_ps(zmm6, zmm2)
        float temp0_331[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
        zmm2 = _mm_mul_ps(zmm2, zmm0)
        zmm0 = _mm_mul_ps(zmm0, temp0_331)
        zmm3 = _mm_mul_ps(zx.o(0), temp0_325)
        zmm6 = _mm_sub_ps(zmm6, _mm_mul_ps(temp0_331, zmm8))
        zmm0 = _mm_sub_ps(zmm0, zmm7)
        zmm9 = _mm_sub_ps(zmm9, zmm2)
        zmm3 = _mm_sub_ps(zmm3, zmm3)
        zmm6 = _mm_add_ps(zmm6, zmm6)
        zmm0 = _mm_add_ps(zmm0, zmm0)
        zmm9 = _mm_add_ps(zmm9, zmm9)
        zmm3 = _mm_add_ps(zmm3, zmm3)
        var_318 = zmm6
        uint128_t var_308_3 = zmm0
        int32_t var_2f8_3[0x4] = zmm9
        uint128_t var_2e8_2 = zmm3
        zmm3 = _mm_mul_ps(zmm3, temp0_325)
        zmm2 = _mm_mul_ps(temp0_325, zmm6)
        float temp0_346[0x4] = _mm_mul_ps(temp0_325, zmm0)
        float temp0_347[0x4] = _mm_mul_ps(temp0_325, zmm9)
        zmm2 = __addps_xmmps_memps(zmm2, var_1c8_1)
        float temp0_349[0x4] = __addps_xmmps_memps(temp0_346, zmm8)
        float temp0_350[0x4] = __addps_xmmps_memps(temp0_347, var_1a8_1)
        float var_328_2[0x4] = temp0_325
        uint128_t var_128_1 = zmm2
        float var_118_1[0x4] = temp0_349
        float var_108_1[0x4] = temp0_350
        uint128_t var_f8_1 = __addps_xmmps_memps(zmm3, var_198_1)
        zmm4 = *arg6
        zmm5 = *(arg6 + 4)
        zmm7 = *(arg6 + 8)
        float temp0_352[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
        float temp0_353[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
        zmm3 = _mm_mul_ps(zmm0, temp0_353)
        float temp0_355[0x4] = _mm_mul_ps(temp0_353, zmm9)
        zmm9 = _mm_mul_ps(zmm9, temp0_352)
        zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
        float temp0_358[0x4] = _mm_mul_ps(temp0_352, zmm6)
        zmm6 = _mm_mul_ps(zmm6, zmm7)
        zmm9 = _mm_sub_ps(zmm9, _mm_mul_ps(zmm7, zmm0))
        zmm6 = _mm_sub_ps(zmm6, temp0_355)
        zmm3 = _mm_sub_ps(zmm3, temp0_358)
        zmm9 = _mm_add_ps(zmm9, zmm2)
        zmm6 = _mm_add_ps(zmm6, temp0_349)
        zmm3 = _mm_add_ps(zmm3, temp0_350)
        zmm8 = arg6[1].d
        zmm2 = *(arg6 + 0x14)
        float temp0_368[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm8, zmm8, 0), zmm9)
        zmm2 = _mm_add_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm6)
        zmm0 = *(arg6 + 0x18)
        zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm3)
        float var_188[0x4] = temp0_368
        uint128_t var_288_2 = zmm2
        uint128_t var_178 = zmm2
        uint128_t var_2a8_2 = zmm0
        uint128_t var_168_1 = zmm0
        int64_t rax_19 = 0
        zmm0 = temp0_368
        
        while (true)
            zmm3 = *(&var_2c8 + rax_19)
            zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0)
            float temp0_374[0x4] = _mm_cmpeq_ps(zmm2, zmm0, 1)
            
            if (_mm_movemask_ps(_mm_and_ps(temp0_374, zmm1)) != 0)
                char temp0_377 = _mm_movemask_ps(temp0_374)
                
                if ((temp0_377 & 1) == 0)
                    if ((temp0_377 & 2) != 0)
                        goto label_1400e5afe
                    
                    goto label_1400e5a15
                
                *(&var_358 + (rax_19 << 2)) = zmm3.d
                
                if ((temp0_377 & 2) != 0)
                label_1400e5afe:
                    *(&var_358:4 + (rax_19 << 2)) = zmm3.d
                    
                    if ((temp0_377 & 4) == 0)
                        goto label_1400e5a1e
                    
                    goto label_1400e5b0d
                
            label_1400e5a15:
                
                if ((temp0_377 & 4) != 0)
                label_1400e5b0d:
                    *(&var_358:8 + (rax_19 << 2)) = zmm3.d
                    
                    if ((temp0_377 & 8) != 0)
                        *(&var_358:0xc + (rax_19 << 2)) = zmm3.d
                else
                label_1400e5a1e:
                    
                    if ((temp0_377 & 8) != 0)
                        *(&var_358:0xc + (rax_19 << 2)) = zmm3.d
            
            zmm2 = _mm_cmpeq_ps(zmm2, zmm0, 5)
            
            if (_mm_movemask_ps(_mm_and_ps(zmm1, zmm2)) != 0)
                zmm4 = *(&var_2d8 + rax_19)
                zmm3 = _mm_shuffle_ps(zmm4, zmm4, 0)
                zmm5 = _mm_and_ps(_mm_cmpeq_ps(zmm0, zmm3, 1), zmm2)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm5, zmm1)) != 0)
                    char temp0_386 = _mm_movemask_ps(zmm5)
                    
                    if ((temp0_386 & 1) == 0)
                        if ((temp0_386 & 2) != 0)
                            goto label_1400e5b2f
                        
                        goto label_1400e5a7a
                    
                    *(&var_358 + (rax_19 << 2)) = zmm4[0]
                    
                    if ((temp0_386 & 2) != 0)
                    label_1400e5b2f:
                        *(&var_358:4 + (rax_19 << 2)) = zmm4[0]
                        
                        if ((temp0_386 & 4) == 0)
                            goto label_1400e5a83
                        
                        goto label_1400e5b3e
                    
                label_1400e5a7a:
                    
                    if ((temp0_386 & 4) != 0)
                    label_1400e5b3e:
                        *(&var_358:8 + (rax_19 << 2)) = zmm4[0]
                        
                        if ((temp0_386 & 8) != 0)
                            *(&var_358:0xc + (rax_19 << 2)) = zmm4[0]
                    else
                    label_1400e5a83:
                        
                        if ((temp0_386 & 8) != 0)
                            *(&var_358:0xc + (rax_19 << 2)) = zmm4[0]
                
                zmm0 = _mm_and_ps(_mm_cmpeq_ps(zmm0, zmm3, 5), zmm2)
                
                if (_mm_movemask_ps(_mm_and_ps(zmm0, zmm1)) != 0)
                    zmm2 = *(&var_188 + (rax_19 << 2))
                    char temp0_391 = _mm_movemask_ps(zmm0)
                    
                    if ((temp0_391 & 1) == 0)
                        if ((temp0_391 & 2) != 0)
                            goto label_1400e5b65
                        
                        goto label_1400e5ac0
                    
                    *(&var_358 + (rax_19 << 2)) = zmm2.d
                    
                    if ((temp0_391 & 2) != 0)
                    label_1400e5b65:
                        *(&var_358:4 + (rax_19 << 2)) = _mm_shuffle_epi32(zmm2, 0xe5).d
                        
                        if ((temp0_391 & 4) == 0)
                            goto label_1400e5ac9
                        
                        goto label_1400e5b79
                    
                label_1400e5ac0:
                    
                    if ((temp0_391 & 4) != 0)
                    label_1400e5b79:
                        *(&var_358:8 + (rax_19 << 2)) = _mm_shuffle_epi32(zmm2, 0x4e).d
                        
                        if ((temp0_391 & 8) != 0)
                            *(&var_358:0xc + (rax_19 << 2)) = _mm_shuffle_epi32(zmm2, 0xe7).d
                    else
                    label_1400e5ac9:
                        
                        if ((temp0_391 & 8) != 0)
                            *(&var_358:0xc + (rax_19 << 2)) = _mm_shuffle_epi32(zmm2, 0xe7).d
            
            if (rax_19 == 8)
                break
            
            zmm0 = *(&var_178 + (rax_19 << 2))
            rax_19 += 4
        
        zmm9 = var_358
        zmm12 = var_348
        zmm14 = _mm_sub_ps(zmm9, temp0_368)
        zmm7 = *arg1
        zmm4 = *(arg1 + 4)
        zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
        zmm0 = _mm_sub_ps(zmm9, zmm7)
        float temp0_398[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
        zmm2 = _mm_sub_ps(zmm12, temp0_398)
        zmm3 = *arg3
        zmm5 = *(arg3 + 4)
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
        zmm0 = _mm_div_ps(zmm0, zmm3)
        float temp0_402[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
        zmm2 = _mm_div_ps(zmm2, temp0_402)
        zmm10 = arg3[1].d
        zmm13 = _mm_cvttps_epi32(zmm0)
        zmm2 = _mm_cvttps_epi32(zmm2)
        uint128_t var_248_2 = zmm3
        int32_t var_268_2[0x4] = zmm7
        zmm6 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm13), zmm3), zmm7)
        zmm3 = __divps_xmmps_memps(*arg3 | zmm10[0].q << 0x40, data_142fc9600)
        zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0)
        uint128_t var_278_2 = zmm0
        int32_t var_218_2[0x4] = zmm9
        zmm6 = _mm_cmpeq_ps(_mm_add_ps(zmm6, zmm0), zmm9, 1)
        zmm7 = _mm_add_epi32(zmm13, _mm_cmpeq_epi32(zmm0, zmm0))
        zmm0 = _mm_and_ps(zmm13, zmm6)
        zmm6 = _mm_or_ps(_mm_andnot_ps(zmm6, zmm7), zmm0)
        zmm15 = zmm2
        float temp0_420[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm2), temp0_402), temp0_398)
        zmm9 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
        float temp0_422[0x4] = _mm_add_ps(temp0_420, zmm9)
        float temp0_423[0x4] = _mm_cmpeq_ps(temp0_422, zmm12, 1)
        char temp0_425 = _mm_movemask_ps(_mm_and_ps(temp0_423, zmm1))
        zmm11 = arg1[1].d
        float temp0_426[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0)
        zmm0 = temp0_325
        float temp0_427[0x4] = _mm_sub_ps(zmm0, temp0_426)
        float temp0_428[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
        zmm4 = _mm_cvttps_epi32(_mm_div_ps(temp0_427, temp0_428))
        zmm5 = zmm12
        uint128_t var_2b8_2 = zmm4
        zmm12 = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm4), temp0_428), temp0_426)
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
        var_358 = zmm6
        zmm2 = _mm_cmpeq_ps(temp0_422, zmm5, 5)
        
        if (temp0_425 != 0)
            zmm13 = zmm15
        
        float temp0_436[0x4] = __subps_xmmps_memps(zmm5, var_288_2)
        zmm14 = _mm_mul_ps(zmm14, zmm14)
        zmm12 = _mm_add_ps(zmm12, zmm3)
        
        if (_mm_movemask_ps(_mm_and_ps(zmm2, zmm1)) != 0)
            zmm7 = __paddd_xmmdq_memdq(zmm15, data_142d3f800)
        
        zmm2 = __subps_xmmps_memps(zmm0, var_2a8_2)
        zmm14 = _mm_add_ps(zmm14, zx.o(0))
        float temp0_444[0x4] = _mm_mul_ps(temp0_436, temp0_436)
        zmm4 = _mm_and_ps(zmm13, temp0_423)
        zmm8 = _mm_or_ps(_mm_andnot_ps(temp0_423, zmm7), zmm4)
        var_348 = zmm8
        float temp0_448[0x4] = _mm_cmpeq_ps(zmm12, zmm0, 5)
        zmm12 = _mm_cmpeq_ps(zmm12, zmm0, 1)
        
        if (_mm_movemask_ps(_mm_and_ps(zmm12, zmm1)) != 0)
            zmm13 = var_2b8_2
        
        zmm14 = _mm_add_ps(zmm14, temp0_444)
        zmm2 = _mm_mul_ps(zmm2, zmm2)
        
        if (_mm_movemask_ps(_mm_and_ps(temp0_448, zmm1)) != 0)
            zmm7 = __paddd_xmmdq_memdq(var_2b8_2, data_142d3f800)
        
        int32_t var_2a8_3[0x4] = _mm_add_ps(zmm14, zmm2)
        zmm13 = _mm_and_ps(zmm13, zmm12)
        zmm12 = _mm_or_ps(_mm_andnot_ps(zmm12, zmm7), zmm13)
        zmm2 = __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm6), var_248_2), var_268_2)
        float temp0_466[0x4] =
            __addps_xmmps_memps(_mm_mul_ps(_mm_cvtepi32_ps(zmm8), temp0_402), temp0_398)
        float temp0_469[0x4] = _mm_add_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm12), temp0_428), temp0_426)
        zmm7 = _mm_add_ps(var_278_2, zmm2)
        zmm9 = _mm_add_ps(zmm9, temp0_466)
        zmm3 = _mm_add_ps(zmm3, temp0_469)
        zmm2 = _mm_sub_ps(var_218_2, zmm7)
        float temp0_474[0x4] = _mm_sub_ps(zmm5, zmm9)
        zmm0 = _mm_sub_ps(zmm0, zmm3)
        zmm2 = _mm_div_ps(zmm2, var_248_2)
        float temp0_477[0x4] = _mm_div_ps(temp0_474, temp0_402)
        zmm0 = _mm_div_ps(zmm0, temp0_428)
        var_318 = zmm2
        uint128_t var_2f8_4 = zmm0
        int64_t rax_24 = 0
        zmm0 = _mm_cmpeq_epi32(zmm0, zmm0)
        
        while (true)
            zmm6 = _mm_cmpeq_epi32(zmm6, zmm0)
            
            if (_mm_movemask_ps(zmm6 & zmm1) != 0)
                char temp0_482 = _mm_movemask_ps(zmm6)
                
                if ((temp0_482 & 1) == 0)
                    if ((temp0_482 & 2) != 0)
                        goto label_1400e5f30
                    
                    goto label_1400e5e61
                
                *(&var_358 + (rax_24 << 2)) = 0
                
                if ((temp0_482 & 2) != 0)
                label_1400e5f30:
                    *(&var_358:4 + (rax_24 << 2)) = 0
                    
                    if ((temp0_482 & 4) == 0)
                        goto label_1400e5e6a
                    
                    goto label_1400e5f41
                
            label_1400e5e61:
                
                if ((temp0_482 & 4) == 0)
                label_1400e5e6a:
                    
                    if ((temp0_482 & 8) != 0)
                        goto label_1400e5f52
                    
                    goto label_1400e5e73
                
            label_1400e5f41:
                *(&var_358:8 + (rax_24 << 2)) = 0
                
                if ((temp0_482 & 8) != 0)
                label_1400e5f52:
                    *(&var_358:0xc + (rax_24 << 2)) = 0
                    
                    if ((temp0_482 & 1) == 0)
                        goto label_1400e5e7c
                    
                    goto label_1400e5f63
                
            label_1400e5e73:
                
                if ((temp0_482 & 1) == 0)
                label_1400e5e7c:
                    
                    if ((temp0_482 & 2) != 0)
                        goto label_1400e5f74
                    
                    goto label_1400e5e85
                
            label_1400e5f63:
                *(&var_318 + (rax_24 << 2)) = 0
                
                if ((temp0_482 & 2) != 0)
                label_1400e5f74:
                    *(&var_318:4 + (rax_24 << 2)) = 0
                    
                    if ((temp0_482 & 4) == 0)
                        goto label_1400e5e8e
                    
                    goto label_1400e5f85
                
            label_1400e5e85:
                
                if ((temp0_482 & 4) != 0)
                label_1400e5f85:
                    *(&var_318:8 + (rax_24 << 2)) = 0
                    
                    if ((temp0_482 & 8) != 0)
                        *(&var_318:0xc + (rax_24 << 2)) = 0
                else
                label_1400e5e8e:
                    
                    if ((temp0_482 & 8) != 0)
                        *(&var_318:0xc + (rax_24 << 2)) = 0
            
            int32_t rdx_60 = *(arg4 + rax_24)
            zmm2 = __pcmpeqd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rdx_60 - 1), 0), 
                *(&var_358 + (rax_24 << 2)))
            
            if (_mm_movemask_ps(zmm2 & zmm1) != 0)
                char temp0_486 = _mm_movemask_ps(zmm2)
                
                if ((temp0_486 & 1) == 0)
                    if ((temp0_486 & 2) != 0)
                        goto label_1400e5fac
                    
                    goto label_1400e5ed7
                
                *(&var_358 + (rax_24 << 2)) = rdx_60 - 2
                
                if ((temp0_486 & 2) != 0)
                label_1400e5fac:
                    *(&var_358:4 + (rax_24 << 2)) = rdx_60 - 2
                    
                    if ((temp0_486 & 4) == 0)
                        goto label_1400e5ee0
                    
                    goto label_1400e5fb9
                
            label_1400e5ed7:
                
                if ((temp0_486 & 4) == 0)
                label_1400e5ee0:
                    
                    if ((temp0_486 & 8) != 0)
                        goto label_1400e5fc6
                    
                    goto label_1400e5ee9
                
            label_1400e5fb9:
                *(&var_358:8 + (rax_24 << 2)) = rdx_60 - 2
                
                if ((temp0_486 & 8) != 0)
                label_1400e5fc6:
                    *(&var_358:0xc + (rax_24 << 2)) = rdx_60 - 2
                    
                    if ((temp0_486 & 1) == 0)
                        goto label_1400e5ef2
                    
                    goto label_1400e5fd3
                
            label_1400e5ee9:
                
                if ((temp0_486 & 1) == 0)
                label_1400e5ef2:
                    
                    if ((temp0_486 & 2) != 0)
                        goto label_1400e5fe4
                    
                    goto label_1400e5efb
                
            label_1400e5fd3:
                *(&var_318 + (rax_24 << 2)) = 0x3f800000
                
                if ((temp0_486 & 2) != 0)
                label_1400e5fe4:
                    *(&var_318:4 + (rax_24 << 2)) = 0x3f800000
                    
                    if ((temp0_486 & 4) == 0)
                        goto label_1400e5f04
                    
                    goto label_1400e5ff5
                
            label_1400e5efb:
                
                if ((temp0_486 & 4) != 0)
                label_1400e5ff5:
                    *(&var_318:8 + (rax_24 << 2)) = 0x3f800000
                    
                    if ((temp0_486 & 8) != 0)
                        *(&var_318:0xc + (rax_24 << 2)) = 0x3f800000
                else
                label_1400e5f04:
                    
                    if ((temp0_486 & 8) != 0)
                        *(&var_318:0xc + (rax_24 << 2)) = 0x3f800000
            
            if (rax_24 == 8)
                break
            
            zmm6 = *(&var_348 + (rax_24 << 2))
            rax_24 += 4
        
        zmm8 = _mm_shuffle_epi32(zx.o(*(arg5 + 4)), 0)
        zmm4 = var_358
        zmm2 = var_348
        zmm10 = zmm12
        zmm3 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm4, 0xf5), zmm8), 0xe8)
        zmm0 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm8, zmm4), 0xe8), zmm3.q)
        int32_t temp0_494[0x4] = _mm_add_epi32(zmm0, zmm2)
        zmm3 = _mm_shuffle_epi32(zx.o(*(arg5 + 8)), 0)
        int32_t temp0_501[0x4] = _mm_unpacklo_epi32(
            _mm_shuffle_epi32(_mm_mul_epu32(temp0_494, zmm3), 0xe8), 
            _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(temp0_494, 0xf5), zmm3), 0xe8)[0].q)
        zmm6 = _mm_add_epi32(temp0_501, zmm10)
        float (* rcx_5)[0x4] = *(arg5 + 0x10)
        zmm6 = _mm_slli_epi32(zmm6, 2) & zmm1
        int64_t rax_27 = sx.q(zmm6[0])
        zmm15 = *(rcx_5 + rax_27)
        int64_t rax_29 = sx.q(_mm_shuffle_epi32(zmm6, 0xe5)[0])
        float temp0_505[0x4] = _mm_unpacklo_ps(zmm15, (*(rcx_5 + rax_29))[0].q)
        int64_t rdx_62 = sx.q(_mm_shuffle_epi32(zmm6, 0x4e)[0])
        zmm5 = *(rcx_5 + rdx_62)
        int64_t rbp_2 = sx.q(_mm_shuffle_epi32(zmm6, 0xe7)[0])
        float temp0_508[0x4] = _mm_unpacklo_ps(zmm5, (*(rcx_5 + rbp_2))[0].q)
        zmm15 = temp0_505[0].q | temp0_508[0].q << 0x40
        zmm13 = _mm_cmpeq_epi32(var_248_2, var_248_2)
        zmm4 = _mm_sub_epi32(zmm4, zmm13)
        zmm5 = _mm_shuffle_epi32(_mm_mul_epu32(_mm_shuffle_epi32(zmm4, 0xf5), zmm8), 0xe8)
        zmm12 = _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm4, zmm8), 0xe8), zmm5[0].q)
        zmm4 = _mm_add_epi32(zmm12, zmm2)
        zmm5 = _mm_shuffle_epi32(zmm4, 0xf5)
        zmm4 = _mm_slli_epi32(
            _mm_add_epi32(
                _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm4, zmm3), 0xe8), 
                    _mm_shuffle_epi32(_mm_mul_epu32(zmm5, zmm3), 0xe8)[0].q), 
                zmm10), 
            2)
        int32_t temp0_526[0x4] = _mm_add_epi32(temp0_494, zmm8)
        zmm5 = _mm_shuffle_epi32(temp0_526, 0xf5)
        int32_t temp0_532[0x4] = _mm_unpacklo_epi32(
            _mm_shuffle_epi32(_mm_mul_epu32(temp0_526, zmm3), 0xe8), 
            _mm_shuffle_epi32(_mm_mul_epu32(zmm5, zmm3), 0xe8)[0].q)
        zmm4 &= zmm1
        zmm6 = _mm_unpacklo_ps(*(rcx_5 + sx.q(zmm4[0])), 
            (*(rcx_5 + sx.q(_mm_shuffle_epi32(zmm4, 0xe5)[0])))[0].q)
        float temp0_537[0x4] = _mm_unpacklo_ps(*(rcx_5 + sx.q(_mm_shuffle_epi32(zmm4, 0x4e)[0])), 
            (*(rcx_5 + sx.q(_mm_shuffle_epi32(zmm4, 0xe7)[0])))[0].q)
        zmm6 = _mm_sub_ps(zmm6[0].q | temp0_537[0].q << 0x40, zmm15)
        zmm11 = var_318
        zmm6 = _mm_add_ps(_mm_mul_ps(zmm6, zmm11), zmm15)
        zmm2 = _mm_sub_epi32(zmm2, zmm13)
        zmm0 = _mm_add_epi32(zmm0, zmm2)
        zmm4 = _mm_shuffle_epi32(zmm0, 0xf5)
        zmm5 = _mm_slli_epi32(
            _mm_add_epi32(
                _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm0, zmm3), 0xe8), 
                    _mm_shuffle_epi32(_mm_mul_epu32(zmm4, zmm3), 0xe8).q), 
                zmm10), 
            2) & zmm1
        zmm0 = _mm_unpacklo_ps(*(rcx_5 + sx.q(zmm5[0])), 
            (*(rcx_5 + sx.q(_mm_shuffle_epi32(zmm5, 0xe5)[0])))[0].q).q | _mm_unpacklo_ps(
            *(rcx_5 + sx.q(_mm_shuffle_epi32(zmm5, 0x4e)[0])), 
            (*(rcx_5 + sx.q(_mm_shuffle_epi32(zmm5, 0xe7)[0])))[0].q)[0].q << 0x40
        zmm2 = _mm_add_epi32(zmm2, zmm12)
        zmm4 = _mm_shuffle_epi32(zmm2, 0xf5)
        zmm5 = _mm_slli_epi32(
            _mm_add_epi32(
                _mm_unpacklo_epi32(_mm_shuffle_epi32(_mm_mul_epu32(zmm2, zmm3), 0xe8), 
                    _mm_shuffle_epi32(_mm_mul_epu32(zmm4, zmm3), 0xe8).q), 
                zmm10), 
            2) & zmm1
        zmm2 = _mm_add_ps(
            _mm_mul_ps(
                _mm_sub_ps(
                    _mm_unpacklo_ps(*(rcx_5 + sx.q(zmm5[0])), 
                        (*(rcx_5 + sx.q(_mm_shuffle_epi32(zmm5, 0xe5)[0])))[0].q).q | _mm_unpacklo_ps(
                        *(rcx_5 + sx.q(_mm_shuffle_epi32(zmm5, 0x4e)[0])), 
                        (*(rcx_5 + sx.q(_mm_shuffle_epi32(zmm5, 0xe7)[0])))[0].q)[0].q << 0x40, 
                    zmm0), 
                zmm11), 
            zmm0)
        zmm7 = _mm_unpacklo_ps(*(r12_5 + rcx_5 + rax_27), (*(r15_1 + rcx_5 + rax_29)).q)
        zmm0 = _mm_unpacklo_ps(*(r14_2 + rcx_5 + rdx_62), (*(rbx_7 + rcx_5 + rbp_2))[0].q)
        zmm7 = zmm7[0].q | zmm0.q << 0x40
        zmm3 = _mm_add_epi32(zmm3, zmm10)
        int32_t temp0_576[0x4] = _mm_add_epi32(temp0_501, zmm3)
        zmm3 = _mm_add_epi32(zmm3, temp0_532)
        zmm9 = _mm_slli_epi32(_mm_add_epi32(temp0_532, zmm10), 2) & zmm1
        float temp0_581[0x4] = _mm_unpacklo_ps(*(r12_5 + sx.q(zmm9[0]) + rcx_5), 
            (*(r15_1 + sx.q(_mm_shuffle_epi32(zmm9, 0xe5).d) + rcx_5)).q)
        zmm0 = _mm_unpacklo_ps(*(r14_2 + sx.q(_mm_shuffle_epi32(zmm9, 0x4e).d) + rcx_5), 
            (*(rbx_7 + sx.q(_mm_shuffle_epi32(zmm9, 0xe7)[0]) + rcx_5))[0].q)
        float temp0_587[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_sub_ps(temp0_581[0].q | zmm0.q << 0x40, zmm7), zmm11), zmm7)
        zmm14 = _mm_slli_epi32(temp0_576, 2) & zmm1
        float temp0_590[0x4] = _mm_unpacklo_ps(*(r12_5 + sx.q(zmm14[0]) + rcx_5), 
            (*(r15_1 + sx.q(_mm_shuffle_epi32(zmm14, 0xe5).d) + rcx_5)).q)
        zmm0 = _mm_unpacklo_ps(*(r14_2 + sx.q(_mm_shuffle_epi32(zmm14, 0x4e).d) + rcx_5), 
            (*(rbx_7 + sx.q(_mm_shuffle_epi32(zmm14, 0xe7)[0]) + rcx_5))[0].q)
        zmm5 = temp0_590[0].q | zmm0.q << 0x40
        zmm3 = _mm_slli_epi32(zmm3, 2) & zmm1
        zmm0 = _mm_add_ps(
            _mm_mul_ps(
                _mm_sub_ps(
                    _mm_unpacklo_ps(*(r12_5 + sx.q(zmm3.d) + rcx_5), 
                        (*(r15_1 + sx.q(_mm_shuffle_epi32(zmm3, 0xe5)[0]) + rcx_5))[0].q).q |
                        _mm_unpacklo_ps(*(r14_2 + sx.q(_mm_shuffle_epi32(zmm3, 0x4e)[0]) + rcx_5), 
                        (*(rbx_7 + sx.q(_mm_shuffle_epi32(zmm3, 0xe7).d) + rcx_5)).q)[0].q << 0x40, 
                    zmm5), 
                zmm11), 
            zmm5)
        zmm2 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm2, zmm6), temp0_477), zmm6)
        zmm0 = _mm_add_ps(
            __mulps_xmmps_memps(
                _mm_sub_ps(
                    _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm0, temp0_587), temp0_477), temp0_587), 
                    zmm2), 
                var_2f8_4), 
            zmm2)
        zmm4 = var_2a8_3
        zmm3 = _mm_cmpeq_ps(zmm4, zx.o(0), 4)
        zmm2 = _mm_and_ps(_mm_and_ps(_mm_cmpeq_ps(zx.o(0), zmm4, 7), zmm3), zmm1)
        
        if (_mm_movemask_ps(zmm2) != 0)
            zmm3 = _mm_rsqrt_ps(zmm4)
            float temp0_619[0x4] = _mm_mul_ps(_mm_mul_ps(zmm4, zmm3), zmm3)
            float temp0_622[0x4] = __mulps_xmmps_memps(
                _mm_mul_ps(_mm_sub_ps(data_142ef1890, temp0_619), zmm3), data_142d3f640)
            zmm3 = _mm_rcp_ps(temp0_622)
            float temp0_624[0x4] = _mm_mul_ps(temp0_622, zmm3)
            zmm5 = _mm_and_ps(
                _mm_add_ps(_mm_mul_ps(_mm_sub_ps(data_142d3f6c0, temp0_624), zmm3), zmm0), zmm2)
            zmm0 = _mm_or_ps(_mm_andnot_ps(zmm2, zmm0), zmm5)
        
        zmm2 = *arg9
        uint32_t i_4 =
            _mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm0, _mm_shuffle_ps(zmm2, zmm2, 0), 1), zmm1))
        
        if (i_4 == 0)
            return 0
        
        uint64_t i_2 = zx.q(i_4)
        result = 0
        
        do
            uint64_t rdx_65
            
            if (i_2 == 0)
                rdx_65 = 0x40
                i_2 &= 0xfffffffffffffffe
                
                if ((result.b & 1) == 0)
                label_1400e6501:
                    uint128_t var_208 = zmm0
                    uint64_t rdx_66 = zx.q(rdx_65.d) & 3
                    *arg9 = (*(&var_208 + (rdx_66 << 2))).d
                    uint128_t var_1f8 = var_298_2
                    *arg8 = *(&var_1f8 + (rdx_66 << 2))
            else
                uint64_t rflags_2
                rdx_65, rflags_2 = _bit_scan_forward(i_2)
                i_2 &= not.q(1 << (rdx_65 u% 0x40))
                
                if ((result.b & 1) == 0)
                    goto label_1400e6501
            result.b = 1
        while (i_2 != 0)

return result
