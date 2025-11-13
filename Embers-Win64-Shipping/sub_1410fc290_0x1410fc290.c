// 函数: sub_1410fc290
// 地址: 0x1410fc290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_448
int64_t rax_1 = __security_cookie ^ &var_448
arg2[8]
int64_t r8 = *arg1
int64_t* var_340 = &data_143ec4c60
int128_t* rax_3 = sub_14139d290((*(r8 + 0x10))(arg1, 0, r8))
int64_t* rsi = arg1[0x10]
int64_t* rcx_3 = rax_3[5].q
arg1[0x10] = rcx_3

if (rcx_3 != 0)
    int64_t rdx = *rcx_3
    (*(rdx + 0x30))(rcx_3, rdx)

if (rsi != 0)
    (*(*rsi + 0x38))(rsi)

rax_3[4].q = arg1[0xe]
*(arg1 + 0x30) = *rax_3
arg1[8].d = rax_3[1].d
*(arg1 + 0x44) = *(rax_3 + 0x14)
arg1[9].d = *(rax_3 + 0x18)
*(arg1 + 0x4c) = *(rax_3 + 0x1c)
arg1[0xa].d = rax_3[2].d
*(arg1 + 0x54) = *(rax_3 + 0x24)
*(arg1 + 0x55) = *(rax_3 + 0x25)
*(arg1 + 0x56) = *(rax_3 + 0x26)
arg1[0xb].w = *(rax_3 + 0x28)
*(arg1 + 0x5c) = *(rax_3 + 0x2c)
arg1[0xc].d = rax_3[3].d
*(arg1 + 0x64) = *(rax_3 + 0x34)
arg1[0xd].b = *(rax_3 + 0x38)
*(arg1 + 0x69) = *(rax_3 + 0x39)
arg1[0xe] = rax_3[4].q
arg1[0xf].b = *(rax_3 + 0x48)
*(arg1 + 0x79) = *(rax_3 + 0x49)
uint64_t result = zx.q(*(rax_3 + 0x4a))
*(arg1 + 0x7a) = result.b
int64_t* r13 = *arg2
void* rcx_5 = r13[1]

if (rcx_5 != 0)
    void* rax_23 = sub_1412278d0(rcx_5, arg2[0xb].d, 1)
    int128_t zmm6_1
    result, zmm6_1 = sub_1410e7c80(&r13[0x2a2])
    
    if (rax_23 != 0)
        int128_t var_48_1 = zmm6_1
        zmm6_1 = zx.o(0)
        
        if (not(0f f== *(result + 4)))
            int64_t r12
            
            if ((*(*r13 + 0x28) & 0x80000) == 0 || *(data_143e51068 + 4) == 0)
                r12.b = 0
            else
                r12.b = 1
            
            int64_t* rax_24 = sub_14139d440(&data_143ec4c60)
            arg2[8]
            void* r15_1 = data_143ec4c90
            int64_t* rax_26 = *rax_24 + 8
            
            if (not(9.99999975e-05f f>= *(result + 0x20)))
                zmm6_1 = sub_1410f5860(arg1, arg2)
            
            int64_t var_318 = *rax_26
            int64_t var_310_1 = *(r15_1 + 8)
            void var_1a8
            sub_14108c030(&var_1a8, zx.d(r12.b) + 1, &var_318, 5)
            void* rsi_2 = arg2[8]
            int64_t rbx_3 = (*(rsi_2 + 0x30) + 1) & 0xfffffffffffffffe
            int64_t rax_30 = rbx_3 + 0x18
            
            if (rax_30 u> *(rsi_2 + 0x38))
                zmm6_1 = sub_140b0e3d0(rsi_2 + 0x30, 0x1a)
                rbx_3 = (*(rsi_2 + 0x30) + 1) & 0xfffffffffffffffe
                rax_30 = rbx_3 + 0x18
            
            wchar16 const* const rcx_13 = u"LPVIndirect"
            *(rsi_2 + 0x30) = rax_30
            wchar16 const i
            
            do
                i = *rcx_13
                *(rcx_13 + rbx_3 - u"LPVIndirect") = i
                rcx_13 = &rcx_13[1]
            while (i != 0)
            void*** rcx_16 = (*(rsi_2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_31 = &rcx_16[0x27]
            
            if (rax_31 u> *(rsi_2 + 0x38))
                zmm6_1 = sub_140b0e3d0(rsi_2 + 0x30, 0x140)
                rcx_16 = (*(rsi_2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_31 = &rcx_16[0x27]
            
            *(rsi_2 + 0x30) = rax_31
            void**** rax_32 = *(rsi_2 + 8)
            *(rsi_2 + 0x14) += 1
            *rax_32 = rcx_16
            *(rsi_2 + 8) = &rcx_16[1]
            sub_1405d11b0(rcx_16, &var_1a8, rbx_3)
            *(rsi_2 + 0x1c4) = 1
            sub_1405d19b0(rsi_2, &var_1a8)
            char var_91
            *(rsi_2 + 0x178) = var_91
            *(rsi_2 + 0x179) = 0
            *(rsi_2 + 0x1c4) = 1
            int128_t var_278 = *(r13 + 0x1598)
            sub_1410b7780(arg2, &var_278, zmm6_1, 0x3f800000)
            void* rcx_22 = arg2[8]
            int64_t var_1fc
            __builtin_memset(&var_1fc, 0, 0x43)
            int128_t var_258
            __builtin_memset(&var_258, 0, 0x30)
            int128_t var_210_1 = zx.o(0)
            int16_t var_1b8_1 = 0
            sub_140fdc870(rcx_22, &var_258)
            int64_t var_228_1 = data_1439b58a8
            int64_t var_220_1 = data_14395da18
            int64_t var_218_1 = data_14395d9e8
            void* var_328
            sub_1419a2ec0(arg2[0xc], &var_328, &data_143ed5e80, 0)
            void* rcx_24 = var_328
            var_258.q = data_1439c9210
            int64_t rax_39 = 0
            
            if (rcx_24 != 0)
                int64_t rdx_13 = sx.q(*(rcx_24 + 0x10c))
                void* var_320
                int64_t* rbx_6 = *(var_320 + 0x10)
                int64_t rax_41 = rbx_6[3]
                
                if (*(rax_41 + (rdx_13 << 3)) == 0)
                    sub_1419ccf30(rbx_6, rdx_13.d)
                    rax_41 = rbx_6[3]
                
                rax_39 = *(rax_41 + (rdx_13 << 3))
            
            int64_t* rcx_26 = arg2[0xc]
            var_258:8.q = rax_39
            void* rbx_7
            void* rsi_4
            
            if (r12.b == 0)
                void* var_2f8
                sub_1419a2ec0(rcx_26, &var_2f8, &data_143e53b00, 0)
                rsi_4 = var_2f8
                void* var_2f0
                rbx_7 = var_2f0
            else
                void* var_308
                sub_1419a2ec0(rcx_26, &var_308, &data_143e53c60, 0)
                rsi_4 = var_308
                void* var_300
                rbx_7 = var_300
            
            int64_t rax_43 = 0
            
            if (rsi_4 != 0)
                int64_t rdx_16 = sx.q(*(rsi_4 + 0x10c))
                int64_t* rbx_8 = *(rbx_7 + 0x10)
                int64_t rax_42 = rbx_8[3]
                
                if (*(rax_42 + (rdx_16 << 3)) == 0)
                    sub_1419ccf30(rbx_8, rdx_16.d)
                    rax_42 = rbx_8[3]
                
                rax_43 = *(rax_42 + (rdx_16 << 3))
            
            int128_t var_238
            var_238.q = rax_43
            int32_t var_200_1 = 0
            sub_1419870b0(arg2[8], &var_258, 2)
            int64_t* rcx_29 = data_143f0f180
            int32_t zmm1_1 = *(rax_23 + 0xe0)
            uint128_t var_2dc_1 = *(rax_23 + 0xbc)
            int32_t var_2e8 = *(rax_23 + 0xb0)
            int32_t var_2e4_1 = *(rax_23 + 0xb4)
            uint128_t var_2cc_1 = *(rax_23 + 0xcc)
            int32_t var_2e0_1 = *(rax_23 + 0xb8)
            int32_t var_2bc_1 = (*(rax_23 + 0xdc)).d
            uint64_t var_2a8_1 = *(rax_23 + 0xf0)
            uint64_t var_298_1 = *(rax_23 + 0x100)
            int32_t var_2b8_1 = zmm1_1
            int32_t var_2a0_1 = *(rax_23 + 0xf8)
            int32_t var_28c_1 = (*(rax_23 + 0x10c)).d
            int32_t var_288_1 = *(rax_23 + 0x110)
            int32_t var_290_1 = *(rax_23 + 0x108)
            void* var_3c8
            (*(*rcx_29 + 0xf8))(rcx_29, &var_3c8, &var_2e8, &data_143e510c0, 0, 1)
            void* const rbx_9 = var_3c8
            void* const var_3c0 = rbx_9
            
            if (rbx_9 != 0)
                *(rbx_9 + 8) += 1
                rbx_9 = var_3c0
            
            sub_1405d1550(&var_3c8)
            void* const var_3b8 = rbx_9
            var_3c0 = nullptr
            sub_1405d1550(&var_3c0)
            int64_t rdx_19 = zx.q(1 - *(rax_23 + 0x16c)) * 7
            void* const var_348 = rbx_9
            void* rax_52 = *(rax_23 + (rdx_19 << 3) + 0x18)
            int64_t var_88 = *(*(rax_23 + (rdx_19 << 3) + 0x10) + 0x10)
            int64_t var_80_1 = *(rax_52 + 0x10)
            int64_t var_78_1 = *(*(rax_23 + (rdx_19 << 3) + 0x20) + 0x10)
            int64_t var_70_1 = *(*(rax_23 + (rdx_19 << 3) + 0x28) + 0x10)
            int64_t var_68_1 = *(*(rax_23 + (rdx_19 << 3) + 0x30) + 0x10)
            int64_t var_60_1 = *(*(rax_23 + (rdx_19 << 3) + 0x38) + 0x10)
            int64_t var_58_1 = *(*(rax_23 + (rdx_19 << 3) + 0x40) + 0x10)
            
            if (rbx_9 != 0)
                *(rbx_9 + 8) += 1
            
            int32_t var_420_1
            var_420_1.q = arg2
            int32_t var_428_1
            var_428_1.q = &var_348
            uint128_t zmm6_2
            uint128_t zmm8_1
            zmm6_2, zmm8_1 =
                sub_1410e8fd0(rsi_4, arg2[8], &var_88, *(*(rax_23 + 0x150) + 0x10), var_428_1)
            int32_t var_3d8_1 = 0
            int32_t rcx_41 = *(r13 + 0x15a4) - *(r13 + 0x159c)
            int32_t r8_6 = r13[0x2b3].d
            int32_t rax_59 = (*(var_340 + 0x37c)).d
            int32_t rdx_22 = r13[0x2b4].d - r8_6
            var_3c8:4.d = rcx_41
            char rcx_42 = *(arg2 + 0x69)
            int32_t rcx_43 = r13[0x15a].d
            uint128_t var_268
            uint128_t* var_3f0_1 = &var_268
            void* rcx_44 = arg2[8]
            var_268 = var_328.o
            uint128_t zmm0_3 = zx.o(*(r13 + 0x159c))
            uint128_t zmm4_1 = _mm_cvtepi32_ps(zx.o(rcx_41))
            var_3c8.d = rdx_22
            int32_t rax_60 = var_3c8.d
            float var_408_1 = zmm4_1.d
            float temp0_2[0x4] = _mm_cvtepi32_ps(zx.o(rdx_22))
            sub_141399210(rcx_44, zmm6_2, zmm6_2, r13, temp0_2, zmm8_1, zmm4_1.d, 
                _mm_cvtepi32_ps(zx.o(r8_6)).d, _mm_cvtepi32_ps(zmm0_3).d, temp0_2[0], var_408_1, 
                rax_60, rax_59, var_3f0_1, rcx_43, rcx_42, var_3d8_1)
            sub_1405d1550(&var_3b8)
            sub_141096650(arg2[8])
            void* rsi_5 = arg2[8]
            int128_t zmm1_3 = data_142d3f800
            void* const rcx_47 = rax_26[1]
            int64_t* r13_3 = *rax_26
            int128_t var_3a8_1 = data_142d57d10
            var_3b8 = rcx_47
            int128_t zmm0_4 = data_142d57920
            int128_t var_398_1 = zmm1_3
            void*** rbx_12 = (*(rsi_5 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_62 = &rbx_12[0xa]
            
            if (rax_62 u> *(rsi_5 + 0x38))
                sub_140b0e3d0(rsi_5 + 0x30, 0x58)
                rcx_47 = var_3b8
                rbx_12 = (*(rsi_5 + 0x30) + 7) & 0xfffffffffffffff8
                rax_62 = &rbx_12[0xa]
            
            *(rsi_5 + 0x30) = rax_62
            *(rsi_5 + 0x14) += 1
            **(rsi_5 + 8) = rbx_12
            *(rsi_5 + 8) = &rbx_12[1]
            rbx_12[1] = 0
            *rbx_12 = &data_142d56628
            rbx_12[2].d = var_3a8_1.d
            __builtin_memset(rbx_12 + 0x14, 0xff, 0x20)
            *(rbx_12 + 0x34) = zmm0_4:4.d
            rbx_12[7].d = zmm0_4:8.d
            *(rbx_12 + 0x3c) = zmm0_4:0xc.d
            rbx_12[9] = rcx_47
            rbx_12[8] = r13_3
            
            if ((*(*r13_3 + 8))(r13_3) == 0)
                int64_t* rcx_50 = rbx_12[8]
                
                if ((*(*rcx_50 + 0x18))(rcx_50) == 0)
                    int64_t* rcx_51 = rbx_12[8]
                    
                    if ((*(*rcx_51 + 0x20))(rcx_51) == 0)
                        int64_t* rcx_52 = rbx_12[8]
                        (*(*rcx_52 + 0x10))(rcx_52)
            
            int64_t* rcx_53 = rbx_12[9]
            
            if ((*(*rcx_53 + 8))(rcx_53) == 0)
                int64_t* rcx_54 = rbx_12[9]
                
                if ((*(*rcx_54 + 0x18))(rcx_54) == 0)
                    int64_t* rcx_55 = rbx_12[9]
                    
                    if ((*(*rcx_55 + 0x20))(rcx_55) == 0)
                        int64_t* rcx_56 = rbx_12[9]
                        (*(*rcx_56 + 0x10))(rcx_56)
            
            if (r12.b != 0)
                void* rsi_6 = arg2[8]
                int64_t r12_1 = *(r15_1 + 0x10)
                int64_t* r15_2 = *(r15_1 + 8)
                int128_t var_378_1 = data_142d57d10
                zmm0_4 = data_142d57920
                int128_t var_368_1 = data_142d3f800
                void*** rbx_17 = (*(rsi_6 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_83 = &rbx_17[0xa]
                
                if (rax_83 u> *(rsi_6 + 0x38))
                    sub_140b0e3d0(rsi_6 + 0x30, 0x58)
                    rbx_17 = (*(rsi_6 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_83 = &rbx_17[0xa]
                
                *(rsi_6 + 0x30) = rax_83
                *(rsi_6 + 0x14) += 1
                **(rsi_6 + 8) = rbx_17
                *(rsi_6 + 8) = &rbx_17[1]
                rbx_17[1] = 0
                *rbx_17 = &data_142d56628
                rbx_17[2].d = var_378_1.d
                __builtin_memset(rbx_17 + 0x14, 0xff, 0x20)
                *(rbx_17 + 0x34) = zmm0_4:4.d
                rbx_17[7].d = zmm0_4:8.d
                *(rbx_17 + 0x3c) = zmm0_4:0xc.d
                rbx_17[8] = r15_2
                rbx_17[9] = r12_1
                
                if ((*(*r15_2 + 8))(r15_2) == 0)
                    int64_t* rcx_59 = rbx_17[8]
                    
                    if ((*(*rcx_59 + 0x18))(rcx_59) == 0)
                        int64_t* rcx_60 = rbx_17[8]
                        
                        if ((*(*rcx_60 + 0x20))(rcx_60) == 0)
                            int64_t* rcx_61 = rbx_17[8]
                            (*(*rcx_61 + 0x10))(rcx_61)
                
                int64_t* rcx_62 = rbx_17[9]
                
                if ((*(*rcx_62 + 8))(rcx_62) == 0)
                    int64_t* rcx_63 = rbx_17[9]
                    
                    if ((*(*rcx_63 + 0x18))(rcx_63) == 0)
                        int64_t* rcx_64 = rbx_17[9]
                        
                        if ((*(*rcx_64 + 0x20))(rcx_64) == 0)
                            int64_t* rcx_65 = rbx_17[9]
                            (*(*rcx_65 + 0x10))(rcx_65)
            
            void var_a0
            result = sub_1405d1550(&var_a0)

__security_check_cookie(rax_1 ^ &var_448)
return result
