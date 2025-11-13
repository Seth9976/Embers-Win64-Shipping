// 函数: sub_142b5c8f0
// 地址: 0x142b5c8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_d8 = -2
void var_108
int64_t rax_1 = __security_cookie ^ &var_108
void* result

if (*arg4 s<= 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88
    sub_142a47e10(&var_88, *arg2, 0xffffffff)
    int64_t** rax_2 = sub_142a86c30(*(arg1 + 0xb8), &var_88)
    *arg3 = 0xa
    int64_t rax_3 = 0x280
    
    if (mulu.dp.q(0x40, 0xa) u>> 0x40 != zx.o(0))
        rax_3 = -1
    
    uint64_t rax_4 = rax_3 + 8
    
    if (rax_3 u>= -8)
        rax_4 = -1
    
    int64_t* rax_5 = j_sub_142a7dd00(rax_4)
    int64_t* var_d0_1 = rax_5
    void* result_1 = nullptr
    void* result_2
    
    if (rax_5 == 0)
        result_2 = nullptr
    else
        *rax_5 = 0xa
        result_2 = &rax_5[1]
        int64_t (* var_e8_1)(struct icu_64::Replaceable::icu_64::UnicodeString::VTable** arg1) =
            sub_142a47ff0
        `eh vector constructor iterator'(result_2, 0x40, 0xa)
    
    if (result_2 != 0)
        if (rax_2 == 0)
            if (*arg3 s> 0)
                do
                    sub_142a4ab40((sx.q(result_1.d) << 6) + result_2)
                    result_1 = zx.q(result_1.d + 1)
                while (result_1.d s< *arg3)
        else if (*arg3 s> 0)
            char const (** rsi_1)[0x9] = &data_143ccb650
            
            do
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_c8
                sub_142a47e10(&var_c8, *rsi_1, 0xffffffff)
                void* rax_6 = sub_142a86c30(*rax_2, &var_c8)
                void* rcx_8 = (sx.q(result_1.d) << 6) + result_2
                
                if (rax_6 == 0)
                    sub_142a4ab40(rcx_8)
                else
                    sub_142a49d00(rcx_8, rax_6)
                
                sub_142a47ff0(&var_c8)
                result_1 = zx.q(result_1.d + 1)
                rsi_1 = &rsi_1[1]
            while (result_1.d s< *arg3)
        
        result_1 = result_2
    else
        *arg4 = 7
    
    sub_142a47ff0(&var_88)
    result = result_1
else
    result = nullptr

__security_check_cookie(rax_1 ^ &var_108)
return result
