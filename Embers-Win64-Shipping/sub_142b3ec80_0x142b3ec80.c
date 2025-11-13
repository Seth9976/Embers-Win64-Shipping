// 函数: sub_142b3ec80
// 地址: 0x142b3ec80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_e0 = -2
void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int32_t rbx = 0
int32_t var_e8 = 0
int32_t rsi = 0
int32_t rax_3 = sub_142ab39b0(arg2) + 1
int32_t rdi = 0

if (rax_3 s> 0)
    int16_t* rax_4 = arg1 + 0x30
    
    do
        if (sub_142b3c0d0(rax_4, rdi, arg2) != 0)
            void* rcx_2 = *(arg1 + 0x68)
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_d8
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_98
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_6
            
            if (*(arg1 + 0x5c) == 0)
                rax_6 = sub_142aaf870(rcx_2, &var_d8, 1)
                rbx |= 2
            else
                rax_6 = sub_142aaf870(rcx_2, &var_98, 0x11)
                rbx |= 1
            
            int32_t var_e8_1 = rbx
            rsi += sub_142b3fb40(arg3, arg4, rax_6, 6, arg5)
            
            if ((rbx.b & 2) != 0)
                rbx &= 0xfffffffd
                int32_t var_e8_2 = rbx
                sub_142a47ff0(&var_d8)
            
            if ((rbx.b & 1) != 0)
                rbx &= 0xfffffffe
                int32_t var_e8_3 = rbx
                sub_142a47ff0(&var_98)
        
        char rax_8 = sub_142ab37c0(arg2, rdi)
        void* rdx_5 = *(arg1 + 0x68)
        int32_t rcx_7 = *(rdx_5 + 0x748)
        int32_t rax_9
        
        if (rcx_7 == 0xffffffff)
            int32_t rcx_9 = sx.d(rax_8)
            void* r8_4
            
            if (rcx_9 - 1 u<= 8)
                r8_4 = rdx_5 + 8 + (sx.q(rcx_9 + 0x11) << 6)
            else
                r8_4 = rdx_5 + 0x108
            
            rax_9 = sub_142b3fb40(arg3, arg4, r8_4, 0, arg5)
        else
            rax_9 = sub_142b3fd70(arg3, arg4, sx.d(rax_8) + rcx_7, 0, arg5)
        
        rsi += rax_9
        rdi += 1
        rax_4 = arg1 + 0x30
    while (rdi s< rax_3)

__security_check_cookie(rax_1 ^ &var_118)
return zx.q(rsi)
