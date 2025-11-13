// 函数: sub_142b61530
// 地址: 0x142b61530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_190 = -2
void var_228
int64_t rax_1 = __security_cookie ^ &var_228
int64_t rdi = sx.q(arg2)
void* r13 = arg1
int32_t* var_1a0 = arg5
int32_t* var_198 = arg6
void (* result_1)() = nullptr
*arg5 = 0
void (* result)()

if (*arg6 s> 0)
    *(arg4 + 0xc) = *(arg4 + 8)
    result = nullptr
else if (*(r13 + 0x2a4) == 0)
    int32_t rax_3 = *(r13 + 0x2c0)
    int32_t rcx_1 = 1
    
    if (rax_3 != 0)
        rcx_1 = rax_3
    
    int64_t rbx_1 = sx.q(rcx_1)
    int64_t* rax_4
    
    if (rcx_1 != 0)
        int64_t rax_5 = 0x70 * rbx_1
        
        if (mulu.dp.q(0x70, rbx_1) u>> 0x40 != zx.o(0))
            rax_5 = -1
        
        uint64_t rax_6 = rax_5 + 8
        
        if (rax_5 u>= -8)
            rax_6 = -1
        
        rax_4 = j_sub_142a7dd00(rax_6)
    else
        rax_4 = j_sub_140a82f30(8)
    
    int32_t var_1b8_1 = rax_4.d
    int64_t (* var_208)(struct icu_64::UObject::icu_64::Formattable::VTable** arg1)
    void (* result_4)()
    void (* result_3)()
    
    if (rax_4 == 0)
        result_3 = nullptr
        result_4 = nullptr
    else
        *rax_4 = rbx_1
        result_4 = &rax_4[1]
        var_208 = sub_142aa7840
        `eh vector constructor iterator'(&rax_4[1], 0x70, rbx_1)
        result_3 = result_4
    
    void (* result_5)() = result_3
    void (* result_6)() = result_5
    void* rcx_4 = r13 + 0x238
    void* rax_9 = (rdi << 4) + *(r13 + 0x280)
    int32_t r15_2 = zx.d(*(rax_9 + 8)) + *(rax_9 + 4)
    int32_t rsi_1 = *(arg4 + 8)
    struct icu_64::UObject::icu_64::ParsePosition::VTable* var_1d0 =
        &icu_64::ParsePosition::`vftable'{for `icu_64::UObject'}
    int32_t var_1c8_1 = 0
    int32_t var_1c4_1 = 0xffffffff
    int32_t rdi_1 = rdi.d + 1
    
    while (true)
        char var_1f8_1 = 0
        int64_t r14_2 = sx.q(rdi_1) * 2
        int64_t r12_1 = *(r13 + 0x280)
        int32_t rax_10 = *(r12_1 + (r14_2 << 3))
        int32_t r13_1 = *(r12_1 + (r14_2 << 3) + 4)
        int32_t r13_2 = r13_1 - r15_2
        
        if (r13_1 == r15_2)
            goto label_142b616f0
        
        int32_t var_200 = r13_2
        var_208.d = rsi_1
        void (* result_2)() = nullptr
        
        if (sub_142b5f9f0(rcx_4, r15_2, r13_2, arg3, var_208.d, var_200) != 0)
            *(arg4 + 0xc) = rsi_1
        else
            result_3 = result_4
        label_142b616f0:
            rsi_1 += r13_2
            
            if (rax_10 == 1)
                *(arg4 + 8) = rsi_1
                result_5 = nullptr
                result_2 = result_3
            else
                r13 = arg1
                
                if (rax_10 - 2 u<= 1)
                    r15_2 = zx.d(*(r12_1 + (r14_2 << 3) + 8)) + *(r12_1 + (r14_2 << 3) + 4)
                else
                    int64_t rcx_5 = *(r13 + 0x280)
                    int32_t r15_3 = *(rcx_5 + (r14_2 << 3) + 0xc)
                    
                    if (r15_3 s< rdi_1)
                        r15_3 = rdi_1
                    
                    int32_t r14_3
                    
                    if (*(r12_1 + (r14_2 << 3)) - 5 u<= 1)
                        r14_3 = sx.d(*(r12_1 + (r14_2 << 3) + 0xa))
                    else
                        r14_3 = 0
                    
                    int64_t rax_17 = sx.q(*(rcx_5 + sx.q(rdi_1 + 1) * 0x10 + 0xa))
                    uint32_t var_1e8_2 = rax_17.d
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_b8 =
                        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                    int16_t var_b0_1 = 2
                    void* r12_3 = rax_17 * 0x70 + result_3
                    int64_t* rax_18
                    
                    if (*(r13 + 0x2e0) != 0)
                        rax_18 = sub_142b60d70(r13, rdi_1)
                    
                    uint32_t r14_4
                    
                    if (*(r13 + 0x2e0) == 0 || rax_18 == 0)
                        int64_t rax_20
                        int64_t* rcx_8
                        
                        if (r14_3 != 0)
                            rcx_8 = *(r13 + 0x2e0)
                            
                            if (rcx_8 != 0)
                                rax_20 = sub_142a86d40(rcx_8, rdi_1)
                        
                        if (r14_3 != 0 && (rcx_8 == 0 || rax_20 == 0))
                            if (r14_3 != 2)
                                int32_t rax_31 = 0x10
                                
                                if (r14_3 - 3 u> 2)
                                    rax_31 = 5
                                
                                *var_198 = rax_31
                                sub_142a47ff0(&var_b8)
                                break
                            
                            int128_t zmm0_1 = sub_142b8b260(r13 + 0x228, rdi_1 + 2, arg3, &var_1d0)
                            
                            if (rsi_1 == rsi_1)
                                goto label_142b61a13
                            
                            sub_142aa8140(r12_3, zmm0_1)
                            r14_4 = var_1e8_2
                            goto label_142b619b3
                        
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_f8
                        sub_142b61350(r13, &var_f8, r15_3)
                        int16_t var_f0
                        int32_t rax_21
                        
                        if ((var_f0 & 0xffe0) == 0)
                            rax_21 = sub_142a4a1f0(arg3)
                        else
                            rax_21 = sub_142b2e4e0(arg3, &var_f8, rsi_1)
                        
                        if (rax_21 s< 0)
                            *(arg4 + 0xc) = rsi_1
                            sub_142a47ff0(&var_f8)
                            sub_142a47ff0(&var_b8)
                            break
                        
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_138
                        sub_142a4ad20(arg3, &var_138, rsi_1, rax_21 - rsi_1)
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_178 =
                            &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                        int16_t var_170_1 = 2
                        int16_t var_1f0 = 0x7b
                        sub_142a48d70(&var_178, &var_1f0, 0, 1)
                        var_208.d = 0
                        r14_4 = var_1e8_2
                        void var_78
                        sub_142ae7b00(&var_78, 0x10, r14_4, 0xa, var_208.d)
                        sub_142a48d70(&var_178, &var_78, 0, 0xffffffff)
                        var_1f0 = 0x7d
                        sub_142a48d70(&var_178, &var_1f0, 0, 1)
                        int32_t var_16c
                        int32_t rdx_12 = var_16c
                        int32_t rcx_19
                        
                        if (var_170_1 s< 0)
                            rcx_19 = rdx_12
                        else
                            rcx_19 = sx.d(var_170_1) s>> 5
                        
                        int16_t var_130
                        int32_t r8_9
                        int32_t var_12c
                        
                        if (var_130 s< 0)
                            r8_9 = var_12c
                        else
                            r8_9 = sx.d(var_130) s>> 5
                        char r10_2 = var_170_1.b
                        int16_t rax_22
                        
                        if ((r10_2 & 1) == 0)
                            if (var_170_1 s>= 0)
                                rdx_12 = sx.d(var_170_1) s>> 5
                            
                            int32_t rax_23 = 0
                            
                            if (rdx_12 s< 0)
                                rax_23 = rdx_12
                            
                            if (rcx_19 s>= 0)
                                int32_t rdx_14 = rdx_12 - rax_23
                                
                                if (rcx_19 s> rdx_14)
                                    rcx_19 = rdx_14
                            else
                                rcx_19 = 0
                            
                            void var_16e
                            void* r9_7 = &var_16e
                            void* var_160
                            
                            if ((r10_2 & 2) == 0)
                                r9_7 = var_160
                            var_200 = rcx_19
                            var_208.d = rax_23
                            rax_22 = sub_142a48fb0(&var_138, 0, r8_9, r9_7, var_208.d, var_200)
                        else
                            rax_22.b = not.b(var_130.b)
                            rax_22.b &= 1
                        
                        if (rax_22.b != 0)
                            sub_142aa81a0(r12_3, &var_138)
                            var_1f8_1 = 1
                        
                        rsi_1 = rax_21
                        sub_142a47ff0(&var_178)
                        sub_142a47ff0(&var_138)
                        sub_142a47ff0(&var_f8)
                        
                        if (var_1f8_1 != 0)
                            goto label_142b619b3
                    else
                        (*(*rax_18 + 0x30))(rax_18, arg3, r12_3, &var_1d0, var_208, var_200, 
                            var_1f8_1)
                        
                        if (rsi_1 == rsi_1)
                        label_142b61a13:
                            *(arg4 + 0xc) = rsi_1
                            sub_142a47ff0(&var_b8)
                            break
                        
                        r14_4 = var_1e8_2
                    label_142b619b3:
                        
                        if (*var_1a0 s<= r14_4)
                            *var_1a0 = r14_4 + 1
                    void* rax_27 = (sx.q(r15_3) << 4) + *(r13 + 0x280)
                    r15_2 = zx.d(*(rax_27 + 8)) + *(rax_27 + 4)
                    rdi_1 = r15_3
                    sub_142a47ff0(&var_b8)
                
                rdi_1 += 1
                result_3 = result_4
                rcx_4 = r13 + 0x238
                continue
        
        result_1 = result_2
        break
    
    sub_142aa8450(&var_1d0)
    
    if (result_5 != 0)
        if (*(result_5 - 8) == 0)
            j_sub_140a74f90(result_5 - 8)
        else
            (**result_5)(result_5, 3)
    
    result = result_1
else
    *arg6 = 0x1010c
    *(arg4 + 0xc) = *(arg4 + 8)
    result = nullptr

__security_check_cookie(rax_1 ^ &var_228)
return result
