// 函数: sub_142b343d0
// 地址: 0x142b343d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_f0 = -2
void var_148
int64_t rax_1 = __security_cookie ^ &var_148
char r13 = 0
int32_t var_100 = 0
int64_t* result = j_sub_142a7dd00(0x70)
var_100.q = result
int64_t* result_1

if (result == 0)
    result_1 = nullptr
else
    result = sub_142b32420(result, arg4, arg1, arg6)
    result_1 = result

if (result_1 != 0)
    sub_142a48100(arg1, &result_1[2])
    int16_t rax_3 = *(arg1 + 8)
    int32_t r9_2
    
    if (rax_3 s< 0)
        r9_2 = *(arg1 + 0xc)
    else
        r9_2 = sx.d(rax_3) s>> 5
    
    int32_t rax_4 = sub_142a491f0(arg1, 0x5b, 0, r9_2)
    int64_t* rdi_1
    
    if (rax_4 s< 0)
    label_142b347b2:
        sub_142b33ad0(result_1, arg2, arg1, arg3, arg6)
        rdi_1 = arg5
    label_142b347bf:
        
        if (*result_1 s< 0)
            result = sub_142b36b30(arg2, result_1)
        else
            result = sub_142b32a10(rdi_1, result_1)
    else
        int16_t rcx_3 = *(arg1 + 8)
        int32_t r9_4
        
        if (rcx_3 s< 0)
            r9_4 = *(arg1 + 0xc)
        else
            r9_4 = sx.d(rcx_3) s>> 5
        
        int32_t rax_5 = sub_142a491f0(arg1, 0x5d, 0, r9_4)
        
        if (rax_5 s< 0 || rax_4 s> rax_5)
            goto label_142b347b2
        
        int64_t r8_1 = *result_1
        int32_t rdx_2
        
        if (r8_1 s<= 0)
            rdx_2 = r8_1.d
        
        if (r8_1 s<= 0 && ((((r8_1 + 5).d & 0xfffffff9) == 0 && rdx_2 != 1) || rdx_2 == 0xfffffffa))
            goto label_142b347b2
        
        int64_t* rsi_2 = nullptr
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_d8 =
            &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
        int16_t var_d0_1 = 2
        int64_t r12_2
        int32_t r13_1
        
        if (r8_1 s<= 0)
        label_142b34556:
            int32_t rax_9 = *result_1
            
            if (rax_9 == 0xfffffffe || rax_9 == 0xfffffffc)
                goto label_142b3456b
            
        label_142b346ad:
            r12_2 = arg3
            r13_1 = rax_4
        label_142b346bc:
            sub_142a4afe0(&var_d8)
            int32_t r8_6
            int32_t var_cc
            
            if (var_d0_1 s< 0)
                r8_6 = var_cc
            else
                r8_6 = sx.d(var_d0_1) s>> 5
            int32_t* var_128
            var_128.d = 0
            sub_142a49310(&var_d8, 0, r8_6, arg1, var_128.d, r13_1)
            sub_142a48d00(&var_d8, arg1, r13_1 + 1, rax_5 - r13_1 - 1)
            int16_t rcx_18 = *(arg1 + 8)
            int32_t rax_19
            
            if (rcx_18 s< 0)
                rax_19 = *(arg1 + 0xc)
            else
                rax_19 = sx.d(rcx_18) s>> 5
            
            if (rax_5 + 1 s< rax_19)
                int32_t r9_17
                
                if (rcx_18 s< 0)
                    r9_17 = *(arg1 + 0xc)
                else
                    r9_17 = sx.d(rcx_18) s>> 5
                
                sub_142a48d00(&var_d8, arg1, rax_5 + 1, r9_17 - rax_5 - 1)
            
            sub_142b33ad0(result_1, arg2, &var_d8, r12_2, arg6)
            
            if (rsi_2 == 0)
                rdi_1 = arg5
            else if (*rsi_2 s< 0)
                sub_142b36b30(arg2, rsi_2)
                rdi_1 = arg5
            else
                rdi_1 = arg5
                sub_142b32a10(rdi_1, rsi_2)
            
            sub_142a47ff0(&var_d8)
            goto label_142b347bf
        
        if (modu.dp.q(0:r8_1, sub_142b36cd0(result_1[1].d, *(result_1 + 0xc))) != 0)
            if (r8_1 s> 0)
                goto label_142b346ad
            
            goto label_142b34556
        
    label_142b3456b:
        int64_t* rax_10 = j_sub_142a7dd00(0x70)
        int64_t* var_e8_1 = rax_10
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_98
        
        if (rax_10 == 0)
            rsi_2 = nullptr
        else
            var_98 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
            int16_t var_90_1 = 2
            r13 = 1
            int32_t var_100_1 = 1
            rsi_2 = sub_142b32420(rax_10, arg4, &var_98, arg6)
        
        if ((r13 & 1) != 0)
            sub_142a47ff0(&var_98)
        
        if (rsi_2 != 0)
            int64_t rax_12 = *result_1
            
            if (rax_12 s>= 0)
                *rsi_2 = rax_12
                
                if (*(arg2 + 0x98) == 0)
                    *result_1 += 1
            else if (rax_12.d == 0xfffffffe)
                *rsi_2 = -3
            else if (rax_12.d == 0xfffffffc)
                *rsi_2 = rax_12
                *result_1 = -2
            
            rsi_2[1].d = result_1[1].d
            *(rsi_2 + 0xc) = *(result_1 + 0xc)
            r13_1 = rax_4
            sub_142a48d00(&var_d8, arg1, 0, r13_1)
            int16_t rcx_12 = *(arg1 + 8)
            int32_t rax_16
            
            if (rcx_12 s< 0)
                rax_16 = *(arg1 + 0xc)
            else
                rax_16 = sx.d(rcx_12) s>> 5
            
            if (rax_5 + 1 s< rax_16)
                int32_t r9_8
                
                if (rcx_12 s< 0)
                    r9_8 = *(arg1 + 0xc)
                else
                    r9_8 = sx.d(rcx_12) s>> 5
                
                sub_142a48d00(&var_d8, arg1, rax_5 + 1, r9_8 - rax_5 - 1)
            
            r12_2 = arg3
            sub_142b33ad0(rsi_2, arg2, &var_d8, r12_2, arg6)
            goto label_142b346bc
        
        *arg6 = 7
        result = sub_142a47ff0(&var_d8)
else
    *arg6 = 7

__security_check_cookie(rax_1 ^ &var_148)
return result
