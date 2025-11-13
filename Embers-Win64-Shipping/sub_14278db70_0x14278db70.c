// 函数: sub_14278db70
// 地址: 0x14278db70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int32_t r15 = 0
uint32_t arg_8 = 0
int128_t* result = arg2
void* rax
float zmm6[0x4]
rax, zmm6 = sub_141d3bad0()
sub_141d3d0f0(rax)
void* rax_1 = *(arg1 + 0x700)
void* rcx_1

if (rax_1 != 0)
    rcx_1 = **(rax_1 + 0x610)

int32_t rax_3

if (rax_1 == 0 || rcx_1 == 0)
    rax_3 = 0
else
    rax_3 = *(rcx_1 + 0x20)

float zmm0_1[0x4]

if (*(arg1 + 0x63c) == 0)
    zmm0_1 = _mm_cvtps_pd((*(arg1 + 0x6dc))[0].q)

if (*(arg1 + 0x63c) != 0 || zmm0_1[0].q f<= 1.0000000000000001e-05 || rax_3 s<= 0)
    void* rax_5 = *(arg1 + 0x520)
    
    if (rax_5 == 0)
        __builtin_memset(result, 0, 0x1c)
    else
        void* rcx_2 = *(rax_5 + 0xc0)
        
        if (rcx_2 == 0)
            __builtin_memset(result, 0, 0x1c)
        else if (sub_141d1e500(rcx_2) == 0)
            __builtin_memset(result, 0, 0x1c)
        else
            float zmm3[0x8]
            zmm3[0].o = *arg3
            uint128_t zmm1_1 = _mm_add_ps(zmm3[0].o, zmm3[0].o)
            float zmm4_1[0x4] = zmm3[0].o
            float var_48_1[0x4] = zmm6
            char var_168_1 = 0
            float zmm2_1[0x4] = _mm_shuffle_ps(zmm3[0].o, zmm3[0].o, 4)
            zmm3[0].o = _mm_shuffle_ps(zmm3[0].o, zmm3[0].o, 0xff)
            zmm4_1 = _mm_mul_ps(zmm4_1, zmm1_1)
            zmm2_1 = _mm_mul_ps(zmm2_1, _mm_shuffle_ps(zmm1_1, zmm1_1, 0x29))
            zmm1_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x12)
            zmm3[0].o = _mm_mul_ps(zmm3[0].o, zmm1_1)
            zmm1_1 = arg3[2]
            zmm0_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x1a)
            uint128_t zmm5_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xc9)
            zmm6 = zmm3[0].o
            zmm0_1 = _mm_add_ps(zmm0_1, _mm_shuffle_ps(zmm4_1, zmm4_1, 1))
            zmm4_1 = data_143f880a0
            zmm6 = _mm_add_ps(zmm6, zmm2_1)
            zmm2_1 = _mm_sub_ps(zmm2_1, zmm3[0].o)
            zmm3[0].o = zmm4_1
            zmm3[0].o = _mm_sub_ps(zmm3[0].o, zmm0_1)
            zmm6 = _mm_mul_ps(zmm6, zmm1_1)
            zmm5_1 = _mm_mul_ps(zmm5_1, zmm2_1)
            zmm3[0].o = _mm_mul_ps(zmm3[0].o, zmm1_1)
            zmm3[0].o = __andps_xmmxud_memxud(zmm3[0].o, data_143f880b0)
            zmm0_1 = _mm_shuffle_ps(zmm5_1, zmm3[0].o, 0x32)
            zmm1_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, zmm3[0].o, 0), zmm0_1, 0x82)
            zmm0_1 = _mm_shuffle_ps(zmm6, zmm3[0].o, 0x31)
            zmm2_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm5_1, zmm3[0].o, 0x10), zmm0_1, 0x88)
            zmm0_1 = arg3[1]
            void* rbx_1 = *(arg1 + 0x520)
            zmm4_1[0].q = zmm0_1 u>> 0x40
            float var_f8_1[0x4] = _mm_shuffle_ps(zmm0_1, zmm4_1, 0xc4)
            zmm0_1 = data_143dbb200
            int32_t var_128[0x4] = zmm1_1
            zmm1_1 = data_143dbb1fc
            float var_118_1[0x4] = zmm2_1
            zmm2_1 = data_143dbb1f8
            zmm6 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, zmm5_1, 0x12), zmm3[0].o, 0xe8)
            float var_16c_1 = zmm0_1[0]
            float var_178_1 = zmm0_1[0]
            float var_174_1 = zmm2_1[0]
            float var_170_1 = zmm1_1.d
            float var_180 = zmm2_1[0]
            float var_17c_1 = zmm1_1.d
            int64_t* r12_1 = *(rbx_1 + 0xc8)
            
            if (r12_1 != 0)
                r12_1[1].d += 1
                rbx_1 = *(arg1 + 0x520)
            
            int64_t* rax_7 = *(arg1 + 0x4a0)
            int64_t* arg_20 = rax_7
            int64_t* rbx_2
            
            if (rax_7 == 0)
                rbx_2 = *(rbx_1 + 0xc8)
                
                if (rbx_2 != 0)
                    rbx_2[1].d += 1
                
                r15 = 1
                arg_20 = *(rbx_1 + 0xc0) + 0x290
            else
                rbx_2 = arg_8.q
            
            if ((r15.b & 1) != 0)
                r15 &= 0xfffffffe
                
                if (rbx_2 != 0)
                    rbx_2[1].d -= 1
                    
                    if (rbx_2[1].d == 1)
                        (**rbx_2)(rbx_2)
                        int32_t rax_12 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (rax_12 == 1)
                            (*(*rbx_2 + 8))(rbx_2, 1)
            
            void* rax_14 = *(arg1 + 0x498)
            void* var_160_1 = rax_14
            int64_t* rbx_3
            
            if (rax_14 == 0)
                void* rax_15 = *(arg1 + 0x520)
                r15 |= 2
                rbx_3 = *(rax_15 + 0xc8)
                
                if (rbx_3 != 0)
                    rbx_3[1].d += 1
                
                var_160_1 = *(rax_15 + 0xc0) + 0x278
            else
                rbx_3 = arg_8.q
            
            if ((r15.b & 2) != 0)
                r15 &= 0xfffffffd
                
                if (rbx_3 != 0)
                    rbx_3[1].d -= 1
                    
                    if (rbx_3[1].d == 1)
                        (**rbx_3)(rbx_3)
                        int32_t rax_19 = *(rbx_3 + 0xc)
                        *(rbx_3 + 0xc) -= 1
                        
                        if (rax_19 == 1)
                            (*(*rbx_3 + 8))(rbx_3, 1)
            
            void* rax_21 = *(arg1 + 0x4f8)
            void* var_138_1 = rax_21
            int64_t* rbx_4
            
            if (rax_21 == 0)
                void* rax_22 = *(arg1 + 0x520)
                r15 |= 4
                rbx_4 = *(rax_22 + 0xc8)
                
                if (rbx_4 != 0)
                    rbx_4[1].d += 1
                
                var_138_1 = *(rax_22 + 0xc0) + 0xf8
            else
                rbx_4 = arg_8.q
            
            if ((r15.b & 4) != 0)
                r15 &= 0xfffffffb
                
                if (rbx_4 != 0)
                    rbx_4[1].d -= 1
                    
                    if (rbx_4[1].d == 1)
                        (**rbx_4)(rbx_4)
                        int32_t rax_26 = *(rbx_4 + 0xc)
                        *(rbx_4 + 0xc) -= 1
                        
                        if (rax_26 == 1)
                            (*(*rbx_4 + 8))(rbx_4, 1)
            
            void* rax_28 = *(arg1 + 0x510)
            void* var_188_1 = rax_28
            int64_t* rbx_5
            
            if (rax_28 == 0)
                void* rax_29 = *(arg1 + 0x520)
                r15 |= 8
                rbx_5 = *(rax_29 + 0xc8)
                
                if (rbx_5 != 0)
                    rbx_5[1].d += 1
                
                var_188_1 = *(rax_29 + 0xc0) + 0x128
            else
                rbx_5 = arg_8.q
            
            if ((r15.b & 8) != 0)
                r15 &= 0xfffffff7
                
                if (rbx_5 != 0)
                    rbx_5[1].d -= 1
                    
                    if (rbx_5[1].d == 1)
                        (**rbx_5)(rbx_5)
                        int32_t rax_33 = *(rbx_5 + 0xc)
                        *(rbx_5 + 0xc) -= 1
                        
                        if (rax_33 == 1)
                            (*(*rbx_5 + 8))(rbx_5, 1)
            
            uint32_t rax_36 = (*(*arg_20 + 0x48))(arg_20)
            float zmm0_2[0x4]
            float zmm1_2[0x4]
            float zmm2_2[0x4]
            float zmm3_1[0x4]
            float zmm4_2[0x4]
            
            if (*(arg1 + 0x6a0) == sub_141d1f690(*(*(arg1 + 0x520) + 0xc0), data_143f37078))
                sub_140369870(*(var_188_1 + 8), *(var_160_1 + 8), *(arg1 + 0x698), arg_20[1], 
                    zmm1_1, zmm3, &var_128, &var_180, rax_36)
            label_14278e3e1:
                float zmm6_1[0x4] = var_180
                zmm0_2 = var_16c_1
                zmm4_2 = var_178_1
                zmm3_1 = var_174_1
                zmm0_2[0] = zmm0_2[0] - zmm4_2[0]
                zmm2_2 = var_170_1
                zmm3_1[0] = zmm3_1[0] - zmm6_1[0]
                float zmm5_2[0x4] = var_17c_1
                zmm2_2[0] = zmm2_2[0] - zmm5_2[0]
                zmm0_2[0] = zmm0_2[0] * 0.5f
                zmm3_1[0] = zmm3_1[0] * 0.5f
                float var_150_1 = zmm0_2[0]
                zmm2_2[0] = zmm2_2[0] * 0.5f
                *(result + 0xc) = (_mm_unpacklo_ps(zmm3_1, zmm2_2[0].q)).q
                *(result + 0x14) = var_150_1
                zmm6_1[0] = zmm6_1[0] f+ *(result + 0xc)
                zmm5_2[0] = zmm5_2[0] f+ result[1].d
                zmm4_2[0] = zmm4_2[0] f+ *(result + 0x14)
                *result = (_mm_unpacklo_ps(zmm6_1, zmm5_2[0].q)).q
                *(result + 8) = zmm4_2[0]
                zmm0_2 = result[1].d
                zmm2_2 = *(result + 0xc)
                zmm1_2 = *(result + 0x14)
                zmm0_2[0] = zmm0_2[0] * zmm0_2[0]
                zmm2_2[0] = zmm2_2[0] * zmm2_2[0]
                zmm1_2[0] = zmm1_2[0] * zmm1_2[0]
                zmm2_2[0] = zmm2_2[0] + zmm0_2[0]
                zmm2_2[0] = zmm2_2[0] + zmm1_2[0]
                *(result + 0x18) = _mm_sqrt_ss(0, zmm2_2[0])[0]
            else
                int64_t* rax_38 = *(arg1 + 0x4f0)
                int64_t var_148 = 0
                int32_t var_140_1 = 0
                int64_t* var_188_2 = rax_38
                int64_t* rbx_7
                
                if (rax_38 == 0)
                    void* rax_39 = *(arg1 + 0x520)
                    r15 |= 0x10
                    rbx_7 = *(rax_39 + 0xc8)
                    
                    if (rbx_7 != 0)
                        rbx_7[1].d += 1
                    
                    var_188_2 = *(rax_39 + 0xc0) + 0xb0
                else
                    rbx_7 = rax_36.q
                
                if ((r15.b & 0x10) != 0 && rbx_7 != 0)
                    rbx_7[1].d -= 1
                    
                    if (rbx_7[1].d == 1)
                        (**rbx_7)(rbx_7)
                        int32_t rax_43 = *(rbx_7 + 0xc)
                        *(rbx_7 + 0xc) -= 1
                        
                        if (rax_43 == 1)
                            (*(*rbx_7 + 8))(rbx_7, 1)
                
                int32_t zmm7_1[0x4]
                float zmm8_1[0x4]
                float zmm9_1[0x4]
                float zmm10_1[0x4]
                zmm7_1, zmm8_1, zmm9_1, zmm10_1 = sub_141d17bb0(var_188_2, var_138_1, &var_148)
                
                if (var_140_1 != 0)
                    int64_t rax_45 = sx.q(rax_36)
                    
                    if (rax_45 s> 0)
                        int64_t r15_1 = 0
                        int32_t var_58_1[0x4] = zmm7_1
                        float var_68_1[0x4] = zmm8_1
                        float var_78_1[0x4] = zmm9_1
                        float var_88_1[0x4] = zmm10_1
                        
                        do
                            int64_t rdx_2 = sx.q(*(*(var_160_1 + 8) + (r15_1 << 2)))
                            void* rax_47 = *(arg1 + 0x520)
                            int64_t* rbx_8 = *(rax_47 + 0xc8)
                            
                            if (rbx_8 != 0)
                                rbx_8[1].d += 1
                            
                            uint32_t r8_2 = *(*(*(rax_47 + 0xc0) + 0x130) + (rdx_2 << 2))
                            
                            if (rbx_8 != 0)
                                rbx_8[1].d -= 1
                                
                                if (rbx_8[1].d == 1)
                                    (**rbx_8)(rbx_8)
                                    int32_t rax_51 = *(rbx_8 + 0xc)
                                    *(rbx_8 + 0xc) -= 1
                                    
                                    if (rax_51 == 1)
                                        (*(*rbx_8 + 8))(rbx_8, 1)
                            
                            if (r8_2 != 0xffffffff)
                                zmm7_1 = var_128
                                float (* rdx_4)[0x4] = (rdx_2 << 6) + var_148
                                zmm2_2 = *rdx_4
                                zmm4_2 = rdx_4[1]
                                zmm9_1 = rdx_4[2]
                                zmm10_1 = rdx_4[3]
                                zmm3_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
                                zmm0_2 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0)
                                zmm1_2 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
                                int128_t* rcx_25 = sx.q(rdi) * 0x1c + arg_20[1]
                                zmm2_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xff), var_f8_1)
                                zmm0_2 = _mm_mul_ps(zmm0_2, zmm7_1)
                                zmm1_2 = _mm_mul_ps(zmm1_2, zmm6)
                                zmm3_1 = _mm_add_ps(_mm_mul_ps(zmm3_1, var_118_1), zmm0_2)
                                zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(zmm4_2, zmm4_2, 0), zmm7_1)
                                zmm3_1 = _mm_add_ps(zmm3_1, zmm1_2)
                                zmm1_2 = _mm_mul_ps(_mm_shuffle_ps(zmm4_2, zmm4_2, 0xaa), zmm6)
                                zmm3_1 = _mm_add_ps(zmm3_1, zmm2_2)
                                zmm2_2 = _mm_mul_ps(_mm_shuffle_ps(zmm4_2, zmm4_2, 0x55), var_118_1)
                                zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xff)
                                float var_e8[0x4] = zmm3_1
                                zmm3_1 = _mm_shuffle_ps(zmm9_1, zmm9_1, 0)
                                zmm2_2 = _mm_add_ps(zmm2_2, zmm0_2)
                                zmm3_1 = _mm_mul_ps(zmm3_1, zmm7_1)
                                zmm4_2 = _mm_mul_ps(zmm4_2, var_f8_1)
                                zmm0_2 = _mm_shuffle_ps(zmm9_1, zmm9_1, 0x55)
                                zmm2_2 = _mm_add_ps(zmm2_2, zmm1_2)
                                zmm0_2 = _mm_mul_ps(zmm0_2, var_118_1)
                                zmm1_2 = _mm_mul_ps(_mm_shuffle_ps(zmm9_1, zmm9_1, 0xaa), zmm6)
                                zmm2_2 = _mm_add_ps(zmm2_2, zmm4_2)
                                zmm9_1 = _mm_shuffle_ps(zmm9_1, zmm9_1, 0xff)
                                zmm3_1 = _mm_add_ps(zmm3_1, zmm0_2)
                                zmm9_1 = _mm_mul_ps(zmm9_1, var_f8_1)
                                zmm0_2 = _mm_shuffle_ps(zmm10_1, zmm10_1, 0)
                                float var_d8_1[0x4] = zmm2_2
                                zmm2_2 = _mm_shuffle_ps(zmm10_1, zmm10_1, 0x55)
                                zmm3_1 = _mm_add_ps(zmm3_1, zmm1_2)
                                zmm2_2 = _mm_mul_ps(zmm2_2, var_118_1)
                                zmm1_2 = _mm_shuffle_ps(zmm10_1, zmm10_1, 0xaa)
                                zmm0_2 = _mm_mul_ps(zmm0_2, zmm7_1)
                                zmm1_2 = _mm_mul_ps(zmm1_2, zmm6)
                                zmm3_1 = _mm_add_ps(zmm3_1, zmm9_1)
                                zmm10_1 = _mm_shuffle_ps(zmm10_1, zmm10_1, 0xff)
                                zmm2_2 = _mm_add_ps(zmm2_2, zmm0_2)
                                zmm10_1 = _mm_mul_ps(zmm10_1, var_f8_1)
                                float var_c8_1[0x4] = zmm3_1
                                float var_b8_1[0x4] =
                                    _mm_add_ps(_mm_add_ps(zmm2_2, zmm1_2), zmm10_1)
                                uint64_t var_a8[0x4]
                                uint64_t* rax_55 = sub_140ae2b00(rcx_25, &var_a8, &var_e8)
                                
                                if (var_168_1 == 0)
                                    if (rax_55[3].b != 0)
                                        var_180.o = *rax_55
                                        var_170_1.q = rax_55[2]
                                        var_168_1.d = rax_55[3].d
                                else if (rax_55[3].b != 0)
                                    zmm1_2 = *rax_55
                                    
                                    if (not(var_180[0] <= zmm1_2[0]))
                                        var_180 = zmm1_2[0]
                                    
                                    zmm1_2 = *(rax_55 + 4)
                                    
                                    if (not(var_17c_1[0] <= zmm1_2[0]))
                                        var_17c_1 = zmm1_2[0]
                                    
                                    zmm1_2 = rax_55[1].d
                                    
                                    if (not(var_178_1[0] <= zmm1_2[0]))
                                        var_178_1 = zmm1_2[0]
                                    
                                    zmm1_2 = *(rax_55 + 0xc)
                                    
                                    if (not(var_174_1[0] >= zmm1_2[0]))
                                        var_174_1 = zmm1_2[0]
                                    
                                    zmm1_2 = rax_55[2].d
                                    
                                    if (not(var_170_1[0] >= zmm1_2[0]))
                                        var_170_1 = zmm1_2[0]
                                    
                                    zmm1_2 = *(rax_55 + 0x14)
                                    
                                    if (not(var_16c_1[0] >= zmm1_2[0]))
                                        var_16c_1 = zmm1_2[0]
                            
                            rdi += 1
                            r15_1 += 1
                        while (r15_1 s< rax_45)
                        
                        result = arg2
                    
                    int64_t rcx_26 = var_148
                    
                    if (rcx_26 != 0)
                        sub_140a74f90(rcx_26)
                    
                    goto label_14278e3e1
                
                int64_t rcx_21 = var_148
                __builtin_memset(result, 0, 0x1c)
                
                if (rcx_21 != 0)
                    sub_140a74f90(rcx_21)
            
            if (r12_1 != 0)
                r12_1[1].d -= 1
                
                if (r12_1[1].d == 1)
                    (**r12_1)(r12_1)
                    int32_t r14_1 = *(r12_1 + 0xc)
                    *(r12_1 + 0xc) -= 1
                    
                    if (r14_1 == 1)
                        (*(*r12_1 + 8))(r12_1, zx.q(r14_1))
else
    *result = *(arg1 + 0x6c4)
    result[1].q = *(arg1 + 0x6d4)
    *(result + 0x18) = *(arg1 + 0x6dc)

return result
