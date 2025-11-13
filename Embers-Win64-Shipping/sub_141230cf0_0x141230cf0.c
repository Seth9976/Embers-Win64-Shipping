// 函数: sub_141230cf0
// 地址: 0x141230cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4b8
int64_t rax_1 = __security_cookie ^ &var_4b8
void* rdi = arg1
int64_t* var_440 = &data_143ec4c60
int64_t* r12 = &data_143ec4c60
char result = sub_1410a09e0((*U"1111")[sx.q(sub_1422e48a0(rdi + 0x10))])

if (result == 0)
    void var_2f8
    sub_1419928d0(&var_2f8, arg2)
    int64_t var_400
    __builtin_memset(&var_400, 0, 0x48)
    float var_408[0x4]
    sub_14142a030(&var_2f8, &var_408)
    void*** rax_4
    int128_t zmm6_1
    rax_4, zmm6_1 = sub_1410fccd0(&var_2f8, sub_14139d440(&data_143ec4c60), u"External", 0)
    void* rsi_1 = *(rdi + 0xa0)
    void* rax_6 = sx.q(*(rdi + 0xa8)) * 0x5240 + rsi_1
    
    if (rsi_1 != rax_6)
        void* r15_1 = rsi_1 + 0x4990
        float zmm8[0x4] = zx.o(0)
        int128_t zmm9 = 0x3f800000
        int128_t var_48_1 = zmm6_1
        int128_t zmm7
        int128_t var_58_1 = zmm7
        
        do
            char rax_7 = sub_1413ab410(rsi_1)
            char rax_8 = sub_141461ea0(rsi_1)
            char rax_9 = r12[0x3b].b
            
            if (sub_1413ab380(rsi_1) == 0 || *(rdi + 0xa8) != 1)
                r12.b = 0
            else
                r12.b = 1
            
            int32_t r14_1 = *(data_143e81948 + 4)
            int32_t var_448 = 0x3f800000
            int32_t var_444_1 = 0x3f800000
            uint128_t var_3a8
            __builtin_memset(&var_3a8, 0, 0x18)
            void**** var_468
            void* var_460
            void**** rdi_1
            void**** r14_2
            
            if (rax_7 != 0)
                char rax_12
                rax_12, zmm8, zmm9 =
                    sub_1413a6d10(rdi, &var_2f8, &var_408, rsi_1, &var_448, &var_3a8)
                
                if (rax_12 != 0 && r14_1 != 0)
                label_141231001:
                    int64_t* rax_19 = sub_141455400()
                    int64_t* rcx_17 = data_143ed5ae0
                    void* r8_4 = &var_2f8
                    uint64_t var_480_1 = var_448.q
                    uint128_t* var_488_1 = &var_3a8
                    
                    if (r14_1 == 1)
                        rcx_17 = rax_19
                    
                    float (* var_490_3)[0x4] = &var_408
                    int64_t rax_20 = *rcx_17
                    uint128_t* rax_21
                    void var_308
                    void var_318
                    
                    if (rax_7 == 0)
                        rax_21 = (*(rax_20 + 0x60))(rcx_17, &var_308, r8_4, rsi_1, r15_1, 
                            var_490_3, var_488_1, var_480_1, rax_9)
                    else
                        rax_21 = (*(rax_20 + 0x38))(rcx_17, &var_318, r8_4, rsi_1, r15_1, 
                            var_490_3, var_488_1, var_480_1, rax_9)
                    var_468.o = *rax_21
                    rdi_1 = var_460
                    r14_2 = var_468
                else
                    r14_2 = var_3a8.q
                    rdi_1 = var_3a8:8.q
            else if (rax_8 == 0)
                r14_2 = var_3a8.q
                rdi_1 = var_3a8:8.q
            else
                zmm8, zmm9 = sub_14145e3e0(&var_2f8, &var_408, rax_4, rsi_1, &var_448, &var_3a8)
                int64_t* rax_16 = sub_141455400()
                int64_t* rdi_2 = data_143ed5ae0
                
                if (r14_1 == 1)
                    rdi_2 = rax_16
                
                if (((*(*rdi_2 + 0x58))(rdi_2, zx.q(sub_1422e5a30(rsi_1))) != 0 || r14_1 s<= 0)
                        && r14_1 != 0)
                    goto label_141231001
                
                r14_2 = var_3a8.q
                rdi_1 = var_3a8:8.q
            
            if (r12.b != 0)
                void***** var_498_2 = &var_468
                var_468 = nullptr
                sub_1413a4690(arg1, &var_2f8, rsi_1, &var_408, var_498_2)
                rdi_1 = var_468
            
            r12 = var_440
            
            if (rdi_1 != 0)
                int32_t var_190
                int64_t rbx_2 = sx.q(var_190)
                var_460 = &r12[0x18]
                var_468 = rdi_1
                char var_458_1 = 1
                int32_t rax_14 = (rbx_2 + 1).d
                var_190 = rax_14
                int64_t var_198
                int32_t var_18c
                
                if (rax_14 s> var_18c)
                    sub_14119a720(&var_198, rbx_2.d)
                
                int64_t rax_15 = var_198
                int64_t rcx_13 = rbx_2 * 3
                *(rax_15 + (rcx_13 << 3)) = var_468.o
                *(rax_15 + (rcx_13 << 3) + 0x10) = var_458_1.q
                r12[0x3b].b = 1
            else if (rax_9 != 0)
                rdi_1 = sub_1410fccd0(&var_2f8, &r12[0x18], u"External", 0)
            
            int64_t* var_2f0
            void*** r13_2
            
            if (r14_2 != 0 || rdi_1 != 0)
                int32_t* rax_23 = sub_14081d830(0x160, var_2f0, 1, 0)
                int32_t* rbx_5 = rax_23
                
                if (rax_23 == 0)
                    rbx_5 = nullptr
                else
                    __builtin_memset(&rax_23[2], 0, 0x20)
                    __builtin_memset(&rax_23[0xe], 0, 0x90)
                    sub_14117af20(&rax_23[0x34])
                
                memset(rbx_5, 0, 0x160)
                float zmm0_2[0x4] = *(r15_1 - 0x37a8)
                
                if (zmm0_2[0] >= zmm8[0])
                    zmm0_2 = _mm_min_ss(zmm0_2[0], zmm9.d)
                else
                    zmm0_2 = zmm8
                
                *rbx_5 = zmm0_2[0]
                *(rbx_5 + 8) = r14_2
                *(rbx_5 + 0x10) = data_14395fa10
                *(rbx_5 + 0x18) = rdi_1
                *(rbx_5 + 0x20) = data_14395fa10
                *(rbx_5 + 0x30) = var_408
                __builtin_memset(&rbx_5[0x10], 0, 0x40)
                sub_14142a1f0(&rbx_5[0x20])
                int32_t r9_5
                int512_t zmm6_2
                r9_5, zmm6_2 = sub_1405d16e0(&rbx_5[0x30], *(r15_1 - 0x4980))
                r13_2 = rax_4
                int16_t var_420_1 = 1
                char var_41e_1 = 0
                int32_t var_41c_1 = 0xffffffff
                *(rbx_5 + 0xd0) = r13_2.o
                int64_t rcx_23 = *(rbx_5 + 8)
                int64_t rax_26 = *(rbx_5 + 0x18)
                bool var_474_1 = rcx_23 != 0
                bool var_473_1 = rax_26 != 0
                int32_t rax_27
                rax_27.b = rcx_23 != 0
                int128_t var_338
                char rcx_25 = sub_1419a2ec0(*(r15_1 + 0x7c0), &var_338, &data_143e819b0, 
                    (sbb.d(r9_5, r9_5, rax_26 != 0) & 2) + rax_27)
                zmm7 = var_338
                zmm6_2.o = zx.o(0)
                var_468.o = sub_141228310(rcx_25)
                sub_141998c50(zmm7.q, &data_143e83f70, rbx_5)
                void* var_380_1 = rsi_1
                char var_472
                char var_366_1 = var_472
                void*** rax_30
                char rcx_27
                rax_30, rcx_27 = sub_14081d830(0x60, var_2f0, 1, 0)
                
                if (rax_30 == 0)
                    sub_1419968d0(&var_2f8, nullptr)
                else
                    sub_141228310(rcx_27)
                    void* var_350_1 = &data_143e83fa0
                    var_468.o = rbx_5.o
                    void var_470
                    sub_141992bd0(rax_30, &var_470, &var_468, 1)
                    *rax_30 = &data_142f425c8
                    *(rax_30 + 0x38) = rbx_5.o
                    *(rax_30 + 0x48) = zmm7
                    rax_30[0xb] = var_474_1.w.q
                    sub_1419968d0(&var_2f8, rax_30)
            else
                r13_2 = rax_4
            
            if (sub_1410a0960(rsi_1) != 0)
                int64_t* rax_32 = sub_14081d830(0x180, var_2f0, 1, 0)
                int64_t* rbx_6 = rax_32
                
                if (rax_32 == 0)
                    rbx_6 = nullptr
                else
                    __builtin_memset(rax_32, 0, 0x20)
                    rax_32[8] = 0
                    rax_32[9] = 0
                    __builtin_memset(&rax_32[0xb], 0, 0x90)
                    rax_32[6] = 0
                    rax_32[7].d = 0
                    *(rax_32 + 0x3c) = 0x3f800000
                    sub_14117af20(&rax_32[0x1e])
                
                memset(rbx_6, 0, 0x180)
                *rbx_6 = *(data_1439b7100 + 0x10)
                rbx_6[1] = data_14395f4d0
                rbx_6[2] = rdi_1
                rbx_6[3] = data_14395fa10
                
                if (rdi_1 == 0)
                    rbx_6[2] = sub_1410fccd0(&var_2f8, &data_1439b70c0, u"External", 0)
                
                *(rbx_6 + 0x50) = var_408
                __builtin_memset(&rbx_6[0xc], 0, 0x40)
                sub_14142a1f0(&rbx_6[0x14])
                sub_1405d16e0(&rbx_6[0x1c], *(r15_1 - 0x4980))
                int16_t var_410_1 = 1
                char var_40e_1 = 0
                int32_t var_40c_1 = 0xffffffff
                *(rbx_6 + 0xf0) = r13_2.o
                int128_t var_328
                sub_1419a2ec0(*(r15_1 + 0x7c0), &var_328, &data_143e81ac0, 0)
                int512_t zmm6_4
                zmm6_4.o = var_328
                void* var_380_2 = rsi_1
                void*** rax_37
                char rcx_39
                rax_37, rcx_39 = sub_14081d830(0x58, var_2f0, 1, 0)
                void*** rdi_3 = rax_37
                
                if (rax_37 == 0)
                    rdi_3 = nullptr
                else
                    int128_t zmm6_5 = sub_1412281a0(rcx_39)
                    void* var_340_1 = &data_143e84040
                    var_468.o = rbx_6.o
                    void var_46f
                    sub_141992bd0(rdi_3, &var_46f, &var_468, 1)
                    *rdi_3 = &data_142f425d8
                    *(rdi_3 + 0x38) = rbx_6.o
                    *(rdi_3 + 0x48) = zmm6_5
                
                sub_1419968d0(&var_2f8, rdi_3)
            
            rdi = arg1
            rsi_1 += 0x5240
            r15_1 += 0x5240
        while (rsi_1 != rax_6)
    
    sub_14199ef00(&var_2f8)
    result = sub_1410eb9e0(&var_2f8)

__security_check_cookie(rax_1 ^ &var_4b8)
return result
