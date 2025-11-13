// 函数: sub_142423c80
// 地址: 0x142423c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result_1 = *(arg1 + 0xc)
uint64_t result

if (result_1 != 4)
    result = zx.q(result_1)
else
    result = zx.q(data_1439c7a08)

if (result.d == 3)
    void* r8_1 = *(arg1 + 0x50)
    
    if (r8_1 != 0)
        result = *(r8_1 + 0x48)
        
        if (result != 0 && *(result + 0x78) != 0)
            uint128_t zmm6
            zmm6.d = arg3.d f* *(r8_1 + 0x6c)
            zmm6.d = zmm6.d f+ *(arg1 + 0x58)
            *(arg1 + 0x58) = zmm6.d
            int32_t r10_1 = *(r8_1 + 0x68)
            int32_t rax = int.d(zmm6.d)
            int32_t rcx = r10_1 - 1
            int32_t r11_2 = *(r8_1 + 0x70) & 1
            int32_t r9_1
            
            if (r11_2 == 0)
                r9_1 = rcx
                
                if (rax s<= rcx)
                    r9_1 = rax
            else
                r9_1 = mods.dp.d(sx.q(rax), r10_1)
            
            int32_t rbx_1 = *(r8_1 + 0x60)
            int32_t temp8_1
            int32_t temp9_1
            temp8_1:temp9_1 = sx.q(r9_1)
            
            if (r11_2 != 0)
                rcx = mods.dp.d(sx.q(r9_1 + 1), r10_1)
            else if (r9_1 + 1 s<= rcx)
                rcx = r9_1 + 1
            
            float zmm3[0x4] = 0x3f800000
            int128_t var_88
            __builtin_memcpy(&var_88, 
                "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x"
            "00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
                0x20)
            int32_t temp20_1
            int32_t temp21_1
            temp20_1:temp21_1 = sx.q(rcx)
            zmm3[0] = 1f f/ _mm_cvtepi32_ps(zx.o(*(r8_1 + 0x60))).d
            uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(*(r8_1 + 0x64)))
            var_88.d = zmm3[0]
            arg3.d = 1f f/ zmm0.d
            uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(mods.dp.d(temp8_1:temp9_1, rbx_1)))
            var_88:4.d = arg3.d
            zmm1.d = zmm1.d f* zmm3[0]
            zmm0 = _mm_cvtepi32_ps(zx.o(divs.dp.d(temp8_1:temp9_1, rbx_1)))
            var_88:8.d = zmm1.d
            zmm0.d = zmm0.d f* arg3.d
            zmm1 = _mm_cvtepi32_ps(zx.o(mods.dp.d(temp20_1:temp21_1, rbx_1)))
            var_88:0xc.d = zmm0.d
            zmm1.d = zmm1.d f* zmm3[0]
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
            zmm3[0] = arg3.d
            zmm0 = _mm_cvtepi32_ps(zx.o(divs.dp.d(temp20_1:temp21_1, rbx_1)))
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
            zmm0.d = zmm0.d f* arg3.d
            zmm3[0] = zmm1.d
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x27)
            zmm3[0] = zmm0.d
            zmm0 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x18)))
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x39)
            zmm1.d = 1f f/ zmm0.d
            zmm0 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x1c)))
            int96_t var_a8_1 = zmm3[0].12
            arg3.d = 1f f/ zmm0.d
            float var_78_1[0x4] = zmm3
            var_a8_1:8.d = 1f f/ _mm_cvtepi32_ps(zx.o(*(arg1 + 0x20))).d
            int32_t var_60_1 = var_a8_1:8.d
            uint64_t var_68_1 = (_mm_unpacklo_ps(zmm1, arg3.q)).q
            truncf(zmm6.d)
            void* rax_13 = *(arg1 + 0x50)
            int64_t* rcx_1 = data_143f0f180
            zmm6.d = zmm6.d f- zmm6.d
            int32_t var_c8_1 = 0
            int32_t var_5c_1 = zmm6.d
            int32_t var_58_1 = (*(rax_13 + 0x80)).d
            int32_t var_54_1 = (*(rax_13 + 0x84)).d
            uint32_t var_50_1 = zx.d(*(rax_13 + 0x50))
            void* arg_8
            (*(*rcx_1 + 0xf8))(rcx_1, &arg_8, &var_88, &data_143f5be70, 0, 1)
            void* rax_16 = arg_8
            void* arg_20 = rax_16
            
            if (rax_16 != 0)
                *(rax_16 + 8) += 1
            
            sub_1405d1550(&arg_8)
            char rax_17 = *(arg1 + 0xc)
            uint32_t rax_18
            
            if (rax_17 != 4)
                rax_18 = zx.d(rax_17)
            else
                rax_18 = data_1439c7a08
            
            void* var_98
            sub_1419a2ec0(std::_Get_future_error_what((*1111")[sx.q(rax_18)]), &var_98, 
                &data_143f5bee0, 0)
            void* r15_2 = var_98
            void* rax_22 = *(arg1 + 0x50)
            arg_8 = *(data_143f111a8 + 0x10)
            void* rax_23 = *(rax_22 + 0x78)
            
            if (rax_23 != 0)
                void* rax_24 = *(rax_23 + 0x58)
                
                if (rax_24 != 0)
                    arg_8 = *(rax_24 + 0x10)
            
            int64_t rax_26 = *(arg1 + 0x48)
            int64_t* rsi_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rcx_5 = &rsi_4[1]
            
            if (rcx_5 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x10)
                rsi_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rcx_5 = &rsi_4[1]
            
            *(arg2 + 0x30) = rcx_5
            *rsi_4 = rax_26
            void*** rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_27 = &rcx_9[6]
            
            if (rax_27 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x38)
                rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_27 = &rcx_9[6]
            
            *(arg2 + 0x30) = rax_27
            void**** rax_28 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_28 = rcx_9
            *(arg2 + 8) = &rcx_9[1]
            rcx_9[1] = 0
            rcx_9[3] = rsi_4
            void* rsi_7 = nullptr
            *rcx_9 = &data_142da7798
            rcx_9[2].d = 1
            rcx_9[4] = 2
            rcx_9[5] = 0
            
            if (r15_2 != 0)
                int64_t rdx_11 = sx.q(*(r15_2 + 0x10c))
                void* var_90
                int64_t* r13_2 = *(var_90 + 0x10)
                int64_t rsi_8 = r13_2[3]
                
                if (*(rsi_8 + (rdx_11 << 3)) == 0)
                    sub_1419ccf30(r13_2, rdx_11.d)
                    rsi_8 = r13_2[3]
                
                rsi_7 = *(rsi_8 + (rdx_11 << 3))
            
            *(arg2 + 0x1b0) = rsi_7
            sub_14198aa60(rsi_7)
            void*** rcx_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_30 = &rcx_17[3]
            
            if (rax_30 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x20)
                rcx_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_30 = &rcx_17[3]
            
            *(arg2 + 0x30) = rax_30
            void**** rax_31 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_31 = rcx_17
            *(arg2 + 8) = &rcx_17[1]
            rcx_17[1] = 0
            *rcx_17 = &data_142dd5b40
            rcx_17[2] = rsi_7
            int64_t r12_2 = *(arg1 + 0x48)
            int64_t r13_3 = *(arg2 + 0x1b0)
            
            if (*(r15_2 + 0x12a) u> 0)
                uint32_t rsi_9 = zx.d(*(r15_2 + 0x128))
                void*** rcx_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_33 = &rcx_23[5]
                
                if (rax_33 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x30)
                    rcx_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_33 = &rcx_23[5]
                
                *(arg2 + 0x30) = rax_33
                void**** rax_34 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_34 = rcx_23
                *(arg2 + 8) = &rcx_23[1]
                rcx_23[1] = 0
                *rcx_23 = &data_142da77d8
                rcx_23[2] = r13_3
                rcx_23[3].d = rsi_9
                rcx_23[4] = r12_2
            
            var_c8_1.q = arg_8
            sub_14241fdd0(r15_2, arg2, &arg_20, *(*(*(*(arg1 + 0x50) + 0x48) + 0x78) + 0x10), 
                var_c8_1)
            int32_t temp26_1
            int32_t temp27_1
            temp26_1:temp27_1 = sx.q(*(arg1 + 0x20))
            int32_t temp28_1
            int32_t temp29_1
            temp28_1:temp29_1 = sx.q(*(arg1 + 0x1c))
            int32_t temp30_1
            int32_t temp31_1
            temp30_1:temp31_1 = sx.q(*(arg1 + 0x18))
            sub_1419cd1c0(arg2, r15_2, ((temp30_1 & 7) + temp31_1) s>> 3, 
                ((temp28_1 & 7) + temp29_1) s>> 3, ((temp26_1 & 7) + temp27_1) s>> 3)
            int64_t r12_3 = *(arg2 + 0x1b0)
            
            if (*(r15_2 + 0x12a) u> 0)
                uint32_t rsi_10 = zx.d(*(r15_2 + 0x128))
                void*** rcx_34 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_44 = &rcx_34[5]
                
                if (rax_44 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x30)
                    rcx_34 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_44 = &rcx_34[5]
                
                *(arg2 + 0x30) = rax_44
                void**** rax_45 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_45 = rcx_34
                *(arg2 + 8) = &rcx_34[1]
                rcx_34[1] = 0
                *rcx_34 = &data_142da77d8
                rcx_34[2] = r12_3
                rcx_34[3].d = rsi_10
                rcx_34[4] = 0
            
            int64_t rax_47 = *(arg1 + 0x48)
            int64_t* rsi_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            var_a8_1.q = rax_47
            void* rcx_38 = &rsi_13[1]
            
            if (rcx_38 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x10)
                rax_47 = var_a8_1.q
                rsi_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rcx_38 = &rsi_13[1]
            
            *(arg2 + 0x30) = rcx_38
            *rsi_13 = rax_47
            void*** rcx_42 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_48 = &rcx_42[6]
            
            if (rax_48 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x38)
                rcx_42 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_48 = &rcx_42[6]
            
            *(arg2 + 0x30) = rax_48
            void**** rax_49 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_49 = rcx_42
            *(arg2 + 8) = &rcx_42[1]
            rcx_42[1] = 0
            *rcx_42 = &data_142da7798
            rcx_42[2].d = 1
            rcx_42[3] = rsi_13
            rcx_42[4].d = 0
            *(rcx_42 + 0x24) = 1
            rcx_42[5] = 0
            return sub_1405d1550(&arg_20)

return result
