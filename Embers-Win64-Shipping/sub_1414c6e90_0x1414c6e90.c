// 函数: sub_1414c6e90
// 地址: 0x1414c6e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3a8
int64_t rax_1 = __security_cookie ^ &var_3a8
void* result = arg1
int32_t var_338 = 0

if (*(arg1 + 0xa8) s> 0)
    uint64_t rcx = 0
    uint128_t zmm6
    uint128_t var_48_1 = zmm6
    uint128_t zmm7
    uint128_t var_58_1 = zmm7
    uint128_t zmm8
    uint128_t var_68_1 = zmm8
    uint128_t zmm9
    uint128_t var_78_1 = zmm9
    uint64_t var_2f0_1 = 0
    
    while (true)
        void* r13_2 = rcx * 0x5240 + *(result + 0xa0)
        int64_t rax_2 = 0
        rcx.b = 0
        
        while (true)
            if (rcx.b == 0)
                rcx = zx.q(*(rax_2 + r13_2 + 0x18a0))
                rax_2 += 1
                
                if (rax_2 s< 4)
                    continue
                else if (rcx.b == 0)
                    break
            
            if (0f f< *(r13_2 + 0xd80))
                break
            
            int32_t rcx_2 = *(r13_2 + 0xad8)
            int32_t rdi_1 = *(arg2 + 0x8c)
            
            if (rdi_1 != rcx_2)
                bool cond:1_1 = *(arg2 + 0x14) u> 0
                *(arg2 + 0x8c) = rcx_2
                
                if (cond:1_1)
                    void*** rdx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_3 = &rdx_2[3]
                    
                    if (rax_3 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, 0x20)
                        rdx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_3 = &rdx_2[3]
                    
                    *(arg2 + 0x30) = rax_3
                    int64_t* rax_4 = *(arg2 + 8)
                    *(arg2 + 0x14) += 1
                    *rax_4 = rdx_2
                    int32_t rax_5 = *(arg2 + 0x8c)
                    *(arg2 + 8) = &rdx_2[1]
                    rdx_2[1] = 0
                    *rdx_2 = &data_142f11588
                    rdx_2[2].d = rax_5
                else
                    *(arg2 + 0x90) = rcx_2
            
            int32_t rcx_5 = *(r13_2 + 0x15a0)
            int128_t zmm0 = data_142d3f800
            int32_t r8 = *(r13_2 + 0x1598)
            int32_t rdx_5 = *(r13_2 + 0x159c)
            int32_t rax_6 = *(r13_2 + 0x15a4)
            int32_t var_208 = 0
            int64_t var_1e4_1 = 0
            int32_t var_1dc_1 = 0
            int64_t r12_1 = *sub_14139d700(&data_143ec4c60)
            int64_t* rax_8 = sub_14139d690(&data_143ec4c60)
            void*** rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            int64_t* r15_1 = *rax_8
            void* rax_9 = &rbx_3[0xa]
            
            if (rax_9 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x58)
                rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_9 = &rbx_3[0xa]
            
            *(arg2 + 0x30) = rax_9
            int64_t* rax_10 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_10 = rbx_3
            *(arg2 + 8) = &rbx_3[1]
            rbx_3[1] = 0
            *rbx_3 = &data_142d56628
            rbx_3[2].d = var_208
            *(rbx_3 + 0x14) = r8
            rbx_3[3].d = rdx_5
            *(rbx_3 + 0x1c) = rcx_5
            rbx_3[4].d = rax_6
            *(rbx_3 + 0x24) = zmm0.d
            rbx_3[5].d = zmm0:4.d
            *(rbx_3 + 0x2c) = zmm0:8.d
            rbx_3[6].d = zmm0:0xc.d
            *(rbx_3 + 0x34) = var_1e4_1.d
            rbx_3[7].d = var_1e4_1:4.d
            *(rbx_3 + 0x3c) = var_1dc_1
            rbx_3[8] = r15_1
            rbx_3[9] = r12_1
            
            if ((*(*r15_1 + 8))(r15_1) == 0)
                int64_t* rcx_8 = rbx_3[8]
                
                if ((*(*rcx_8 + 0x18))(rcx_8) == 0)
                    int64_t* rcx_9 = rbx_3[8]
                    
                    if ((*(*rcx_9 + 0x20))(rcx_9) == 0)
                        int64_t* rcx_10 = rbx_3[8]
                        (*(*rcx_10 + 0x10))(rcx_10)
            
            int64_t* rcx_11 = rbx_3[9]
            
            if ((*(*rcx_11 + 8))(rcx_11) == 0)
                int64_t* rcx_12 = rbx_3[9]
                
                if ((*(*rcx_12 + 0x18))(rcx_12) == 0)
                    int64_t* rcx_13 = rbx_3[9]
                    
                    if ((*(*rcx_13 + 0x20))(rcx_13) == 0)
                        int64_t* rcx_14 = rbx_3[9]
                        (*(*rcx_14 + 0x10))(rcx_14)
            
            void* rax_38 = *arg3
            int64_t var_328
            int32_t var_1f8_1
            
            if (rax_38 == 0)
                int64_t rax_39 = data_143ec4fdc
                int32_t rcx_15 = data_1439c7b18
                zmm0 = data_1439c7b08
                var_328 = rax_39
                int128_t var_1f4_1
                var_1f4_1.d = rax_39.d
                var_1f4_1:4.d = var_328:4.d
                var_1f4_1:0xc.d = 1
                var_1e4_1:4.w = 1
                int32_t var_1d4_1 = 1
                wchar16 const* const var_1c8_1 = u"UnknownTexture2D"
                var_1f8_1 = rcx_15
                int16_t var_1d0_1 = 0
                var_208.o = zmm0
                var_1f4_1:8.d = 0
                var_1e4_1.d = 0x10000
                var_1dc_1.q = 2
                int16_t var_1c0_1 = 1
                char var_1be_1 = 0
                sub_1419a0ce0(&data_1439c9260, arg2, &var_208, arg3, u"SceneColorCopy", 1, 1, 0)
                rax_38 = *arg3
            
            void* rax_41 = *(rax_38 + 8)
            int128_t zmm1 = data_142d3f5a0
            int32_t var_e0_1 = 0
            int32_t var_dc
            __builtin_memset(&var_dc, 0xff, 0x14)
            int128_t var_c8_1 = zmm1
            int64_t var_b8
            __builtin_memset(&var_b8, 0, 0x1a)
            void* var_1b8 = rax_41
            int64_t var_1b0_1 = 0
            int32_t var_1a8_1 = 0xffffffff
            int16_t var_1a4_1 = 0x100
            int64_t var_f8
            __builtin_memset(&var_f8, 0, 0x11)
            int32_t var_e4_1 = 0
            int16_t var_a0_1
            var_a0_1:1.b = *(rax_41 + 0x38) u> 1
            void var_1a0
            memset(&var_1a0, 0, 0xa8)
            int32_t i_5 = 0
            void** rax_42 = &var_1b8
            int64_t rcx_17 = 0
            uint64_t r12_2 = 0
            
            while (*rax_42 != 0)
                i_5 += 1
                rcx_17 += 1
                rax_42 = &rax_42[3]
                
                if (rcx_17 s>= 8)
                    break
            
            if (i_5 != 0)
                int32_t* rdx_7 = &var_208
                uint64_t i_4 = zx.q(i_5)
                void** rax_43 = &var_1b8
                uint64_t i
                
                do
                    void* rcx_18 = *rax_43
                    
                    if (rcx_18 != 0)
                        r12_2 = zx.q(r12_2.d + 1)
                        *rdx_7 = rcx_18
                        rdx_7 = &rdx_7[2]
                    
                    rax_43 = &rax_43[3]
                    i = i_4
                    i_4 -= 1
                while (i != 1)
            
            int64_t r15_2 = var_f8
            
            if (r15_2 != 0 && ((var_e4_1.b & 0xf) == 2 || (var_e4_1.b & 0xf0) == 0x20))
                void*** rcx_21 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_46 = &rcx_21[4]
                
                if (rax_46 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x28)
                    rcx_21 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_46 = &rcx_21[4]
                
                *(arg2 + 0x30) = rax_46
                int64_t* rax_47 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_47 = rcx_21
                *(arg2 + 8) = &rcx_21[1]
                rcx_21[1] = 0
                *rcx_21 = &data_142f115e8
                rcx_21[2].d = var_e4_1
                rcx_21[3] = r15_2
            
            uint32_t rdx_8 = (r12_2 << 3).d
            int64_t r15_3 = sx.q(rdx_8)
            int64_t* rbx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_49 = rbx_10 + r15_3
            
            if (rax_49 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, rdx_8 + 8)
                rbx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_49 = rbx_10 + r15_3
            
            *(arg2 + 0x30) = rax_49
            int64_t i_3 = sx.q(r12_2.d)
            
            if (r12_2.d s> 0)
                int64_t* rcx_26 = rbx_10
                int64_t i_1
                
                do
                    *rcx_26 = *(&var_208 - rbx_10 + rcx_26)
                    rcx_26 = &rcx_26[1]
                    i_1 = i_3
                    i_3 -= 1
                while (i_1 != 1)
            
            void*** rcx_29 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_51 = &rcx_29[5]
            
            if (rax_51 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_29 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_51 = &rcx_29[5]
            
            *(arg2 + 0x30) = rax_51
            void**** rax_52 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_52 = rcx_29
            *(arg2 + 8) = &rcx_29[1]
            rcx_29[1] = 0
            rcx_29[3] = rbx_10
            *rcx_29 = &data_142d549c8
            rcx_29[2].d = r12_2.d
            rcx_29[4].d = 1
            int64_t rbx_15 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
            int64_t rax_54 = rbx_15 + 0x48
            
            if (rax_54 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x4a)
                rbx_15 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
                rax_54 = rbx_15 + 0x48
            
            *(arg2 + 0x30) = rax_54
            wchar16 const* const rcx_34 = u"ResolveColorForTranslucentMaterials"
            wchar16 const i_2
            
            do
                i_2 = *rcx_34
                *(rcx_34 + rbx_15 - u"ResolveColorForTranslucentMaterials") = i_2
                rcx_34 = &rcx_34[1]
            while (i_2 != 0)
            void*** rcx_37 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_55 = &rcx_37[0x27]
            
            if (rax_55 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x140)
                rcx_37 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_55 = &rcx_37[0x27]
            
            *(arg2 + 0x30) = rax_55
            void**** rax_56 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_56 = rcx_37
            *(arg2 + 8) = &rcx_37[1]
            sub_1405d11b0(rcx_37, &var_1b8, rbx_15)
            *(arg2 + 0x1c4) = 1
            sub_1405d19b0(arg2, &var_1b8)
            int64_t var_a8
            *(arg2 + 0x178) = var_a8:7.b
            *(arg2 + 0x179) = 0
            *(arg2 + 0x1c4) = 1
            zmm7 = zx.o(*(r13_2 + 0x15a0))
            void*** rcx_44 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            zmm8 = zx.o(*(r13_2 + 0x159c))
            zmm9 = zx.o(*(r13_2 + 0x1598))
            zmm6 = _mm_cvtepi32_ps(zx.o(*(r13_2 + 0x15a4)))
            void* rax_59 = &rcx_44[5]
            zmm7 = _mm_cvtepi32_ps(zmm7)
            zmm8 = _mm_cvtepi32_ps(zmm8)
            zmm9 = _mm_cvtepi32_ps(zmm9)
            
            if (rax_59 u> *(arg2 + 0x38))
                zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_44 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_59 = &rcx_44[5]
            
            *(arg2 + 0x30) = rax_59
            void** rax_60 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            int32_t r15_4 = 0
            *rax_60 = rcx_44
            *(arg2 + 8) = &rcx_44[1]
            rcx_44[1] = 0
            *rcx_44 = &data_142d54998
            rcx_44[2].d = zmm9.d
            *(rcx_44 + 0x14) = zmm8.d
            *(rcx_44 + 0x1c) = zmm7.d
            rcx_44[4].d = zmm6.d
            rcx_44[3].d = 0
            *(rcx_44 + 0x24) = 0x3f800000
            uint64_t rax_62 = zx.q(*(arg2 + 0xa0))
            int64_t var_258
            __builtin_memset(&var_258, 0, 0x2c)
            int64_t var_228_1 = 0
            int32_t var_220_1 = 0
            int16_t var_21c_1 = 0
            char var_21a_1 = 0
            int16_t var_218_1 = 0
            int32_t var_25c_1 = rax_62.d
            int128_t var_2b8
            __builtin_memset(&var_2b8, 0, 0x30)
            int128_t var_270_1 = zx.o(0)
            
            if (rax_62.d != 0)
                do
                    uint64_t rbx_18 = zx.q(r15_4)
                    uint64_t r12_3 = rbx_18 * 3
                    int64_t* rcx_48 = *(arg2 + (r12_3 << 3) + 0xa8)
                    
                    if (rcx_48 == 0)
                        *(&var_258 + rbx_18) = 0
                        rax_62.b = 0
                    else
                        *(&var_258 + rbx_18) = *(rcx_48 + 0x3c)
                        int64_t var_250
                        *(&var_250 + (rbx_18 << 2)) = rcx_48[8].d
                        int64_t rax_66 = (*(*rcx_48 + 0x10))()
                        
                        if (rax_66 != 0)
                            var_21c_1:1.b = 1
                        
                        if (rax_66 == 0 || *(rax_66 + 0x68) u<= 1)
                            var_21c_1:1.b = 0
                        
                        rax_62 = zx.q(*(&var_258 + rbx_18))
                    
                    if (rax_62.b != 0)
                        var_220_1.w = *(*(arg2 + (r12_3 << 3) + 0xa8) + 0x38)
                    
                    r15_4 += 1
                while (r15_4 u< var_25c_1)
            
            int64_t* rcx_50 = *(arg2 + 0x168)
            int32_t var_230_1
            
            if (rcx_50 == 0)
                var_230_1 = 0
            else
                var_230_1 = *(rcx_50 + 0x3c)
                var_230_1 = rcx_50[8].d
                void* rax_70 = (*(*rcx_50 + 0x10))()
                
                if (rax_70 == 0 || *(rax_70 + 0x68) u<= 1)
                    var_21c_1:1.b = 0
                else
                    var_21c_1:1.b = 1
            
            var_228_1.b = *(arg2 + 0x170)
            var_228_1:1.b = *(arg2 + 0x171)
            var_228_1:2.b = *(arg2 + 0x172)
            var_228_1:3.b = *(arg2 + 0x173)
            var_228_1:4.d = *(arg2 + 0x174)
            
            if (var_230_1 != 0)
                var_220_1.w = *(*(arg2 + 0x168) + 0x38)
            
            var_220_1:2.b = *(arg2 + 0x178)
            var_220_1:3.b = *(arg2 + 0x179)
            char var_21a_2 = *(arg2 + 0x17a)
            int64_t var_280_1 = data_14395da18
            int64_t var_278_1 = data_14395d9e8
            int64_t var_288_1 = data_14395da00
            void* var_2d8
            sub_1419a2ec0(*(r13_2 + 0x5150), &var_2d8, &data_143f55f90, 0)
            void* var_2c8
            sub_1419a2ec0(*(r13_2 + 0x5150), &var_2c8, &data_143ee8a70, 0)
            void* rcx_54 = var_2d8
            var_2b8.q = data_1439c9210
            int64_t rax_84 = 0
            
            if (rcx_54 != 0)
                int64_t rdx_16 = sx.q(*(rcx_54 + 0x10c))
                void* var_2d0
                int64_t* rbx_19 = *(var_2d0 + 0x10)
                int64_t rax_86 = rbx_19[3]
                
                if (*(rax_86 + (rdx_16 << 3)) == 0)
                    sub_1419ccf30(rbx_19, rdx_16.d)
                    rax_86 = rbx_19[3]
                
                rax_84 = *(rax_86 + (rdx_16 << 3))
            
            void* r15_6 = var_2c8
            var_2b8:8.q = rax_84
            int64_t rax_87 = 0
            
            if (r15_6 != 0)
                int64_t rdx_17 = sx.q(*(r15_6 + 0x10c))
                void* var_2c0
                int64_t* rbx_20 = *(var_2c0 + 0x10)
                int64_t rax_89 = rbx_20[3]
                
                if (*(rax_89 + (rdx_17 << 3)) == 0)
                    sub_1419ccf30(rbx_20, rdx_17.d)
                    rax_89 = rbx_20[3]
                
                rax_87 = *(rax_89 + (rdx_17 << 3))
            
            int128_t var_298_1
            var_298_1.q = rax_87
            int32_t var_260_1 = 0
            sub_1419870b0(arg2, &var_2b8, 2)
            int32_t r8_4 = *(r13_2 + 0x1548)
            var_328 = *(arg2 + 0x1a0)
            
            if (*(r15_6 + 0x118) != 0xffff)
                int64_t* rcx_60
                
                if (r8_4 s< 3)
                    int64_t var_310
                    sub_14137b7f0(&var_310, arg2)
                    sub_141083500(arg2, &var_328, r15_6 + 0x118, var_310)
                    rcx_60 = &var_310
                else
                    int64_t var_318
                    sub_14137baa0(&var_318, arg2, 0xf, r8_4)
                    sub_141083500(arg2, &var_328, r15_6 + 0x118, var_318)
                    rcx_60 = &var_318
                
                sub_1405d1550(rcx_60)
            
            int32_t rdx_22 = *(r13_2 + 0x159c)
            int32_t rcx_64 = *(r13_2 + 0x15a4) - rdx_22
            uint64_t r9_5 = zx.q(*(r13_2 + 0x1598))
            uint128_t zmm0_1 = var_2d8.o
            int64_t rax_91 = data_143ec4fdc
            int512_t zmm2_1
            zmm2_1.o = zx.o(rcx_64)
            int32_t r8_8 = *(r13_2 + 0x15a0) - r9_5.d
            int32_t var_2fc_1 = rcx_64
            int32_t var_340_1 = 1
            int32_t var_348_1 = 1
            int64_t* var_350_1 = &var_328
            zmm2_1.o = _mm_cvtepi32_ps(zmm2_1.o)
            var_328.o = zmm0_1
            int32_t var_368_1 = zmm2_1.d
            int512_t zmm3
            zmm3.o = zx.o(r8_8)
            zmm3.o = _mm_cvtepi32_ps(zmm3.o)
            char var_370
            var_370.d = zmm3.d
            uint128_t zmm1_2 = _mm_cvtepi32_ps(zx.o(r9_5.d))
            char var_378
            var_378.d = _mm_cvtepi32_ps(zx.o(rdx_22)).d
            char var_380
            var_380.d = zmm1_2.d
            wchar16 const* const var_388
            var_388.d = zmm2_1.d
            zmm2_1.o = zx.o(0)
            sub_1413993b0(arg2, zx.o(0), zmm2_1, r9_5, zmm3, var_388.d, var_380, var_378, var_370, 
                var_368_1, r8_8.q, rax_91, var_350_1, var_348_1, var_340_1)
            void*** rcx_68 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_93 = &rcx_68[2]
            
            if (rax_93 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x18)
                rcx_68 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_93 = &rcx_68[2]
            
            *(arg2 + 0x30) = rax_93
            *(arg2 + 0x14) += 1
            int128_t zmm1_3 = data_142d3f800
            var_208.o = data_142d57d10
            **(arg2 + 8) = rcx_68
            int128_t zmm0_2 = data_142d57920
            *(arg2 + 8) = &rcx_68[1]
            rcx_68[1] = 0
            *rcx_68 = &data_142d549b8
            *(arg2 + 0x1c4) = 0
            *(arg2 + 0x178) = 0
            void* rax_96 = *arg3
            void*** rbx_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            var_1f8_1.o = zmm1_3
            int64_t r12_5 = *(rax_96 + 0x10)
            int64_t* r15_7 = *(rax_96 + 8)
            void* rax_97 = &rbx_23[0xa]
            
            if (rax_97 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x58)
                rbx_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_97 = &rbx_23[0xa]
            
            *(arg2 + 0x30) = rax_97
            int64_t* rax_98 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_98 = rbx_23
            *(arg2 + 8) = &rbx_23[1]
            rbx_23[1] = 0
            *rbx_23 = &data_142d56628
            rbx_23[2].d = var_208
            *(rbx_23 + 0x14) = r8
            rbx_23[3].d = rdx_5
            *(rbx_23 + 0x1c) = rcx_5
            rbx_23[4].d = var_1f8_1
            *(rbx_23 + 0x24) = zmm0_2.d
            rbx_23[5].d = zmm0_2:4.d
            *(rbx_23 + 0x2c) = zmm0_2:8.d
            rbx_23[6].d = zmm0_2:0xc.d
            *(rbx_23 + 0x34) = var_1e4_1.d
            rbx_23[7].d = var_1e4_1:4.d
            *(rbx_23 + 0x3c) = var_1dc_1
            rbx_23[8] = r15_7
            rbx_23[9] = r12_5
            
            if ((*(*r15_7 + 8))(r15_7) == 0)
                int64_t* rcx_74 = rbx_23[8]
                
                if ((*(*rcx_74 + 0x18))(rcx_74) == 0)
                    int64_t* rcx_75 = rbx_23[8]
                    
                    if ((*(*rcx_75 + 0x20))(rcx_75) == 0)
                        int64_t* rcx_76 = rbx_23[8]
                        (*(*rcx_76 + 0x10))(rcx_76)
            
            int64_t* rcx_77 = rbx_23[9]
            
            if ((*(*rcx_77 + 8))(rcx_77) == 0)
                int64_t* rcx_78 = rbx_23[9]
                
                if ((*(*rcx_78 + 0x18))(rcx_78) == 0)
                    int64_t* rcx_79 = rbx_23[9]
                    
                    if ((*(*rcx_79 + 0x20))(rcx_79) == 0)
                        int64_t* rcx_80 = rbx_23[9]
                        (*(*rcx_80 + 0x10))(rcx_80)
            
            int64_t var_b0
            sub_1405d1550(&var_b0)
            
            if (*(arg2 + 0x8c) != rdi_1)
                bool cond:4_1 = *(arg2 + 0x14) u> 0
                *(arg2 + 0x8c) = rdi_1
                
                if (cond:4_1)
                    void*** rdx_26 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_128 = &rdx_26[3]
                    
                    if (rax_128 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, 0x20)
                        rdx_26 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_128 = &rdx_26[3]
                    
                    *(arg2 + 0x30) = rax_128
                    int64_t* rax_129 = *(arg2 + 8)
                    *(arg2 + 0x14) += 1
                    *rax_129 = rdx_26
                    int32_t rax_130 = *(arg2 + 0x8c)
                    *(arg2 + 8) = &rdx_26[1]
                    rdx_26[1] = 0
                    *rdx_26 = &data_142f11588
                    rdx_26[2].d = rax_130
                else
                    *(arg2 + 0x90) = rdi_1
            
            break
        
        int32_t rax_127 = var_338 + 1
        rcx = var_2f0_1 + 1
        var_338 = rax_127
        var_2f0_1 = rcx
        result = arg1
        
        if (rax_127 s>= *(arg1 + 0xa8))
            break

__security_check_cookie(rax_1 ^ &var_3a8)
return result
