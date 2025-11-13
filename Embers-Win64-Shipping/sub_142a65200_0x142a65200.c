// 函数: sub_142a65200
// 地址: 0x142a65200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_98 = -2
void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_80 = 2
int32_t rbp = 0
int32_t rax_2 = sub_142a63b10(arg1)
int32_t rsi = rax_2
int32_t rbx_1

if (*arg3 s<= 0 && rax_2 s>= 1)
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax_2)
    int32_t rax_5 = (temp1_1 - temp0_1) s>> 1
    rbx_1 = rax_5
    
    if (rax_5 != 0x7fffffff)
        int32_t rax_14
        int32_t r14_1
        
        do
            r14_1 = rbx_1
            int32_t var_a8
            void* rax_6 = sub_142a63b20(arg1, rbx_1, &var_a8, arg3)
            
            if (*arg3 s> 0)
                break
            
            sub_142a4aa20(&var_88, 1, rax_6, var_a8)
            int32_t var_7c
            int32_t rax_7 = var_7c
            int32_t rcx_3
            
            if (var_80 s< 0)
                rcx_3 = rax_7
            else
                rcx_3 = sx.d(var_80) s>> 5
            
            int16_t r8_2 = *(arg2 + 8)
            int32_t r8_4
            
            if (r8_2 s< 0)
                r8_4 = *(arg2 + 0xc)
            else
                r8_4 = sx.d(r8_2) s>> 5
            
            char r9_3 = var_80.b
            char rax_8
            
            if ((r9_3 & 1) == 0)
                if (var_80 s>= 0)
                    rax_7 = sx.d(var_80) s>> 5
                
                int32_t rdx_4 = 0
                
                if (rax_7 s< 0)
                    rdx_4 = rax_7
                
                if (rcx_3 s>= 0)
                    int32_t rax_10 = rax_7 - rdx_4
                    
                    if (rcx_3 s> rax_10)
                        rcx_3 = rax_10
                else
                    rcx_3 = 0
                
                void var_7e
                void* r9_4 = &var_7e
                void* var_70
                
                if ((r9_3 & 2) == 0)
                    r9_4 = var_70
                rax_8 = sub_142a48fb0(arg2, 0, r8_4, r9_4, rdx_4, rcx_3)
            else
                rax_8 = not.b(*(arg2 + 8)) & 1
            
            if (rax_8 == 0)
                goto label_142a65363
            
            if (rax_8 s>= 0)
                rbp = rbx_1
            else
                rsi = rbx_1
            
            int32_t temp3_1
            int32_t temp4_1
            temp3_1:temp4_1 = sx.q(rsi + rbp)
            rax_14 = (temp4_1 - temp3_1) s>> 1
            rbx_1 = rax_14
        while (r14_1 != rax_14)

rbx_1 = -1
label_142a65363:
sub_142a47ff0(&var_88)
__security_check_cookie(rax_1 ^ &var_d8)
return zx.q(rbx_1)
