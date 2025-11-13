// 函数: sub_14240a3d0
// 地址: 0x14240a3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r12 = nullptr
int32_t arg_8 = 0
int128_t zmm6

if (*(arg2 + 0x94) == 0)
    zmm6 = *(arg2 + 0xa4)
else
    zmm6 = 0x3f800000

*(arg1 + 0x80) = data_143dbb1f0.d
*(arg1 + 0x84) = data_143dbb1f0:4.d.d
int64_t* result = sub_140ac6680(arg1 + 0x130)
int64_t** result_1 = result
int32_t rcx_1 = result[1].d
int32_t rdx = rcx_1 - 1

if (rcx_1 == 0)
    rdx = 0

if (rdx != 0)
    int64_t* rcx_3 = *data_143f5b828
    
    if (rcx_3 != 0)
        int32_t var_288
        result = sub_140e149c0(rcx_3, &var_288)
        int64_t* rdi_1 = result[1]
        void* r15_1 = *result
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
        
        int64_t* var_280
        
        if (var_280 != 0)
            var_280[1].d -= 1
            
            if (var_280[1].d == 1)
                result = (**var_280)(var_280)
                int32_t temp1_1 = *(var_280 + 0xc)
                *(var_280 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    result = (*(*var_280 + 8))(var_280, 1)
        
        if (r15_1 != 0)
            int16_t var_284
            int64_t var_268
            uint128_t var_258
            int128_t var_248
            int64_t* var_230
            int128_t* rax_6
            int64_t* rcx_6
            int64_t rdx_2
            char* rbx_2
            int32_t rsi_1
            int64_t r8
            int64_t r9
            int64_t* r10_1
            int32_t* r11_1
            uint128_t zmm0_1
            int128_t zmm1
            
            if (*(arg1 + 0x1a0) == 0)
                void* rdx_3 = *(arg1 + 0x148)
                zmm0_1 = data_14399f5e0
                var_288 = 0
                var_284 = 0
                var_280 = nullptr
                uint128_t var_278_1 = zmm0_1
                int64_t var_138
                sub_140d93a40(&var_138, rdx_3, *(rdx_3 + 0x13c), rdx_3 + 0x140, &var_288)
                rdx_2 = var_138
                void var_128
                rax_6 = &var_128
                int64_t var_130
                r8 = var_130
                int64_t var_108
                rcx_6 = &var_108
                r9 = var_108
                void var_f8
                r10_1 = &var_f8
                void var_f0
                r11_1 = &var_f0
                rsi_1 = 2
                void var_ec
                rbx_2 = &var_ec
            else
                int64_t* rax_2 = *(arg1 + 0x188)
                rdx_2 = *(arg1 + 0x150)
                r8 = *(arg1 + 0x158)
                r9 = *(arg1 + 0x180)
                var_268 = rdx_2
                int64_t var_260_1 = r8
                int64_t var_238 = r9
                var_230 = rax_2
                zmm1 = *(arg1 + 0x170)
                var_258 = *(arg1 + 0x160)
                var_248 = zmm1
                
                if (rax_2 != 0)
                    rax_2[1].d += 1
                
                rcx_6 = &var_238
                int64_t var_228 = *(arg1 + 0x190)
                r10_1 = &var_228
                int32_t var_220
                r11_1 = &var_220
                var_220 = *(arg1 + 0x198)
                char var_21c
                rbx_2 = &var_21c
                rsi_1 = 1
                var_21c = *(arg1 + 0x19c)
                rax_6 = &var_258
            
            int64_t var_188 = rdx_2
            int64_t var_180_1 = r8
            int64_t var_158_1 = r9
            zmm0_1 = *rax_6
            zmm1 = rax_6[1]
            int64_t* rax_7 = rcx_6[1]
            rcx_6[1] = 0
            *rcx_6 = 0
            int64_t var_148_1 = *r10_1
            int32_t var_140_1 = *r11_1
            char rax_10 = *rbx_2
            uint128_t var_178_1 = zmm0_1
            int128_t var_168_1 = zmm1
            
            if ((rsi_1.b & 2) != 0)
                rsi_1 &= 0xfffffffd
                int64_t* var_100
                
                if (var_100 != 0)
                    var_100[1].d -= 1
                    
                    if (var_100[1].d == 1)
                        (**var_100)(var_100)
                        int32_t temp6_1 = *(var_100 + 0xc)
                        *(var_100 + 0xc) -= 1
                        
                        if (temp6_1 == 1)
                            (*(*var_100 + 8))(var_100, 1)
            
            if ((rsi_1.b & 1) != 0 && var_230 != 0)
                var_230[1].d -= 1
                
                if (var_230[1].d == 1)
                    (**var_230)(var_230)
                    int32_t temp7_1 = *(var_230 + 0xc)
                    *(var_230 + 0xc) -= 1
                    
                    if (temp7_1 == 1)
                        (*(*var_230 + 8))(var_230, 1)
            
            int64_t* rax_15 = sub_140da4220(r15_1, &var_188, zmm6.d, &data_143e20dd8)
            int64_t* rbx_5 = rax_15
            void* rax_16 = *(arg2 + 0x68)
            int32_t rcx_13
            
            if (rax_16 == 0)
                rcx_13 = -1
            else
                rcx_13 = *(rax_16 + 0x18)
            
            int64_t rsi_2 = 0
            arg_8 = *(arg1 + 0x14)
            float var_2e4_1 = 0f
            float var_2e8_1 = 0f
            uint32_t r14_1 = 0
            uint32_t var_2e0_1 = 0
            int32_t var_2d8_1 = 0
            uint128_t var_1f0 = *arg4
            int16_t var_2b8 = 0
            uint128_t zmm0_2
            zmm0_2.d = (*(arg1 + 0x38)).d f* *(arg1 + 0xa0)
            int32_t var_2b4
            __builtin_memset(&var_2b4, 0, 0x24)
            int32_t var_290_1 = 0x300
            char var_28c_1 = 0
            int16_t rax_19
            uint128_t zmm7_1
            uint128_t zmm9_1
            rax_19, zmm7_1, zmm9_1 = sub_140da8a70(rbx_5)
            int64_t** result_4 = result_1
            uint128_t zmm15 = zx.o(0)
            uint64_t r15_2 = zx.q(result_4[1].d)
            uint128_t zmm6_1 = _mm_cvtepi32_ps(zx.o(rax_19))
            int32_t var_2d0_1 = r15_2.d
            int32_t result_3 = (r15_2 - 1).d
            
            if (r15_2.d == 0)
                result_3 = 0
            
            result = sx.q(result_3)
            int64_t* result_2 = result
            zmm6_1.d = zmm6_1.d f* *(arg1 + 0xa4)
            int32_t var_2d4_1 = zmm6_1.d
            
            if (result s> 0)
                uint128_t zmm12
                uint128_t var_b8_1 = zmm12
                uint128_t zmm13
                uint128_t var_c8_1 = zmm13
                uint128_t zmm14
                uint128_t var_d8_1 = zmm14
                int64_t var_1f8_1 = 0
                
                do
                    result = *result_4
                    uint128_t zmm0_3 = *(arg1 + 0x84)
                    wint_t _C = *(result + (rsi_2 << 1))
                    
                    if (not(zmm0_3.d f!= zmm7_1.d))
                        *(arg1 + 0x84) = zmm6_1.d
                        zmm0_3 = zmm6_1
                    
                    if (_C != 0xa)
                        int512_t zmm1_1
                        float zmm8_1
                        float zmm11_1
                        zmm1_1, zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm11_1 =
                            sub_140da3dd0(rbx_5, &var_268, _C, rax_10)
                        char rcx_16 = var_248:0xc.b
                        int64_t* var_308
                        int32_t rax_37
                        uint128_t zmm10_1
                        
                        if (rcx_16 == 0)
                            rbx_5.b = 1
                            rax_37 = 0
                        else
                            char rdx_6 = var_248:8.b
                            
                            if (r12 == 0 || zx.d(rdx_6) != r14_1)
                                uint32_t r14_2 = zx.d(rdx_6)
                                var_2e0_1 = r14_2
                                int64_t* rbx_6 = *(*(r15_1 + 0x110) + zx.q(r14_2) * 0x10)
                                int64_t* rax_25 = (*(*rbx_6 + 0x10))(rbx_6)
                                int64_t rdx_7 = *rbx_6
                                r12 = rax_25
                                char rax_26 = (*(rdx_7 + 0x18))(rbx_6, rdx_7)
                                
                                if (rax_26 == 0)
                                    rbx_5 = 2
                                else
                                    rbx_5 = zx.q(*(arg1 + 0x14))
                                
                                int32_t* var_2f8
                                var_2f8.b = 0
                                int128_t* rax_27 = &data_14399f5c0
                                
                                if (rax_26 != 0)
                                    rax_27 = arg4
                                
                                arg_8 = rbx_5.d
                                int32_t var_300
                                var_300.q = arg1 + 0x44
                                var_1f0 = *rax_27
                                var_308.d = rbx_5.d
                                void* rax_29
                                rax_29, zmm1_1, zmm6_1, zmm7_1, zmm9_1, zmm10_1 =
                                    sub_14240fbe0(arg2, 1, nullptr, r12, var_308.d, var_300, 0)
                                int32_t rdx_8 = ((r15_2 << 1) + -fffffffffffffffe).d
                                *(arg1 + 0x128) = rax_29
                                
                                if (r15_2.d == 0)
                                    rdx_8 = 0
                                
                                sub_141eab3b0(rax_29, rdx_8, r12, rbx_5.d)
                                int32_t rdx_9 = ((r15_2 << 2) + -fffffffffffffffc).d
                                
                                if (r15_2.d == 0)
                                    rdx_9 = 0
                                
                                sub_141eab450(*(arg1 + 0x128), rdx_9)
                                zmm0_3.d = float.s(zx.q((*(*r12 + 0x40))(r12)))
                                zmm8_1 = zmm10_1.d f/ zmm0_3.d
                                var_2e4_1 = zmm8_1
                                rcx_16 = var_248:0xc.b
                                zmm0_3.d = float.s(zx.q((*(*r12 + 0x48))(r12)))
                                zmm11_1 = zmm10_1.d f/ zmm0_3.d
                                var_2e8_1 = zmm11_1
                            
                            if (rcx_16 == 0)
                                rbx_5.b = 1
                                rax_37 = 0
                            else if (iswspace(_C) != 0)
                                rbx_5.b = 1
                                rax_37 = 0
                            else
                                rbx_5.b = 0
                                rax_37 = 0
                                
                                if (var_28c_1 != 0)
                                    char rax_38
                                    rax_38, zmm1_1, zmm6_1 =
                                        sub_140da7c50(rax_15, &var_2b8, &var_268, zmm1_1)
                                    zmm0_3.d =
                                        _mm_cvtepi32_ps(zx.o(sx.d(rax_38))).d f* *(arg1 + 0xa0)
                                    rax_37 = int.d(zmm0_3.d)
                        
                        zmm1_1.o = var_268.o
                        zmm0_3 = _mm_cvtepi32_ps(zx.o(rax_37))
                        var_2b8.o = zmm1_1.o
                        zmm15.d = zmm15.d f+ zmm0_3.d
                        zmm1_1.o = var_248
                        int64_t var_2a8_1
                        var_2a8_1.o = var_258
                        int64_t var_298_1
                        var_298_1.o = zmm1_1.o
                        
                        if (rbx_5.b == 0)
                            int32_t zmm4_1 = *(arg1 + 0xa4)
                            int32_t zmm3_1 = *(arg1 + 0xa0)
                            int32_t zmm2_1 = var_258:4.d
                            void* rcx_30 = *(arg1 + 0x128)
                            uint128_t zmm5_1 = _mm_cvtepi32_ps(zx.o(sx.d(var_248:2.w)))
                            int32_t var_1d0_1 = 0
                            var_308.d = rcx_13
                            zmm0_3.d = zmm15.d f+ *arg3
                            zmm7_1.d = zmm9_1.d f+ arg3[1]
                            zmm5_1.d = zmm5_1.d f* zmm3_1
                            zmm5_1.d = zmm5_1.d f+ zmm0_3.d
                            zmm0_3 = _mm_cvtepi32_ps(zx.o(sx.d(var_248.w)))
                            zmm1_1.o = zx.o(sx.d(var_248:4.w))
                            uint32_t rax_43 = zx.d(var_258:8.w)
                            zmm1_1.o = _mm_cvtepi32_ps(zmm1_1.o)
                            zmm1_1.d = zmm1_1.d f* zmm4_1
                            zmm0_3.d = zmm0_3.d f* zmm4_1
                            zmm1_1.d = zmm1_1.d f+ zmm6_1.d
                            uint32_t rax_45 = zx.d(var_258:0xc.w)
                            zmm7_1.d = zmm7_1.d f- zmm0_3.d
                            zmm0_3 = *(arg1 + 0x3c)
                            int32_t var_1cc_1 = zmm0_3.d
                            zmm9_1 = _mm_cvtepi32_ps(zx.o(var_258:0xa.w))
                            uint32_t rax_46 = zx.d(var_258:0xe.w)
                            zmm14 = _mm_cvtepi32_ps(zx.o(rax_45))
                            zmm9_1.d = zmm9_1.d f* zmm11_1
                            zmm13 = zmm14
                            zmm12 = _mm_cvtepi32_ps(zx.o(rax_46))
                            zmm14.d = zmm14.d f* zmm3_1
                            zmm13.d = zmm13.d f* zmm8_1
                            zmm11_1 = zmm12.d * var_2e8_1
                            zmm12.d = zmm12.d f* zmm4_1
                            zmm1_1.d = zmm1_1.d f/ zmm2_1
                            zmm14.d = zmm14.d f* zmm2_1
                            zmm7_1.d = zmm7_1.d f+ zmm1_1.d
                            zmm12.d = zmm12.d f* zmm2_1
                            zmm14.d = zmm14.d f+ zmm5_1.d
                            int32_t var_214_1 = zmm9_1.d
                            zmm12.d = zmm12.d f+ zmm7_1.d
                            zmm6_1.d = zmm0_3.d f* zmm7_1.d
                            zmm10_1.d = _mm_cvtepi32_ps(zx.o(rax_43)).d f* zmm8_1
                            zmm8_1 = zmm0_3.d f* zmm5_1.d
                            zmm12.d = zmm12.d f* zmm0_3.d
                            int32_t var_218 = zmm10_1.d
                            float var_1d8 = zmm8_1
                            int32_t var_1d4_1 = zmm6_1.d
                            zmm14.d = zmm14.d f* zmm0_3.d
                            int32_t rax_47 =
                                sub_141e93fc0(rcx_30, &var_1d8, &var_218, &var_1f0, var_308.d)
                            int32_t zmm0_4 = *(arg1 + 0x3c)
                            zmm13.d = zmm13.d f+ zmm10_1.d
                            int32_t var_20c_1 = zmm9_1.d
                            int32_t var_1c8 = zmm14.d
                            int32_t var_1c4_1 = zmm6_1.d
                            int32_t var_1bc_1 = zmm0_4
                            int32_t var_210 = zmm13.d
                            int32_t var_1c0_1 = 0
                            var_308.d = rcx_13
                            int32_t rax_48 = sub_141e93fc0(*(arg1 + 0x128), &var_1c8, &var_210, 
                                &var_1f0, var_308.d)
                            int32_t zmm0_5 = *(arg1 + 0x3c)
                            zmm11_1 = zmm11_1 f+ zmm9_1.d
                            void* rcx_32 = *(arg1 + 0x128)
                            int32_t var_208 = zmm10_1.d
                            float var_1b8 = zmm8_1
                            int32_t var_1b4_1 = zmm12.d
                            float var_204_1 = zmm11_1
                            int32_t var_1ac_1 = zmm0_5
                            int32_t var_1b0_1 = 0
                            var_308.d = rcx_13
                            int32_t rax_49 =
                                sub_141e93fc0(rcx_32, &var_1b8, &var_208, &var_1f0, var_308.d)
                            void* rcx_33 = *(arg1 + 0x128)
                            var_280:4.d = *(arg1 + 0x3c)
                            int32_t var_200 = zmm13.d
                            float var_1fc_1 = zmm11_1
                            var_288 = zmm14.d
                            var_284.d = zmm12.d
                            var_280.d = 0
                            var_308.d = rcx_13
                            int32_t rax_50 =
                                sub_141e93fc0(rcx_33, &var_288, &var_200, &var_1f0, var_308.d)
                            sub_141e93b40(*(arg1 + 0x128), rax_47, rax_48, rax_50, r12, arg_8, 
                                arg1 + 0x44)
                            sub_141e93b40(*(arg1 + 0x128), rax_47, rax_50, rax_49, r12, arg_8, 
                                arg1 + 0x44)
                            zmm6_1 = var_2d4_1
                            zmm7_1 = zx.o(0)
                            zmm9_1 = var_2d8_1
                            rsi_2 = var_1f8_1
                            r15_2 = zx.q(var_2d0_1)
                        
                        result = zx.q(sx.d(var_248:6.w))
                        r14_1 = var_2e0_1
                        rbx_5 = rax_15
                        result_4 = result_1
                        zmm0_3.d = _mm_cvtepi32_ps(zx.o(result.d)).d f* *(arg1 + 0xa0)
                        zmm0_3.d = zmm0_3.d f+ zmm15.d
                        zmm15.d = zmm0_3.d f+ zmm0_2.d
                        
                        if (not(zmm15.d f<= *(arg1 + 0x80)))
                            *(arg1 + 0x80) = zmm15.d
                    else
                        zmm9_1.d = zmm9_1.d f+ zmm6_1.d
                        zmm15 = zmm7_1
                        zmm0_3.d = zmm0_3.d f+ zmm6_1.d
                        var_2d8_1 = zmm9_1.d
                        *(arg1 + 0x84) = zmm0_3.d
                    
                    rsi_2 += 1
                    var_1f8_1 = rsi_2
                while (rsi_2 s< result_2)
            
            if (rax_7 != 0)
                rax_7[1].d -= 1
                
                if (rax_7[1].d == 1)
                    result = (**rax_7)(rax_7)
                    int32_t temp9_1 = *(rax_7 + 0xc)
                    *(rax_7 + 0xc) -= 1
                    
                    if (temp9_1 == 1)
                        result = (*(*rax_7 + 8))(rax_7, 1)
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                result = (**rdi_1)(rdi_1)
                int32_t temp3_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    return (*(*rdi_1 + 8))(rdi_1, 1)

return result
