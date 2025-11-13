// 函数: sub_141232b80
// 地址: 0x141232b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_378
void* result = __security_cookie ^ &var_378
void* result_1 = result
int64_t* r13 = arg5
int32_t rbx = 0
int64_t* r15 = arg6
uint64_t r14 = arg3
void* rdi = arg1
int64_t* var_2a8 = r13
int64_t* var_310 = r15
int32_t var_340 = 0

if (r13 != 0 && r15 != 0)
    if ((*(*(arg3 + 0x20) + 0x139) & 2) == 0)
        result = sub_1411e7df0()
    
    if ((*(*(arg3 + 0x20) + 0x139) & 2) != 0 || result.b != 0)
        int64_t* rcx = *(r14 + 0x20)
        void var_278
        result = (*(*rcx + 0x10))(rcx, &var_278)
        int32_t i = 0
        int32_t i_1 = 0
        
        if (*(rdi + 0xa8) s> 0)
            int64_t rdx_1 = 0
            int128_t zmm6
            int128_t var_58_1 = zmm6
            int64_t r8 = 0
            int64_t var_338_1 = 0
            uint128_t zmm7
            uint128_t var_68_1 = zmm7
            int64_t var_308_1 = 0
            
            do
                int64_t* r12_2 = *(rdi + 0xa0) + rdx_1
                
                if ((*(r14 + 0x64) & 2) != 0)
                    result = r12_2[0x31a]
                    i = i_1
                    rdx_1 = var_338_1
                
                if ((*(r14 + 0x64) & 2) == 0
                        || (*(sx.q(*(r14 + 0x28)) * 0x78 + result + 0x40) & 1) != 0)
                    if (*(r12_2 + 0xd79) != 0)
                        result = *(r14 + 0x20)
                    
                    if (*(r12_2 + 0xd79) == 0 || (*(result + 0x138) & 8) != 0)
                        result = *(r14 + 0x20)
                        
                        if (((*(result + 0x13d) & 1) != 0 || (*(r12_2 + 0x497c) & 0x100) != 0)
                                && i s< r15[1].d)
                            void* r15_2 = *r15 + r8
                            
                            if (*(r15_2 + 0xe0) != 0)
                                void* rax_4 = r13[1]
                                int32_t rbx_1 = rbx | 1
                                int64_t var_2f8 = 0
                                int32_t var_2f0_1 = 0
                                int128_t var_2e8_1
                                __builtin_memset(&var_2e8_1, 0, 0x30)
                                void* var_330 = rax_4
                                
                                if (rax_4 != 0)
                                    *(rax_4 + 8) += 1
                                
                                sub_1405d1600(&var_2f8, &var_330)
                                
                                if ((rbx_1.b & 2) != 0)
                                    rbx_1 &= 0xfffffffd
                                    void var_280
                                    sub_1405ec8a0(&var_280)
                                
                                sub_1405ec8a0(&var_330)
                                void* rax_5 = *r13
                                int32_t r13_1 = 0
                                
                                if (rax_5 == 0)
                                    int32_t var_2f0_3 = 0
                                else
                                    int32_t var_2f0_2 = *(rax_5 + 0xbc)
                                
                                int128_t var_2c8
                                var_2c8:8.q = arg4
                                var_2e8_1:8.q = *(r15_2 + 0xa0)
                                sub_1405d16e0(&var_2c8, *(r15_2 + 0xb0))
                                int128_t var_2d8
                                sub_1405d16e0(&var_2d8:8, *(r15_2 + 0xc0))
                                int128_t zmm1_1 = data_142d3f5a0
                                var_2e8_1.q = *(r15_2 + 0x28)
                                int64_t rcx_7 = *(*(r15_2 + 0xe0) + 8)
                                int64_t var_198 = rcx_7
                                int32_t var_c0_1 = 0
                                int32_t var_bc
                                __builtin_memset(&var_bc, 0xff, 0x14)
                                int128_t var_a8_1 = zmm1_1
                                int64_t var_98
                                __builtin_memset(&var_98, 0, 0x1a)
                                int64_t var_190_1 = 0
                                int32_t var_188_1 = 0xffffffff
                                int16_t var_184_1 = 0x500
                                int64_t var_d8
                                __builtin_memset(&var_d8, 0, 0x11)
                                int32_t var_c4_1 = 0
                                int16_t var_80_1
                                var_80_1:1.b = *(rcx_7 + 0x38) u> 1
                                void var_180
                                memset(&var_180, 0, 0xa8)
                                int64_t rbx_5 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
                                int64_t rax_11 = rbx_5 + 0x1a
                                
                                if (rax_11 u> *(arg2 + 0x38))
                                    sub_140b0e3d0(arg2 + 0x30, 0x1c)
                                    rbx_5 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
                                    rax_11 = rbx_5 + 0x1a
                                
                                *(arg2 + 0x30) = rax_11
                                wchar16 const* const rcx_10 = u"HairLighting"
                                wchar16 const j
                                
                                do
                                    j = *rcx_10
                                    *(rcx_10 + rbx_5 - u"HairLighting") = j
                                    rcx_10 = &rcx_10[1]
                                while (j != 0)
                                void*** rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                void* rax_12 = &rcx_13[0x27]
                                
                                if (rax_12 u> *(arg2 + 0x38))
                                    sub_140b0e3d0(arg2 + 0x30, 0x140)
                                    rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                    rax_12 = &rcx_13[0x27]
                                
                                *(arg2 + 0x30) = rax_12
                                void**** rax_13 = *(arg2 + 8)
                                *(arg2 + 0x14) += 1
                                *rax_13 = rcx_13
                                *(arg2 + 8) = &rcx_13[1]
                                sub_1405d11b0(rcx_13, &var_198, rbx_5)
                                *(arg2 + 0x1c4) = 1
                                sub_1405d19b0(arg2, &var_198)
                                int64_t var_88
                                *(arg2 + 0x178) = var_88:7.b
                                *(arg2 + 0x179) = 0
                                *(arg2 + 0x1c4) = 1
                                zmm7 = zx.o(*(r15_2 + 0xd4))
                                void*** rcx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                uint128_t zmm6_1 = _mm_cvtepi32_ps(zx.o(*(r15_2 + 0xd8)))
                                void* rax_16 = &rcx_20[5]
                                zmm7 = _mm_cvtepi32_ps(zmm7)
                                
                                if (rax_16 u> *(arg2 + 0x38))
                                    zmm6_1 = sub_140b0e3d0(arg2 + 0x30, 0x30)
                                    rcx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                    rax_16 = &rcx_20[5]
                                
                                *(arg2 + 0x30) = rax_16
                                void** rax_17 = *(arg2 + 8)
                                *(arg2 + 0x14) += 1
                                *rax_17 = rcx_20
                                *(arg2 + 8) = &rcx_20[1]
                                rcx_20[1] = 0
                                *rcx_20 = &data_142d54998
                                *(rcx_20 + 0x1c) = zmm7.d
                                rcx_20[4].d = zmm6_1.d
                                rcx_20[2] = 0
                                rcx_20[3].d = 0
                                *(rcx_20 + 0x24) = 0x3f800000
                                int128_t var_240
                                __builtin_memset(&var_240, 0, 0x30)
                                int64_t var_1e4
                                __builtin_memset(&var_1e4, 0, 0x43)
                                int128_t var_1f8_1 = zx.o(0)
                                int16_t var_1a0_1 = 0
                                sub_140fdc870(arg2, &var_240)
                                int64_t* rcx_25 = *(r14 + 0x20)
                                int64_t var_210_1 = data_1439b6090
                                int32_t var_1e8_1 = 0
                                int32_t r12_3
                                int32_t r15_3
                                
                                if (*(rcx_25 + 0x13c) != 0)
                                    if ((*(*r12_2 + 0x28) & 0x8000000) != 0)
                                        void* rax_21 = rcx_25[0x26]
                                        
                                        if (rax_21 != 0 && *(rax_21 + 0x78) != 0)
                                            r13_1 = 1
                                    
                                    char rax_23 = (*(*rcx_25 + 0x38))()
                                    int64_t* rcx_26 = *(r14 + 0x20)
                                    int32_t r15_4
                                    r15_4.b = rax_23 != 0
                                    r15_3 = r15_4 + 1
                                    char rax_25 = (*(*rcx_26 + 0x38))(rcx_26)
                                    char rax_27
                                    
                                    if (rax_25 != 0)
                                        int64_t* rcx_27 = *(r14 + 0x20)
                                        rax_27 = (*(*rcx_27 + 0x40))(rcx_27)
                                        r12_3 = 1
                                    
                                    if (rax_25 == 0 || rax_27 == 0)
                                        r12_3 = 0
                                    
                                    int64_t* rcx_28 = *(r14 + 0x20)
                                    char rax_29 = (*(*rcx_28 + 0x30))(rcx_28)
                                    r14 = zx.q(rax_29)
                                    char var_25c_2 = rax_29
                                else
                                    r14.b = 0
                                    r15_3 = 0
                                    char var_25c_1 = 0
                                    r12_3 = 0
                                
                                int32_t rbx_8 = *(r12_2 + 0x497c)
                                void* var_2a0
                                sub_1419a2ec0(r12_2[0xa2a], &var_2a0, &data_143e83190, 0)
                                int32_t rax_30 = 0x40
                                
                                if (r14.b != 0)
                                    rax_30 = 0x42
                                
                                uint64_t r9 =
                                    zx.q(r12_3 + ((rax_30 + r13_1 + ((rbx_8 u>> 8 & 1) << 3)) << 1))
                                void* var_290
                                sub_1419a2ec0(r12_2[0xa2a], &var_290, &data_143e83290, 
                                    r9.d + r15_3 + (r9 << 1).d)
                                void* r13_2 = var_2a0
                                int64_t var_208_1 = data_14395da18
                                int64_t var_200_1 = data_14395d9e8
                                int64_t rax_35 = 0
                                var_240.q = data_1439c9410
                                int16_t var_1a4_1
                                var_1a4_1.b = 0
                                
                                if (r13_2 != 0)
                                    int64_t rdx_13 = sx.q(*(r13_2 + 0x10c))
                                    void* var_298
                                    int64_t* rbx_11 = *(var_298 + 0x10)
                                    int64_t rax_37 = rbx_11[3]
                                    
                                    if (*(rax_37 + (rdx_13 << 3)) == 0)
                                        sub_1419ccf30(rbx_11, rdx_13.d)
                                        rax_37 = rbx_11[3]
                                    
                                    rax_35 = *(rax_37 + (rdx_13 << 3))
                                
                                void* r14_2 = var_290
                                var_240:8.q = rax_35
                                int64_t rax_38 = 0
                                
                                if (r14_2 != 0)
                                    int64_t rdx_14 = sx.q(*(r14_2 + 0x10c))
                                    void* var_288
                                    int64_t* rbx_12 = *(var_288 + 0x10)
                                    int64_t rax_40 = rbx_12[3]
                                    
                                    if (*(rax_40 + (rdx_14 << 3)) == 0)
                                        sub_1419ccf30(rbx_12, rdx_14.d)
                                        rax_40 = rbx_12[3]
                                    
                                    rax_38 = *(rax_40 + (rdx_14 << 3))
                                
                                int128_t var_220_1
                                var_220_1.q = rax_38
                                int32_t var_1e8_2 = 0
                                sub_1419870b0(arg2, &var_240, 2)
                                sub_14123bc90(r13_2, arg2, r12_2, r15_2)
                                sub_141239bf0(r14_2, arg2, r12_2, arg3, arg4, &var_2f8)
                                void*** rcx_41 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                void* rax_42 = &rcx_41[5]
                                
                                if (rax_42 u> *(arg2 + 0x38))
                                    sub_140b0e3d0(arg2 + 0x30, 0x30)
                                    rcx_41 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                    rax_42 = &rcx_41[5]
                                
                                *(arg2 + 0x30) = rax_42
                                int64_t* rax_43 = *(arg2 + 8)
                                *(arg2 + 0x14) += 1
                                *rax_43 = rcx_41
                                *(arg2 + 8) = &rcx_41[1]
                                rcx_41[1] = 0
                                *rcx_41 = &data_142d56618
                                rcx_41[2].d = 0
                                rcx_41[3] = 0
                                rcx_41[4].d = 0
                                void*** rcx_47 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                void* rax_45 = &rcx_47[4]
                                
                                if (rax_45 u> *(arg2 + 0x38))
                                    sub_140b0e3d0(arg2 + 0x30, 0x28)
                                    rcx_47 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                    rax_45 = &rcx_47[4]
                                
                                *(arg2 + 0x30) = rax_45
                                int64_t* rax_46 = *(arg2 + 8)
                                *(arg2 + 0x14) += 1
                                *rax_46 = rcx_47
                                *(arg2 + 8) = &rcx_47[1]
                                rcx_47[1] = 0
                                *rcx_47 = &data_142d54988
                                rcx_47[2].d = 0
                                *(rcx_47 + 0x14) = 1
                                rcx_47[3].d = 1
                                sub_141096650(arg2)
                                int64_t var_90
                                sub_1405d1550(&var_90)
                                sub_1405ec8a0(&var_2c8)
                                sub_1405ec8a0(&var_2d8:8)
                                result = sub_1405ec8a0(&var_2f8)
                                i = i_1
                                rdx_1 = var_338_1
                                r8 = var_308_1
                                rbx = rbx_1 & 0xfffffffe
                                r14 = arg3
                                rdi = arg1
                                r13 = var_2a8
                            
                            r15 = var_310
                
                i += 1
                rdx_1 += 0x5240
                r8 += 0xe8
                i_1 = i
                var_338_1 = rdx_1
                var_308_1 = r8
            while (i s< *(rdi + 0xa8))

__security_check_cookie(result_1 ^ &var_378)
return result
