// 函数: sub_1425de700
// 地址: 0x1425de700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = sx.q(arg2)
void* rsi = arg1

if (r14.d == *(arg1 + 0x30) && arg7 == 0)
    return 

int64_t* r15_1 = *(arg1 + 0x20)
int64_t rax = &r15_1[sx.q(*(arg1 + 0x28)) * 0x3e]
int64_t* var_290_1 = r15_1
int64_t var_198_1 = rax

if (r15_1 != rax)
    int64_t r8 = r14
    float zmm6[0x4]
    float var_58_1[0x4] = zmm6
    float zmm7[0x4]
    float var_68_1[0x4] = zmm7
    float zmm8[0x4]
    float var_78_1[0x4] = zmm8
    float zmm9[0x4]
    float var_88_1[0x4] = zmm9
    float zmm10[0x4]
    float var_98_1[0x4] = zmm10
    float zmm11[0x4]
    float var_a8_1[0x4] = zmm11
    float zmm12[0x4]
    float var_b8_1[0x4] = zmm12
    float zmm13[0x4]
    float var_c8_1[0x4] = zmm13
    float zmm14[0x4]
    float var_d8_1[0x4] = zmm14
    float zmm15[0x4]
    float var_e8_1[0x4] = zmm15
    
    do
        void* rax_3 = *r15_1
        uint64_t r12_1 = 0
        uint64_t var_230_1 = 0
        uint64_t var_200 = 0
        int64_t rbx_1 = sx.q(*(rax_3 + 0xe0))
        int64_t rdi_1 = *(rax_3 + 0xd8)
        int32_t var_1f8_1 = rbx_1.d
        
        if (rbx_1.d != 0)
            sub_140638750(&var_200, rbx_1.d, 0)
            r12_1 = var_200
            var_230_1 = r12_1
            memcpy(r12_1, rdi_1, (rbx_1 << 2).d)
            rbx_1 = zx.q(var_1f8_1)
            r8 = sx.q(r14.d)
        else
            int32_t var_1f4_1 = 0
        
        if (r14.d s< 0 || r14.d s>= rbx_1.d)
            rax = sx.q(r15_1[0xc].d)
        label_1425e0161:
            
            if (rax.d != 0xffffffff)
                int64_t* rcx_75 = *(rsi + 0x18)
                int64_t r8_19 = *rcx_75
                (*(r8_19 + 0x10))(rcx_75, *((rax << 6) + r15_1[0x26] + 8), r8_19)
            
            r15_1[0xc].d = 0xffffffff
        label_1425de8b8:
            
            if (r12_1 != 0)
                sub_140a74f90(r12_1)
        else
            int64_t rax_4 = sx.q(*(rsi + 0x30))
            char var_2b8_1
            int32_t var_2b0_1
            
            if (rax_4.d s< 0 || rax_4.d s>= rbx_1.d || *(r12_1 + (rax_4 << 2)) == 0xffffffff)
                var_2b8_1 = 0
                var_2b0_1 = 0xffffffff
            else
                var_2b0_1 = *(r12_1 + (rax_4 << 2))
                var_2b8_1 = 1
            
            int32_t rdi_2 = -1
            int32_t i = r14.d
            int32_t var_2a8_1 = 0xffffffff
            int64_t rax_5 = r8
            
            do
                if (*(r12_1 + (rax_5 << 2)) != 0xffffffff)
                    rdi_2 = *(r12_1 + (rax_5 << 2))
                    var_2a8_1 = rdi_2
                    break
                
                i += 1
                rax_5 += 1
            while (i s< rbx_1.d)
            
            rax = sx.q(r15_1[0xc].d)
            
            if (rdi_2 == rax.d)
                goto label_1425de8b8
            
            if (rdi_2 s< 0 || rdi_2 s>= r15_1[0x27].d)
                goto label_1425e0161
            
            int64_t r13_1 = r15_1[0x26]
            int64_t r14_2 = sx.q(rdi_2) << 6
            int64_t* rcx_3 = *(r14_2 + r13_1 + 8)
            int32_t i_15 = (*(*rcx_3 + 0x20))(rcx_3)
            int64_t* rcx_4 = *(r14_2 + r13_1 + 8)
            int64_t i_9 = sx.q(i_15)
            int64_t r8_3 = *rcx_4
            void var_120
            void* var_240_1 = (*(*(r8_3 + 0x40))(rcx_4, &var_120, r8_3))[0].q
            int64_t var_110
            int64_t var_f8
            int32_t var_f0
            var_f8(sx.q(var_f0) + var_110)
            int64_t* rcx_7 = *(r14_2 + r13_1 + 8)
            float var_288[0x4]
            int64_t var_1a8_1 = (*(*(*rcx_7 + 0x50))(rcx_7, &var_288))[0].q
            int64_t var_278
            int64_t var_260
            int32_t var_258
            var_260(sx.q(var_258) + var_278)
            int64_t* rcx_10 = *(r14_2 + r13_1 + 8)
            int64_t* var_2a0
            (*(*rcx_10 + 0x270))(rcx_10, &var_2a0)
            int32_t var_2d8
            int64_t* var_2d0
            int64_t* var_2c8
            int32_t var_2c0
            uint32_t var_270
            int32_t var_254
            int32_t var_250
            float zmm0[0x4]
            float zmm1[0x4]
            float zmm2[0x4]
            float zmm3[0x4]
            
            if (var_2b8_1 == 0 || arg6 != 0)
                if (rdi_2 s< r15_1[0x27].d)
                    int64_t* rcx_38 = *(arg1 + 0x18)
                    (*(*rcx_38 + 8))(rcx_38, *(r14_2 + r13_1 + 8))
                    void* r9_4 = *r15_1
                    void* rbx_6 = arg4
                    int64_t rax_86 = sx.q(*(r9_4 + 0x108))
                    
                    if (*(rbx_6 + 8) s<= rax_86.d)
                        int64_t rcx_59 = 0
                        
                        if (i_9 s>= 4)
                            void* rdx_36 = var_240_1 + 0x18
                            void* r8_16 = *(r14_2 + r13_1 + 0x10) - var_240_1
                            void* r9_10 = var_1a8_1 - var_240_1
                            int64_t i_14 = ((i_9 - 4) u>> 2) + 1
                            int64_t rax_110 = i_14 << 2
                            int64_t i_1
                            
                            do
                                int64_t* rcx_60 = -0x18 - var_240_1 + rdx_36
                                *(rdx_36 - 0x18) = *(r8_16 + rdx_36 - 0x18)
                                *(rdx_36 - 0x14) = *(r8_16 + rdx_36 - 0x14)
                                *(rdx_36 - 0x10) = *(r8_16 + rdx_36 - 0x10)
                                *(rdx_36 - 0xc) = *(r8_16 + rdx_36 - 0xc)
                                *(r9_10 + rdx_36 - 0x18) = *(r8_16 + rdx_36 - 0x18)
                                *(r9_10 + rdx_36 - 0x14) = *(r8_16 + rdx_36 - 0x14)
                                *(r9_10 + rdx_36 - 0x10) = *(r8_16 + rdx_36 - 0x10)
                                *(r9_10 + rdx_36 - 0xc) = *(r8_16 + rdx_36 - 0xc)
                                int64_t* rax_119 = var_2a0
                                *(rcx_60 + rax_119) = 0
                                *(rcx_60 + rax_119 + 8) = 0
                                *(rdx_36 - 8) = *(r8_16 + rdx_36 - 8)
                                *(rdx_36 - 4) = *(r8_16 + rdx_36 - 4)
                                *rdx_36 = *(r8_16 + rdx_36)
                                *(rdx_36 + 4) = *(r8_16 + rdx_36 + 4)
                                *(r9_10 + rdx_36 - 8) = *(r8_16 + rdx_36 - 8)
                                *(r9_10 + rdx_36 - 4) = *(r8_16 + rdx_36 - 4)
                                *(r9_10 + rdx_36) = *(r8_16 + rdx_36)
                                *(r9_10 + rdx_36 + 4) = *(r8_16 + rdx_36 + 4)
                                int64_t* rax_128 = var_2a0
                                *(rcx_60 + rax_128 + 0x10) = 0
                                *(rcx_60 + rax_128 + 0x18) = 0
                                *(rdx_36 + 8) = *(r8_16 + rdx_36 + 8)
                                *(rdx_36 + 0xc) = *(r8_16 + rdx_36 + 0xc)
                                *(rdx_36 + 0x10) = *(r8_16 + rdx_36 + 0x10)
                                *(rdx_36 + 0x14) = *(r8_16 + rdx_36 + 0x14)
                                *(r9_10 + rdx_36 + 8) = *(r8_16 + rdx_36 + 8)
                                *(r9_10 + rdx_36 + 0xc) = *(r8_16 + rdx_36 + 0xc)
                                *(r9_10 + rdx_36 + 0x10) = *(r8_16 + rdx_36 + 0x10)
                                *(r9_10 + rdx_36 + 0x14) = *(r8_16 + rdx_36 + 0x14)
                                void* rcx_62 = var_2a0 + 8 - var_240_1
                                *(rcx_62 + rdx_36) = 0
                                *(rcx_62 + rdx_36 + 8) = 0
                                *(rdx_36 + 0x18) = *(r8_16 + rdx_36 + 0x18)
                                *(rdx_36 + 0x1c) = *(r8_16 + rdx_36 + 0x1c)
                                *(rdx_36 + 0x20) = *(r8_16 + rdx_36 + 0x20)
                                *(rdx_36 + 0x24) = *(r8_16 + rdx_36 + 0x24)
                                *(r9_10 + rdx_36 + 0x18) = *(r8_16 + rdx_36 + 0x18)
                                *(r9_10 + rdx_36 + 0x1c) = *(r8_16 + rdx_36 + 0x1c)
                                *(r9_10 + rdx_36 + 0x20) = *(r8_16 + rdx_36 + 0x20)
                                *(r9_10 + rdx_36 + 0x24) = *(r8_16 + rdx_36 + 0x24)
                                void* rcx_64 = var_2a0 + 0x18 - var_240_1
                                *(rcx_64 + rdx_36) = 0
                                *(rcx_64 + rdx_36 + 8) = 0
                                rdx_36 += 0x40
                                i_1 = i_14
                                i_14 -= 1
                            while (i_1 != 1)
                            r15_1 = var_290_1
                            r12_1 = var_230_1
                            rcx_59 = rax_110
                        
                        if (rcx_59 s< i_9)
                            void* r8_18 = *(r14_2 + r13_1 + 0x10) - var_240_1
                            void* rdx_38 = var_240_1 + 8 + (rcx_59 << 4)
                            void* r10_8 = var_1a8_1 - var_240_1
                            int64_t i_12 = i_9 - rcx_59
                            int64_t i_2
                            
                            do
                                *(rdx_38 - 8) = *(r8_18 + rdx_38 - 8)
                                *(rdx_38 - 4) = *(r8_18 + rdx_38 - 4)
                                *rdx_38 = *(r8_18 + rdx_38)
                                *(rdx_38 + 4) = *(r8_18 + rdx_38 + 4)
                                *(r10_8 + rdx_38 - 8) = *(r8_18 + rdx_38 - 8)
                                *(r10_8 + rdx_38 - 4) = *(r8_18 + rdx_38 - 4)
                                *(r10_8 + rdx_38) = *(r8_18 + rdx_38)
                                *(r10_8 + rdx_38 + 4) = *(r8_18 + rdx_38 + 4)
                                rdx_38 += 0x10
                                void* rcx_66 = var_2a0 + -8 - var_240_1
                                *(rcx_66 + rdx_38 - 0x10) = 0
                                *(rcx_66 + rdx_38 - 8) = 0
                                i_2 = i_12
                                i_12 -= 1
                            while (i_2 != 1)
                    else
                        var_2c0 = 0
                        int64_t var_1b8
                        var_2c8 = &var_1b8
                        int64_t* rdx_27 = sx.q(rdi_2) * 0x158 + *(r9_4 + 0xc8)
                        int128_t* r8_11 = rax_86 * 0x30 + *rbx_6
                        int64_t var_228
                        var_2d0 = &var_228
                        var_228 = 0
                        int32_t rax_88 = arg5[1].d
                        int64_t r9_6 = *arg5
                        int64_t var_220_1 = 0
                        var_1b8 = 0
                        int64_t var_1b0_1 = 0
                        var_2d8 = rax_88
                        sub_1425cf960(r9_4 + 0xf8, rdx_27, r8_11, r9_6, var_2d8, var_2d0)
                        int64_t rcx_41 = 0
                        
                        if (i_9 s>= 4)
                            void* r8_12 = var_240_1 + 0x18
                            void* r10_6 = var_1a8_1 - var_240_1
                            int32_t* r9_7 = nullptr
                            int64_t i_8 = ((i_9 - 4) u>> 2) + 1
                            var_2b0_1.q = i_8 << 2
                            int64_t i_3
                            
                            do
                                zmm0 = *(r8_12 - 0xc)
                                int64_t rdx_28 = r8_12 + -0x18 - var_240_1
                                int64_t rcx_42 = var_228
                                zmm1 = *(r9_7 + rcx_42 + 4)
                                zmm2 = *(r9_7 + rcx_42 + 8)
                                *(r8_12 - 0x18) = *(r9_7 + rcx_42)
                                *(r8_12 - 0x14) = zmm1[0]
                                *(r8_12 - 0x10) = zmm2[0]
                                *(r8_12 - 0xc) = zmm0[0]
                                zmm1 = *(r9_7 + rcx_42 + 4)
                                zmm2 = *(r9_7 + rcx_42 + 8)
                                zmm0 = *(r10_6 + r8_12 - 0xc)
                                *(r10_6 + r8_12 - 0x18) = *(r9_7 + rcx_42)
                                *(r10_6 + r8_12 - 0x14) = zmm1[0]
                                *(r10_6 + r8_12 - 0x10) = zmm2[0]
                                *(r10_6 + r8_12 - 0xc) = zmm0[0]
                                int64_t* rax_94 = var_2a0
                                *(rax_94 + rdx_28) = 0
                                *(rax_94 + rdx_28 + 8) = 0
                                zmm0 = *(r8_12 + 4)
                                int64_t rcx_43 = var_228
                                zmm1 = *(r9_7 + rcx_43 + 0x10)
                                zmm2 = *(r9_7 + rcx_43 + 0x14)
                                *(r8_12 - 8) = *(r9_7 + rcx_43 + 0xc)
                                *(r8_12 - 4) = zmm1[0]
                                *r8_12 = zmm2[0]
                                *(r8_12 + 4) = zmm0[0]
                                zmm1 = *(r9_7 + rcx_43 + 0x10)
                                zmm2 = *(r9_7 + rcx_43 + 0x14)
                                zmm0 = *(r10_6 + r8_12 + 4)
                                *(r10_6 + r8_12 - 8) = *(r9_7 + rcx_43 + 0xc)
                                *(r10_6 + r8_12 - 4) = zmm1[0]
                                *(r10_6 + r8_12) = zmm2[0]
                                *(r10_6 + r8_12 + 4) = zmm0[0]
                                int64_t* rax_97 = var_2a0
                                *(rax_97 + rdx_28 + 0x10) = 0
                                *(rax_97 + rdx_28 + 0x18) = 0
                                zmm0 = *(r8_12 + 0x14)
                                int64_t rcx_44 = var_228
                                zmm1 = *(rcx_44 + r9_7 + 0x1c)
                                zmm2 = *(rcx_44 + r9_7 + 0x20)
                                *(r8_12 + 8) = *(rcx_44 + r9_7 + 0x18)
                                *(r8_12 + 0xc) = zmm1[0]
                                *(r8_12 + 0x10) = zmm2[0]
                                *(r8_12 + 0x14) = zmm0[0]
                                zmm1 = *(rcx_44 + r9_7 + 0x1c)
                                zmm2 = *(rcx_44 + r9_7 + 0x20)
                                zmm0 = *(r8_12 + r10_6 + 0x14)
                                *(r8_12 + r10_6 + 8) = *(rcx_44 + r9_7 + 0x18)
                                *(r8_12 + r10_6 + 0xc) = zmm1[0]
                                *(r8_12 + r10_6 + 0x10) = zmm2[0]
                                *(r8_12 + r10_6 + 0x14) = zmm0[0]
                                void* rcx_46 = var_2a0 + 8 - var_240_1
                                *(rcx_46 + r8_12) = 0
                                *(rcx_46 + r8_12 + 8) = 0
                                zmm0 = *(r8_12 + 0x24)
                                int64_t rax_100 = var_228
                                zmm2 = *(rax_100 + r9_7 + 0x28)
                                zmm3 = *(rax_100 + r9_7 + 0x2c)
                                *(r8_12 + 0x18) = (*(rax_100 + r9_7 + 0x24))[0]
                                *(r8_12 + 0x1c) = zmm2[0]
                                *(r8_12 + 0x20) = zmm3[0]
                                *(r8_12 + 0x24) = zmm0[0]
                                zmm2 = *(rax_100 + r9_7 + 0x28)
                                zmm3 = *(rax_100 + r9_7 + 0x2c)
                                zmm0 = *(r8_12 + r10_6 + 0x24)
                                *(r8_12 + r10_6 + 0x18) = (*(rax_100 + r9_7 + 0x24))[0]
                                *(r8_12 + r10_6 + 0x1c) = zmm2[0]
                                *(r8_12 + r10_6 + 0x20) = zmm3[0]
                                *(r8_12 + r10_6 + 0x24) = zmm0[0]
                                r8_12 += 0x40
                                r9_7 = &r9_7[0xc]
                                void* rcx_48 = var_2a0 + 0x18 - var_240_1
                                *(rcx_48 + r8_12 - 0x40) = 0
                                *(rcx_48 + r8_12 - 0x38) = 0
                                i_3 = i_8
                                i_8 -= 1
                            while (i_3 != 1)
                            r12_1 = var_230_1
                            rcx_41 = var_2b0_1.q
                            rbx_6 = arg4
                        
                        if (rcx_41 s< i_9)
                            int64_t r8_14 = rcx_41 * 0xc
                            void* rdx_30 = var_240_1 + 0xc + (rcx_41 << 4)
                            void* r11_6 = var_1a8_1 - var_240_1
                            int64_t i_11 = i_9 - rcx_41
                            int64_t i_4
                            
                            do
                                zmm2 = *rdx_30
                                rdx_30 += 0x10
                                int64_t rcx_49 = var_228
                                r8_14 += 0xc
                                zmm0 = *(rcx_49 + r8_14 - 8)
                                zmm1 = *(rcx_49 + r8_14 - 4)
                                *(rdx_30 - 0x1c) = *(rcx_49 + r8_14 - 0xc)
                                *(rdx_30 - 0x18) = zmm0[0]
                                *(rdx_30 - 0x14) = zmm1[0]
                                *(rdx_30 - 0x10) = zmm2[0]
                                zmm1 = *(rcx_49 + r8_14 - 8)
                                zmm2 = *(rcx_49 + r8_14 - 4)
                                zmm0 = *(r11_6 + rdx_30 - 0x10)
                                *(r11_6 + rdx_30 - 0x1c) = *(rcx_49 + r8_14 - 0xc)
                                *(r11_6 + rdx_30 - 0x18) = zmm1[0]
                                *(r11_6 + rdx_30 - 0x14) = zmm2[0]
                                *(r11_6 + rdx_30 - 0x10) = zmm0[0]
                                void* rcx_51 = var_2a0 + -0xc - var_240_1
                                *(rcx_51 + rdx_30 - 0x10) = 0
                                *(rcx_51 + rdx_30 - 8) = 0
                                i_4 = i_11
                                i_11 -= 1
                            while (i_4 != 1)
                        
                        zmm13 = arg3[2]
                        float (* rdx_33)[0x4] = sx.q(*(*r15_1 + 0x108)) * 0x30 + *rbx_6
                        zmm15 = rdx_33[2]
                        float zmm4_3[0x4]
                        float zmm5_3[0x4]
                        
                        if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm15, zmm13), data_143f709e0, 
                                1)) == 0)
                            zmm4_3 = *arg3
                            zmm2 = *rdx_33
                            zmm3 = rdx_33[1]
                            zmm0 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0)
                            zmm6 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), zmm0)
                            zmm1 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0x55)
                            zmm3 = _mm_mul_ps(zmm3, zmm13)
                            zmm6 = __mulps_xmmps_memps(zmm6, data_143f70980)
                            zmm5_3 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xff)
                            zmm6 = _mm_add_ps(zmm6, _mm_mul_ps(zmm2, zmm5_3))
                            zmm1 = _mm_mul_ps(zmm1, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
                            zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm4_3, zmm4_3, 0xaa), 
                                _mm_shuffle_ps(zmm2, zmm2, 0xb1))
                            zmm1 = __mulps_xmmps_memps(zmm1, data_143f70970)
                            zmm2 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xd2)
                            zmm0 = __mulps_xmmps_memps(zmm0, data_143f70960)
                            zmm6 = _mm_add_ps(zmm6, zmm1)
                            zmm4_3 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xc9)
                            zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xd2), zmm4_3)
                            zmm6 = _mm_add_ps(zmm6, zmm0)
                            zmm1 =
                                _mm_sub_ps(zmm1, _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xc9), zmm2))
                            zmm1 = _mm_add_ps(zmm1, zmm1)
                            zmm5_3 = _mm_mul_ps(zmm5_3, zmm1)
                            zmm7 = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0xd2), zmm4_3)
                            zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
                            zmm5_3 = _mm_add_ps(zmm5_3, zmm3)
                            zmm7 = __addps_xmmps_memps(
                                _mm_add_ps(_mm_sub_ps(zmm7, _mm_mul_ps(zmm0, zmm2)), zmm5_3), 
                                arg3[1])
                        else
                            zmm1 = *arg3
                            zmm11 = data_143f70990
                            zmm9 = arg3[1]
                            zmm3 = _mm_add_ps(zmm1, zmm1)
                            zmm5_3 = _mm_shuffle_ps(zmm13, zmm13, 0xc9)
                            zmm0 = _mm_shuffle_ps(zmm1, zmm1, 4)
                            zmm4_3 = _mm_mul_ps(zmm3, zmm1)
                            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x29), zmm0)
                            zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xff)
                            zmm0 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0x1a)
                            zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x12), zmm1)
                            zmm0 = _mm_add_ps(zmm0, _mm_shuffle_ps(zmm4_3, zmm4_3, 1))
                            zmm12 = _mm_add_ps(zmm3, zmm2)
                            zmm2 = _mm_sub_ps(zmm2, zmm3)
                            zmm1 = _mm_sub_ps(zmm11, zmm0)
                            zmm12 = _mm_mul_ps(zmm12, zmm13)
                            zmm5_3 = _mm_mul_ps(zmm5_3, zmm2)
                            zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(zmm1, zmm13), data_143f709a0)
                            zmm0 = _mm_shuffle_ps(zmm5_3, zmm1, 0x32)
                            zmm10 = _mm_shuffle_ps(_mm_shuffle_ps(zmm12, zmm1, 0), zmm0, 0x82)
                            zmm0 = _mm_shuffle_ps(zmm12, zmm1, 0x31)
                            zmm8 = _mm_shuffle_ps(_mm_shuffle_ps(zmm5_3, zmm1, 0x10), zmm0, 0x88)
                            zmm12 = _mm_shuffle_ps(_mm_shuffle_ps(zmm12, zmm5_3, 0x12), zmm1, 0xe8)
                            zmm1 = *rdx_33
                            zmm11[0].q = zmm9 u>> 0x40
                            zmm3 = _mm_add_ps(zmm1, zmm1)
                            zmm9 = _mm_shuffle_ps(zmm9, zmm11, 0xc4)
                            zmm5_3 = _mm_shuffle_ps(zmm15, zmm15, 0xc9)
                            zmm0 = _mm_shuffle_ps(zmm1, zmm1, 4)
                            zmm4_3 = _mm_mul_ps(zmm3, zmm1)
                            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x29), zmm0)
                            zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xff)
                            zmm0 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0x1a)
                            zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x12), zmm1)
                            zmm0 = _mm_add_ps(zmm0, _mm_shuffle_ps(zmm4_3, zmm4_3, 1))
                            zmm7 = _mm_add_ps(zmm3, zmm2)
                            zmm2 = _mm_sub_ps(zmm2, zmm3)
                            zmm1 = _mm_sub_ps(zmm11, zmm0)
                            zmm7 = _mm_mul_ps(zmm7, zmm15)
                            zmm5_3 = _mm_mul_ps(zmm5_3, zmm2)
                            zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(zmm1, zmm15), data_143f709a0)
                            zmm0 = _mm_shuffle_ps(zmm5_3, zmm1, 0x32)
                            zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm7, zmm1, 0), zmm0, 0x82)
                            zmm4_3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm5_3, zmm1, 0x10), 
                                _mm_shuffle_ps(zmm7, zmm1, 0x31), 0x88)
                            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x55), zmm8)
                            zmm7 = _mm_shuffle_ps(zmm7, zmm5_3, 0x12)
                            zmm5_3 = rdx_33[1]
                            zmm7 = _mm_shuffle_ps(zmm7, zmm1, 0xe8)
                            zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xaa), zmm12)
                            zmm11[0].q = zmm5_3 u>> 0x40
                            zmm5_3 = _mm_shuffle_ps(zmm5_3, zmm11, 0xc4)
                            zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0)
                            zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), zmm9)
                            zmm2 = _mm_add_ps(zmm2, _mm_mul_ps(zmm0, zmm10))
                            zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm4_3, zmm4_3, 0), zmm10)
                            zmm2 = _mm_add_ps(zmm2, zmm1)
                            zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm4_3, zmm4_3, 0xaa), zmm12)
                            zmm2 = _mm_add_ps(zmm2, zmm3)
                            zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm4_3, zmm4_3, 0x55), zmm8)
                            zmm4_3 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xff)
                            var_288 = zmm2
                            zmm2 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
                            zmm3 = _mm_add_ps(zmm3, zmm0)
                            zmm2 = _mm_mul_ps(zmm2, zmm8)
                            zmm4_3 = _mm_mul_ps(zmm4_3, zmm9)
                            zmm0 = _mm_shuffle_ps(zmm7, zmm7, 0)
                            zmm3 = _mm_add_ps(zmm3, zmm1)
                            zmm0 = _mm_mul_ps(zmm0, zmm10)
                            zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0xaa), zmm12)
                            zmm3 = _mm_add_ps(zmm3, zmm4_3)
                            zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0xff)
                            zmm2 = _mm_add_ps(zmm2, zmm0)
                            zmm7 = _mm_mul_ps(zmm7, zmm9)
                            zmm0 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0)
                            var_278.o = zmm3
                            zmm3 = _mm_shuffle_ps(zmm5_3, zmm5_3, 0x55)
                            zmm2 = _mm_add_ps(zmm2, zmm1)
                            zmm3 = _mm_mul_ps(zmm3, zmm8)
                            zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm5_3, zmm5_3, 0xaa), zmm12)
                            zmm0 = _mm_mul_ps(zmm0, zmm10)
                            zmm2 = _mm_add_ps(zmm2, zmm7)
                            zmm5_3 = _mm_mul_ps(_mm_shuffle_ps(zmm5_3, zmm5_3, 0xff), zmm9)
                            zmm3 = _mm_add_ps(zmm3, zmm0)
                            int64_t var_268_2 = zmm2[0].q
                            var_258.o = _mm_add_ps(_mm_add_ps(zmm3, zmm1), zmm5_3)
                            zmm11, zmm13, zmm14, zmm15 = sub_1407740e0(&var_288, 0x322bcc77)
                            float zmm2_2[0x4] = var_288[0]
                            float zmm1_2 = var_288[1]
                            zmm14 = _mm_and_ps(_mm_cmpeq_ps(zmm14, _mm_mul_ps(zmm13, zmm15), 2), 
                                data_143f709d0 ^ zmm11) ^ data_143f709d0
                            zmm2_2[0] = zmm2_2[0] * zmm14[0]
                            zmm1_2 = zmm1_2 * zmm14[0]
                            uint32_t zmm0_2[0x4] = var_288[2]
                            zmm0_2[0] = zmm0_2[0] f* zmm14[0]
                            var_288[0] = zmm2_2[0]
                            zmm2_2 = _mm_shuffle_ps(zmm14, zmm14, 0x55)
                            var_288[2] = zmm0_2[0]
                            zmm0_2 = var_270
                            zmm0_2[0] = zmm0_2[0] f* zmm2_2[0]
                            var_288[1] = zmm1_2
                            zmm1_2 = var_278:4.d * zmm2_2[0]
                            float zmm3_2 = var_278.d * zmm2_2[0]
                            zmm2_2 = var_268_2.d
                            var_270 = zmm0_2[0]
                            zmm0_2 = var_260.d
                            var_278:4.d = zmm1_2
                            zmm14 = _mm_shuffle_ps(zmm14, zmm14, 0xaa)
                            zmm0_2[0] = zmm0_2[0] f* zmm14[0]
                            zmm2_2[0] = zmm2_2[0] * zmm14[0]
                            zmm1_2 = var_268_2:4.d * zmm14[0]
                            var_260.d = zmm0_2[0]
                            var_278.d = zmm3_2
                            var_268_2.d = zmm2_2[0]
                            var_268_2:4.d = zmm1_2
                            uint32_t var_178[0x4]
                            sub_14077e4a0(&var_178, &var_288)
                            float zmm5_4[0x4] = var_178
                            zmm6 = data_143f709c0
                            zmm1 = _mm_mul_ps(zmm5_4, zmm5_4)
                            var_2b0_1 = 0x322bcc77
                            zmm1 = _mm_add_ps(zmm1, _mm_shuffle_ps(zmm1, zmm1, 0x4e))
                            float zmm4_4[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0x39), zmm1)
                            zmm1 = _mm_rsqrt_ps(zmm4_4)
                            zmm3 = _mm_mul_ps(zmm4_4, zmm6)
                            zmm2 = _mm_add_ps(
                                _mm_mul_ps(
                                    _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(zmm1, zmm1), zmm3)), 
                                    zmm1), 
                                zmm1)
                            zmm1 = zx.o(0)
                            zmm6 = _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(zmm2, zmm2), zmm3))
                            zmm0 =
                                _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_4, 2)
                            zmm6 = _mm_add_ps(_mm_mul_ps(zmm6, zmm2), zmm2)
                            zmm2 = _mm_unpacklo_ps(var_254, 0)
                            zmm6 = _mm_and_ps(_mm_mul_ps(zmm6, zmm5_4) ^ data_143f709b0, zmm0)
                                ^ data_143f709b0
                            zmm7 =
                                _mm_unpacklo_ps(_mm_unpacklo_ps(var_258, var_250[0].q), zmm2[0].q)
                            var_178 = zmm6
                        int64_t* rcx_55 = *(r14_2 + r13_1 + 8)
                        float var_1e4 = zmm7[0]
                        float var_1e0_1 = _mm_shuffle_ps(zmm7, zmm7, 0x55)[0]
                        float var_1dc_1 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)[0]
                        (*(*rcx_55 + 0x60))(rcx_55, zmm1, zmm2, zmm3)
                        int64_t* rcx_56 = *(r14_2 + r13_1 + 8)
                        float var_1c8 = zmm6[0]
                        zmm0 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                        zmm1 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                        float var_1c4_1 = zmm0[0]
                        float var_1c0_1 = zmm1[0]
                        float var_1bc_1 = _mm_shuffle_ps(zmm6, zmm6, 0xff)[0]
                        (*(*rcx_56 + 0x68))(rcx_56, &var_1c8)
                        int64_t rcx_57 = var_1b8
                        
                        if (rcx_57 != 0)
                            sub_140a74f90(rcx_57)
                        
                        int64_t rcx_58 = var_228
                        
                        if (rcx_58 != 0)
                            sub_140a74f90(rcx_58)
                    
                    goto label_1425e0005
                
                rax = 0xffffffff
            else
                int64_t rbx_2 = r15_1[0x26]
                int64_t rdi_4 = sx.q(var_2b0_1) << 6
                int64_t* rcx_11 = *(rdi_4 + rbx_2 + 8)
                (*(*rcx_11 + 0x20))(rcx_11)
                int64_t* rcx_12 = *(rdi_4 + rbx_2 + 8)
                float var_158[0x4]
                (*(*rcx_12 + 0x38))(rcx_12, &var_158)
                float var_218[0x4] = var_158
                int64_t var_148
                int64_t var_130
                int32_t var_128
                var_130(sx.q(var_128) + var_148)
                int64_t* rcx_16 = *(arg1 + 0x18)
                (*(*rcx_16 + 0x10))(rcx_16, *(rdi_4 + r15_1[0x26] + 8))
                int64_t* rcx_17 = *(rdi_4 + rbx_2 + 8)
                int64_t var_168
                (*(*rcx_17 + 0x270))(rcx_17, &var_168)
                int64_t* rcx_18 = *(arg1 + 0x18)
                (*(*rcx_18 + 8))(rcx_18, *(r14_2 + r15_1[0x26] + 8))
                int64_t rcx_19 = sx.q(var_2a8_1)
                int32_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(var_2b0_1 - rcx_19.d)
                
                if ((temp1_1 ^ temp0_1) - temp0_1 != 1)
                    int64_t r9_1 = 0
                    
                    if (i_9 s>= 4)
                        void* rdx_17 = var_240_1 + 0x18
                        void* r8_7 = *(r14_2 + r13_1 + 0x10) - var_240_1
                        void* r9_3 = var_1a8_1 - var_240_1
                        int64_t i_13 = ((i_9 - 4) u>> 2) + 1
                        int64_t rax_32 = i_13 << 2
                        int64_t i_5
                        
                        do
                            int64_t rcx_26 = -0x18 - var_240_1 + rdx_17
                            *(rdx_17 - 0x18) = *(r8_7 + rdx_17 - 0x18)
                            *(rdx_17 - 0x14) = *(r8_7 + rdx_17 - 0x14)
                            *(rdx_17 - 0x10) = *(r8_7 + rdx_17 - 0x10)
                            *(rdx_17 - 0xc) = *(r8_7 + rdx_17 - 0xc)
                            *(r9_3 + rdx_17 - 0x18) = *(r8_7 + rdx_17 - 0x18)
                            *(r9_3 + rdx_17 - 0x14) = *(r8_7 + rdx_17 - 0x14)
                            *(r9_3 + rdx_17 - 0x10) = *(r8_7 + rdx_17 - 0x10)
                            *(r9_3 + rdx_17 - 0xc) = *(r8_7 + rdx_17 - 0xc)
                            int64_t* rax_41 = var_2a0
                            *(rax_41 + rcx_26) = 0
                            *(rax_41 + rcx_26 + 8) = 0
                            *(rdx_17 - 8) = *(r8_7 + rdx_17 - 8)
                            *(rdx_17 - 4) = *(r8_7 + rdx_17 - 4)
                            *rdx_17 = *(r8_7 + rdx_17)
                            *(rdx_17 + 4) = *(r8_7 + rdx_17 + 4)
                            *(r9_3 + rdx_17 - 8) = *(r8_7 + rdx_17 - 8)
                            *(r9_3 + rdx_17 - 4) = *(r8_7 + rdx_17 - 4)
                            *(r9_3 + rdx_17) = *(r8_7 + rdx_17)
                            *(r9_3 + rdx_17 + 4) = *(r8_7 + rdx_17 + 4)
                            int64_t* rax_50 = var_2a0
                            *(rax_50 + rcx_26 + 0x10) = 0
                            *(rax_50 + rcx_26 + 0x18) = 0
                            *(rdx_17 + 8) = *(r8_7 + rdx_17 + 8)
                            *(rdx_17 + 0xc) = *(r8_7 + rdx_17 + 0xc)
                            *(rdx_17 + 0x10) = *(r8_7 + rdx_17 + 0x10)
                            *(rdx_17 + 0x14) = *(r8_7 + rdx_17 + 0x14)
                            *(r9_3 + rdx_17 + 8) = *(r8_7 + rdx_17 + 8)
                            *(r9_3 + rdx_17 + 0xc) = *(r8_7 + rdx_17 + 0xc)
                            *(r9_3 + rdx_17 + 0x10) = *(r8_7 + rdx_17 + 0x10)
                            *(r9_3 + rdx_17 + 0x14) = *(r8_7 + rdx_17 + 0x14)
                            void* rcx_28 = var_2a0 + 8 - var_240_1
                            *(rcx_28 + rdx_17) = 0
                            *(rcx_28 + rdx_17 + 8) = 0
                            *(rdx_17 + 0x18) = *(r8_7 + rdx_17 + 0x18)
                            *(rdx_17 + 0x1c) = *(r8_7 + rdx_17 + 0x1c)
                            *(rdx_17 + 0x20) = *(r8_7 + rdx_17 + 0x20)
                            *(rdx_17 + 0x24) = *(r8_7 + rdx_17 + 0x24)
                            *(r9_3 + rdx_17 + 0x18) = *(r8_7 + rdx_17 + 0x18)
                            *(r9_3 + rdx_17 + 0x1c) = *(r8_7 + rdx_17 + 0x1c)
                            *(r9_3 + rdx_17 + 0x20) = *(r8_7 + rdx_17 + 0x20)
                            *(r9_3 + rdx_17 + 0x24) = *(r8_7 + rdx_17 + 0x24)
                            void* rcx_30 = var_2a0 + 0x18 - var_240_1
                            *(rcx_30 + rdx_17) = 0
                            *(rcx_30 + rdx_17 + 8) = 0
                            rdx_17 += 0x40
                            i_5 = i_13
                            i_13 -= 1
                        while (i_5 != 1)
                        r15_1 = var_290_1
                        r12_1 = var_230_1
                        r9_1 = rax_32
                    
                    if (r9_1 s< i_9)
                        void* rdx_19 = *(r14_2 + r13_1 + 0x10) - var_240_1
                        void* rcx_32 = var_240_1 + 8 + (r9_1 << 4)
                        void* r10_4 = var_1a8_1 - var_240_1
                        int64_t i_10 = i_9 - r9_1
                        int64_t i_6
                        
                        do
                            *(rcx_32 - 8) = *(rcx_32 + rdx_19 - 8)
                            *(rcx_32 - 4) = *(rcx_32 + rdx_19 - 4)
                            *rcx_32 = *(rcx_32 + rdx_19)
                            *(rcx_32 + 4) = *(rcx_32 + rdx_19 + 4)
                            *(r10_4 + rcx_32 - 8) = *(rcx_32 + rdx_19 - 8)
                            *(r10_4 + rcx_32 - 4) = *(rcx_32 + rdx_19 - 4)
                            *(r10_4 + rcx_32) = *(rcx_32 + rdx_19)
                            *(rcx_32 + r10_4 + 4) = *(rcx_32 + rdx_19 + 4)
                            void* rax_78 = -8 - var_240_1 + rcx_32 + var_2a0
                            rcx_32 += 0x10
                            *rax_78 = 0
                            *(rax_78 + 8) = 0
                            i_6 = i_10
                            i_10 -= 1
                        while (i_6 != 1)
                else if (i_9 s> 0)
                    int64_t r12_2 = var_218[0].q
                    void* const rdx_13 = 0x138
                    
                    if (var_2b0_1 s>= rcx_19.d)
                        rdx_13 = 0x148
                    
                    int64_t r15_2 = 0
                    int128_t* r14_3 = *(rdx_13 + rcx_19 * 0x158 + *(*r15_1 + 0xc8))
                    int128_t* rdi_5 = var_240_1 + 0xc
                    var_2b0_1.q = var_1a8_1 - var_240_1
                    int64_t i_7
                    
                    do
                        int64_t r9 = var_290_1[0x30]
                        zmm14 = *(r14_3 + r15_2)
                        zmm11 = *(r14_3 + r15_2 + 4)
                        zmm12 = *(r14_3 + r15_2 + 8)
                        zmm2 = *(r14_3 + r15_2 + 0xc)
                        uint64_t rdx_15 = zx.q(*(r14_3 + r15_2 + 0x30))
                        uint64_t rcx_24 = zx.q(*(r14_3 + r15_2 + 0x32))
                        uint64_t rax_25 = zx.q(*(r14_3 + r15_2 + 0x34))
                        uint64_t rbx_4 = zx.q(rdx_15.d) * 2
                        uint64_t r11_2 = zx.q(rcx_24.d) * 2
                        uint64_t r8_5 = rdx_15 * 3
                        uint64_t r10_2 = zx.q(rax_25.d) * 2
                        uint64_t rdx_16 = rcx_24 * 3
                        zmm14[0] = zmm14[0] f* *(r12_2 + (rbx_4 << 3))
                        uint64_t rcx_25 = rax_25 * 3
                        int64_t rax_26 = var_168
                        zmm11[0] = zmm11[0] f* *(r12_2 + (r11_2 << 3))
                        zmm13 = *(r9 + (rcx_25 << 2))
                        zmm13[0] = zmm13[0] f+ *(r9 + (rdx_16 << 2))
                        zmm10 = *(r9 + (rcx_25 << 2) + 4)
                        zmm10[0] = zmm10[0] f+ *(r9 + (rdx_16 << 2) + 4)
                        zmm9 = *(r9 + (rcx_25 << 2) + 8)
                        zmm9[0] = zmm9[0] f+ *(r9 + (rdx_16 << 2) + 8)
                        zmm13[0] = zmm13[0] f+ *(r9 + (r8_5 << 2))
                        zmm14[0] = zmm14[0] f* *(rax_26 + (rbx_4 << 3))
                        zmm10[0] = zmm10[0] f+ *(r9 + (r8_5 << 2) + 4)
                        zmm9[0] = zmm9[0] f+ *(r9 + (r8_5 << 2) + 8)
                        zmm14[0] = zmm14[0] f* *(rax_26 + (rbx_4 << 3) + 4)
                        zmm14[0] = zmm14[0] f* *(rax_26 + (rbx_4 << 3) + 8)
                        zmm12[0] = zmm12[0] f* *(rax_26 + (r10_2 << 3))
                        zmm12[0] = zmm12[0] f* *(rax_26 + (r10_2 << 3) + 4)
                        zmm12[0] = zmm12[0] f* *(rax_26 + (r10_2 << 3) + 8)
                        zmm13[0] = zmm13[0] * zmm2[0]
                        zmm10[0] = zmm10[0] * zmm2[0]
                        zmm13[0] = zmm13[0] + zmm14[0]
                        zmm9[0] = zmm9[0] * zmm2[0]
                        zmm12[0] = zmm12[0] f* *(r12_2 + (r10_2 << 3))
                        zmm11[0] = zmm11[0] f* *(rax_26 + (r11_2 << 3) + 8)
                        zmm13[0] = zmm13[0] + zmm11[0]
                        zmm11[0] = zmm11[0] f* *(r12_2 + (r11_2 << 3) + 4)
                        zmm13[0] = zmm13[0] + zmm12[0]
                        zmm14[0] = zmm14[0] f* *(r12_2 + (rbx_4 << 3) + 4)
                        zmm14[0] = zmm14[0] + zmm11[0]
                        zmm10[0] = zmm10[0] + zmm14[0]
                        zmm12[0] = zmm12[0] f* *(r12_2 + (r10_2 << 3) + 4)
                        zmm10[0] = zmm10[0] + zmm11[0]
                        zmm11[0] = zmm11[0] f* *(r12_2 + (r11_2 << 3) + 8)
                        zmm10[0] = zmm10[0] + zmm12[0]
                        zmm14[0] = zmm14[0] f* *(r12_2 + (rbx_4 << 3) + 8)
                        zmm14[0] = zmm14[0] f* *(rax_26 + (rbx_4 << 3) + 0xc)
                        zmm9[0] = zmm9[0] + zmm14[0]
                        zmm12[0] = zmm12[0] f* *(r12_2 + (r10_2 << 3) + 8)
                        zmm12[0] = zmm12[0] f* *(rax_26 + (r10_2 << 3) + 0xc)
                        zmm9[0] = zmm9[0] + zmm11[0]
                        zmm11[0] = zmm11[0] f* *(rax_26 + (r11_2 << 3) + 4)
                        zmm9[0] = zmm9[0] + zmm12[0]
                        zmm11[0] = zmm11[0] f* *(rax_26 + (r11_2 << 3))
                        zmm14[0] = zmm14[0] + zmm11[0]
                        zmm11[0] = zmm11[0] f* *(rax_26 + (r11_2 << 3) + 0xc)
                        zmm14[0] = zmm14[0] + zmm11[0]
                        zmm0 = *rdi_5
                        zmm14[0] = zmm14[0] + zmm11[0]
                        int32_t* rax_27 = var_2b0_1.q
                        zmm14[0] = zmm14[0] + zmm12[0]
                        *(rdi_5 - 0xc) = zmm13[0]
                        zmm14[0] = zmm14[0] + zmm12[0]
                        *(rdi_5 - 8) = zmm10[0]
                        zmm14[0] = zmm14[0] + zmm12[0]
                        *(rdi_5 - 4) = zmm9[0]
                        r15_2 += 0x40
                        *rdi_5 = zmm0[0]
                        zmm14[0] = zmm14[0] + zmm12[0]
                        *(rax_27 + rdi_5 - 0xc) = zmm13[0]
                        *(rax_27 + rdi_5 - 8) = zmm10[0]
                        *(rax_27 + rdi_5 - 4) = zmm9[0]
                        *(rax_27 + rdi_5) = zmm0[0]
                        void* rax_29 = -0xc - var_240_1 + rdi_5
                        rdi_5 = &rdi_5[1]
                        void* rax_30 = rax_29 + var_2a0
                        *rax_30 = zmm14[0]
                        *(rax_30 + 4) = zmm14[0]
                        *(rax_30 + 8) = zmm14[0]
                        *(rax_30 + 0xc) = zmm14[0]
                        i_7 = i_9
                        i_9 -= 1
                    while (i_7 != 1)
                    r15_1 = var_290_1
                    r12_1 = var_230_1
                
                int128_t* rsi_1 = arg3
                zmm13 = rsi_1[2]
                float (* rdx_22)[0x4] = sx.q(*(*r15_1 + 0x108)) * 0x30 + *arg4
                zmm15 = rdx_22[2]
                float zmm4_1[0x4]
                float zmm5_1[0x4]
                
                if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm15, zmm13), data_143f709e0, 1)) == 0)
                    zmm4_1 = *rsi_1
                    zmm2 = *rdx_22
                    zmm3 = rdx_22[1]
                    zmm0 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0)
                    zmm6 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), zmm0)
                    zmm1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
                    zmm3 = _mm_mul_ps(zmm3, zmm13)
                    zmm6 = __mulps_xmmps_memps(zmm6, data_143f70980)
                    zmm5_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
                    zmm6 = _mm_add_ps(zmm6, _mm_mul_ps(zmm2, zmm5_1))
                    zmm1 = _mm_mul_ps(zmm1, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
                    zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa), 
                        _mm_shuffle_ps(zmm2, zmm2, 0xb1))
                    zmm1 = __mulps_xmmps_memps(zmm1, data_143f70970)
                    zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0xd2)
                    zmm0 = __mulps_xmmps_memps(zmm0, data_143f70960)
                    zmm6 = _mm_add_ps(zmm6, zmm1)
                    zmm1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xd2)
                    zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xc9)
                    zmm2 = _mm_mul_ps(zmm2, zmm4_1)
                    zmm6 = _mm_add_ps(zmm6, zmm0)
                    zmm2 = _mm_sub_ps(zmm2, _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xc9), zmm1))
                    zmm2 = _mm_add_ps(zmm2, zmm2)
                    zmm7 = _mm_shuffle_ps(zmm2, zmm2, 0xd2)
                    zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
                    zmm7 = _mm_mul_ps(zmm7, zmm4_1)
                    zmm0 = _mm_mul_ps(zmm0, zmm1)
                    zmm2 = _mm_mul_ps(zmm2, zmm5_1)
                    zmm7 = _mm_sub_ps(zmm7, zmm0)
                    zmm2 = _mm_add_ps(zmm2, zmm3)
                    zmm7 = __addps_xmmps_memps(_mm_add_ps(zmm7, zmm2), rsi_1[1])
                else
                    zmm3 = *rsi_1
                    zmm11 = data_143f70990
                    zmm9 = rsi_1[1]
                    zmm1 = _mm_add_ps(zmm3, zmm3)
                    zmm4_1 = zmm3
                    zmm5_1 = _mm_shuffle_ps(zmm13, zmm13, 0xc9)
                    zmm2 = _mm_shuffle_ps(zmm3, zmm3, 4)
                    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xff)
                    zmm4_1 = _mm_mul_ps(zmm4_1, zmm1)
                    zmm2 = _mm_mul_ps(zmm2, _mm_shuffle_ps(zmm1, zmm1, 0x29))
                    zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0x12)
                    zmm0 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x1a)
                    zmm3 = _mm_mul_ps(zmm3, zmm1)
                    zmm0 = _mm_add_ps(zmm0, _mm_shuffle_ps(zmm4_1, zmm4_1, 1))
                    zmm12 = _mm_add_ps(zmm3, zmm2)
                    zmm2 = _mm_sub_ps(zmm2, zmm3)
                    zmm3 = *rdx_22
                    zmm1 = _mm_sub_ps(zmm11, zmm0)
                    zmm4_1 = zmm3
                    zmm12 = _mm_mul_ps(zmm12, zmm13)
                    zmm5_1 = _mm_mul_ps(zmm5_1, zmm2)
                    zmm1 = _mm_mul_ps(zmm1, zmm13)
                    zmm2 = _mm_shuffle_ps(zmm3, zmm3, 4)
                    zmm1 = __andps_xmmxud_memxud(zmm1, data_143f709a0)
                    zmm0 = _mm_shuffle_ps(zmm5_1, zmm1, 0x32)
                    zmm10 = _mm_shuffle_ps(_mm_shuffle_ps(zmm12, zmm1, 0), zmm0, 0x82)
                    zmm0 = _mm_shuffle_ps(zmm12, zmm1, 0x31)
                    zmm8 = _mm_shuffle_ps(_mm_shuffle_ps(zmm5_1, zmm1, 0x10), zmm0, 0x88)
                    zmm12 = _mm_shuffle_ps(_mm_shuffle_ps(zmm12, zmm5_1, 0x12), zmm1, 0xe8)
                    zmm1 = _mm_add_ps(zmm3, zmm3)
                    zmm11[0].q = zmm9 u>> 0x40
                    zmm9 = _mm_shuffle_ps(zmm9, zmm11, 0xc4)
                    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xff)
                    zmm5_1 = _mm_shuffle_ps(zmm15, zmm15, 0xc9)
                    zmm4_1 = _mm_mul_ps(zmm4_1, zmm1)
                    zmm2 = _mm_mul_ps(zmm2, _mm_shuffle_ps(zmm1, zmm1, 0x29))
                    zmm3 = _mm_mul_ps(zmm3, _mm_shuffle_ps(zmm1, zmm1, 0x12))
                    zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0x1a), 
                        _mm_shuffle_ps(zmm4_1, zmm4_1, 1))
                    zmm7 = _mm_add_ps(zmm3, zmm2)
                    zmm2 = _mm_sub_ps(zmm2, zmm3)
                    zmm1 = _mm_sub_ps(zmm11, zmm0)
                    zmm7 = _mm_mul_ps(zmm7, zmm15)
                    zmm5_1 = _mm_mul_ps(zmm5_1, zmm2)
                    zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(zmm1, zmm15), data_143f709a0)
                    zmm0 = _mm_shuffle_ps(zmm5_1, zmm1, 0x32)
                    zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm7, zmm1, 0), zmm0, 0x82)
                    zmm4_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm5_1, zmm1, 0x10), 
                        _mm_shuffle_ps(zmm7, zmm1, 0x31), 0x88)
                    zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x55), zmm8)
                    zmm7 = _mm_shuffle_ps(zmm7, zmm5_1, 0x12)
                    zmm5_1 = rdx_22[1]
                    zmm7 = _mm_shuffle_ps(zmm7, zmm1, 0xe8)
                    zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xaa), zmm12)
                    zmm11[0].q = zmm5_1 u>> 0x40
                    zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm11, 0xc4)
                    zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0)
                    zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), zmm9)
                    zmm2 = _mm_add_ps(zmm2, _mm_mul_ps(zmm0, zmm10))
                    zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0), zmm10)
                    zmm2 = _mm_add_ps(zmm2, zmm1)
                    zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa), zmm12)
                    zmm2 = _mm_add_ps(zmm2, zmm3)
                    zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0x55), zmm8)
                    zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
                    var_288 = zmm2
                    zmm2 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
                    zmm3 = _mm_add_ps(zmm3, zmm0)
                    zmm2 = _mm_mul_ps(zmm2, zmm8)
                    zmm4_1 = _mm_mul_ps(zmm4_1, zmm9)
                    zmm0 = _mm_shuffle_ps(zmm7, zmm7, 0)
                    zmm3 = _mm_add_ps(zmm3, zmm1)
                    zmm0 = _mm_mul_ps(zmm0, zmm10)
                    zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0xaa), zmm12)
                    zmm3 = _mm_add_ps(zmm3, zmm4_1)
                    zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0xff)
                    zmm2 = _mm_add_ps(zmm2, zmm0)
                    zmm7 = _mm_mul_ps(zmm7, zmm9)
                    zmm0 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0)
                    var_278.o = zmm3
                    zmm3 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55)
                    zmm2 = _mm_add_ps(zmm2, zmm1)
                    zmm3 = _mm_mul_ps(zmm3, zmm8)
                    zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa), zmm12)
                    zmm0 = _mm_mul_ps(zmm0, zmm10)
                    zmm2 = _mm_add_ps(zmm2, zmm7)
                    zmm5_1 = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xff), zmm9)
                    zmm3 = _mm_add_ps(zmm3, zmm0)
                    int64_t var_268_1 = zmm2[0].q
                    var_258.o = _mm_add_ps(_mm_add_ps(zmm3, zmm1), zmm5_1)
                    zmm11, zmm13, zmm14, zmm15 = sub_1407740e0(&var_288, 0x322bcc77)
                    float zmm2_1[0x4] = var_288[0]
                    float zmm1_1 = var_288[1]
                    zmm14 = _mm_and_ps(_mm_cmpeq_ps(zmm14, _mm_mul_ps(zmm13, zmm15), 2), 
                        data_143f709d0 ^ zmm11) ^ data_143f709d0
                    zmm2_1[0] = zmm2_1[0] * zmm14[0]
                    zmm1_1 = zmm1_1 * zmm14[0]
                    uint32_t zmm0_1[0x4] = var_288[2]
                    zmm0_1[0] = zmm0_1[0] f* zmm14[0]
                    var_288[0] = zmm2_1[0]
                    zmm2_1 = _mm_shuffle_ps(zmm14, zmm14, 0x55)
                    var_288[2] = zmm0_1[0]
                    zmm0_1 = var_270
                    zmm0_1[0] = zmm0_1[0] f* zmm2_1[0]
                    var_288[1] = zmm1_1
                    zmm1_1 = var_278:4.d * zmm2_1[0]
                    float zmm3_1 = var_278.d * zmm2_1[0]
                    zmm2_1 = var_268_1.d
                    var_270 = zmm0_1[0]
                    zmm0_1 = var_260.d
                    var_278:4.d = zmm1_1
                    zmm14 = _mm_shuffle_ps(zmm14, zmm14, 0xaa)
                    zmm0_1[0] = zmm0_1[0] f* zmm14[0]
                    zmm2_1[0] = zmm2_1[0] * zmm14[0]
                    zmm1_1 = var_268_1:4.d * zmm14[0]
                    var_260.d = zmm0_1[0]
                    var_278.d = zmm3_1
                    var_268_1.d = zmm2_1[0]
                    var_268_1:4.d = zmm1_1
                    uint32_t var_188[0x4]
                    sub_14077e4a0(&var_188, &var_288)
                    uint32_t zmm5_2[0x4] = var_188
                    zmm6 = data_143f709c0
                    zmm1 = _mm_mul_ps(zmm5_2, zmm5_2)
                    var_2b0_1 = 0x322bcc77
                    zmm1 = _mm_add_ps(zmm1, _mm_shuffle_ps(zmm1, zmm1, 0x4e))
                    float zmm4_2[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0x39), zmm1)
                    zmm1 = _mm_rsqrt_ps(zmm4_2)
                    zmm3 = _mm_mul_ps(zmm4_2, zmm6)
                    zmm2 = _mm_add_ps(
                        _mm_mul_ps(_mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(zmm1, zmm1), zmm3)), 
                            zmm1), 
                        zmm1)
                    zmm1 = zx.o(0)
                    zmm6 = _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(zmm2, zmm2), zmm3))
                    zmm0 = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_2, 2)
                    zmm6 = _mm_add_ps(_mm_mul_ps(zmm6, zmm2), zmm2)
                    zmm2 = _mm_unpacklo_ps(var_254, 0)
                    zmm6 =
                        _mm_and_ps(_mm_mul_ps(zmm6, zmm5_2) ^ data_143f709b0, zmm0) ^ data_143f709b0
                    zmm7 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_258, var_250[0].q), zmm2[0].q)
                    var_188 = zmm6
                int64_t* rcx_36 = *(r14_2 + r13_1 + 8)
                float var_1f0 = zmm7[0]
                float var_1ec_1 = _mm_shuffle_ps(zmm7, zmm7, 0x55)[0]
                float var_1e8_1 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)[0]
                (*(*rcx_36 + 0x60))(rcx_36, zmm1, zmm2, zmm3, var_2d8, var_2d0, var_2c8, var_2c0, 
                    var_2b8_1, var_2b0_1, var_2a8_1)
                int64_t* rcx_37 = *(r14_2 + r13_1 + 8)
                float var_1d8 = zmm6[0]
                zmm0 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                zmm1 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                float var_1d4_1 = zmm0[0]
                float var_1d0_1 = zmm1[0]
                float var_1cc_1 = _mm_shuffle_ps(zmm6, zmm6, 0xff)[0]
                (*(*rcx_37 + 0x68))(rcx_37, &var_1d8)
            label_1425e0005:
                int64_t* rcx_67 = *(r14_2 + r13_1 + 8)
                (*(*rcx_67 + 0x80))(rcx_67)
                int64_t* rcx_68 = *(r14_2 + r13_1 + 8)
                var_218 = zx.o(0)
                int64_t rdi_9 = *rcx_68
                (*(rdi_9 + 0x150))(rcx_68, &var_218, 0, zx.q((*(rdi_9 + 0x158))(rcx_68)), var_2d8, 
                    var_2d0, var_2c8, var_2c0, var_2b8_1, var_2b0_1, var_2a8_1)
                int64_t* rcx_70 = *(r14_2 + r13_1 + 8)
                var_218 = zx.o(0)
                int64_t rdi_10 = *rcx_70
                (*(rdi_10 + 0x170))(rcx_70, &var_218, 0, zx.q((*(rdi_10 + 0x178))(rcx_70)))
                int64_t* rcx_72 = *(r14_2 + r13_1 + 8)
                (*(*rcx_72 + 0x218))(rcx_72)
                int64_t* rcx_73 = *(r14_2 + r13_1 + 8)
                (*(*rcx_73 + 0x258))(rcx_73)
                rax = zx.q(var_2a8_1)
            r15_1[0xc].d = rax.d
            
            if (r12_1 != 0)
                sub_140a74f90(r12_1)
            
            r14 = zx.q(arg2)
            rsi = arg1
        
        r15_1 = &r15_1[0x3e]
        r8 = sx.q(r14.d)
        var_290_1 = r15_1
    while (r15_1 != var_198_1)

*(rsi + 0x30) = r14.d
