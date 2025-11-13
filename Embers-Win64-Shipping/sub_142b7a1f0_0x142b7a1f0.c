// 函数: sub_142b7a1f0
// 地址: 0x142b7a1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_88 = -2
void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
uint64_t result

if (*arg2 s> 0)
    result = 0xffffffff
else
    int32_t rax_2 = sub_142b7c9e0(arg1, *(arg1 + 0x48) + 1)
    int32_t rsi_1 = rax_2
    int32_t result_1
    
    if (sub_142a48fb0(*(arg1 + 0x10), rax_2, 7, u"[before", 0, 7) != 0)
        result_1 = 0xf
    else
        void* rax_4 = *(arg1 + 0x10)
        int16_t rcx_1 = *(rax_4 + 8)
        int32_t rcx_3
        
        if (rcx_1 s< 0)
            rcx_3 = *(rax_4 + 0xc)
        else
            rcx_3 = sx.d(rcx_1) s>> 5
        
        if (rsi_1 + 7 s>= rcx_3)
            result_1 = 0xf
        else
            int16_t rdx_3 = *(rax_4 + 8)
            int32_t rcx_5
            
            if (rdx_3 s< 0)
                rcx_5 = *(rax_4 + 0xc)
            else
                rcx_5 = sx.d(rdx_3) s>> 5
            
            int16_t rdx_4
            
            if (rsi_1 + 7 u>= rcx_5)
                rdx_4 = -1
            else
                void* rcx_6 = rax_4 + 0xa
                
                if ((rdx_3.b & 2) == 0)
                    rcx_6 = *(rax_4 + 0x18)
                
                rdx_4 = *(rcx_6 + (sx.q(rsi_1 + 7) << 1))
            
            if (sub_142b13730(zx.d(rdx_4)) == 0)
                result_1 = 0xf
            else
                int32_t rax_7 = sub_142b7c9e0(arg1, rsi_1 + 8)
                void* rbp_2 = *(arg1 + 0x10)
                int16_t rax_8 = *(rbp_2 + 8)
                int32_t rcx_10
                
                if (rax_8 s< 0)
                    rcx_10 = *(rbp_2 + 0xc)
                else
                    rcx_10 = sx.d(rax_8) s>> 5
                
                if (rax_7 + 1 s>= rcx_10)
                    result_1 = 0xf
                else
                    int16_t rax_9 = sub_142a4a1a0(rbp_2, rax_7)
                    
                    if (rax_9 - 0x31 u> 2)
                        result_1 = 0xf
                    else if (sub_142a4a1a0(rbp_2, rax_7 + 1) != 0x5d)
                        result_1 = 0xf
                    else
                        result_1 = zx.d(rax_9) - 0x31
                        rsi_1 = sub_142b7c9e0(arg1, rax_7 + 2)
    
    void* rax_12 = *(arg1 + 0x10)
    int16_t rcx_15 = *(rax_12 + 8)
    int32_t rcx_17
    
    if (rcx_15 s< 0)
        rcx_17 = *(rax_12 + 0xc)
    else
        rcx_17 = sx.d(rcx_15) s>> 5
    
    if (rsi_1 s< rcx_17)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_78 =
            &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
        int16_t var_70_1 = 2
        int16_t rdx_9 = *(rax_12 + 8)
        int32_t rcx_20
        
        if (rdx_9 s< 0)
            rcx_20 = *(rax_12 + 0xc)
        else
            rcx_20 = sx.d(rdx_9) s>> 5
        
        void* rcx_21
        
        if (rsi_1 u< rcx_20)
            rcx_21 = rax_12 + 0xa
            
            if ((rdx_9.b & 2) == 0)
                rcx_21 = *(rax_12 + 0x18)
        
        int32_t rax_14
        
        if (rsi_1 u>= rcx_20 || *(rcx_21 + (sx.q(rsi_1) << 1)) != 0x5b)
            int32_t rax_16 = sub_142b7c070(arg1, sub_142b7c9e0(arg1, rsi_1), &var_78, arg2)
            
            if (*arg2 s<= 0 && (var_70_1 & 0xffe0) == 0)
                *arg2 = 3
                *(arg1 + 0x30) = "missing relation string"
                
                if (*(arg1 + 0x28) != 0)
                    sub_142b7c7c0(arg1)
            
            rax_14 = sub_142b7c9e0(arg1, rax_16)
        else
            rax_14 = sub_142b7b8e0(arg1, rsi_1, &var_78, arg2)
        
        int64_t* rcx_27 = *(arg1 + 0x38)
        int32_t var_98_1
        var_98_1.q = arg2
        (*(*rcx_27 + 0x10))(rcx_27, zx.q(result_1), &var_78, arg1 + 0x30, var_98_1)
        
        if (*arg2 s> 0)
            sub_142b7c7c0(arg1)
        
        *(arg1 + 0x48) = rax_14
        sub_142a47ff0(&var_78)
        result = zx.q(result_1)
    else
        if (*arg2 s<= 0)
            *arg2 = 3
            *(arg1 + 0x30) = "reset without position"
            
            if (*(arg1 + 0x28) != 0)
                sub_142b7c7c0(arg1)
        
        result = 0xffffffff

__security_check_cookie(rax_1 ^ &var_b8)
return result
