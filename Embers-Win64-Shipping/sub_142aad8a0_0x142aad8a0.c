// 函数: sub_142aad8a0
// 地址: 0x142aad8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int64_t rdi = sx.q(arg2)

if (rdi.d == 8)
    *(arg1 + 0xaf8) = 1
    sub_142a48100(arg1 + 8 + (rdi << 6), arg3)
else if (rdi.d == 9)
    *(arg1 + 0xaf9) = 1
    sub_142a48100(arg1 + 8 + (rdi << 6), arg3)
else if (rdi.d s< 0x1c)
    sub_142a48100(arg1 + 8 + (rdi << 6), arg3)

int32_t result

if (rdi.d != 4)
    result = (rdi - 0x12).d
    
    if (result u<= 8)
        *(arg1 + 0x748) = 0xffffffff
else
    result = sub_142a486d0(arg3, 0)
    int32_t result_1 = result
    
    if (arg4 == 0)
        *(arg1 + 0x748) = 0xffffffff
    else
        result = sub_142a53ce0(result)
        
        if (result != 0)
            *(arg1 + 0x748) = 0xffffffff
        else
            result = sub_142a48c90(arg3, 0, 0x7fffffff)
            
            if (result != 1)
                *(arg1 + 0x748) = 0xffffffff
            else
                *(arg1 + 0x748) = result_1
                char i = result.b
                
                do
                    result_1 += 1
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_68
                    sub_142a48050(arg1 + 8 + (sx.q(sx.d(i) + 0x11) << 6), 
                        sub_142a47b70(&var_68, result_1))
                    result = sub_142a47ff0(&var_68)
                    i += 1
                while (i s<= 9)

__security_check_cookie(rax_1 ^ &var_88)
return result
