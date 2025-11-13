// 函数: sub_14149a910
// 地址: 0x14149a910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_708
int64_t rax_1 = __security_cookie ^ &var_708
uint64_t result = data_143ed9d90
void* r14 = arg3
void* r15 = arg2

if (*(result + 4) s> 0)
    result = data_143ed9da8
    
    if (*(result + 4) s> 0)
        int64_t rsi
        rsi.b = 1
        int32_t i = 0
        
        if (*(arg1 + 0xa8) s> 0)
            do
                int32_t rax_3 = sub_1422e5a30(sx.q(i) * 0x5240 + *(arg1 + 0xa0))
                int32_t var_5d4_1 = rax_3
                
                if (sub_1410a09e0(rax_3).b != 0)
                    result.b = 1
                else
                    result = sub_1419a4830(rax_3)
                    
                    if (result.b != 0)
                        result.b = 1
                
                rsi.b &= result.b
                i += 1
            while (i s< *(arg1 + 0xa8))
            
            if (rsi.b == 0)
                int64_t var_308
                sub_1419928d0(&var_308, r15)
                int64_t* var_5d0_1 = &data_143ec4c60
                void*** rax_5
                int128_t zmm6_1
                rax_5, zmm6_1 =
                    sub_1410fccd0(&var_308, sub_14139d440(&data_143ec4c60), External", 0)
                int32_t i_2 = 0
                void*** var_598
                
                if (*(arg1 + 0xa8) s> 0)
                    int128_t var_48_1 = zmm6_1
                    int128_t zmm7
                    int128_t var_58_1 = zmm7
                    int32_t i_1 = 0
                    int128_t zmm8
                    int128_t var_68_1 = zmm8
                    int128_t zmm9
                    int128_t var_78_1 = zmm9
                    int128_t zmm10
                    int128_t var_88_1 = zmm10
                    
                    do
                        int64_t* rdi_2 = sx.q(i_1) * 0x5240 + *(arg1 + 0xa0)
                        int32_t rax_7 = sub_1422e5a30(rdi_2)
                        int32_t var_5d8_1 = rax_7
                        
                        if (sub_1410a09e0(rax_7) == 0 && sub_1419a4830(rax_7) == 0)
                            int64_t var_6c0 = 0
                            int64_t var_540
                            __builtin_memset(&var_540, 0, 0x48)
                            int128_t var_548
                            sub_14142a030(&var_308, &var_548)
                            void* var_4a8_1 = r14
                            int64_t* var_4b8 = &var_6c0
                            int64_t* var_490_1 = rdi_2
                            int64_t* var_4b0_1 = &var_308
                            int32_t* var_4a0_1 = &i_2
                            int128_t* var_498_1 = &var_548
                            int64_t rbx_3 = sx.q(sub_1422e5a30(rdi_2))
                            char rax_11 = sub_1405fba70(rbx_3.d, 3)
                            int64_t rcx_14
                            int64_t rdx_3
                            
                            if (rax_11 != 0 && (rbx_3 - 0x19).d u> 1)
                                rdx_3 = rbx_3 * 5
                                rcx_14 = *(&data_143f025f0 + (rdx_3 << 2))
                            
                            char r15_1
                            
                            if (rax_11 == 0 || (rbx_3 - 0x19).d u<= 1 || rcx_14 == data_143f025d0
                                    || (((rbx_3 - 0x11).d & 0xfffffff3) == 0 && rbx_3.d != 0x19)
                                    || (rcx_14 == data_143f025c0
                                    && (*((rdx_3 << 2) + &data_143f025fc) & 1) != 0)
                                    || *(data_143ed9dc0 + 4) == 0)
                                r15_1 = 0
                            else
                                r15_1 = 1
                            
                            int128_t var_6b0
                            __builtin_memset(&var_6b0, 0, 0x28)
                            int32_t var_688_1 = 8
                            int32_t temp0_1
                            int32_t temp1_1
                            temp0_1:temp1_1 = sx.q(rdi_2[0x2b4].d - rdi_2[0x2b3].d + 7)
                            uint64_t rsi_2 = zx.q(((temp0_1 & 7) + temp1_1) s>> 3)
                            int32_t temp2_1
                            int32_t temp3_1
                            temp2_1:temp3_1 = sx.q(*(rdi_2 + 0x15a4) - *(rdi_2 + 0x159c) + 7)
                            int32_t var_5b8_1 = rsi_2.d
                            int32_t r14_2 = ((temp2_1 & 7) + temp3_1) s>> 3
                            int32_t var_5b4_1 = r14_2
                            int128_t var_6a0_1
                            void*** var_690_1
                            uint128_t var_608
                            int64_t* var_300
                            
                            if (r15_1 != 0)
                                int64_t var_640_1 = 0x309
                                int32_t var_648_1 = 0x10
                                int32_t var_644_1 = 1
                                void*** rax_20 = sub_14081d830(0x48, var_300, 1, 0)
                                void*** rbx_4 = rax_20
                                
                                if (rax_20 == 0)
                                    rbx_4 = rax_20
                                else
                                    rbx_4[1] = u"WaterIndirectDrawParameters"
                                    rax_20 = nullptr
                                    rbx_4[2] = 0
                                    rbx_4[3].b = 0
                                    *(rbx_4 + 0x1c) = 0
                                    rbx_4[4] = 0
                                    rbx_4[5].w = 0x200
                                    *rbx_4 = &data_142f285d0
                                    *(rbx_4 + 0x30) = var_648_1.o
                                    rbx_4[8] = 0
                                
                                var_6b0:8.q = rbx_4
                                
                                if ((rbx_4[7].d & 0x100) != 0)
                                    rax_20 = 0x1c
                                
                                int16_t var_62c_1 = 0
                                int32_t var_630_1 = rax_20.d
                                void*** rax_21 = sub_14081d830(0x28, var_300, 1, 0)
                                
                                if (rax_21 == 0)
                                    rax_21 = nullptr
                                else
                                    rax_21[1] = rbx_4[1]
                                    *rax_21 = &data_142f285c0
                                    rax_21[2] = 0
                                    *(rax_21 + 0x18) = rbx_4.o
                                
                                var_6a0_1.q = rax_21
                                int64_t var_620_1 = 0x209
                                int32_t var_628_1 = 4
                                int32_t var_624_1 = rsi_2.d * r14_2
                                void*** rax_22 = sub_14081d830(0x48, var_300, 1, 0)
                                void*** rbx_5 = rax_22
                                
                                if (rax_22 == 0)
                                    rbx_5 = nullptr
                                else
                                    rbx_5[2] = 0
                                    rbx_5[1] = u"TileListDataBuffer"
                                    rbx_5[3].b = 0
                                    *(rbx_5 + 0x1c) = 0
                                    rbx_5[4] = 0
                                    rbx_5[5].w = 0x200
                                    *rbx_5 = &data_142f285d0
                                    *(rbx_5 + 0x30) = var_628_1.o
                                    rbx_5[8] = 0
                                
                                var_6b0.q = rbx_5
                                int32_t var_610_1 = 0x1c
                                int16_t var_60c_1 = 0
                                void*** rax_23 = sub_14081d830(0x28, var_300, 1, 0)
                                
                                if (rax_23 == 0)
                                    rax_23 = nullptr
                                else
                                    rax_23[1] = rbx_5[1]
                                    *rax_23 = &data_142f285c0
                                    rax_23[2] = 0
                                    *(rax_23 + 0x18) = rbx_5.o
                                
                                void* rbx_6 = var_6b0.q
                                var_6a0_1:8.q = rax_23
                                int32_t var_59c_1 = 0x1c
                                int32_t var_5a0_1 = data_1439c8a54
                                void*** rax_25 = sub_14081d830(0x28, var_300, 1, 0)
                                
                                if (rax_25 == 0)
                                    rax_25 = nullptr
                                else
                                    rax_25[1] = *(rbx_6 + 8)
                                    *rax_25 = &data_142f285c0
                                    rax_25[2] = 0
                                    *(rax_25 + 0x18) = rbx_6.o
                                
                                var_690_1 = rax_25
                                sub_1419965b0(&var_308, var_6a0_1.q)
                                int128_t var_578
                                sub_1419a2ec0(rdi_2[0xa2a], &var_578, &data_143ed9f50, 0)
                                void**** rax_26 = sub_14081d830(0x110, var_300, 1, 0)
                                void**** rbx_7 = rax_26
                                
                                if (rax_26 == 0)
                                    rbx_7 = nullptr
                                else
                                    sub_141476120(rax_26)
                                    rbx_7[0x1f] = 0
                                    rbx_7[0x20] = 0
                                
                                memset(rbx_7, 0, 0x110)
                                char rcx_25
                                int128_t zmm7_1
                                rcx_25, zmm7_1 = sub_1414781c0(&var_4b8, rbx_7)
                                int32_t rax_27 = 6
                                
                                if (data_143f0f1bc != 0)
                                    rax_27 = 3
                                
                                int128_t var_378_1 = zx.o(0)
                                rbx_7[0x1e].d = rax_27
                                rbx_7[0x1f] = var_6a0_1.q
                                rbx_7[0x20] = var_6a0_1:8.q
                                int128_t var_418_1 = sub_14148cf20(rcx_25)
                                sub_141998c50(var_578.q, &data_143ee1ef0, rbx_7)
                                var_608.q = rbx_7
                                var_608 = zmm7_1
                                int32_t var_5e8_1 = 1
                                int64_t var_5f0_1 = var_5b8_1.q
                                uint64_t rax_30
                                char rcx_27
                                rax_30, rcx_27 = sub_14081d830(0x60, var_300, 1, 0)
                                
                                if (rax_30 == 0)
                                    sub_1419968d0(&var_308, nullptr)
                                else
                                    sub_14148cf20(rcx_27)
                                    void* var_560_1 = &data_143ee1f20
                                    int128_t var_408 = rbx_7.o
                                    void var_6c4
                                    sub_141992bd0(rax_30, &var_6c4, &var_408, 2)
                                    uint128_t zmm0_9 = var_608
                                    *rax_30 = &data_142f8e780
                                    *(rax_30 + 0x38) = zmm0_9
                                    int64_t var_5f8
                                    *(rax_30 + 0x48) = var_5f8.o
                                    *(rax_30 + 0x58) = var_5e8_1.q
                                    sub_1419968d0(&var_308, rax_30)
                            
                            char rax_32
                            
                            if (*(data_143ed9df8 + 4) != 0)
                                rax_32 = sub_141461ee0(rdi_2)
                            
                            if (*(data_143ed9df8 + 4) == 0 || rax_32 == 0)
                                rsi_2.b = 0
                            else
                                rsi_2.b = 1
                            
                            char var_6e0
                            uint128_t* var_6d8
                            int128_t* var_6d0
                            
                            if (rsi_2.b != 0)
                                void*** rax_34
                                uint128_t zmm6_3
                                rax_34, zmm6_3 =
                                    sub_1410fccd0(&var_308, sub_14139d440(var_5d0_1), External", 0)
                                __builtin_memset(&var_608, 0, 0x18)
                                int32_t var_678 = 0x3f800000
                                int32_t var_674_1 = 1
                                int32_t var_6b8
                                sub_141455ae0(rdi_2, &var_6b8, &var_678)
                                int128_t* rcx_35 = &var_6b0
                                
                                if (r15_1 == 0)
                                    rcx_35 = nullptr
                                
                                var_6d0 = rcx_35
                                var_6d8 = &var_608
                                sub_14145f640(&var_308, &var_548, rax_34, rdi_2, zmm6_3, var_6b8, 
                                    0, var_6d8, var_6d0)
                                var_6c0 = var_608.q
                                
                                if (*(data_143ed9e10 + 4) != 0 && sub_1414593e0(rdi_2) != 0)
                                    int128_t zmm0_10 = *(rdi_2 + 0x1598)
                                    int16_t var_4f4_1 = 0
                                    var_6d8 = rdi_2[0x2b5] + 0x928
                                    char var_4f2_1 = 0
                                    int32_t var_4f8 = 3
                                    int64_t var_4c8_1 = var_608.q
                                    var_6e0.q = &rdi_2[0x9bd]
                                    int32_t var_6e8_1
                                    var_6e8_1.q = &var_4f8
                                    int32_t var_4f0_1 = 0
                                    int128_t var_4ec_1 = zmm0_10
                                    int32_t var_4cc_1 = 1
                                    int128_t var_4dc_1 = zmm0_10
                                    int64_t var_4c0_1 = 0
                                    void*** var_338
                                    var_6c0 = (*sub_14134cc40(&var_338, &var_308, &var_548, rdi_2, 
                                        var_6e8_1, var_6e0, var_6d8)).q
                            
                            int32_t r9_4 = 0
                            
                            if (*(rdi_2 + 0x5044) s> 0)
                                r9_4 = 4
                            
                            int32_t rax_42 = 0
                            
                            if (rdi_2[0xa08].d s> 0)
                                rax_42 = 2
                            
                            int128_t var_558
                            sub_1419a2ec0(rdi_2[0xa2a], &var_558, &data_143ed9e50, 
                                r9_4 + rax_42 + zx.d(rsi_2.b))
                            int64_t* rax_44 = sub_14081d830(0x1a0, var_300, 1, 0)
                            int64_t* rbx_9 = rax_44
                            
                            if (rax_44 == 0)
                                rbx_9 = nullptr
                            else
                                *rax_44 = 0
                                rax_44[1] = 0
                                sub_141476120(&rax_44[2])
                                rbx_9[0x20] = 0
                                sub_14117af20(&rbx_9[0x22])
                            
                            memset(rbx_9, 0, 0x1a0)
                            sub_1405d16e0(rbx_9, rdi_2[2])
                            rbx_9[1] = var_690_1
                            int64_t rax_46 = var_6c0
                            
                            if (rax_46 == 0)
                                rax_46 = sub_1410fccd0(&var_308, &data_1439b70c8, u"External", 0)
                            
                            r14 = arg3
                            int64_t* rdx_27 = &data_1439b70c8
                            rbx_9[2] = rax_46
                            rbx_9[3] = data_14395fa10
                            rbx_9[4] = *(data_1439b7100 + 0x10)
                            rbx_9[5] = data_14395f4d0
                            
                            if (*(r14 + 8) != 0)
                                rdx_27 = r14 + 8
                            
                            rbx_9[6] = sub_1410fccd0(&var_308, rdx_27, u"External", 0)
                            rbx_9[7] = data_14395fa10
                            *(rbx_9 + 0x40) = *((sx.q(i_2) << 5) + *(r14 + 0x10) + 0x10)
                            *(rbx_9 + 0x50) = var_548
                            __builtin_memset(&rbx_9[0xc], 0, 0x40)
                            sub_14142a1f0(&rbx_9[0x14])
                            sub_1405d16e0(&rbx_9[0x1c], rdi_2[2])
                            sub_1405d16e0(&rbx_9[0x1d], rdi_2[0xa0a])
                            uint128_t var_3e8 = data_142d3f660
                            int64_t var_3d0
                            __builtin_memset(&var_3d0, 0, 0x40)
                            zmm10 = sub_14123d450(rdi_2, &var_3e8)
                            int64_t* rcx_55 = data_143f0f180
                            var_6e0.d = 1
                            void* var_670
                            (*(*rcx_55 + 0xf8))(rcx_55, &var_670, &var_3e8, &data_143e81d10, 0, 
                                var_6e0, var_6d8, var_6d0)
                            void* rax_55 = var_670
                            void* var_680 = rax_55
                            
                            if (rax_55 != 0)
                                *(rax_55 + 8) += 1
                            
                            sub_1405d1550(&var_670)
                            sub_1405d1600(&rbx_9[0x1e], &var_680)
                            char rcx_59 = sub_1405d1550(&var_680)
                            rbx_9[0x20] = var_6b0:8.q
                            int16_t var_650_1 = 1
                            char var_64e_1 = 0
                            int32_t var_64c_1 = 0xffffffff
                            *(rbx_9 + 0x110) = rax_5.o
                            int128_t var_368_1 = zx.o(0)
                            int128_t var_3f8_1 = sub_14148cc40(sub_14148cc40(rcx_59))
                            sub_141998c50(var_558.q, &data_143ee1de0, &rbx_9[2])
                            void*** rdi_3
                            
                            if (r15_1 == 0)
                                var_4b8 = rbx_9
                                int64_t* var_4b0_2 = rdi_2
                                char var_468_1 = 0
                                void*** rax_59 = sub_14081d830(0x90, var_300, 1, 0)
                                rdi_3 = rax_59
                                
                                if (rax_59 == 0)
                                    rdi_3 = nullptr
                                else
                                    int64_t* rax_60
                                    int128_t zmm6_8
                                    rax_60, zmm6_8 = sub_14146cdd0(&var_598, rbx_9)
                                    int128_t var_428 = *rax_60
                                    void var_6c2
                                    sub_141992bd0(rdi_3, &var_6c2, &var_428, 1)
                                    uint128_t zmm0_17 = var_4b8.o
                                    *rdi_3 = &data_142f8e760
                                    *(rdi_3 + 0x38) = zmm0_17
                                    *(rdi_3 + 0x48) = zmm6_8
                                    *(rdi_3 + 0x58) = var_6a0_1
                                    *(rdi_3 + 0x68) = var_690_1.o
                                    *(rdi_3 + 0x78) = zmm10
                                    rdi_3[0x11] = var_468_1.q
                            else
                                int128_t var_458
                                char rcx_63 =
                                    sub_1419a2ec0(rdi_2[0xa2a], &var_458, &data_143eda050, 0)
                                zmm7 = var_458
                                char rcx_64
                                int128_t zmm6_5
                                rcx_64, zmm6_5 = sub_14148d090(rcx_63)
                                int128_t var_358_1 = zmm6_5
                                int128_t var_448_1 = sub_14148d090(rcx_64)
                                sub_141998c50(zmm7.q, &data_143ee2000, rbx_9)
                                var_3e8.q = rbx_9
                                var_3e8:8.q = rdi_2
                                void*** rax_57 = sub_14081d830(0xa0, var_300, 1, 0)
                                rdi_3 = rax_57
                                
                                if (rax_57 == 0)
                                    rdi_3 = nullptr
                                else
                                    void var_348
                                    int64_t* rax_58
                                    int128_t zmm6_7
                                    rax_58, zmm6_7 = sub_14146cdd0(&var_348, rbx_9)
                                    int128_t var_438 = *rax_58
                                    void var_6c3
                                    sub_141992bd0(rdi_3, &var_6c3, &var_438, 1)
                                    uint128_t zmm0_15 = var_3e8
                                    *rdi_3 = &data_142f8e750
                                    *(rdi_3 + 0x38) = zmm0_15
                                    *(rdi_3 + 0x48) = zmm6_7
                                    *(rdi_3 + 0x58) = var_6a0_1
                                    *(rdi_3 + 0x68) = var_690_1.o
                                    *(rdi_3 + 0x78) = zmm7
                                    *(rdi_3 + 0x88) = zmm10
                                    rdi_3[0x13] = r15_1.q
                            
                            sub_1419968d0(&var_308, rdi_3)
                        
                        i_1 = i_2 + 1
                        i_2 = i_1
                    while (i_1 s< *(arg1 + 0xa8))
                    
                    r15 = arg2
                
                int32_t var_1a0
                int64_t rbx_10 = sx.q(var_1a0)
                int64_t* var_668
                int64_t* var_590_1 = &var_668
                var_598 = rax_5
                int32_t rax_61 = (rbx_10 + 1).d
                var_668 = nullptr
                char var_588_1 = 1
                int32_t var_1a0_1 = rax_61
                int64_t var_1a8
                int32_t var_19c
                
                if (rax_61 s> var_19c)
                    sub_14119a720(&var_1a8, rbx_10.d)
                
                int64_t rax_62 = var_1a8
                int64_t r8_11 = rbx_10 * 3
                *(rax_62 + (r8_11 << 3)) = var_598.o
                *(rax_62 + (r8_11 << 3) + 0x10) = var_588_1.q
                sub_14199ef00(&var_308)
                sub_141427c70(arg1, r15)
                int64_t* rcx_75 = var_668
                
                if (rcx_75 != 0)
                    (*(*rcx_75 + 0x38))(rcx_75)
                
                result = sub_1410eb9e0(&var_308)

__security_check_cookie(rax_1 ^ &var_708)
return result
