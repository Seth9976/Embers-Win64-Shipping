// 函数: sub_141264360
// 地址: 0x141264360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_348
void* result = __security_cookie ^ &var_348
void* result_1 = result
void* r12 = arg1

if (*(arg1 + 0xa8) s> 1)
    result = *(arg1 + 0xa0)
    
    if (*(result + 0xd7c) != 0)
        void*** rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_1 = &rcx_2[3]
        
        if (rax_1 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x20)
            rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_1 = &rcx_2[3]
        
        *(arg2 + 0x30) = rax_1
        int64_t* rax_2 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_2 = rcx_2
        *(arg2 + 8) = &rcx_2[1]
        rcx_2[1] = 0
        *rcx_2 = &data_142f51dc0
        rcx_2[2].d = 0
        *(rcx_2 + 0x14) = 0x101
        int64_t* rcx_7 = *(r12 + 0x28)
        int64_t* var_2c0_1 = &data_143ec4c60
        int64_t rdx = *rcx_7
        int64_t* rax_4 = (*(rdx + 8))(rcx_7, rdx)
        int128_t zmm1 = data_142d3f5a0
        int64_t rcx_8 = *rax_4
        int64_t var_1b8 = rcx_8
        int32_t var_e0_1 = 0
        int32_t var_dc
        __builtin_memset(&var_dc, 0xff, 0x14)
        int128_t var_c8_1 = zmm1
        int64_t var_b8
        __builtin_memset(&var_b8, 0, 0x1a)
        int64_t var_1b0_1 = 0
        int32_t var_1a8_1 = 0xffffffff
        int16_t var_1a4_1 = 0x900
        int64_t var_f8_1
        __builtin_memset(&var_f8_1, 0, 0x11)
        int32_t var_e4_1 = 0
        int16_t var_a0
        var_a0:1.b = *(rcx_8 + 0x38) u> 1
        void var_1a0
        memset(&var_1a0, 0, 0xa8)
        char var_e8_1 = 0x88
        int64_t var_f8_2 = *sub_1410f83c0(&data_143ec4c60)
        int32_t var_e4_2 = 0
        sub_1410e0180(arg2, &var_1b8)
        int64_t rbx_3 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
        int64_t rax_6 = rbx_3 + 0x32
        
        if (rax_6 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x34)
            rbx_3 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
            rax_6 = rbx_3 + 0x32
        
        wchar16 const* const rcx_13 = u"CopyMobileMultiViewColor"
        *(arg2 + 0x30) = rax_6
        wchar16 const i
        
        do
            i = *rcx_13
            *(rbx_3 - u"CopyMobileMultiViewColor" + rcx_13) = i
            rcx_13 = &rcx_13[1]
        while (i != 0)
        void*** rcx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_7 = &rcx_16[0x27]
        
        if (rax_7 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x140)
            rcx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_7 = &rcx_16[0x27]
        
        *(arg2 + 0x30) = rax_7
        void**** rax_8 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_8 = rcx_16
        *(arg2 + 8) = &rcx_16[1]
        sub_1405d11b0(rcx_16, &var_1b8, rbx_3)
        *(arg2 + 0x1c4) = 1
        sub_1405d19b0(arg2, &var_1b8)
        int64_t var_a8
        *(arg2 + 0x178) = var_a8:7.b
        *(arg2 + 0x179) = 0
        *(arg2 + 0x1c4) = 1
        int128_t var_268
        __builtin_memset(&var_268, 0, 0x30)
        int64_t var_20c
        __builtin_memset(&var_20c, 0, 0x43)
        int128_t var_220_1 = zx.o(0)
        int16_t var_1c8_1 = 0
        sub_140fdc870(arg2, &var_268)
        int64_t var_238_1 = data_14395da00
        int64_t var_230_1 = data_14395da18
        int64_t var_228_1 = data_14395d9e8
        int64_t* rax_15 = std::_Get_future_error_what((*U"1111")[sx.q(*(r12 + 0x3b0))])
        void* var_298
        sub_1419a2ec0(rax_15, &var_298, &data_143f55f90, 0)
        void* r14_1 = var_298
        void* var_288
        sub_1419a2ec0(rax_15, &var_288, &data_143e8f020, 0)
        void* r13_1 = var_288
        var_268.q = data_1439c9210
        int64_t rax_17 = 0
        void* var_290
        
        if (r14_1 != 0)
            int64_t rdx_9 = sx.q(*(r14_1 + 0x10c))
            int64_t* rbx_7 = *(var_290 + 0x10)
            int64_t rax_18 = rbx_7[3]
            
            if (*(rax_18 + (rdx_9 << 3)) == 0)
                sub_1419ccf30(rbx_7, rdx_9.d)
                rax_18 = rbx_7[3]
            
            rax_17 = *(rax_18 + (rdx_9 << 3))
        
        int64_t r15_2 = 0
        var_268:8.q = rax_17
        int64_t rax_19 = 0
        
        if (r13_1 != 0)
            int64_t rdx_10 = sx.q(*(r13_1 + 0x10c))
            void* var_280
            int64_t* rbx_8 = *(var_280 + 0x10)
            int64_t rax_21 = rbx_8[3]
            
            if (*(rax_21 + (rdx_10 << 3)) == 0)
                sub_1419ccf30(rbx_8, rdx_10.d)
                rax_21 = rbx_8[3]
            
            rax_19 = *(rax_21 + (rdx_10 << 3))
        
        int128_t var_248
        var_248.q = rax_19
        int32_t var_210_1 = 0
        int512_t zmm2_1
        int128_t zmm6_1
        zmm2_1, zmm6_1 = sub_1419870b0(arg2, &var_268, 2)
        int32_t i_2 = 0
        
        if (*(r12 + 0xa8) s> 0)
            uint128_t zmm7
            uint128_t var_58_1 = zmm7
            uint128_t zmm8
            uint128_t var_68_1 = zmm8
            uint128_t zmm9
            uint128_t var_78_1 = zmm9
            int512_t zmm6_3
            int32_t i_1
            
            do
                int64_t r14_4 = *(r12 + 0xa0)
                void* rbx_9 = *(var_2c0_1[0x33] + 0x10)
                void* var_2b8 = rbx_9
                
                if (rbx_9 != 0)
                    *(rbx_9 + 8) += 1
                
                int64_t rax_24 = *(arg2 + 0x1a0)
                sub_141080ac0(r13_1, arg2, rax_24, *(r15_2 + r14_4 + 0x10))
                int64_t* r12_1 = data_14395f4d0
                
                if (*(r13_1 + 0x11a) u> 0)
                    uint32_t rax_25 = zx.d(*(r13_1 + 0x118))
                    void*** rcx_31 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_26 = &rcx_31[5]
                    
                    if (rax_26 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, 0x30)
                        rcx_31 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_26 = &rcx_31[5]
                    
                    *(arg2 + 0x30) = rax_26
                    void**** rax_27 = *(arg2 + 8)
                    *(arg2 + 0x14) += 1
                    *rax_27 = rcx_31
                    *(arg2 + 8) = &rcx_31[1]
                    rcx_31[1] = 0
                    *rcx_31 = &data_142d5a070
                    rcx_31[2] = rax_24
                    rcx_31[3].d = rax_25
                    rcx_31[4] = rbx_9
                
                if (*(r13_1 + 0x11e) u> 0)
                    uint32_t rbx_10 = zx.d(*(r13_1 + 0x11c))
                    
                    if ((*(*r12_1 + 8))(r12_1) == 0)
                        void*** rcx_38 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_33 = &rcx_38[5]
                        
                        if (rax_33 u> *(arg2 + 0x38))
                            sub_140b0e3d0(arg2 + 0x30, 0x30)
                            rcx_38 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_33 = &rcx_38[5]
                        
                        *(arg2 + 0x30) = rax_33
                        void**** rax_34 = *(arg2 + 8)
                        *(arg2 + 0x14) += 1
                        *rax_34 = rcx_38
                        *(arg2 + 8) = &rcx_38[1]
                        rcx_38[1] = 0
                        *rcx_38 = &data_142d5a080
                        rcx_38[2] = rax_24
                        rcx_38[3].d = rbx_10
                        rcx_38[4] = r12_1
                
                void* r9_2 = sub_1405d1550(&var_2b8)
                zmm7 = zx.o(*(r15_2 + r14_4 + 0x15a0))
                void*** rcx_45 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                zmm8 = zx.o(*(r15_2 + r14_4 + 0x159c))
                zmm9 = zx.o(*(r15_2 + r14_4 + 0x1598))
                uint128_t zmm6_2 = _mm_cvtepi32_ps(zx.o(*(r15_2 + r14_4 + 0x15a4)))
                void* rax_37 = &rcx_45[5]
                zmm7 = _mm_cvtepi32_ps(zmm7)
                zmm8 = _mm_cvtepi32_ps(zmm8)
                zmm9 = _mm_cvtepi32_ps(zmm9)
                
                if (rax_37 u> *(arg2 + 0x38))
                    r9_2, zmm6_2 = sub_140b0e3d0(arg2 + 0x30, 0x30)
                    rcx_45 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_37 = &rcx_45[5]
                
                *(arg2 + 0x30) = rax_37
                *(arg2 + 0x14) += 1
                zmm2_1.o = zx.o(0)
                int32_t var_2e0_1 = 1
                int32_t var_2e8_1 = 1
                **(arg2 + 8) = rcx_45
                *(arg2 + 8) = &rcx_45[1]
                rcx_45[1] = 0
                *rcx_45 = &data_142d54998
                rcx_45[3].d = 0
                rcx_45[2].d = zmm9.d
                *(rcx_45 + 0x14) = zmm8.d
                *(rcx_45 + 0x1c) = zmm7.d
                rcx_45[4].d = zmm6_2.d
                *(rcx_45 + 0x24) = 0x3f800000
                int32_t rax_41 = *(r15_2 + r14_4 + 0x15a4) - *(r15_2 + r14_4 + 0x159c)
                int32_t rcx_50 = *(r15_2 + r14_4 + 0x15a0) - *(r15_2 + r14_4 + 0x1598)
                int32_t var_2c4_1 = rax_41
                void* var_278
                void** var_2f0_1 = &var_278
                int512_t zmm3
                zmm3.o = zx.o(rcx_50)
                uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(rax_41))
                int64_t rax_42 = rcx_50.q
                zmm3.o = _mm_cvtepi32_ps(zmm3.o)
                var_278 = r14_1
                void* var_270_1 = var_290
                zmm2_1, zmm3, zmm6_3 = sub_1413993b0(arg2, zx.o(0), zmm2_1, r9_2, zmm3, zmm0_1.d, 
                    0, 0, zmm3.d, zmm0_1.d, rax_42, rax_42, var_2f0_1, var_2e8_1, var_2e0_1)
                r15_2 += 0x5240
                r12 = arg1
                i_1 = i_2 + 1
                i_2 = i_1
            while (i_1 s< *(r12 + 0xa8))
            zmm6_3.o = zmm6_1
        
        sub_141096650(arg2)
        int64_t var_b0
        result = sub_1405d1550(&var_b0)

__security_check_cookie(result_1 ^ &var_348)
return result
