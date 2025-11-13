// 函数: sub_1410f2420
// 地址: 0x1410f2420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_378
int64_t var_98 = __security_cookie ^ &var_378
int64_t i_4 = sx.q(*(arg1 + 0xa8))
int64_t rax_1
rax_1.b = 0
void* r15 = arg1
int64_t* result

if (i_4 s<= 0)
    result = sub_14139bef0(arg2)
else
    int64_t rdx = 0
    int64_t i
    
    do
        if (rax_1.b != 0 || (*(rdx + *(arg1 + 0xa0) + 0x497c) & 0x100) != 0)
            rax_1.b = 1
        else
            rax_1.b = 0
        
        rdx += 0x5240
        i = i_4
        i_4 -= 1
    while (i != 1)
    
    if (rax_1.b == 0)
        result = sub_14139bef0(arg2)
    else
        int64_t* rax_2 = sub_14139bef0(arg2)
        int64_t* r14_1 = rax_2
        int64_t* rax_3 = sub_1410f83c0(rax_2)
        int64_t* rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        int64_t rcx_2 = *rax_3
        void* rdx_1 = &rbx_3[1]
        
        if (rdx_1 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x10)
            rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rdx_1 = &rbx_3[1]
        
        *(arg2 + 0x30) = rdx_1
        *rbx_3 = rcx_2
        void*** rcx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_4 = &rcx_6[5]
        
        if (rax_4 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_4 = &rcx_6[5]
        
        *(arg2 + 0x30) = rax_4
        void**** rax_5 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_5 = rcx_6
        *(arg2 + 8) = &rcx_6[1]
        rcx_6[1] = 0
        *rcx_6 = &data_142d549c8
        rcx_6[2].d = 1
        rcx_6[3] = rbx_3
        rcx_6[4].d = 0
        sub_141392910(r14_1, arg2)
        int128_t zmm1_1 = data_142d3f5a0
        int64_t rcx_11 = *(r14_1[0xb] + 8)
        int64_t var_1b8 = rcx_11
        int32_t var_e0_1 = 0
        int32_t var_dc
        __builtin_memset(&var_dc, 0xff, 0x14)
        int128_t var_c8_1 = zmm1_1
        int64_t var_b8
        __builtin_memset(&var_b8, 0, 0x1a)
        int64_t var_1b0_1 = 0
        int32_t var_1a8_1 = 0xffffffff
        int16_t var_1a4_1 = 0x500
        int64_t var_f8
        __builtin_memset(&var_f8, 0, 0x11)
        int32_t var_e4_1 = 0
        int16_t var_a0
        var_a0:1.b = *(rcx_11 + 0x38) u> 1
        void var_1a0
        memset(&var_1a0, 0, 0xa8)
        int128_t zmm6_1 = sub_1410e0180(arg2, &var_1b8)
        int64_t rbx_8 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
        int64_t rax_8 = rbx_8 + 0x3a
        
        if (rax_8 u> *(arg2 + 0x38))
            zmm6_1 = sub_140b0e3d0(arg2 + 0x30, 0x3c)
            rbx_8 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
            rax_8 = rbx_8 + 0x3a
        
        wchar16 const* const rcx_15 = u"CopyStencilToLightingChannel"
        *(arg2 + 0x30) = rax_8
        wchar16 const i_1
        
        do
            i_1 = *rcx_15
            *(rcx_15 + rbx_8 - u"CopyStencilToLightingChannel") = i_1
            rcx_15 = &rcx_15[1]
        while (i_1 != 0)
        void*** rcx_18 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_9 = &rcx_18[0x27]
        
        if (rax_9 u> *(arg2 + 0x38))
            zmm6_1 = sub_140b0e3d0(arg2 + 0x30, 0x140)
            rcx_18 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_9 = &rcx_18[0x27]
        
        *(arg2 + 0x30) = rax_9
        void**** rax_10 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_10 = rcx_18
        *(arg2 + 8) = &rcx_18[1]
        sub_1405d11b0(rcx_18, &var_1b8, rbx_8)
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
        var_268.q = data_1439c9210
        int32_t i_3 = 0
        
        if (*(r15 + 0xa8) s> 0)
            int64_t r14_2 = 0
            uint128_t zmm7
            uint128_t var_58_1 = zmm7
            uint128_t zmm8
            uint128_t var_68_1 = zmm8
            uint128_t zmm9
            uint128_t var_78_1 = zmm9
            int512_t zmm6_3
            int32_t i_2
            
            do
                int64_t r15_1 = *(r15 + 0xa0)
                int32_t rbx_11 = *(arg2 + 0x8c)
                int32_t rax_17 = *(r14_2 + r15_1 + 0xad8)
                
                if (rbx_11 != rax_17)
                    bool cond:1_1 = *(arg2 + 0x14) u> 0
                    *(arg2 + 0x8c) = rax_17
                    
                    if (cond:1_1)
                        void*** rdx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_18 = &rdx_11[3]
                        
                        if (rax_18 u> *(arg2 + 0x38))
                            sub_140b0e3d0(arg2 + 0x30, 0x20)
                            rdx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_18 = &rdx_11[3]
                        
                        *(arg2 + 0x30) = rax_18
                        int64_t* rax_19 = *(arg2 + 8)
                        *(arg2 + 0x14) += 1
                        *rax_19 = rdx_11
                        int32_t rax_20 = *(arg2 + 0x8c)
                        *(arg2 + 8) = &rdx_11[1]
                        rdx_11[1] = 0
                        *rdx_11 = &data_142f11588
                        rdx_11[2].d = rax_20
                    else
                        *(arg2 + 0x90) = rax_17
                
                void* var_298
                sub_1419a2ec0(*(r14_2 + r15_1 + 0x5150), &var_298, &data_143f55f90, 0)
                void* r13_1 = var_298
                void* var_288
                sub_1419a2ec0(*(r14_2 + r15_1 + 0x5150), &var_288, &data_143e52200, 0)
                int64_t rax_21 = 0
                void* var_290
                
                if (r13_1 != 0)
                    int64_t rdx_16 = sx.q(*(r13_1 + 0x10c))
                    int64_t* r13_2 = *(var_290 + 0x10)
                    int64_t rax_22 = r13_2[3]
                    
                    if (*(rax_22 + (rdx_16 << 3)) == 0)
                        sub_1419ccf30(r13_2, rdx_16.d)
                        rax_22 = r13_2[3]
                    
                    rax_21 = *(rax_22 + (rdx_16 << 3))
                
                void* r13_3 = var_288
                var_268:8.q = rax_21
                int64_t rax_23 = 0
                
                if (r13_3 != 0)
                    int64_t rdx_17 = sx.q(*(r13_3 + 0x10c))
                    int64_t rcx_29 = rdx_17
                    void* var_280
                    int64_t* r12_3 = *(var_280 + 0x10)
                    int64_t rax_25 = r12_3[3]
                    
                    if (*(rax_25 + (rdx_17 << 3)) == 0)
                        sub_1419ccf30(r12_3, rdx_17.d)
                        rax_25 = r12_3[3]
                        rcx_29 = rdx_17
                    
                    rax_23 = *(rax_25 + (rcx_29 << 3))
                
                int128_t var_248_1
                var_248_1.q = rax_23
                int32_t var_210_1 = 0
                sub_1419870b0(arg2, &var_268, 2)
                sub_141080ac0(r13_3, arg2, *(arg2 + 0x1a0), *(r14_2 + r15_1 + 0x10))
                int64_t rax_27 = sub_14139bef0(arg2)[9]
                int64_t rax_28 = *(arg2 + 0x1a0)
                
                if (*(r13_3 + 0x11a) u> 0)
                    uint32_t r12_4 = zx.d(*(r13_3 + 0x118))
                    void*** rcx_36 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_29 = &rcx_36[5]
                    
                    if (rax_29 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, 0x30)
                        rcx_36 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_29 = &rcx_36[5]
                    
                    *(arg2 + 0x30) = rax_29
                    void**** rax_30 = *(arg2 + 8)
                    *(arg2 + 0x14) += 1
                    *rax_30 = rcx_36
                    *(arg2 + 8) = &rcx_36[1]
                    rcx_36[1] = 0
                    *rcx_36 = &data_142d5ebf8
                    rcx_36[2] = rax_28
                    rcx_36[3].d = r12_4
                    rcx_36[4] = rax_27
                
                zmm7 = zx.o(*(r14_2 + r15_1 + 0x15a0))
                void*** rcx_42 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                zmm8 = zx.o(*(r14_2 + r15_1 + 0x159c))
                zmm9 = zx.o(*(r14_2 + r15_1 + 0x1598))
                uint128_t zmm6_2 = _mm_cvtepi32_ps(zx.o(*(r14_2 + r15_1 + 0x15a4)))
                void* rax_34 = &rcx_42[5]
                zmm7 = _mm_cvtepi32_ps(zmm7)
                zmm8 = _mm_cvtepi32_ps(zmm8)
                zmm9 = _mm_cvtepi32_ps(zmm9)
                
                if (rax_34 u> *(arg2 + 0x38))
                    zmm6_2 = sub_140b0e3d0(arg2 + 0x30, 0x30)
                    rcx_42 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_34 = &rcx_42[5]
                
                *(arg2 + 0x30) = rax_34
                *(arg2 + 0x14) += 1
                int32_t var_310_1 = 1
                int32_t var_318_1 = 1
                **(arg2 + 8) = rcx_42
                *(arg2 + 8) = &rcx_42[1]
                rcx_42[1] = 0
                *rcx_42 = &data_142d54998
                rcx_42[2].d = zmm9.d
                *(rcx_42 + 0x14) = zmm8.d
                *(rcx_42 + 0x1c) = zmm7.d
                rcx_42[4].d = zmm6_2.d
                rcx_42[3].d = 0
                *(rcx_42 + 0x24) = 0x3f800000
                int32_t rdx_20 = *(r14_2 + r15_1 + 0x159c)
                int32_t rcx_47 = *(r14_2 + r15_1 + 0x15a4) - rdx_20
                void* r9_2 = zx.q(*(r14_2 + r15_1 + 0x1598))
                int32_t r8_2 = *(r14_2 + r15_1 + 0x15a0)
                void* var_278 = r13_1
                int32_t r8_3 = r8_2 - r9_2.d
                void* var_270_1 = var_290
                int512_t zmm2_1
                zmm2_1.o = zx.o(rcx_47)
                int64_t var_300_1
                var_300_1:4.d = rcx_47
                void** var_320_1 = &var_278
                int64_t rax_40 = *(rax_2 + 0x37c)
                zmm2_1.o = _mm_cvtepi32_ps(zmm2_1.o)
                var_300_1.d = r8_3
                int512_t zmm3
                zmm3.o = zx.o(r8_3)
                int32_t var_338_1 = zmm2_1.d
                zmm3.o = _mm_cvtepi32_ps(zmm3.o)
                int32_t var_358_1 = zmm2_1.d
                zmm2_1.o = zx.o(0)
                zmm3, zmm6_3 = sub_1413993b0(arg2, zx.o(0), zmm2_1, r9_2, zmm3, var_358_1, 
                    _mm_cvtepi32_ps(zx.o(r9_2.d)).d, _mm_cvtepi32_ps(zx.o(rdx_20)).d, zmm3.d, 
                    var_338_1, var_300_1, rax_40, var_320_1, var_318_1, var_310_1)
                
                if (*(arg2 + 0x8c) != rbx_11)
                    bool cond:3_1 = *(arg2 + 0x14) u> 0
                    *(arg2 + 0x8c) = rbx_11
                    
                    if (cond:3_1)
                        void*** rdx_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_64 = &rdx_23[3]
                        
                        if (rax_64 u> *(arg2 + 0x38))
                            sub_140b0e3d0(arg2 + 0x30, 0x20)
                            rdx_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_64 = &rdx_23[3]
                        
                        *(arg2 + 0x30) = rax_64
                        int64_t* rax_65 = *(arg2 + 8)
                        *(arg2 + 0x14) += 1
                        *rax_65 = rdx_23
                        int32_t rax_66 = *(arg2 + 0x8c)
                        *(arg2 + 8) = &rdx_23[1]
                        rdx_23[1] = 0
                        *rdx_23 = &data_142f11588
                        rdx_23[2].d = rax_66
                    else
                        *(arg2 + 0x90) = rbx_11
                
                r14_2 += 0x5240
                r15 = arg1
                i_2 = i_3 + 1
                i_3 = i_2
            while (i_2 s< *(r15 + 0xa8))
            r14_1 = rax_2
            zmm6_3.o = zmm6_1
        
        sub_141096650(arg2)
        void*** rbx_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        int128_t var_2e8_1 = data_142d57d10
        int128_t zmm0_2 = data_142d57920
        int128_t var_2d8_1 = data_142d3f800
        int64_t* r14_3 = *(r14_1[0xb] + 8)
        void* rax_43 = &rbx_14[0xa]
        
        if (rax_43 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x58)
            rbx_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_43 = &rbx_14[0xa]
        
        *(arg2 + 0x30) = rax_43
        int64_t* rax_44 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_44 = rbx_14
        *(arg2 + 8) = &rbx_14[1]
        rbx_14[1] = 0
        *rbx_14 = &data_142d56628
        rbx_14[2].d = var_2e8_1.d
        __builtin_memset(rbx_14 + 0x14, 0xff, 0x20)
        *(rbx_14 + 0x34) = zmm0_2:4.d
        rbx_14[7].d = zmm0_2:8.d
        *(rbx_14 + 0x3c) = zmm0_2:0xc.d
        rbx_14[8] = r14_3
        rbx_14[9] = r14_3
        
        if ((*(*r14_3 + 8))(r14_3) == 0)
            int64_t* rcx_53 = rbx_14[8]
            
            if ((*(*rcx_53 + 0x18))(rcx_53) == 0)
                int64_t* rcx_54 = rbx_14[8]
                
                if ((*(*rcx_54 + 0x20))(rcx_54) == 0)
                    int64_t* rcx_55 = rbx_14[8]
                    (*(*rcx_55 + 0x10))(rcx_55)
        
        int64_t* rcx_56 = rbx_14[9]
        
        if ((*(*rcx_56 + 8))(rcx_56) == 0)
            int64_t* rcx_57 = rbx_14[9]
            
            if ((*(*rcx_57 + 0x18))(rcx_57) == 0)
                int64_t* rcx_58 = rbx_14[9]
                
                if ((*(*rcx_58 + 0x20))(rcx_58) == 0)
                    int64_t* rcx_59 = rbx_14[9]
                    (*(*rcx_59 + 0x10))(rcx_59)
        
        int64_t var_b0
        result = sub_1405d1550(&var_b0)

__security_check_cookie(var_98 ^ &var_378)
return result
