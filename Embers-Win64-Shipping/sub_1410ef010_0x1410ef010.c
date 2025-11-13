// 函数: sub_1410ef010
// 地址: 0x1410ef010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_398
int64_t rax_1 = __security_cookie ^ &var_398
int64_t* r13 = arg2
int32_t result
int64_t var_320
int32_t var_310
int32_t var_30c
int64_t var_300
int64_t var_2f8
int64_t var_2e8
int32_t var_2d8
int64_t var_2b8
void* var_2b0

if (data_143e5101c == 0)
    void* rax_35 = *arg3
    int128_t zmm1 = data_142d3f5a0
    int32_t var_110_1 = 0
    int32_t var_10c
    __builtin_memset(&var_10c, 0xff, 0x14)
    int128_t var_f8_1 = zmm1
    int64_t var_e8
    __builtin_memset(&var_e8, 0, 0x1a)
    void* var_1e8 = rax_35
    int64_t var_1e0_1 = 0
    int32_t var_1d8_1 = 0xffffffff
    int16_t var_1d4_1 = 0x900
    int64_t var_128
    __builtin_memset(&var_128, 0, 0x11)
    int32_t var_114_1 = 0
    int16_t var_d0
    var_d0:1.b = *(rax_35 + 0x38) u> 1
    void var_1d0
    memset(&var_1d0, 0, 0xa8)
    uint128_t zmm6_1 = sub_1410e0180(arg1, &var_1e8)
    int64_t rbx_4 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
    int64_t rax_36 = rbx_4 + 0x36
    
    if (rax_36 u> *(arg1 + 0x38))
        zmm6_1 = sub_140b0e3d0(arg1 + 0x30, 0x38)
        rbx_4 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
        rax_36 = rbx_4 + 0x36
    
    wchar16 const* const rcx_48 = u"ComputeDistanceFieldNormal"
    *(arg1 + 0x30) = rax_36
    wchar16 const i
    
    do
        i = *rcx_48
        *(rbx_4 - u"ComputeDistanceFieldNormal" + rcx_48) = i
        rcx_48 = &rcx_48[1]
    while (i != 0)
    void*** rcx_51 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_37 = &rcx_51[0x27]
    
    if (rax_37 u> *(arg1 + 0x38))
        zmm6_1 = sub_140b0e3d0(arg1 + 0x30, 0x140)
        rcx_51 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_37 = &rcx_51[0x27]
    
    *(arg1 + 0x30) = rax_37
    void**** rax_38 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_38 = rcx_51
    *(arg1 + 8) = &rcx_51[1]
    sub_1405d11b0(rcx_51, &var_1e8, rbx_4)
    *(arg1 + 0x1c4) = 1
    sub_1405d19b0(arg1, &var_1e8)
    int64_t var_d8
    *(arg1 + 0x178) = var_d8:7.b
    *(arg1 + 0x179) = 0
    *(arg1 + 0x1c4) = 1
    int128_t var_298
    __builtin_memset(&var_298, 0, 0x30)
    int64_t var_23c
    __builtin_memset(&var_23c, 0, 0x43)
    int128_t var_250_1 = zx.o(0)
    int16_t var_1f8_1 = 0
    sub_140fdc870(arg1, &var_298)
    int64_t var_260_1 = data_14395da18
    int64_t var_258_1 = data_14395d9e8
    int64_t var_268_1 = data_14395da00
    int32_t var_240_1 = 0
    int32_t i_4 = 0
    
    if (r13[1].d s> 0)
        uint128_t var_58_1 = zmm6_1
        uint128_t zmm7
        uint128_t var_68_1 = zmm7
        int64_t r12_2 = 0
        int32_t i_1
        
        do
            int64_t r13_2 = *r13
            int32_t rbx_7 = *(arg1 + 0x8c)
            int32_t rax_44 = *(r12_2 + r13_2 + 0xad8)
            
            if (rbx_7 != rax_44)
                *(arg1 + 0x8c) = rax_44
                
                if (*(arg1 + 0x14) u> 0)
                    void*** rdx_35 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_45 = &rdx_35[3]
                    
                    if (rax_45 u> *(arg1 + 0x38))
                        sub_140b0e3d0(arg1 + 0x30, 0x20)
                        rdx_35 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_45 = &rdx_35[3]
                    
                    *(arg1 + 0x30) = rax_45
                    int64_t* rax_46 = *(arg1 + 8)
                    *(arg1 + 0x14) += 1
                    *rax_46 = rdx_35
                    int32_t rax_47 = *(arg1 + 0x8c)
                    *(arg1 + 8) = &rdx_35[1]
                    rdx_35[1] = 0
                    *rdx_35 = &data_142f11588
                    rdx_35[2].d = rax_47
                else
                    *(arg1 + 0x90) = rax_44
            
            int32_t temp18_1
            int32_t temp19_1
            temp18_1:temp19_1 = sx.q(*(r12_2 + r13_2 + 0x15a4) - *(r12_2 + r13_2 + 0x159c))
            void*** rcx_61 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            int32_t temp20_1
            int32_t temp21_1
            temp20_1:temp21_1 = sx.q(*(r12_2 + r13_2 + 0x15a0) - *(r12_2 + r13_2 + 0x1598))
            zmm6_1 = _mm_cvtepi32_ps(zx.o((temp19_1 - temp18_1) s>> 1))
            void* rax_58 = &rcx_61[5]
            zmm7 = _mm_cvtepi32_ps(zx.o((temp21_1 - temp20_1) s>> 1))
            
            if (rax_58 u> *(arg1 + 0x38))
                zmm6_1 = sub_140b0e3d0(arg1 + 0x30, 0x30)
                rcx_61 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_58 = &rcx_61[5]
            
            *(arg1 + 0x30) = rax_58
            void** rax_59 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_59 = rcx_61
            *(arg1 + 8) = &rcx_61[1]
            rcx_61[1] = 0
            *rcx_61 = &data_142d54998
            *(rcx_61 + 0x1c) = zmm7.d
            rcx_61[4].d = zmm6_1.d
            rcx_61[2] = 0
            rcx_61[3].d = 0
            *(rcx_61 + 0x24) = 0x3f800000
            sub_1419a2ec0(*(r12_2 + r13_2 + 0x5150), &var_2b8, &data_143ed5e80, 0)
            void* var_2a8
            sub_1419a2ec0(*(r12_2 + r13_2 + 0x5150), &var_2a8, &data_143e52b30, 0)
            int64_t rcx_67 = var_2b8
            var_298.q = data_1439c9210
            int64_t rax_62 = 0
            
            if (rcx_67 != 0)
                int64_t rdx_42 = sx.q(*(rcx_67 + 0x10c))
                int64_t rcx_68 = rdx_42
                var_2e8 = rdx_42
                int64_t* rdi_1 = *(var_2b0 + 0x10)
                int64_t rax_64 = rdi_1[3]
                
                if (*(rax_64 + (rdx_42 << 3)) == 0)
                    sub_1419ccf30(rdi_1, rdx_42.d)
                    rax_64 = rdi_1[3]
                    rcx_68 = var_2e8
                
                rax_62 = *(rax_64 + (rcx_68 << 3))
            
            var_298:8.q = rax_62
            int64_t rcx_70 = 0
            void* rax_65 = var_2a8
            
            if (rax_65 != 0)
                int64_t rdx_43 = sx.q(*(rax_65 + 0x10c))
                int64_t rcx_71 = rdx_43
                var_2e8 = rdx_43
                void* var_2a0
                int64_t* rdi_2 = *(var_2a0 + 0x10)
                int64_t rax_67 = rdi_2[3]
                
                if (*(rax_67 + (rdx_43 << 3)) == 0)
                    sub_1419ccf30(rdi_2, rdx_43.d)
                    rax_67 = rdi_2[3]
                    rcx_71 = var_2e8
                
                rcx_70 = *(rax_67 + (rcx_71 << 3))
            
            int128_t var_278_1
            var_278_1.q = rcx_70
            sub_1419870b0(arg1, &var_298, 2)
            int64_t rdi_3 = *(arg1 + 0x1a0)
            int64_t r9_7 = *(r12_2 + r13_2 + 0x10)
            var_2e8 = rdi_3
            sub_141080ac0(rax_65, arg1, rdi_3, r9_7)
            var_320 = rdi_3
            sub_1405eb490(arg1, &var_320, rax_65 + 0x11a, &arg4[1], 0)
            int128_t zmm1_1
            zmm1_1.d = float.s(zx.q(data_1439b55b8 - 1))
            zmm1_1.d = zmm1_1.d f* data_1439b55a8
            int32_t zmm6_2 = powf(2f, (zmm1_1 ^ 0x80000000).d)
            float zmm0_3 = tanf(data_1439b5b9c) + 1f
            int32_t var_378 = 0
            zmm1_1.d = arg4[1].d f/ zmm0_3
            var_30c = zmm6_2 f* zmm1_1.d
            sub_1405eb490(arg1, &var_320, rax_65 + 0x120, &var_30c, var_378)
            sub_1405eb490(arg1, &var_320, rax_65 + 0x126, &data_1439b55a8, 0)
            var_378 = 0
            var_310 = _mm_min_ss(data_1439b55ac, 0x477de800)
            sub_1405eb490(arg1, &var_320, rax_65 + 0x12c, &var_310, var_378)
            var_378 = 0
            var_2d8 = *arg4
            sub_1405eb490(arg1, &var_320, rax_65 + 0x132, &var_2d8, var_378)
            int32_t r8_16 = *(r12_2 + r13_2 + 0x1548)
            
            if (*(rax_65 + 0x118) != 0xffff)
                int64_t* rcx_85
                
                if (r8_16 s< 3)
                    sub_14137b7f0(&var_300, arg1)
                    sub_141083500(arg1, &var_2e8, rax_65 + 0x118, var_300)
                    rcx_85 = &var_300
                else
                    sub_14137baa0(&var_2f8, arg1, 0xf, r8_16)
                    sub_141083500(arg1, &var_2e8, rax_65 + 0x118, var_2f8)
                    rcx_85 = &var_2f8
                
                sub_1405d1550(rcx_85)
            
            var_2e8.o = var_2b8.o
            int32_t r10_2 = *(r12_2 + r13_2 + 0x15a0) - *(r12_2 + r13_2 + 0x1598)
            int64_t rcx_89 = data_143ec4fdc
            int32_t r8_20 = *(r12_2 + r13_2 + 0x15a4) - *(r12_2 + r13_2 + 0x159c)
            int32_t temp22_1
            int32_t temp23_1
            temp22_1:temp23_1 = sx.q(r10_2)
            int32_t var_330_1 = 1
            int32_t rax_72 = (temp23_1 - temp22_1) s>> 1
            void* r9_16 = zx.q(rax_72)
            int32_t var_338_1 = 0
            int64_t var_318
            var_318.d = rax_72
            int32_t temp24_1
            int32_t temp25_1
            temp24_1:temp25_1 = sx.q(r8_20)
            int32_t rax_76 = (temp25_1 - temp24_1) s>> 1
            var_318:4.d = rax_76
            uint128_t zmm1_2 = _mm_cvtepi32_ps(zx.o(r10_2))
            int512_t zmm2_1
            zmm2_1.o = zx.o(rax_76)
            int64_t* var_340_1 = &var_2e8
            zmm2_1.o = _mm_cvtepi32_ps(zmm2_1.o)
            int512_t zmm3
            zmm3.o = zx.o(r9_16.d)
            int32_t var_358_1 = _mm_cvtepi32_ps(zx.o(r8_20)).d
            int32_t var_360_1 = zmm1_2.d
            int32_t var_368_1 = 0
            zmm3.o = _mm_cvtepi32_ps(zmm3.o)
            var_378 = zmm2_1.d
            zmm2_1.o = zx.o(0)
            sub_1413993b0(arg1, zx.o(0), zmm2_1, r9_16, zmm3, var_378, 0, var_368_1, var_360_1, 
                var_358_1, var_318, rcx_89, var_340_1, var_338_1, var_330_1)
            
            if (*(arg1 + 0x8c) != rbx_7)
                *(arg1 + 0x8c) = rbx_7
                
                if (*(arg1 + 0x14) u> 0)
                    void*** rdx_58 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_82 = &rdx_58[3]
                    
                    if (rax_82 u> *(arg1 + 0x38))
                        sub_140b0e3d0(arg1 + 0x30, 0x20)
                        rdx_58 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_82 = &rdx_58[3]
                    
                    *(arg1 + 0x30) = rax_82
                    int64_t* rax_83 = *(arg1 + 8)
                    *(arg1 + 0x14) += 1
                    *rax_83 = rdx_58
                    int32_t rax_84 = *(arg1 + 0x8c)
                    *(arg1 + 8) = &rdx_58[1]
                    rdx_58[1] = 0
                    *rdx_58 = &data_142f11588
                    rdx_58[2].d = rax_84
                else
                    *(arg1 + 0x90) = rbx_7
            
            r12_2 += 0x5240
            r13 = arg2
            i_1 = i_4 + 1
            i_4 = i_1
        while (i_1 s< r13[1].d)
    
    sub_141096650(arg1)
    int64_t* rbx_10 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    int64_t rax_78 = *arg3
    void* rcx_94 = &rbx_10[1]
    
    if (rcx_94 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x10)
        rbx_10 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rcx_94 = &rbx_10[1]
    
    *(arg1 + 0x30) = rcx_94
    *rbx_10 = rax_78
    void*** rcx_98 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_79 = &rcx_98[5]
    
    if (rax_79 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x30)
        rcx_98 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_79 = &rcx_98[5]
    
    *(arg1 + 0x30) = rax_79
    void**** rax_80 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_80 = rcx_98
    *(arg1 + 8) = &rcx_98[1]
    rcx_98[1] = 0
    *rcx_98 = &data_142d549c8
    rcx_98[2].d = 1
    rcx_98[3] = rbx_10
    rcx_98[4].d = 0
    int64_t var_e0
    result = sub_1405d1550(&var_e0)
else
    result = sub_1410e0370(arg1)
    int32_t i_3 = 0
    
    if (r13[1].d s> 0)
        int64_t r12_1 = 0
        int32_t i_2
        
        do
            int64_t r13_1 = *r13
            int32_t rax_2 = *(r12_1 + r13_1 + 0x15a0)
            int32_t rax_3 = rax_2 - *(r12_1 + r13_1 + 0x1598)
            
            if (rax_2 - *(r12_1 + r13_1 + 0x1598) s< 0)
                rax_3 += 1
            
            int32_t rdx_1 = *(r12_1 + r13_1 + 0x15a4)
            int32_t rdx_2 = rdx_1 - *(r12_1 + r13_1 + 0x159c)
            bool cond:1_1 = rdx_1 - *(r12_1 + r13_1 + 0x159c) s>= 0
            var_30c = divs.dp.d(sx.q((rax_3 s>> 1) - 1 + data_1439b55c0), data_1439b55c0)
            
            if (not(cond:1_1))
                rdx_2 += 1
            
            int32_t rcx = data_1439b55c4
            int32_t rbx_1 = *(arg1 + 0x8c)
            int32_t rcx_1 = *(r12_1 + r13_1 + 0xad8)
            var_310 = divs.dp.d(sx.q(rcx - 1 + (rdx_2 s>> 1)), rcx)
            
            if (rbx_1 != rcx_1)
                *(arg1 + 0x8c) = rcx_1
                
                if (*(arg1 + 0x14) u> 0)
                    void*** rdx_8 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_13 = &rdx_8[3]
                    
                    if (rax_13 u> *(arg1 + 0x38))
                        sub_140b0e3d0(arg1 + 0x30, 0x20)
                        rdx_8 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_13 = &rdx_8[3]
                    
                    *(arg1 + 0x30) = rax_13
                    int64_t* rax_14 = *(arg1 + 8)
                    *(arg1 + 0x14) += 1
                    *rax_14 = rdx_8
                    int32_t rax_15 = *(arg1 + 0x8c)
                    *(arg1 + 8) = &rdx_8[1]
                    rdx_8[1] = 0
                    *rdx_8 = &data_142f11588
                    rdx_8[2].d = rax_15
                else
                    *(arg1 + 0x90) = rcx_1
            
            sub_1419a2ec0(*(r12_1 + r13_1 + 0x5150), &var_2b8, &data_143e52c30, 0)
            int64_t r15_1 = var_2b8
            void* rax_16 = nullptr
            void* var_308_1 = nullptr
            var_2e8 = r15_1
            
            if (r15_1 != 0)
                int64_t rdx_12 = sx.q(*(r15_1 + 0x10c))
                int64_t r8 = rdx_12
                var_300 = rdx_12
                int64_t* rcx_5 = *(var_2b0 + 0x10)
                int64_t rax_18 = rcx_5[3]
                
                if (*(rax_18 + (rdx_12 << 3)) == 0)
                    sub_1419ccf30(rcx_5, rdx_12.d)
                    r8 = var_300
                    rax_18 = rcx_5[3]
                
                rax_16 = *(rax_18 + (r8 << 3))
                var_308_1 = rax_16
            
            *(arg1 + 0x1b0) = rax_16
            sub_14198aa60(rax_16)
            void*** rcx_10 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_19 = &rcx_10[3]
            
            if (rax_19 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x20)
                rcx_10 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_19 = &rcx_10[3]
            
            *(arg1 + 0x30) = rax_19
            void**** rax_20 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_20 = rcx_10
            *(arg1 + 8) = &rcx_10[1]
            rcx_10[1] = 0
            *rcx_10 = &data_142dd5b40
            rcx_10[2] = var_308_1
            int64_t rax_23 = *(arg1 + 0x1b0)
            int64_t r9 = *(r12_1 + r13_1 + 0x10)
            var_300 = rax_23
            var_320 = rax_23
            sub_1410809a0(r15_1, arg1, rax_23, r9)
            int64_t* r15_4 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            int64_t rax_24 = arg3[2]
            void* rcx_16 = &r15_4[1]
            
            if (rcx_16 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x10)
                r15_4 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rcx_16 = &r15_4[1]
            
            *(arg1 + 0x30) = rcx_16
            *r15_4 = rax_24
            void*** rcx_20 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_25 = &rcx_20[6]
            
            if (rax_25 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x38)
                rcx_20 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_25 = &rcx_20[6]
            
            *(arg1 + 0x30) = rax_25
            void**** rax_26 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_26 = rcx_20
            *(arg1 + 8) = &rcx_20[1]
            rcx_20[3] = r15_4
            int64_t r15_7 = var_2e8
            rcx_20[1] = 0
            *rcx_20 = &data_142da7798
            rcx_20[2].d = 1
            rcx_20[4].d = 2
            *(rcx_20 + 0x24) = 3
            rcx_20[5] = 0
            sub_141083370(r15_7 + 0x118, arg1, &var_320, arg3[1], arg3[2])
            sub_1410e8640(r15_7 + 0x122, arg1, var_300, arg4)
            int32_t r8_4 = *(r12_1 + r13_1 + 0x1548)
            
            if (*(r15_7 + 0x120) != 0xffff)
                int32_t* rcx_28
                
                if (r8_4 s< 3)
                    sub_14137b7f0(&var_2f8, arg1)
                    sub_14077caf0(arg1, &var_320, r15_7 + 0x120, var_2f8)
                    rcx_28 = &var_2f8
                else
                    sub_14137baa0(&var_2d8, arg1, 0xf, r8_4)
                    sub_14077caf0(arg1, &var_320, r15_7 + 0x120, var_2d8.q)
                    rcx_28 = &var_2d8
                
                sub_1405d1550(rcx_28)
            
            int64_t var_378_1
            var_378_1.d = 1
            sub_1419cd1c0(arg1, r15_7, var_30c, var_310, var_378_1.d)
            sub_14077cfd0(r15_7 + 0x118, arg1, *(arg1 + 0x1b0))
            int64_t* r15_10 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            int64_t rax_29 = arg3[2]
            void* rcx_34 = &r15_10[1]
            
            if (rcx_34 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x10)
                r15_10 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rcx_34 = &r15_10[1]
            
            *(arg1 + 0x30) = rcx_34
            *r15_10 = rax_29
            void*** rcx_38 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_30 = &rcx_38[6]
            
            if (rax_30 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x38)
                rcx_38 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_30 = &rcx_38[6]
            
            *(arg1 + 0x30) = rax_30
            void**** rax_31 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_31 = rcx_38
            *(arg1 + 8) = &rcx_38[1]
            rcx_38[1] = 0
            result = 0x42da7798
            *rcx_38 = &data_142da7798
            rcx_38[2].d = 1
            rcx_38[3] = r15_10
            rcx_38[4].d = 0
            *(rcx_38 + 0x24) = 3
            rcx_38[5] = 0
            
            if (*(arg1 + 0x8c) != rbx_1)
                *(arg1 + 0x8c) = rbx_1
                
                if (*(arg1 + 0x14) u> 0)
                    void*** rdx_24 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_33 = &rdx_24[3]
                    
                    if (rax_33 u> *(arg1 + 0x38))
                        sub_140b0e3d0(arg1 + 0x30, 0x20)
                        rdx_24 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_33 = &rdx_24[3]
                    
                    *(arg1 + 0x30) = rax_33
                    int64_t* rax_34 = *(arg1 + 8)
                    *(arg1 + 0x14) += 1
                    *rax_34 = rdx_24
                    result = *(arg1 + 0x8c)
                    *(arg1 + 8) = &rdx_24[1]
                    rdx_24[1] = 0
                    *rdx_24 = &data_142f11588
                    rdx_24[2].d = result
                else
                    *(arg1 + 0x90) = rbx_1
            
            r12_1 += 0x5240
            r13 = arg2
            i_2 = i_3 + 1
            i_3 = i_2
        while (i_2 s< r13[1].d)
__security_check_cookie(rax_1 ^ &var_398)
return result
