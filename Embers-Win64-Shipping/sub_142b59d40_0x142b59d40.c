// 函数: sub_142b59d40
// 地址: 0x142b59d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_98 = -2
void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int64_t* result = arg4

if (*arg6 s<= 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88
    sub_142a47e10(&var_88, *result, 0xffffffff)
    void* rax_2 = sub_142a86c30(*(arg3 + 8), &var_88)
    void* rsi_1 = rax_2
    
    if (rax_2 == 0)
        *arg2 = 0
        *arg6 = 2
    else
        int32_t i_1 = sub_142a86c70(*(arg3 + 0x60), &var_88)
        int32_t i = i_1
        int64_t r15_1 = sx.q(arg5)
        int32_t rax_3 = i_1 + r15_1.d
        *arg2 = rax_3
        int64_t r14_1 = sx.q(rax_3)
        int64_t* rax_4
        
        if (i_1 != neg.d(r15_1.d))
            int64_t rax_5 = 0x40 * r14_1
            
            if (mulu.dp.q(0x40, r14_1) u>> 0x40 != zx.o(0))
                rax_5 = -1
            
            uint64_t rax_6 = rax_5 + 8
            
            if (rax_5 u>= -8)
                rax_6 = -1
            
            rax_4 = j_sub_142a7dd00(rax_6)
        else
            rax_4 = j_sub_140a82f30(8)
        
        int64_t* var_90_1 = rax_4
        void (* rbp_1)()
        
        if (rax_4 == 0)
            rbp_1 = nullptr
        else
            *rax_4 = r14_1
            rbp_1 = &rax_4[1]
            int64_t (* var_a8_1)(struct icu_64::Replaceable::icu_64::UnicodeString::VTable** 
                arg1) = sub_142a47ff0
            `eh vector constructor iterator'(rbp_1, 0x40, r14_1)
        
        *arg1 = rbp_1
        
        if (rbp_1 != 0)
            void* rbx_3 = (r15_1 << 6) + rbp_1
            
            while (i s> 0)
                i -= 1
                void* rcx_5 = rbx_3
                rbx_3 += 0x40
                sub_142a48100(rcx_5, rsi_1)
                rsi_1 += 0x40
        else
            *arg6 = 7
    
    result = sub_142a47ff0(&var_88)

__security_check_cookie(rax_1 ^ &var_c8)
return result
