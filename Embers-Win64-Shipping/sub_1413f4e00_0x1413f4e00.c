// 函数: sub_1413f4e00
// 地址: 0x1413f4e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_6a8
int64_t rax_1 = __security_cookie ^ &var_6a8
void* r14 = arg1
char result = sub_1413faff0(*(*(arg1 + 8) + 0xf80))

if (result != 0)
    int128_t zmm7
    int128_t var_68_1 = zmm7
    int64_t* rcx_3 = *sub_14139d440(&data_143ec4c60)
    int64_t rdx = *rcx_3
    int128_t* rax_4 = (*(rdx + 0x10))(rcx_3, rdx)
    char var_670_1 = 0
    char var_678_1 = 1
    char var_680_1 = 1
    wchar16 const* const var_688_1 = u"RayTracingSkylight"
    int128_t var_358 = *rax_4
    int128_t var_348_1 = rax_4[1]
    int128_t var_338_1 = rax_4[2]
    int128_t zmm1 = rax_4[3]
    int128_t var_328_1 = zmm1
    var_338_1:0xc.d = 0xa
    int128_t var_318_1 = rax_4[4]
    var_328_1.d = zmm1.d & 0x7fefffff
    sub_1419a0ce0(&data_1439c9260, arg2, &var_358, arg3, var_688_1, var_680_1, var_678_1, var_670_1)
    char var_670_2 = 0
    char var_678_2 = 1
    var_338_1:0xc.d = 0xe
    sub_1419a0ce0(&data_1439c9260, arg2, &var_358, arg4, RayTracingSkyLightHitDistance", 1, 
        var_678_2, var_670_2)
    void var_308
    sub_1419928d0(&var_308, arg2)
    int32_t var_658
    int32_t var_650
    int32_t var_648
    int32_t var_644
    int32_t var_640
    void*** var_618
    int64_t* var_300
    void*** r12_1
    int512_t zmm6_1
    
    if (*(data_143ec9128 + 4) != 1)
        int32_t var_64c_1 = 2
        var_650 = 0x209
        var_658 = 0x10
        int32_t var_654_1 = 1
        void*** rax_8
        rax_8, zmm6_1 = sub_14081d830(0x48, var_300, 1, 0)
        r12_1 = rax_8
        
        if (rax_8 == 0)
            r12_1 = nullptr
        else
            int128_t zmm0_2 = var_658.o
            r12_1[2] = 0
            r12_1[1] = u"SkyLightVisibilityRays"
            r12_1[3].b = 0
            *(r12_1 + 0x1c) = 0
            r12_1[4] = 0
            r12_1[5].w = 0x200
            *r12_1 = &data_142f285d0
            *(r12_1 + 0x30) = zmm0_2
            r12_1[8] = 0
        
        var_618 = r12_1
        var_648 = 1
        var_644 = 1
        var_640 = 1
    else
        sub_1413e8bc0(r14, &var_308, &var_618, &var_648)
        r12_1 = var_618
    
    int64_t* rcx_6 = *sub_14139d440(&data_143ec4c60)
    int128_t* rax_11 = (*(*rcx_6 + 0x10))(rcx_6)
    int128_t zmm1_1 = rax_11[3]
    zmm6_1.o = *rax_11
    zmm7 = rax_11[1]
    int128_t var_588_1 = rax_11[2]
    var_588_1:0xc.d = 0xa
    int128_t var_578_1 = zmm1_1
    int128_t var_568_1 = rax_11[4]
    var_568_1.q = u"RayTracingSkylight"
    var_578_1.d = zmm1_1.d & 0x7fefffff
    void*** rax_14
    int128_t zmm6_2
    rax_14, zmm6_2 = sub_14081d830(0x88, var_300, 1, 0)
    void*** r13_1 = rax_14
    
    if (rax_14 == 0)
        r13_1 = nullptr
    else
        r13_1[1] = u"RayTracingSkylight"
        r13_1[2] = 0
        r13_1[3].b = 0
        *(r13_1 + 0x1c) = 0
        r13_1[4] = 0
        r13_1[5].w = 0x200
        *(r13_1 + 0x30) = zmm6_2
        *r13_1 = &data_142f11960
        *(r13_1 + 0x40) = zmm7
        r13_1[0x10] = 0
        *(r13_1 + 0x50) = var_588_1
        *(r13_1 + 0x60) = var_578_1
        *(r13_1 + 0x70) = var_568_1
    
    int64_t* rcx_7 = *sub_14139d440(&data_143ec4c60)
    int128_t* rax_17 = (*(*rcx_7 + 0x10))(rcx_7)
    int128_t zmm1_2 = rax_17[3]
    *rax_17
    zmm7 = rax_17[1]
    int128_t var_588_2 = rax_17[2]
    var_588_2:0xc.d = 0xe
    int128_t var_578_2 = zmm1_2
    int128_t var_568_2 = rax_17[4]
    var_568_2.q = u"RayTracingSkyLightHitDistance"
    var_578_2.d = zmm1_2.d & 0x7fefffff
    void*** rax_20
    int128_t zmm6_3
    rax_20, zmm6_3 = sub_14081d830(0x88, var_300, 1, 0)
    void*** var_5c0_1 = rax_20
    void*** rbx_1 = rax_20
    
    if (rax_20 == 0)
        rbx_1 = nullptr
        var_5c0_1 = nullptr
    else
        rax_20[1] = u"RayTracingSkyLightHitDistance"
        rax_20[2] = 0
        rax_20[3].b = 0
        *(rax_20 + 0x1c) = 0
        rax_20[4] = 0
        rax_20[5].w = 0x200
        *(rbx_1 + 0x30) = zmm6_3
        *rbx_1 = &data_142f11960
        *(rbx_1 + 0x40) = zmm7
        rbx_1[0x10] = 0
        *(rbx_1 + 0x50) = var_588_2
        *(rbx_1 + 0x60) = var_578_2
        *(rbx_1 + 0x70) = var_568_2
    
    var_658.q = r13_1
    var_650.w = 0
    void*** rax_21 = sub_14081d830(0x28, var_300, 1, 0)
    void*** var_5e0_1 = rax_21
    
    if (rax_21 == 0)
        var_5e0_1 = nullptr
    else
        int128_t zmm0_5 = var_658.o
        rax_21[1] = r13_1[1]
        rax_21[2] = 0
        *(rax_21 + 0x18) = zmm0_5
        *rax_21 = &data_142f285c0
    
    var_658.q = rbx_1
    var_650.w = 0
    void*** rax_22 = sub_14081d830(0x28, var_300, 1, 0)
    void*** var_5d8_1 = rax_22
    
    if (rax_22 == 0)
        var_5d8_1 = nullptr
    else
        int128_t zmm0_6 = var_658.o
        rax_22[1] = rbx_1[1]
        rax_22[2] = 0
        *rax_22 = &data_142f285c0
        *(rax_22 + 0x18) = zmm0_6
    
    void* rcx_10 = *(r14 + 8)
    int64_t var_3f0_1 = 0
    int128_t var_3c8
    __builtin_memset(&var_3c8, 0, 0x68)
    int64_t var_3e8_1 = 0
    void var_428
    sub_1413f9890(rcx_10, &var_428)
    int64_t var_4c0
    __builtin_memset(&var_4c0, 0, 0x48)
    int128_t var_4c8
    sub_14142a030(&var_308, &var_4c8)
    int64_t* rax_23 = sub_1422c6ca0(arg2)
    int64_t* var_668 = rax_23
    int64_t* rbx_2 = rax_23
    
    if (rax_23 != 0)
        (*(*rax_23 + 0x30))(rbx_2)
        rbx_2 = var_668
    
    if (rax_23 == 0 || rbx_2 == 0)
        int64_t* rcx_14 = data_1439b70c8
        var_668 = rcx_14
        
        if (rcx_14 != 0)
            (*(*rcx_14 + 0x30))()
        
        if (rbx_2 != 0)
            (*(*rbx_2 + 0x38))(rbx_2)
    
    void* rdi_1 = *(r14 + 0xa0)
    int32_t var_65c_1 = 0
    void* rax_29 = sx.q(*(r14 + 0xa8)) * 0x5240 + rdi_1
    void* var_5f0_1 = rdi_1
    
    if (rdi_1 != rax_29)
        int64_t var_610_1 = 0
        int128_t zmm7_1 = zx.o(0)
        void* rsi_2 = rdi_1 + 0x15a4
        int128_t var_478_1 = zx.o(0)
        void* var_5e8_1 = rsi_2
        
        do
            void* rcx_16 = *(r14 + 8)
            void* r15_2 = *(rsi_2 - 0x159c)
            int128_t var_558
            __builtin_memset(&var_558, 0, 0x18)
            sub_1413f9c70(rcx_16, rdi_1, &var_658, &var_558)
            void*** rax_30 = sub_14081d830(0xd0, var_300, 1, 0)
            void*** r14_1 = rax_30
            
            if (rax_30 == 0)
                r14_1 = nullptr
            else
                *rax_30 = nullptr
                __builtin_memset(&rax_30[3], 0, 0x30)
                rax_30[0xa] = 0
                __builtin_memset(&rax_30[0xf], 0, 0x58)
            
            *r14_1 = nullptr
            memset(&r14_1[3], 0, 0xb8)
            r14_1[1] = var_5e0_1
            r14_1[2] = var_5d8_1
            int64_t* rcx_18 = data_143f0f180
            char var_680_2
            var_680_2.d = 1
            wchar16 const* const var_688_2
            var_688_2.d = 0
            void* var_5d0
            (*(*rcx_18 + 0xf8))(rcx_18, &var_5d0, &var_428, &data_143ec9190, var_688_2, var_680_2, 
                var_678_2, var_670_2)
            void* rax_34 = var_5d0
            void* var_638 = rax_34
            
            if (rax_34 != 0)
                *(rax_34 + 8) += 1
                r12_1 = var_618
                zmm7_1 = var_478_1
            
            sub_1405d1550(&var_5d0)
            sub_1405d1600(&r14_1[4], &var_638)
            sub_1405d1550(&var_638)
            sub_1405d16e0(&r14_1[6], var_558.q)
            sub_1405d16e0(&r14_1[7], var_558:8.q)
            void* var_548
            sub_1405d16e0(&r14_1[8], var_548)
            r14_1[0xc].d = var_648
            *(r14_1 + 0x64) = var_644
            r14_1[0xd].d = var_640
            
            if (*(data_143ec9128 + 4) == 1)
                int32_t var_51c_1 = 0x1c
                int32_t var_520_1 = data_1439c8a54
                void*** rax_40 = sub_14081d830(0x28, var_300, 1, 0)
                
                if (rax_40 == 0)
                    rax_40 = nullptr
                else
                    rax_40[1] = r12_1[1]
                    *rax_40 = &data_142f285c0
                    rax_40[2] = 0
                    *(rax_40 + 0x18) = r12_1.o
                
                r14_1[0xa] = rax_40
            
            int64_t* rbx_3 = var_668
            int32_t var_620
            int64_t var_248
            sub_140865c40(&var_248, &var_620, rbx_3)
            int64_t rax_41 = sx.q(var_620)
            void* const rcx_27
            
            if (rax_41.d == 0xffffffff)
                rcx_27 = nullptr
            else
                rcx_27 = var_248 + rax_41 * 0x18
            
            void** rax_43 = rcx_27 + 8
            
            if (rcx_27 == 0)
                rax_43 = nullptr
            
            void*** rcx_28
            
            if (rax_43 == 0)
                int128_t* rax_45 = (*(*rbx_3 + 0x10))(rbx_3)
                void*** rax_46 = sub_14081d830(0x88, var_300, 1, 0)
                void*** rcx_30 = rax_46
                
                if (rax_46 == 0)
                    rcx_30 = nullptr
                else
                    rcx_30[2] = 0
                    rcx_30[1] = u"External"
                    rcx_30[3].b = 0
                    *(rcx_30 + 0x1c) = 0
                    rcx_30[4] = 0
                    rcx_30[5].w = 0x200
                    *rcx_30 = &data_142f11960
                    *(rcx_30 + 0x30) = *rax_45
                    *(rcx_30 + 0x40) = rax_45[1]
                    *(rcx_30 + 0x50) = rax_45[2]
                    *(rcx_30 + 0x60) = rax_45[3]
                    int128_t zmm0_9 = rax_45[4]
                    rcx_30[0x10] = 0
                    *(rcx_30 + 0x70) = zmm0_9
                
                int64_t* rax_47 = var_668
                void*** var_630 = rcx_30
                rcx_30[0x10] = rax_47
                var_630[2] = var_668[2]
                void** var_500 = &var_630
                int64_t** var_4f8_1 = &var_668
                void var_530
                void var_2e8
                sub_14107bc20(&var_2e8, &var_530, &var_500, nullptr)
                int64_t* var_518 = var_668
                int64_t** var_4f0 = &var_518
                void** var_4e8_1 = &var_630
                void var_52c
                sub_14107baa0(&var_248, &var_52c, &var_4f0, nullptr)
                rcx_28 = var_630
            else
                rcx_28 = *rax_43
            
            r14_1[0x18] = rcx_28
            r14_1[0x19] = data_14395f4d0
            *(r14_1 + 0x70) = var_4c8
            __builtin_memset(&r14_1[0x10], 0, 0x40)
            *r14_1 = *(*(rsi_2 + 0x3c44) + 0x18)
            void* rdx_26
            int512_t zmm6_4
            rdx_26, zmm6_4 = sub_1405d16e0(&r14_1[3], *(rsi_2 - 0x1594))
            
            if (arg5 != 0 && var_65c_1 s< *(arg5 + 0x18))
                rdx_26 = *(*(arg5 + 0x10) + var_610_1 + 0xc0)
            
            if (arg5 == 0 || var_65c_1 s>= *(arg5 + 0x18) || rdx_26 == 0
                    || *(data_143ec9140 + 4) s<= 0)
                var_638.d = 0
            else
                rdx_26, zmm6_4 = sub_1405d16e0(&r14_1[5], rdx_26)
                var_638.d = 8
            
            int32_t r9_4
            r9_4.b = *(data_143ec90f8 + 4) != 0
            int128_t var_468
            char rcx_44 =
                sub_1419a2ec0(std::_Get_future_error_what((*1111")[sx.q(*(arg1 + 0x3b0))]), 
                &var_468, &data_143ec9210, r9_4
                + (sbb.d(&data_143f13910, &data_143f13910, *(data_143ec9128 + 4) != 0) & 4)
                + var_638.d + (sbb.d(rdx_26.d, rdx_26.d, *(data_143ec9110 + 4) != 0) & 2))
            zmm6_4.o = var_468
            int128_t zmm6_5 = sub_1413eb0d0(rcx_44)
            int128_t var_458_1 = zmm7_1
            sub_141998c50(zmm6_5.q, &data_143eccc80, r14_1)
            void*** var_5a8 = r14_1
            int32_t var_5c4_1 = *var_5e8_1 - *(var_5e8_1 - 8)
            void* var_5a0_1 = arg1
            var_588_2:8.q = (*(var_5e8_1 - 4) - *(var_5e8_1 - 0xc)).q
            int128_t var_590_1 = zmm6_5
            void*** rax_68
            char rcx_46
            rax_68, rcx_46 = sub_14081d830(0x68, var_300, 1, 0)
            void*** rbx_7 = rax_68
            
            if (rax_68 == 0)
                rbx_7 = nullptr
            else
                sub_1413eb0d0(rcx_46)
                void* var_4d0_1 = &data_143ecccb0
                int128_t var_448 = r14_1.o
                void var_660
                sub_141992bd0(rbx_7, &var_660, &var_448, 2)
                int128_t zmm0_11 = var_5a8.o
                *rbx_7 = &data_142f78f18
                *(rbx_7 + 0x38) = zmm0_11
                *(rbx_7 + 0x48) = var_5f0_1.o
                *(rbx_7 + 0x58) = var_588_2
            
            sub_1419968d0(&var_308, rbx_7)
            
            if (data_1439b6b54 != 0)
                int64_t* rax_69 = sub_141455400()
                int32_t rcx_49 = data_1439b6b3c
                void*** var_598_2 = var_5c0_1
                int64_t var_5a0_2 = 0
                var_5a8 = r13_1
                
                if (rcx_49 s< 0)
                    int32_t rax_73 = *(*(*(arg1 + 8) + 0xf80) + 0xe0)
                    rcx_49 = 2
                    
                    if (rax_73 s>= 2)
                        rcx_49 = rax_73
                
                uint128_t zmm1_6 = zx.o(0x3f800000.q)
                int64_t r10_1 = *rax_69
                _mm_shuffle_ps(zmm1_6, zmm1_6, 0xe1)
                zmm1_6.d = _mm_cvtepi32_ps(zx.o(rcx_49)).d
                zmm1_6 = _mm_shuffle_ps(zmm1_6, zmm1_6, 0xe1)
                var_670_2.q = zmm1_6.q
                var_678_2.q = &var_5a8
                var_680_2.q = &var_4c8
                int32_t var_5b8_1
                var_5b8_1.q = zmm1_6.q
                void*** var_438
                (*(r10_1 + 0x40))(rax_69, &var_438, &var_308, var_5f0_1, var_5e8_1 + 0x33ec, 
                    var_680_2, var_678_2, var_670_2)
                r13_1 = var_438
            
            if (r15_2 != 0)
                if (*(data_143ec9128 + 4) != 1)
                    int64_t* rax_81 = *(r15_2 + 0xcb0)
                    *(r15_2 + 0xcb0) = 0
                    
                    if (rax_81 != 0)
                        sub_1411e8d60(rax_81)
                    
                    *(r15_2 + 0xcb8) = 1
                    *(r15_2 + 0xcbc) = 1
                    *(r15_2 + 0xcc0) = 1
                else
                    int32_t var_190
                    int64_t rbx_8 = sx.q(var_190)
                    void* var_600_1 = r15_2 + 0xcb0
                    char var_5f8
                    var_5f8.w = 0x100
                    int32_t rax_76 = (rbx_8 + 1).d
                    var_190 = rax_76
                    int64_t var_198
                    int32_t var_18c
                    
                    if (rax_76 s> var_18c)
                        sub_14119a720(&var_198, rbx_8.d)
                    
                    int64_t rax_77 = var_198
                    int64_t rcx_54 = rbx_8 * 3
                    *(rax_77 + (rcx_54 << 3)) = r12_1.o
                    *(rax_77 + (rcx_54 << 3) + 0x10) = var_5f8.q
                    *(r15_2 + 0xcb8) = var_648
                    *(r15_2 + 0xcbc) = var_644
                    *(r15_2 + 0xcc0) = var_640
            
            var_65c_1 += 1
            var_610_1 += 0x130
            sub_1405d1550(&var_548)
            sub_1405d1550(&var_558:8)
            sub_1405d1550(&var_558)
            r14 = arg1
            rdi_1 = var_5f0_1 + 0x5240
            rsi_2 = var_5e8_1 + 0x5240
            var_5f0_1 = rdi_1
            var_5e8_1 = rsi_2
        while (rdi_1 != rax_29)
    
    int32_t var_1a0
    int64_t rbx_9 = sx.q(var_1a0)
    int64_t* var_600_2 = arg3
    int32_t rax_83 = (rbx_9 + 1).d
    char var_5f8_1 = 1
    int32_t var_1a0_1 = rax_83
    int64_t var_1a8
    int32_t var_19c
    
    if (rax_83 s> var_19c)
        sub_14119a720(&var_1a8, rbx_9.d)
    
    int64_t rax_84 = var_1a8
    int64_t rcx_60 = rbx_9 * 3
    *(rax_84 + (rcx_60 << 3)) = r13_1.o
    *(rax_84 + (rcx_60 << 3) + 0x10) = var_5f8_1.q
    sub_14199ef00(&var_308)
    int64_t* rcx_62 = var_668
    
    if (rcx_62 != 0)
        (*(*rcx_62 + 0x38))(rcx_62)
    
    result = sub_1410eb9e0(&var_308)

__security_check_cookie(rax_1 ^ &var_6a8)
return result
