// 函数: sub_142a5df70
// 地址: 0x142a5df70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_80 = -2
void var_a8
int64_t result = __security_cookie ^ &var_a8
int64_t result_1 = result
char rbp = 0
int32_t var_88 = 0

if (*arg3 s<= 0)
    if (*(arg1 + 0x170) != 0)
        void var_78
        sub_142ab67d0(&var_78, arg2, arg3)
        
        if (*arg3 s<= 0)
            void* rcx_1 = **(arg1 + 0x170)
            void var_58
            char rax_3
            
            if (*(rcx_1 + 8) == 0)
                struct icu_64::UObject::icu_64::MeasureUnit::VTable** rax_2 =
                    sub_142a5d2d0(rcx_1 + 8, &var_58)
                rbp = 1
                var_88 = 1
                struct icu_64::UObject::icu_64::MeasureUnit::VTable* r8 = *rax_2
                rax_3 = r8->vFunc_3(rax_2, &var_78, r8)
            
            int64_t rsi
            
            if (*(rcx_1 + 8) != 0 || rax_3 == 0)
                rsi.b = 0
            else
                rsi = 1
            
            if ((rbp & 1) != 0)
                sub_142ab6900(&var_58)
            
            if (rsi.b == 0)
                sub_142a5a120(arg1, arg2, arg3)
                void* rbx_1 = **(arg1 + 0x170)
                sub_142ab6910(rbx_1 + 0x10, &var_78)
                *(rbx_1 + 8) = rsi.b
                var_88 = 0
                sub_142a5f4f0(arg1, &var_88)
        
        result = sub_142ab6900(&var_78)
    else
        *arg3 = 7

__security_check_cookie(result_1 ^ &var_a8)
return result
