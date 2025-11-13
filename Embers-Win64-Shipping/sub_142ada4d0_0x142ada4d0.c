// 函数: sub_142ada4d0
// 地址: 0x142ada4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_98 = -2
uint128_t zmm6
uint128_t var_58 = zmm6
uint128_t zmm7
uint128_t var_68 = zmm7
uint128_t zmm8
uint128_t var_78 = zmm8
uint128_t zmm9
uint128_t var_88 = zmm9
struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rbx = arg2
int32_t r12 = 0
int32_t var_118 = 0
uint64_t result = zx.q(*(arg4 + 8))
int32_t result_1 = result.d

if (result.d s>= 0)
    int32_t result_8 = result_1
    int32_t var_f0 = 0xffffffff
    char var_114 = 0
    int32_t var_f4 = 0xffffffff
    int32_t var_104 = 0
    int32_t r13_1 = -1
    int32_t result_5 = 0
    int32_t var_10c = 0
    uint64_t result_4 = 0
    int64_t* var_e0_1 = nullptr
    int64_t* var_e8_1 = arg3
    int64_t* rcx = arg1[0x29]
    
    if (arg3 == rcx)
        goto label_142ada61b
    
    int64_t rax_1 = (*(*rcx + 0xb0))(rcx)
    char* rax_3 = (*(*arg3 + 0xb0))(arg3)
    void* rbx_2 = rax_1 - rax_3
    uint32_t i
    uint32_t rdx
    
    do
        rdx = zx.d(*rax_3)
        i = zx.d(*(rax_3 + rbx_2))
        
        if (rdx != i)
            break
        
        rax_3 = &rax_3[1]
    while (i != 0)
    
    if (rdx - i == 0)
        goto label_142ada614
    
    int64_t* rcx_2 = arg1[0x29]
    int64_t* rax_5 = (*(*rcx_2 + 0x10))(rcx_2)
    int64_t* rsi_1 = rax_5
    var_e0_1 = rax_5
    
    if (rax_5 == 0)
    label_142adb04a:
        result = zx.q(result_1)
        *(arg4 + 0xc) = result.d
        *(arg4 + 8) = result_8
    else
        result = sub_142a6c1a0(rsi_1, sub_142a6a540(arg3, &var_118), &var_118)
        
        if (var_118 s<= 0)
            sub_142a6c230(rsi_1, Concurrency::details::UMSFreeThreadProxy::GetContext(arg3))
            var_e8_1 = rsi_1
        label_142ada614:
            rbx = arg2
        label_142ada61b:
            int64_t* r15_1 = arg1
            void* rax_7 = r15_1[0x60]
            
            if (*(rax_7 + 0x1b8) == 0 || *(rax_7 + 0x1c0) s< 7)
            label_142ada6a0:
                int32_t rdi_1 = 0
                int32_t var_108 = 0
                void* rsi_2 = &r15_1[0x2c]
                
                while (true)
                    int16_t rax_9 = *(rsi_2 + 8)
                    int32_t rax_11
                    
                    if (rax_9 s< 0)
                        rax_11 = *(rsi_2 + 0xc)
                    else
                        rax_11 = sx.d(rax_9) s>> 5
                    
                    char var_168
                    char var_160
                    char var_158
                    char* var_150
                    int32_t* var_148
                    int64_t* var_140
                    int32_t var_138
                    int64_t* result_10
                    int32_t* var_128
                    int32_t* var_120
                    
                    if (rdi_1 s>= rax_11)
                        int16_t rcx_27 = rbx[1].w
                        int32_t rax_52
                        
                        if (rcx_27 s< 0)
                            rax_52 = *(rbx + 0xc)
                        else
                            rax_52 = sx.d(rcx_27) s>> 5
                        
                        if (result_1 u< rax_52)
                            void* rcx_28 = rbx + 0xa
                            
                            if ((rcx_27.b & 2) == 0)
                                rcx_28 = rbx[3]
                            
                            if (*(rcx_28 + (sx.q(result_1) << 1)) == 0x2e
                                    && (*(*r15_1 + 0xd8))(r15_1, 0, &var_118) != 0)
                                int16_t rax_56 = *(rsi_2 + 8)
                                int32_t rdx_15
                                
                                if (rax_56 s< 0)
                                    rdx_15 = *(rsi_2 + 0xc)
                                else
                                    rdx_15 = sx.d(rax_56) s>> 5
                                
                                if (sub_142ad96f0(rsi_2, rdx_15) != 0)
                                    result_1 += 1
                        
                        int32_t rsi_3 = var_f0
                        int64_t* r15_3
                        
                        if (rsi_3 s< 0)
                            r15_3 = arg3
                        else
                            void* rax_58 = sub_142b63800(&r15_1[0x44], &var_118)
                            r15_3 = arg3
                            char rax_59 = sub_142a6b000(r15_3, 0xa)
                            char rax_60
                            
                            if (rax_59 == 0)
                                rax_60 = sub_142a6b000(r15_3, 0xb)
                            
                            if (rax_59 != 0 || rax_60 != 0)
                                int32_t* r8_11 = &var_118
                                int32_t rbx_7
                                
                                if (sub_142a6b000(r15_3, 0xb) == 0)
                                    int32_t rax_63 = sub_142a695b0(r15_3, 0xa, r8_11)
                                    rbx_7 = rax_63
                                    
                                    if (rax_63 == 0)
                                        rbx_7 = 0xc
                                else
                                    rbx_7 = sub_142a695b0(r15_3, 0xb, r8_11)
                                
                                if (rbx_7 == 0 || rbx_7 - 0xd u<= 0xa)
                                    sub_142a6c030(r15_3, 0xb, rbx_7)
                                else
                                    zmm6.q =
                                        _mm_cvtepi32_pd(zx.q(sub_142a695b0(r15_3, 0xc, &var_118))).q
                                        f/ 60.0
                                    int32_t rax_66 = 0
                                    
                                    if (rbx_7 != 0xc)
                                        rax_66 = rbx_7
                                    
                                    zmm6.q = zmm6.q f+ _mm_cvtepi32_pd(zx.q(rax_66)).q
                                    uint64_t zmm0_4 = sub_142b639a0(rax_58, rsi_3, &var_118)
                                    
                                    if (var_118 s<= 0)
                                        zmm6.q = zmm6.q f- zmm0_4
                                        
                                        if (zmm6.q f< -6.0 || 0x4018000000000000 f<= zmm6.q)
                                            sub_142a6c030(r15_3, 9, 1)
                                        else
                                            sub_142a6c030(r15_3, 9, 0)
                            else
                                uint64_t zmm0_3 = sub_142b639a0(rax_58, rsi_3, &var_118)
                                
                                if (var_118 s<= 0)
                                    int32_t r8_9 = int.d(zmm0_3)
                                    int32_t rbx_6 = 0
                                    
                                    if (zmm0_3 f- _mm_cvtepi32_pd(zx.q(r8_9)).q f> 0.0)
                                        rbx_6 = 0x1e
                                    
                                    sub_142a6c030(r15_3, 0xb, r8_9)
                                    sub_142a6c030(r15_3, 0xc, rbx_6)
                        
                        result = zx.q(result_1)
                        *(arg4 + 8) = result.d
                        
                        if (var_114 == 0)
                        label_142adacaf:
                            
                            if (var_104 == 0)
                            label_142adafd3:
                                
                                if (var_118 s<= 0 && var_e8_1 != r15_3)
                                    sub_142a6c230(r15_3, 
                                        Concurrency::details::UMSFreeThreadProxy::GetContext(
                                            var_e8_1))
                                    result = sub_142a6c1a0(r15_3, 
                                        sub_142a6a540(var_e8_1, &var_118), &var_118)
                            else
                                result = (*(*r15_3 + 0x10))(r15_3)
                                
                                if (result != 0)
                                    int64_t* inptr =
                                        Concurrency::details::UMSFreeThreadProxy::GetContext(arg3)
                                    int64_t* inptr_1 = nullptr
                                    var_168.d = 0
                                    
                                    if (__RTDynamicCast(inptr, 0, 
                                            &class icu_64::TimeZone `RTTI Type Descriptor', 
                                            &class icu_64::OlsonTimeZone `RTTI Type Descriptor', 0) != 0)
                                        inptr_1 = inptr
                                    else
                                        var_168.d = 0
                                        
                                        if (__RTDynamicCast(inptr, 0, 
                                                &class icu_64::TimeZone `RTTI Type Descriptor', 
                                                &class icu_64::SimpleTimeZone `RTTI Type Descriptor', 
                                                0) != 0)
                                            inptr_1 = inptr
                                        else
                                            var_168.d = 0
                                            
                                            if (__RTDynamicCast(inptr, 0, 
                                                    &class icu_64::TimeZone `RTTI Type Descriptor', 
                                                    &class icu_64::RuleBasedTimeZone `RTTI Type Descriptor', 
                                                    0) != 0)
                                                inptr_1 = inptr
                                            else
                                                var_168.d = 0
                                                
                                                if (__RTDynamicCast(inptr, 0, 
                                                        &class icu_64::TimeZone `RTTI Type Descriptor', 
                                                        &data_143ccf460, 0) != 0)
                                                    inptr_1 = inptr
                                    
                                    sub_142a6c030(result, 0xf, 0)
                                    sub_142a6c030(result, 0x10, 0)
                                    int64_t r8_17
                                    uint128_t zmm0_6
                                    zmm0_6, r8_17 = sub_142a6a540(result, &var_118)
                                    double zmm1 = zmm0_6.q
                                    
                                    if (inptr_1 == 0)
                                        var_160.q = &var_118
                                        var_168.q = &var_108
                                        r8_17.b = 1
                                        (*(*inptr + 0x18))(inptr, zmm1, r8_17, &var_10c, var_168, 
                                            var_160, var_158, var_150, var_148, var_140, var_138, 
                                            result_10, var_128, var_120)
                                    else
                                        int64_t rax_74 = *inptr_1
                                        var_158.q = &var_118
                                        var_160.q = &var_108
                                        var_168.q = &var_10c
                                        
                                        if (var_104 != 1)
                                            (*(rax_74 + 0x98))(inptr_1, zmm1, 3, 3, var_168, 
                                                var_160, var_158, var_150, var_148, var_140, 
                                                var_138, result_10, var_128, var_120)
                                        else
                                            (*(rax_74 + 0x98))(inptr_1, zmm1, 1, 1, var_168, 
                                                var_160, var_158, var_150, var_148, var_140, 
                                                var_138, result_10, var_128, var_120)
                                    
                                    int32_t rdi_4 = var_108
                                    
                                    if (var_104 != 1)
                                        if (rdi_4 == 0)
                                            if (inptr_1 == 0)
                                                rdi_4 = (*(*inptr + 0x60))(inptr)
                                            else
                                                zmm8.q =
                                                    _mm_cvtepi32_pd(zx.q(var_10c)).q f+ zmm0_6.q
                                                struct icu_64::UObject::icu_64::TimeZoneTransition::VTable
                                                    * var_b8
                                                sub_142ad0f20(&var_b8)
                                                struct icu_64::UObject::icu_64::TimeZoneTransition::VTable
                                                    * var_d8
                                                sub_142ad0f20(&var_d8)
                                                zmm6 = zmm8
                                                zmm7 = zmm8
                                                rdi_4 = 0
                                                int64_t r8_18
                                                r8_18.b = 1
                                                char i_5
                                                int64_t r8_19
                                                i_5, r8_19 = (*(*inptr_1 + 0x70))(inptr_1, zmm8.q, 
                                                    r8_18, &var_b8, var_168, var_160, var_158, 
                                                    var_150, var_148, var_140, var_138, result_10, 
                                                    var_128, var_120)
                                                char i_4 = i_5
                                                
                                                if (i_5 != 0)
                                                    char i_1
                                                    
                                                    do
                                                        zmm6.q = sub_142ad1130(&var_b8).q
                                                            f- 0x3ff0000000000000
                                                        int32_t rax_78 =
                                                            sub_141b60020(sub_1405948b0(&var_b8))
                                                        rdi_4 = rax_78
                                                        
                                                        if (rax_78 != 0)
                                                            break
                                                        
                                                        r8_19.b = 1
                                                        i_1, r8_19 = (*(*inptr_1 + 0x70))(inptr_1, 
                                                            zmm6.q, r8_19, &var_b8)
                                                        i_4 = i_1
                                                    while (i_1 != 0)
                                                
                                                char i_6 = (*(*inptr_1 + 0x68))(inptr_1, zmm8.q, 0, 
                                                    &var_d8)
                                                char i_3 = i_6
                                                
                                                if (i_6 != 0)
                                                    char i_2
                                                    
                                                    do
                                                        zmm7 = sub_142ad1130(&var_d8)
                                                        int32_t rax_82 =
                                                            sub_141b60020(sub_14082fb80(&var_d8))
                                                        r12 = rax_82
                                                        
                                                        if (rax_82 != 0)
                                                            break
                                                        
                                                        i_2 = (*(*inptr_1 + 0x68))(inptr_1, zmm7.q, 
                                                            0, &var_d8)
                                                        i_3 = i_2
                                                    while (i_2 != 0)
                                                
                                                if (i_4 == 0)
                                                    if (i_3 == 0 || r12 == 0)
                                                        rdi_4 = (*(*inptr_1 + 0x60))(inptr_1)
                                                    else
                                                        rdi_4 = r12
                                                else if (i_3 != 0)
                                                    zmm0_6.q = zmm8.q f- zmm6.q
                                                    zmm7.q = zmm7.q f- zmm8.q
                                                    
                                                    if (zmm0_6.q f> zmm7.q)
                                                        rdi_4 = r12
                                                else if (rdi_4 == 0)
                                                    rdi_4 = (*(*inptr_1 + 0x60))(inptr_1)
                                                
                                                sub_142ad0f40(&var_d8)
                                                sub_142ad0f40(&var_b8)
                                            
                                            if (rdi_4 == 0)
                                                rdi_4 = 0x36ee80
                                    else if (rdi_4 != 0)
                                        rdi_4 = 0
                                    
                                    sub_142a6c030(arg3, 0xf, var_10c)
                                    sub_142a6c030(arg3, 0x10, rdi_4)
                                    result = (**result)(result, 1)
                                    r15_3 = arg3
                                    goto label_142adafd3
                                
                                var_118 = 7
                        else
                            result = (*(*r15_3 + 0x10))(r15_3)
                            
                            if (result != 0)
                                int64_t zmm0_5 = sub_142a6a540(result, &var_118)
                                
                                if (arg1[0x6a].b != 0 && not(arg1[0x62] f<= zmm0_5))
                                    sub_142a6c030(r15_3, 1, *(arg1 + 0x31c) + 0x64)
                                
                                result = (**result)(result, 1)
                                goto label_142adacaf
                            
                            var_118 = 7
                        
                        break
                    
                    int16_t rcx_8 = *(rsi_2 + 8)
                    int32_t rax_13
                    
                    if (rcx_8 s< 0)
                        rax_13 = *(rsi_2 + 0xc)
                    else
                        rax_13 = sx.d(rcx_8) s>> 5
                    
                    int16_t r14_1
                    
                    if (rdi_1 u< rax_13)
                        void* rcx_9 = rsi_2 + 0xa
                        
                        if ((rcx_8.b & 2) == 0)
                            rcx_9 = *(rsi_2 + 0x18)
                        
                        r14_1 = *(rcx_9 + (sx.q(rdi_1) << 1))
                    
                    if (rdi_1 u>= rax_13 || r14_1 u>= 0x80 || *(zx.q(r14_1) + &data_14365a0c0) == 0)
                        r13_1 = -1
                        char rax_46 = (*(*r15_1 + 0x58))(r15_1)
                        char rax_48 = (*(*r15_1 + 0xd8))(r15_1, 2, &var_118)
                        var_158 = rax_46
                        rbx = arg2
                        result = sub_142ad9aa0(rsi_2, &var_108, rbx, &result_1, 
                            (*(*r15_1 + 0xd8))(r15_1, 0, &var_118), rax_48, var_158)
                        
                        if (result.b == 0)
                            var_118 = 9
                            break
                        
                        rdi_1 = var_108
                    else
                        int32_t r15_2 = rdi_1
                        int32_t rbx_3 = 1
                        int32_t rdx_6 = rdi_1 + 1
                        
                        while (true)
                            int16_t rax_17 = *(rsi_2 + 8)
                            int32_t rax_19
                            
                            if (rax_17 s< 0)
                                rax_19 = *(rsi_2 + 0xc)
                            else
                                rax_19 = sx.d(rax_17) s>> 5
                            
                            if (rdx_6 s>= rax_19)
                                break
                            
                            int16_t rcx_10 = *(rsi_2 + 8)
                            int32_t rax_21
                            
                            if (rcx_10 s< 0)
                                rax_21 = *(rsi_2 + 0xc)
                            else
                                rax_21 = sx.d(rcx_10) s>> 5
                            
                            int16_t rcx_12
                            
                            if (rdx_6 u>= rax_21)
                                rcx_12 = -1
                            else
                                void* rcx_11 = rsi_2 + 0xa
                                
                                if ((rcx_10.b & 2) == 0)
                                    rcx_11 = *(rsi_2 + 0x18)
                                
                                rcx_12 = *(rcx_11 + (sx.q(rdx_6) << 1))
                            
                            if (rcx_12 != r14_1)
                                break
                            
                            rbx_3 += 1
                            rdi_1 += 1
                            rdx_6 += 1
                        
                        if (sub_142b5c880(r14_1, rbx_3) == 0)
                            r13_1 = -1
                        label_142ada86a:
                            r15_1 = arg1
                            
                            if (r14_1 == 0x6c)
                                rbx = arg2
                            else
                                var_120 = &var_f0
                                var_128 = &var_104
                                result_10 = result_4
                                var_138 = rdi_1
                                var_140 = var_e8_1
                                var_148 = &var_f4
                                var_150 = &var_114
                                var_158 = 1
                                var_160 = 0
                                var_168.d = rbx_3
                                rbx = arg2
                                int32_t result_9 = sub_142adcee0(r15_1, rbx, &result_1, r14_1, 
                                    var_168, 0, 1, var_150, var_148, var_140, var_138, result_10, 
                                    var_128, var_120)
                                int32_t result_7 = result_1
                                result = zx.q(0xffffffff - result_7)
                                
                                if (result_9 != result.d)
                                    if (result_9 s<= 0)
                                        var_118 = 9
                                        break
                                    
                                    result_1 = result_9
                                else
                                    int16_t rax_33 = *(rsi_2 + 8)
                                    int32_t rax_35
                                    
                                    if (rax_33 s< 0)
                                        rax_35 = *(rsi_2 + 0xc)
                                    else
                                        rax_35 = sx.d(rax_33) s>> 5
                                    
                                    int32_t rbx_4 = rdi_1 + 1
                                    
                                    if (rbx_4 s< rax_35
                                            && sub_142b13730(zx.d(sub_142a4a1a0(rsi_2, rbx_4)))
                                            != 0)
                                        rdi_1 = rbx_4
                                        
                                        while (true)
                                            rbx_4 += 1
                                            int16_t rax_38 = *(rsi_2 + 8)
                                            int32_t rax_40
                                            
                                            if (rax_38 s< 0)
                                                rax_40 = *(rsi_2 + 0xc)
                                            else
                                                rax_40 = sx.d(rax_38) s>> 5
                                            
                                            if (rbx_4 s>= rax_40)
                                                break
                                            
                                            int16_t rcx_20 = *(rsi_2 + 8)
                                            int32_t rax_42
                                            
                                            if (rcx_20 s< 0)
                                                rax_42 = *(rsi_2 + 0xc)
                                            else
                                                rax_42 = sx.d(rcx_20) s>> 5
                                            
                                            int16_t rdx_12
                                            
                                            if (rbx_4 u>= rax_42)
                                                rdx_12 = -1
                                            else
                                                void* rcx_21 = rsi_2 + 0xa
                                                
                                                if ((rcx_20.b & 2) == 0)
                                                    rcx_21 = *(rsi_2 + 0x18)
                                                
                                                rdx_12 = *(rcx_21 + (sx.q(rbx_4) << 1))
                                            
                                            if (sub_142b13730(zx.d(rdx_12)) == 0)
                                                break
                                            
                                            rdi_1 += 1
                                    
                                    rbx = arg2
                                    result_1 = result_7
                        else
                            if (r13_1 s< 0)
                                if (sub_142ad97e0(rsi_2, rdi_1 + 1) != 0)
                                    r13_1 = r15_2
                                    result_5 = result_1
                                    var_10c = 0
                                
                                if (r13_1 s< 0)
                                    goto label_142ada86a
                            
                            if (r15_2 == r13_1)
                                int32_t rax_26 = var_10c
                                rbx_3 -= rax_26
                                result = zx.q(rax_26 + 1)
                                var_10c = result.d
                            
                            if (r15_2 == r13_1 && rbx_3 == 0)
                                var_118 = 9
                                break
                            
                            var_120 = nullptr
                            var_128 = &var_104
                            result_10 = result_4
                            var_138 = rdi_1
                            var_140 = var_e8_1
                            var_148 = &var_f4
                            var_150 = &var_114
                            var_158 = 0
                            var_160 = 1
                            var_168.d = rbx_3
                            rbx = arg2
                            r15_1 = arg1
                            int32_t result_6 = sub_142adcee0(r15_1, rbx, &result_1, r14_1, var_168, 
                                1, 0, var_150, var_148, var_140, var_138, result_10, var_128, 0)
                            result_1 = result_6
                            
                            if (result_6 s< 0)
                                rdi_1 = r13_1 - 1
                                result_1 = result_5
                    
                    rdi_1 += 1
                    var_108 = rdi_1
            else
                result = j_sub_142a7dd00(0x330)
                uint64_t result_2 = result
                uint64_t result_3
                
                if (result == 0)
                    result_3 = 0
                else
                    result = sub_142b5e170(result, *(r15_1[0x60] + 0x1b8) + 0x180, &r15_1[0x44], 
                        &var_118)
                    result_3 = result
                
                result_4 = result_3
                
                if (result_3 == 0)
                    var_118 = 7
                else if (var_118 s<= 0)
                    goto label_142ada6a0
            
            if (result_4 != 0)
                result = (**result_4)(result_4, 1)
            
            rsi_1 = var_e0_1
        
        if (rsi_1 != 0)
            result = (**rsi_1)(rsi_1, 1)
        
        if (var_118 s> 0)
            goto label_142adb04a
else
    *(arg4 + 0xc) = 0

return result
