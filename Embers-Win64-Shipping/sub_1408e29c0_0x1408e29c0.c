// 函数: sub_1408e29c0
// 地址: 0x1408e29c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t** rdi = *(arg1 + 0x168)
int64_t result = sx.q(*(arg1 + 0x170))
int64_t** var_90 = rdi
void* rbx = &rdi[result]
void* var_118 = rbx

if (rdi != rbx)
    uint64_t rsi
    uint64_t var_28_1 = rsi
    int64_t r12
    int64_t var_30_1 = r12
    int128_t zmm6 = 0x3f000000
    
    do
        int64_t* rdi_1 = *rdi
        
        if (rdi_1 != 0)
            result = (*(*rdi_1 + 0x20))(rdi_1, *(arg1 + 0x158), zx.q(*(arg1 + 0x15c)))
            
            if (*(result + 0x10) != 0)
                int32_t var_f8
                int32_t* var_148_1 = &var_f8
                int32_t var_128
                float arg_18
                (*(*rdi_1 + 0x28))(rdi_1, *(arg1 + 0x158), zx.q(*(arg1 + 0x15c)), 
                    zx.q(*(arg1 + 0x15d)), var_148_1, &var_128, &arg_18)
                float zmm1 = rdi_1[5].d
                rsi.b = 0
                int64_t zmm2 = arg_18
                int32_t rdx_1 = rdi_1[4].d
                rbx.b = 0
                int32_t r9_2 = var_f8
                r12.b = 0
                int32_t rcx_2 = *(rdi_1 + 0x24)
                int32_t r11_1 = var_128
                rdi_1[5].d = zmm2.d
                char arg_10 = 0
                
                if (rdx_1 != r9_2 || rcx_2 != r11_1)
                    int64_t r8_3 = rdi_1[2]
                    int64_t r10_1 = *(*rdi_1 + 0x10)
                    
                    if (rcx_2 != r9_2)
                        if (r10_1(rdi_1, zx.q(r9_2), r8_3) == 0)
                            rdi_1[4].d = 0xffffffff
                            rbx.b = 1
                        else
                            sub_14086c240(rdi_1[3] + 0x90, rdi_1[2] + 0x90)
                            
                            if ((*(*rdi_1 + 0x10))(rdi_1, zx.q(var_128), rdi_1[3]) == 0)
                                *(rdi_1 + 0x24) = 0xffffffff
                                rbx.b = 1
                                arg_10 = 0
                            else
                                rsi.b = 1
                                rdi_1[4].d = var_f8
                                *(rdi_1 + 0x24) = var_128
                                arg_10 = 1
                    else
                        int64_t rax_3 = rdi_1[3]
                        rdi_1[4].d = rcx_2
                        *(rdi_1 + 0x24) = rdx_1
                        rdi_1[2] = rax_3
                        rdi_1[3] = r8_3
                        
                        if (r10_1(rdi_1, zx.q(r11_1), r8_3, r9_2) == 0)
                            *(rdi_1 + 0x24) = 0xffffffff
                            rbx.b = 1
                        else
                            rsi.b = 1
                            *(rdi_1 + 0x24) = var_128
                    
                    rdx_1 = rdi_1[4].d
                    r12.b = 1
                
                result = (*(*rdi_1 + 0x18))(rdi_1, rdx_1, zx.q(*(rdi_1 + 0x24)))
                int64_t* rdx_7 = rdi_1[2]
                char arg_8
                
                if (*(rdx_7 + 0xa4) == 0)
                    arg_8 = 0
                else
                    void* r8_6 = rdi_1[3]
                    
                    if (*(r8_6 + 0xa4) == 0 || rdx_7[1].d != rdx_7[0xb].d)
                        arg_8 = 0
                    else
                        arg_8 = 1
                        
                        if (*(r8_6 + 8) != *(r8_6 + 0x58))
                            arg_8 = 0
                
                if (result.b == 0 || rbx.b != 0)
                label_1408e3c4c:
                    
                    if (r12.b != 0 || int.d(zmm2.d * 2f f+ zmm6.d) s>> 1
                            != int.d(zmm1 + zmm1 f+ zmm6.d) s>> 1 || rsi.b != 0 || rbx.b != 0)
                        int64_t* rbx_14
                        
                        if ((int.d(arg_18 * 2f f+ zmm6.d) & 0xfffffffe) != 0)
                            rbx_14 = rdi_1[3]
                        
                        if ((int.d(arg_18 * 2f f+ zmm6.d) & 0xfffffffe) == 0 || rbx_14[1].d s<= 0)
                            rsi = zx.q(rdi_1[4].d)
                            rbx_14 = rdx_7
                        else
                            rsi = zx.q(*(rdi_1 + 0x24))
                        
                        if (rbx_14[0x14].b != 0)
                            var_148_1.d = 1
                            sub_1408e9120(&rdi_1[0x13], rbx_14[4], rbx_14[5].d << 2, 1, var_148_1.d)
                        
                        if (*(rbx_14 + 0xa1) != 0)
                            var_148_1.d = 1
                            sub_1408e9120(&rdi_1[0x17], rbx_14[6], rbx_14[7].d << 2, 1, 1)
                        
                        if (*(rbx_14 + 0xa7) == 0)
                            sub_1408e8650(&rdi_1[0x23], &rbx_14[0x12])
                        
                        if (*(rbx_14 + 0xa2) != 0)
                            var_148_1.d = 1
                            sub_1408e9120(&rdi_1[0x1b], rbx_14[2], rbx_14[3].d << 3, 1, 1)
                        
                        if (*(rbx_14 + 0xa3) != 0)
                            var_148_1.d = 1
                            sub_1408e9120(&rdi_1[0x1f], rbx_14[8], rbx_14[9].d << 2, 1, 1)
                        
                        int64_t r9_9 = *rdi_1
                        char rax_146 = (*(r9_9 + 0x18))(rdi_1, 
                            zx.q(*(rdi_1 + ((zx.q(rdi_1[0x12].d) & 1) << 2) + 0x80)), zx.q(rsi.d), 
                            r9_9, var_148_1)
                        
                        if (arg_8 != 0)
                            rdi_1[0x12].d = 0
                            sub_1408e9120(&rdi_1[8], *rbx_14, rbx_14[1].d * 0xc, 1, 1)
                            zmm6 =
                                sub_1408e9120(&rdi_1[0xc], rbx_14[0xa], rbx_14[0xb].d * 0xc, 1, 1)
                            rdi_1[0x10].d = rsi.d
                            *(rdi_1 + 0x84) = 0xffffffff
                            rdi_1[0x11].d = *(arg1 + 0x158)
                            result = zx.q(*(arg1 + 0x158))
                            *(rdi_1 + 0x8c) = result.d
                        else
                            int32_t rcx_146 = rdi_1[0x12].d
                            
                            if (rcx_146 == 0xffffffff || rax_146 == 0 || arg_10 != 0)
                                sub_1408e9120(&rdi_1[8], *rbx_14, rbx_14[1].d * 0xc, 1, 1)
                                result, zmm6 =
                                    sub_1408e9120(&rdi_1[0xc], *rbx_14, rbx_14[1].d * 0xc, 1, 1)
                                rdi_1[0x12].d = 0
                                rdi_1[0x10].d = rsi.d
                                *(rdi_1 + 0x84) = rsi.d
                            else
                                rdi_1[0x12].d = rcx_146 + 1
                                zmm6 = sub_1408e9120(&rdi_1[((zx.q(rcx_146 + 1) & 1) + 2) * 4], 
                                    *rbx_14, rbx_14[1].d * 0xc, 1, 1)
                                result = zx.q(rdi_1[0x12].d) & 1
                                *(rdi_1 + (result << 2) + 0x80) = rsi.d
                else
                    result = data_143cec028
                    
                    if (*(result + 4) == 0)
                        goto label_1408e3c4c
                    
                    result = zx.q(rdi_1[0x12].d) & 1
                    
                    if (not((*(arg1 + 0x158))[0] f== *(rdi_1 + (result << 2) + 0x88)))
                        int64_t i_16 = sx.q(rdx_7[1].d)
                        uint64_t var_f0 = 0
                        uint64_t r12_1 = 0
                        int32_t var_e4_1 = 0
                        int64_t result_1 = 0
                        int32_t var_94_1 = 0
                        int64_t var_b0 = 0
                        int32_t var_a4_1 = 0
                        int64_t var_c0 = 0
                        int32_t var_b4_1 = 0
                        int64_t var_e0 = 0
                        int32_t var_d4_1 = 0
                        int32_t var_e8_1 = i_16.d
                        
                        if (i_16.d s> 0)
                            sub_140638a00(&var_f0)
                            r12_1 = var_f0
                        
                        int32_t var_98_1 = i_16.d
                        
                        if (i_16.d s> 0)
                            sub_1405a4cf0(&result_1)
                        
                        int32_t var_a8_1 = i_16.d
                        
                        if (i_16.d s> 0)
                            sub_1405a4cf0(&var_b0)
                        
                        int32_t var_b8_1 = i_16.d
                        
                        if (i_16.d s> 0)
                            sub_1405a4d70(&var_c0)
                        
                        int32_t var_d8_1 = i_16.d
                        
                        if (i_16.d s> 0)
                            sub_1406105e0(&var_e0)
                        
                        int64_t var_d0 = 0
                        arg_10.d = 0
                        int32_t var_c4_1 = 0
                        
                        if (arg_8 != 0)
                            arg_10.d = i_16.d
                            int32_t var_c8_1 = i_16.d
                            
                            if (i_16.d s> 0)
                                sub_140638a00(&var_d0)
                                arg_10.d = var_c8_1
                        
                        float zmm4_1[0x4] = arg_18
                        int64_t* rax_14 = rdi_1[2]
                        zmm4_1[0] = zmm4_1[0] * 255f
                        float zmm5_1[0x4] = 0x3f800000
                        int64_t r15_3 = 0
                        zmm5_1[0] = 1f - zmm4_1[0]
                        int64_t rdx_14 = *rax_14
                        int32_t r9_3 = int.d(zmm4_1[0])
                        void* r14_3 = *rdi_1[3]
                        float zmm3[0x4]
                        
                        if (i_16 s>= 4)
                            float* r11_3 = rdx_14 - r14_3
                            void* rcx_17 = r14_3 + 0x14
                            float* rbx_2 = r12_1 - r14_3
                            int64_t i_12 = ((i_16 - 4) u>> 2) + 1
                            r15_3 = i_12 << 2
                            int64_t i
                            
                            do
                                zmm4_1[0] = zmm4_1[0] f* *(rcx_17 - 0x14)
                                zmm2.d = zmm5_1[0].q.d f* *(r11_3 + rcx_17 - 0x10)
                                zmm1 = zmm5_1[0] f* *(r11_3 + rcx_17 - 0xc)
                                zmm5_1[0] = zmm5_1[0] f* *(r11_3 + rcx_17 - 0x14)
                                zmm5_1[0] = zmm5_1[0] + zmm4_1[0]
                                zmm4_1[0] = zmm4_1[0] f* *(rcx_17 - 0x10)
                                zmm4_1[0] = zmm4_1[0] f* *(rcx_17 - 0xc)
                                zmm2.d = zmm2.d f+ zmm4_1[0]
                                zmm1 = zmm1 + zmm4_1[0]
                                float temp0_1[0x4] = _mm_unpacklo_ps(zmm5_1, zmm2)
                                zmm2 = zmm5_1[0].q
                                *(rbx_2 + rcx_17 - 0x14) = temp0_1.q
                                float var_108_1 = zmm1
                                zmm1 = zmm5_1[0]
                                *(rbx_2 + rcx_17 - 0xc) = var_108_1
                                zmm5_1[0] = zmm5_1[0] f* *(r11_3 + rcx_17 - 8)
                                zmm2.d = zmm2.d f* *(r11_3 + rcx_17 - 4)
                                zmm1 = zmm1 f* *(r11_3 + rcx_17)
                                zmm3 = arg_18
                                zmm3[0] = zmm3[0] f* *(rcx_17 - 8)
                                zmm5_1[0] = zmm5_1[0] + zmm3[0]
                                zmm3[0] = zmm3[0] f* *(rcx_17 - 4)
                                zmm3[0] = zmm3[0] f* *rcx_17
                                zmm2.d = zmm2.d f+ zmm3[0]
                                zmm1 = zmm1 + zmm3[0]
                                float temp0_2[0x4] = _mm_unpacklo_ps(zmm5_1, zmm2)
                                zmm2 = zmm5_1[0].q
                                *(rbx_2 + rcx_17 - 8) = temp0_2.q
                                float var_108_2 = zmm1
                                zmm1 = zmm5_1[0]
                                *(rbx_2 + rcx_17) = var_108_2
                                zmm5_1[0] = zmm5_1[0] f* *(r11_3 + rcx_17 + 4)
                                zmm3 = arg_18
                                zmm2.d = zmm2.d f* *(r11_3 + rcx_17 + 8)
                                zmm3[0] = zmm3[0] f* *(rcx_17 + 4)
                                zmm1 = zmm1 f* *(r11_3 + rcx_17 + 0xc)
                                zmm5_1[0] = zmm5_1[0] + zmm3[0]
                                zmm3[0] = zmm3[0] f* *(rcx_17 + 8)
                                zmm3[0] = zmm3[0] f* *(rcx_17 + 0xc)
                                zmm2.d = zmm2.d f+ zmm3[0]
                                zmm1 = zmm1 + zmm3[0]
                                float temp0_3[0x4] = _mm_unpacklo_ps(zmm5_1, zmm2)
                                zmm2 = zmm5_1[0].q
                                *(rbx_2 + rcx_17 + 4) = temp0_3.q
                                float var_108_3 = zmm1
                                zmm1 = zmm5_1[0]
                                *(rbx_2 + rcx_17 + 0xc) = var_108_3
                                zmm3 = arg_18
                                zmm5_1[0] = zmm5_1[0] f* *(r11_3 + rcx_17 + 0x10)
                                zmm3[0] = zmm3[0] f* *(rcx_17 + 0x10)
                                zmm2.d = zmm2.d f* *(r11_3 + rcx_17 + 0x14)
                                zmm1 = zmm1 f* *(r11_3 + rcx_17 + 0x18)
                                zmm5_1[0] = zmm5_1[0] + zmm3[0]
                                zmm3[0] = zmm3[0] f* *(rcx_17 + 0x18)
                                zmm3[0] = zmm3[0] f* *(rcx_17 + 0x14)
                                zmm1 = zmm1 + zmm3[0]
                                zmm2.d = zmm2.d f+ zmm3[0]
                                *(rbx_2 + rcx_17 + 0x10) = (_mm_unpacklo_ps(zmm5_1, zmm2)).q
                                *(rbx_2 + rcx_17 + 0x18) = zmm1
                                rcx_17 += 0x30
                                zmm4_1 = arg_18
                                i = i_12
                                i_12 -= 1
                            while (i != 1)
                        
                        if (r15_3 s< i_16)
                            void* r11_5 = r12_1 - r14_3
                            void* rdx_15 = rdx_14 - r14_3
                            void* rcx_20 = r14_3 + ((r15_3 + ((r15_3 + 1) << 1)) << 2)
                            int64_t i_9 = i_16 - r15_3
                            int64_t i_1
                            
                            do
                                zmm4_1[0] = zmm4_1[0] f* *(rcx_20 - 8)
                                zmm2 = zmm5_1[0].q
                                zmm5_1[0] = zmm5_1[0] f* *(rcx_20 + rdx_15 - 8)
                                zmm2.d = zmm2.d f* *(rcx_20 + rdx_15 - 4)
                                zmm1 = zmm5_1[0] f* *(rcx_20 + rdx_15)
                                zmm5_1[0] = zmm5_1[0] + zmm4_1[0]
                                zmm4_1[0] = zmm4_1[0] f* *rcx_20
                                zmm4_1[0] = zmm4_1[0] f* *(rcx_20 - 4)
                                zmm1 = zmm1 + zmm4_1[0]
                                zmm2.d = zmm2.d f+ zmm4_1[0]
                                *(rcx_20 + r11_5 - 8) = (_mm_unpacklo_ps(zmm5_1, zmm2)).q
                                *(rcx_20 + r11_5) = zmm1
                                rcx_20 += 0xc
                                zmm4_1 = arg_18
                                i_1 = i_9
                                i_9 -= 1
                            while (i_1 != 1)
                        
                        void* rcx_45 = rdi_1[2]
                        void* rax_21 = rdi_1[3]
                        zmm1 = data_143984f1c
                        void* r14_4 = *(rax_21 + 0x20)
                        
                        if (i_16 s> 0)
                            void* rdx_16 = r14_4 + 1
                            void* r15_5 = result_1 - r14_4
                            void* r11_7 = *(rcx_45 + 0x20) - r14_4
                            void* rbx_5 = *(rcx_45 + 0x30) - r14_4
                            void* rsi_4 = *(rax_21 + 0x30) - r14_4
                            void* r12_3 = var_b0 - r14_4
                            int64_t i_15 = i_16
                            int64_t i_2
                            
                            do
                                int32_t rcx_24 = sx.d(*(r11_7 + rdx_16))
                                float temp0_6[0x4] = _mm_cvtepi32_ps(zx.o(
                                    sx.d(*(r11_7 + rdx_16 - 1)) * (0xff - r9_3)
                                    + sx.d(*(rdx_16 - 1)) * r9_3))
                                temp0_6[0] = temp0_6[0] * zmm1
                                char rax_24 = (int.d(temp0_6[0])).b
                                int32_t rcx_27 = sx.d(*(r11_7 + rdx_16 + 1))
                                float temp0_7[0x4] = _mm_cvtepi32_ps(zx.o(rcx_24 * (0xff - r9_3)
                                    + sx.d(*rdx_16) * r9_3))
                                temp0_7[0] = temp0_7[0] * zmm1
                                char var_123_1 = (int.d(temp0_7[0])).b
                                int32_t rcx_30 = sx.d(*(r11_7 + rdx_16 + 2))
                                float temp0_8[0x4] = _mm_cvtepi32_ps(zx.o(rcx_27 * (0xff - r9_3)
                                    + sx.d(*(rdx_16 + 1)) * r9_3))
                                temp0_8[0] = temp0_8[0] * zmm1
                                char var_122_1 = (int.d(temp0_8[0])).b
                                float temp0_9[0x4] = _mm_cvtepi32_ps(zx.o(rcx_30 * (0xff - r9_3)
                                    + sx.d(*(rdx_16 + 2)) * r9_3))
                                temp0_9[0] = temp0_9[0] * zmm1
                                char var_121_1 = (int.d(temp0_9[0])).b
                                *(r15_5 + rdx_16 - 1) = rax_24.d
                                int32_t rcx_36 = sx.d(*(rsi_4 + rdx_16))
                                float temp0_10[0x4] = _mm_cvtepi32_ps(zx.o(
                                    sx.d(*(rsi_4 + rdx_16 - 1)) * r9_3
                                    + sx.d(*(rbx_5 + rdx_16 - 1)) * (0xff - r9_3)))
                                temp0_10[0] = temp0_10[0] * zmm1
                                char rax_37 = (int.d(temp0_10[0])).b
                                int32_t rcx_39 = sx.d(*(rsi_4 + rdx_16 + 1))
                                float temp0_11[0x4] = _mm_cvtepi32_ps(zx.o(rcx_36 * r9_3
                                    + sx.d(*(rbx_5 + rdx_16)) * (0xff - r9_3)))
                                temp0_11[0] = temp0_11[0] * zmm1
                                char var_11f_1 = (int.d(temp0_11[0])).b
                                int32_t rcx_42 = sx.d(*(rsi_4 + rdx_16 + 2))
                                float temp0_12[0x4] = _mm_cvtepi32_ps(zx.o(rcx_39 * r9_3
                                    + sx.d(*(rbx_5 + rdx_16 + 1)) * (0xff - r9_3)))
                                temp0_12[0] = temp0_12[0] * zmm1
                                char var_11e_1 = (int.d(temp0_12[0])).b
                                float temp0_13[0x4] = _mm_cvtepi32_ps(zx.o(rcx_42 * r9_3
                                    + sx.d(*(rbx_5 + rdx_16 + 2)) * (0xff - r9_3)))
                                temp0_13[0] = temp0_13[0] * zmm1
                                char var_11d_1 = (int.d(temp0_13[0])).b
                                rdx_16 += 4
                                *(r12_3 + rdx_16 - 5) = rax_37.d
                                i_2 = i_15
                                i_15 -= 1
                            while (i_2 != 1)
                            rcx_45 = rdi_1[2]
                            zmm4_1 = arg_18
                        
                        if (*(rcx_45 + 0xa3) == 0)
                            r12 = var_e0
                        else
                            int64_t r15_6 = 0
                            int64_t r11_8 = *(rcx_45 + 0x40)
                            void* r14_5 = *(rdi_1[3] + 0x40)
                            char arg_21
                            char arg_22
                            char arg_23
                            
                            if (i_16 s>= 4)
                                void* rsi_6 = r11_8 - r14_5
                                void* rdx_17 = r14_5 + 6
                                void* r12_5 = var_e0 - r14_5
                                int64_t i_10 = ((i_16 - 4) u>> 2) + 1
                                r15_6 = i_10 << 2
                                int64_t i_3
                                
                                do
                                    uint32_t rcx_49 = zx.d(*(rsi_6 + rdx_17 - 5))
                                    float temp0_14[0x4] = _mm_cvtepi32_ps(zx.o(
                                        zx.d(*(rsi_6 + rdx_17 - 4)) * (0xff - r9_3)
                                        + zx.d(*(rdx_17 - 4)) * r9_3))
                                    temp0_14[0] = temp0_14[0] * zmm1
                                    arg_22 = (int.d(temp0_14[0])).b
                                    uint32_t rcx_52 = zx.d(*(rsi_6 + rdx_17 - 6))
                                    float temp0_15[0x4] = _mm_cvtepi32_ps(zx.o(
                                        rcx_49 * (0xff - r9_3) + zx.d(*(rdx_17 - 5)) * r9_3))
                                    temp0_15[0] = temp0_15[0] * zmm1
                                    arg_21 = (int.d(temp0_15[0])).b
                                    uint32_t rcx_55 = zx.d(*(rsi_6 + rdx_17 - 3))
                                    float temp0_16[0x4] = _mm_cvtepi32_ps(zx.o(
                                        rcx_52 * (0xff - r9_3) + zx.d(*(rdx_17 - 6)) * r9_3))
                                    temp0_16[0] = temp0_16[0] * zmm1
                                    char rax_57 = (int.d(temp0_16[0])).b
                                    float temp0_17[0x4] = _mm_cvtepi32_ps(zx.o(
                                        rcx_55 * (0xff - r9_3) + zx.d(*(rdx_17 - 3)) * r9_3))
                                    temp0_17[0] = temp0_17[0] * zmm1
                                    arg_23 = (int.d(temp0_17[0])).b
                                    *(r12_5 + rdx_17 - 6) = rax_57.d
                                    uint32_t rcx_61 = zx.d(*(rsi_6 + rdx_17 - 1))
                                    float temp0_18[0x4] = _mm_cvtepi32_ps(zx.o(
                                        zx.d(*(rsi_6 + rdx_17)) * (0xff - r9_3)
                                        + zx.d(*rdx_17) * r9_3))
                                    temp0_18[0] = temp0_18[0] * zmm1
                                    arg_22 = (int.d(temp0_18[0])).b
                                    uint32_t rcx_64 = zx.d(*(rsi_6 + rdx_17 - 2))
                                    float temp0_19[0x4] = _mm_cvtepi32_ps(zx.o(
                                        rcx_61 * (0xff - r9_3) + zx.d(*(rdx_17 - 1)) * r9_3))
                                    temp0_19[0] = temp0_19[0] * zmm1
                                    arg_21 = (int.d(temp0_19[0])).b
                                    uint32_t rcx_67 = zx.d(*(rsi_6 + rdx_17 + 1))
                                    float temp0_20[0x4] = _mm_cvtepi32_ps(zx.o(
                                        rcx_64 * (0xff - r9_3) + zx.d(*(rdx_17 - 2)) * r9_3))
                                    temp0_20[0] = temp0_20[0] * zmm1
                                    char rax_70 = (int.d(temp0_20[0])).b
                                    float temp0_21[0x4] = _mm_cvtepi32_ps(zx.o(
                                        rcx_67 * (0xff - r9_3) + zx.d(*(rdx_17 + 1)) * r9_3))
                                    temp0_21[0] = temp0_21[0] * zmm1
                                    arg_23 = (int.d(temp0_21[0])).b
                                    *(r12_5 + rdx_17 - 2) = rax_70.d
                                    uint32_t rcx_73 = zx.d(*(rsi_6 + rdx_17 + 3))
                                    float temp0_22[0x4] = _mm_cvtepi32_ps(zx.o(
                                        zx.d(*(rsi_6 + rdx_17 + 4)) * (0xff - r9_3)
                                        + zx.d(*(rdx_17 + 4)) * r9_3))
                                    temp0_22[0] = temp0_22[0] * zmm1
                                    arg_22 = (int.d(temp0_22[0])).b
                                    uint32_t rcx_76 = zx.d(*(rsi_6 + rdx_17 + 2))
                                    float temp0_23[0x4] = _mm_cvtepi32_ps(zx.o(
                                        rcx_73 * (0xff - r9_3) + zx.d(*(rdx_17 + 3)) * r9_3))
                                    temp0_23[0] = temp0_23[0] * zmm1
                                    arg_21 = (int.d(temp0_23[0])).b
                                    uint32_t rcx_79 = zx.d(*(rsi_6 + rdx_17 + 5))
                                    float temp0_24[0x4] = _mm_cvtepi32_ps(zx.o(
                                        rcx_76 * (0xff - r9_3) + zx.d(*(rdx_17 + 2)) * r9_3))
                                    temp0_24[0] = temp0_24[0] * zmm1
                                    char rax_83 = (int.d(temp0_24[0])).b
                                    float temp0_25[0x4] = _mm_cvtepi32_ps(zx.o(
                                        rcx_79 * (0xff - r9_3) + zx.d(*(rdx_17 + 5)) * r9_3))
                                    temp0_25[0] = temp0_25[0] * zmm1
                                    arg_23 = (int.d(temp0_25[0])).b
                                    *(r12_5 + rdx_17 + 2) = rax_83.d
                                    uint32_t rcx_85 = zx.d(*(rsi_6 + rdx_17 + 7))
                                    float temp0_26[0x4] = _mm_cvtepi32_ps(zx.o(
                                        zx.d(*(rsi_6 + rdx_17 + 8)) * (0xff - r9_3)
                                        + zx.d(*(rdx_17 + 8)) * r9_3))
                                    temp0_26[0] = temp0_26[0] * zmm1
                                    arg_22 = (int.d(temp0_26[0])).b
                                    uint32_t rcx_88 = zx.d(*(rsi_6 + rdx_17 + 6))
                                    float temp0_27[0x4] = _mm_cvtepi32_ps(zx.o(
                                        rcx_85 * (0xff - r9_3) + zx.d(*(rdx_17 + 7)) * r9_3))
                                    temp0_27[0] = temp0_27[0] * zmm1
                                    arg_21 = (int.d(temp0_27[0])).b
                                    uint32_t rcx_91 = zx.d(*(rsi_6 + rdx_17 + 9))
                                    float temp0_28[0x4] = _mm_cvtepi32_ps(zx.o(
                                        rcx_88 * (0xff - r9_3) + zx.d(*(rdx_17 + 6)) * r9_3))
                                    temp0_28[0] = temp0_28[0] * zmm1
                                    char rax_96 = (int.d(temp0_28[0])).b
                                    float zmm0[0x4] =
                                        zx.o(rcx_91 * (0xff - r9_3) + zx.d(*(rdx_17 + 9)) * r9_3)
                                    rdx_17 += 0x10
                                    float temp0_29[0x4] = _mm_cvtepi32_ps(zmm0)
                                    temp0_29[0] = temp0_29[0] * zmm1
                                    arg_23 = (int.d(temp0_29[0])).b
                                    *(r12_5 + rdx_17 - 0xa) = rax_96.d
                                    i_3 = i_10
                                    i_10 -= 1
                                while (i_3 != 1)
                                zmm4_1 = arg_18
                            
                            r12 = var_e0
                            
                            if (r15_6 s< i_16)
                                void* rdx_19 = (r15_6 << 2) + 2 + r14_5
                                void* r11_9 = r11_8 - r14_5
                                int64_t i_11 = i_16 - r15_6
                                int64_t i_4
                                
                                do
                                    uint32_t rcx_94 = zx.d(*(rdx_19 + r11_9))
                                    uint32_t rax_101 = zx.d(*rdx_19)
                                    rdx_19 += 4
                                    uint32_t rcx_97 = zx.d(*(rdx_19 + r11_9 - 5))
                                    float temp0_30[0x4] = _mm_cvtepi32_ps(zx.o(
                                        rcx_94 * (0xff - r9_3) + rax_101 * r9_3))
                                    temp0_30[0] = temp0_30[0] * zmm1
                                    arg_22 = (int.d(temp0_30[0])).b
                                    uint32_t rcx_100 = zx.d(*(r11_9 + rdx_19 - 6))
                                    float temp0_31[0x4] = _mm_cvtepi32_ps(zx.o(
                                        rcx_97 * (0xff - r9_3) + zx.d(*(rdx_19 - 5)) * r9_3))
                                    temp0_31[0] = temp0_31[0] * zmm1
                                    arg_21 = (int.d(temp0_31[0])).b
                                    uint32_t rcx_103 = zx.d(*(r11_9 + rdx_19 - 3))
                                    float temp0_32[0x4] = _mm_cvtepi32_ps(zx.o(
                                        rcx_100 * (0xff - r9_3) + zx.d(*(rdx_19 - 6)) * r9_3))
                                    temp0_32[0] = temp0_32[0] * zmm1
                                    char rax_109 = (int.d(temp0_32[0])).b
                                    float temp0_33[0x4] = _mm_cvtepi32_ps(zx.o(
                                        rcx_103 * (0xff - r9_3) + zx.d(*(rdx_19 - 3)) * r9_3))
                                    temp0_33[0] = temp0_33[0] * zmm1
                                    arg_23 = (int.d(temp0_33[0])).b
                                    *(r12 - r14_5 + rdx_19 - 6) = rax_109.d
                                    i_4 = i_11
                                    i_11 -= 1
                                while (i_4 != 1)
                                zmm4_1 = arg_18
                        
                        void* r11_10 = rdi_1[2]
                        int64_t r15_7 = var_c0
                        
                        if (*(r11_10 + 0xa2) != 0)
                            int64_t rbx_9 = 0
                            void* r11_11 = *(r11_10 + 0x10)
                            int64_t r8_8 = *(rdi_1[3] + 0x10)
                            
                            if (i_16 s>= 4)
                                int32_t* rcx_107 = r8_8 - r11_11
                                void* rax_115 = r11_11 + 0xc
                                int32_t* rdx_21 = r15_7 - r11_11
                                int64_t i_13 = ((i_16 - 4) u>> 2) + 1
                                rbx_9 = i_13 << 2
                                int64_t i_5
                                
                                do
                                    zmm1 = zmm4_1[0]
                                    zmm5_1[0] = zmm5_1[0] f* *(rax_115 - 0xc)
                                    zmm1 = zmm1 f* *(rcx_107 + rax_115 - 0xc)
                                    zmm4_1[0] = zmm4_1[0] f* *(rcx_107 + rax_115 - 8)
                                    zmm1 = zmm1 + zmm5_1[0]
                                    zmm5_1[0] = zmm5_1[0] f* *(rax_115 - 8)
                                    *(rdx_21 + rax_115 - 0xc) = zmm1
                                    zmm4_1[0] = zmm4_1[0] + zmm5_1[0]
                                    *(rdx_21 + rax_115 - 8) = zmm4_1[0]
                                    zmm5_1[0] = zmm5_1[0] f* *(rax_115 - 4)
                                    zmm2 = arg_18
                                    zmm1 = zmm2.d
                                    zmm2.d = zmm2.d f* *(rcx_107 + rax_115)
                                    zmm1 = zmm1 f* *(rcx_107 + rax_115 - 4) + zmm5_1[0]
                                    zmm5_1[0] = zmm5_1[0] f* *rax_115
                                    *(rdx_21 + rax_115 - 4) = zmm1
                                    zmm2.d = zmm2.d f+ zmm5_1[0]
                                    *(rdx_21 + rax_115) = zmm2.d
                                    zmm5_1[0] = zmm5_1[0] f* *(rax_115 + 4)
                                    zmm3 = arg_18
                                    zmm1 = zmm3[0]
                                    zmm3[0] = zmm3[0] f* *(rcx_107 + rax_115 + 8)
                                    zmm1 = zmm1 f* *(rcx_107 + rax_115 + 4) + zmm5_1[0]
                                    zmm5_1[0] = zmm5_1[0] f* *(rax_115 + 8)
                                    *(rdx_21 + rax_115 + 4) = zmm1
                                    zmm3[0] = zmm3[0] + zmm5_1[0]
                                    *(rdx_21 + rax_115 + 8) = zmm3[0]
                                    zmm5_1[0] = zmm5_1[0] f* *(rax_115 + 0xc)
                                    zmm2 = arg_18
                                    zmm1 = zmm2.d
                                    zmm2.d = zmm2.d f* *(rcx_107 + rax_115 + 0x10)
                                    zmm1 = zmm1 f* *(rcx_107 + rax_115 + 0xc) + zmm5_1[0]
                                    zmm5_1[0] = zmm5_1[0] f* *(rax_115 + 0x10)
                                    *(rdx_21 + rax_115 + 0xc) = zmm1
                                    zmm2.d = zmm2.d f+ zmm5_1[0]
                                    *(rdx_21 + rax_115 + 0x10) = zmm2.d
                                    rax_115 += 0x20
                                    zmm4_1 = arg_18
                                    i_5 = i_13
                                    i_13 -= 1
                                while (i_5 != 1)
                            
                            if (rbx_9 s< i_16)
                                int32_t* rax_117 = (rbx_9 << 3) + 4 + r11_11
                                void* rcx_109 = r15_7 - r11_11
                                void* r8_9 = r8_8 - r11_11
                                int64_t i_8 = i_16 - rbx_9
                                int64_t i_6
                                
                                do
                                    zmm1 = zmm4_1[0]
                                    zmm5_1[0] = zmm5_1[0] f* rax_117[-1]
                                    zmm4_1[0] = zmm4_1[0] f* *(rax_117 + r8_9)
                                    zmm1 = zmm1 f* *(rax_117 + r8_9 - 4) + zmm5_1[0]
                                    zmm5_1[0] = zmm5_1[0] f* *rax_117
                                    zmm4_1[0] = zmm4_1[0] + zmm5_1[0]
                                    *(rax_117 + rcx_109 - 4) = zmm1
                                    *(rax_117 + rcx_109) = zmm4_1[0]
                                    rax_117 = &rax_117[2]
                                    zmm4_1 = arg_18
                                    i_6 = i_8
                                    i_8 -= 1
                                while (i_6 != 1)
                        
                        char rbx_11 = arg_8
                        int64_t r14_6 = var_d0
                        
                        if (rbx_11 != 0)
                            int64_t rsi_9 = 0
                            int64_t r8_10 = *(rdi_1[2] + 0x50)
                            void* rbx_10 = *(rdi_1[3] + 0x50)
                            
                            if (i_16 s>= 4)
                                float* rdx_24 = r8_10 - rbx_10
                                void* rcx_110 = rbx_10 + 0x14
                                void* r9_7 = r14_6 - rbx_10
                                int64_t i_14 = ((i_16 - 4) u>> 2) + 1
                                rsi_9 = i_14 << 2
                                int64_t i_7
                                
                                do
                                    zmm4_1[0] = zmm4_1[0] f* *(rcx_110 - 0x14)
                                    zmm2.d = zmm5_1[0].q.d f* *(rdx_24 + rcx_110 - 0x10)
                                    zmm1 = zmm5_1[0] f* *(rdx_24 + rcx_110 - 0xc)
                                    zmm5_1[0] = zmm5_1[0] f* *(rdx_24 + rcx_110 - 0x14)
                                    zmm5_1[0] = zmm5_1[0] + zmm4_1[0]
                                    zmm4_1[0] = zmm4_1[0] f* *(rcx_110 - 0x10)
                                    zmm4_1[0] = zmm4_1[0] f* *(rcx_110 - 0xc)
                                    zmm2.d = zmm2.d f+ zmm4_1[0]
                                    zmm1 = zmm1 + zmm4_1[0]
                                    float temp0_34[0x4] = _mm_unpacklo_ps(zmm5_1, zmm2)
                                    zmm2 = zmm5_1[0].q
                                    *(rcx_110 + r9_7 - 0x14) = temp0_34.q
                                    float var_fc_1 = zmm1
                                    zmm1 = zmm5_1[0]
                                    *(rcx_110 + r9_7 - 0xc) = var_fc_1
                                    zmm5_1[0] = zmm5_1[0] f* *(rdx_24 + rcx_110 - 8)
                                    zmm2.d = zmm2.d f* *(rdx_24 + rcx_110 - 4)
                                    zmm1 = zmm1 f* *(rdx_24 + rcx_110)
                                    zmm3 = arg_18
                                    zmm3[0] = zmm3[0] f* *(rcx_110 - 8)
                                    zmm5_1[0] = zmm5_1[0] + zmm3[0]
                                    zmm3[0] = zmm3[0] f* *(rcx_110 - 4)
                                    zmm3[0] = zmm3[0] f* *rcx_110
                                    zmm2.d = zmm2.d f+ zmm3[0]
                                    zmm1 = zmm1 + zmm3[0]
                                    float temp0_35[0x4] = _mm_unpacklo_ps(zmm5_1, zmm2)
                                    zmm2 = zmm5_1[0].q
                                    *(r9_7 + rcx_110 - 8) = temp0_35.q
                                    float var_fc_2 = zmm1
                                    zmm1 = zmm5_1[0]
                                    *(r9_7 + rcx_110) = var_fc_2
                                    zmm5_1[0] = zmm5_1[0] f* *(rdx_24 + rcx_110 + 4)
                                    zmm3 = arg_18
                                    zmm2.d = zmm2.d f* *(rdx_24 + rcx_110 + 8)
                                    zmm3[0] = zmm3[0] f* *(rcx_110 + 4)
                                    zmm1 = zmm1 f* *(rdx_24 + rcx_110 + 0xc)
                                    zmm5_1[0] = zmm5_1[0] + zmm3[0]
                                    zmm3[0] = zmm3[0] f* *(rcx_110 + 8)
                                    zmm3[0] = zmm3[0] f* *(rcx_110 + 0xc)
                                    zmm2.d = zmm2.d f+ zmm3[0]
                                    zmm1 = zmm1 + zmm3[0]
                                    float temp0_36[0x4] = _mm_unpacklo_ps(zmm5_1, zmm2)
                                    zmm2 = zmm5_1[0].q
                                    *(r9_7 + rcx_110 + 4) = temp0_36.q
                                    float var_fc_3 = zmm1
                                    zmm1 = zmm5_1[0]
                                    *(r9_7 + rcx_110 + 0xc) = var_fc_3
                                    zmm3 = arg_18
                                    zmm5_1[0] = zmm5_1[0] f* *(rdx_24 + rcx_110 + 0x10)
                                    zmm3[0] = zmm3[0] f* *(rcx_110 + 0x10)
                                    zmm2.d = zmm2.d f* *(rdx_24 + rcx_110 + 0x14)
                                    zmm1 = zmm1 f* *(rdx_24 + rcx_110 + 0x18)
                                    zmm5_1[0] = zmm5_1[0] + zmm3[0]
                                    zmm3[0] = zmm3[0] f* *(rcx_110 + 0x18)
                                    zmm3[0] = zmm3[0] f* *(rcx_110 + 0x14)
                                    zmm1 = zmm1 + zmm3[0]
                                    zmm2.d = zmm2.d f+ zmm3[0]
                                    *(r9_7 + rcx_110 + 0x10) = (_mm_unpacklo_ps(zmm5_1, zmm2)).q
                                    *(r9_7 + rcx_110 + 0x18) = zmm1
                                    rcx_110 += 0x30
                                    zmm4_1 = arg_18
                                    i_7 = i_14
                                    i_14 -= 1
                                while (i_7 != 1)
                            
                            if (rsi_9 s< i_16)
                                float* rdx_26 = r14_6 - rbx_10
                                float* r8_11 = r8_10 - rbx_10
                                void* rcx_113 = rbx_10 + ((rsi_9 + ((rsi_9 + 1) << 1)) << 2)
                                int64_t r10_3 = i_16 - rsi_9
                                
                                while (true)
                                    zmm4_1[0] = zmm4_1[0] f* *(rcx_113 - 8)
                                    zmm2 = zmm5_1[0].q
                                    zmm5_1[0] = zmm5_1[0] f* *(r8_11 + rcx_113 - 8)
                                    zmm2.d = zmm2.d f* *(r8_11 + rcx_113 - 4)
                                    zmm1 = zmm5_1[0] f* *(r8_11 + rcx_113)
                                    zmm5_1[0] = zmm5_1[0] + zmm4_1[0]
                                    zmm4_1[0] = zmm4_1[0] f* *rcx_113
                                    zmm4_1[0] = zmm4_1[0] f* *(rcx_113 - 4)
                                    zmm1 = zmm1 + zmm4_1[0]
                                    zmm2.d = zmm2.d f+ zmm4_1[0]
                                    *(rdx_26 + rcx_113 - 8) = (_mm_unpacklo_ps(zmm5_1, zmm2)).q
                                    *(rdx_26 + rcx_113) = zmm1
                                    rcx_113 += 0xc
                                    int64_t temp8_1 = r10_3
                                    r10_3 -= 1
                                    
                                    if (temp8_1 == 1)
                                        break
                                    
                                    zmm4_1 = arg_18
                            
                            rbx_11 = arg_8
                        
                        void* rax_125 = rdi_1[2]
                        
                        if (*(rax_125 + 0xa7) == 0)
                            sub_1408e8650(&rdi_1[0x23], rax_125 + 0x90)
                            rax_125 = rdi_1[2]
                        
                        if (*(rax_125 + 0xa0) != 0)
                            var_148_1.d = 1
                            sub_1408e9120(&rdi_1[0x13], result_1, var_98_1 << 2, 1, var_148_1.d)
                            rax_125 = rdi_1[2]
                        
                        if (*(rax_125 + 0xa1) != 0)
                            var_148_1.d = 1
                            sub_1408e9120(&rdi_1[0x17], var_b0, var_a8_1 << 2, 1, 1)
                            rax_125 = rdi_1[2]
                        
                        if (*(rax_125 + 0xa2) != 0)
                            var_148_1.d = 1
                            sub_1408e9120(&rdi_1[0x1b], r15_7, var_b8_1 << 3, 1, 1)
                            rax_125 = rdi_1[2]
                        
                        if (*(rax_125 + 0xa3) != 0)
                            var_148_1.d = 1
                            sub_1408e9120(&rdi_1[0x1f], r12, var_d8_1 << 2, 1, 1)
                        
                        int64_t r9_8 = *rdi_1
                        char rax_128 = (*(r9_8 + 0x18))(rdi_1, 
                            zx.q(*(rdi_1 + ((zx.q(rdi_1[0x12].d) & 1) << 2) + 0x80)), 
                            zx.q(rdi_1[4].d), r9_8, var_148_1)
                        
                        if (rbx_11 != 0)
                            rsi = var_f0
                            rdi_1[0x12].d = 0
                            sub_1408e9120(&rdi_1[8], rsi, var_e8_1 * 0xc, 1, 1)
                            zmm6 = sub_1408e9120(&rdi_1[0xc], r14_6, arg_10.d * 0xc, 1, 1)
                            rdi_1[0x10].d = rdi_1[4].d
                            *(rdi_1 + 0x84) = 0xffffffff
                            rdi_1[0x11].d = *(arg1 + 0x158)
                            *(rdi_1 + 0x8c) = *(arg1 + 0x158)
                        else
                            int32_t rcx_120 = rdi_1[0x12].d
                            
                            if (rcx_120 == 0xffffffff || rax_128 == 0)
                                rsi = var_f0
                                uint32_t rbx_13 = var_e8_1 * 0xc
                                sub_1408e9120(&rdi_1[8], rsi, rbx_13, 1, 1)
                                zmm6 = sub_1408e9120(&rdi_1[0xc], rsi, rbx_13, 1, 1)
                                rdi_1[0x12].d = 0
                                rdi_1[0x11].d = *(arg1 + 0x158)
                                *(rdi_1 + 0x8c) = *(arg1 + 0x158)
                                rdi_1[0x10].d = *(rdi_1 + 0x24)
                                *(rdi_1 + 0x84) = *(rdi_1 + 0x24)
                            else
                                rsi = var_f0
                                rdi_1[0x12].d = rcx_120 + 1
                                zmm6 = sub_1408e9120(&rdi_1[((zx.q(rcx_120 + 1) & 1) + 2) * 4], 
                                    rsi, var_e8_1 * 0xc, 1, 1)
                                *(rdi_1 + ((zx.q(rdi_1[0x12].d) & 1) << 2) + 0x88) = *(arg1 + 0x158)
                                *(rdi_1 + ((zx.q(rdi_1[0x12].d) & 1) << 2) + 0x80) = *(rdi_1 + 0x24)
                        
                        if (r14_6 != 0)
                            sub_140a74f90(r14_6)
                        
                        if (r12 != 0)
                            sub_140a74f90(r12)
                        
                        if (r15_7 != 0)
                            sub_140a74f90(r15_7)
                        
                        int64_t rax_142 = var_b0
                        
                        if (rax_142 != 0)
                            sub_140a74f90(rax_142)
                        
                        result = result_1
                        
                        if (result != 0)
                            result = sub_140a74f90(result)
                        
                        if (rsi != 0)
                            result = sub_140a74f90(rsi)
                
                rbx = var_118
        
        rdi = &var_90[1]
        var_90 = rdi
    while (rdi != rbx)

return result
