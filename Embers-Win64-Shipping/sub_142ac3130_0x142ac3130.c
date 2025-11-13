// 函数: sub_142ac3130
// 地址: 0x142ac3130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_78 = -2
void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int32_t var_98 = 0
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_68 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_60 = 2

if (*arg3 s<= 0)
    int32_t var_a8
    void* rax_2 = sub_142ac3aa0(arg1[1], arg1[2].d, &var_a8)
    int32_t rdx
    
    if (rax_2 == 0)
        int16_t* var_90
        (*(*arg1 + 0x48))(arg1, &var_90, arg3)
        int32_t var_80
        
        if (*arg3 s<= 0)
            if (var_80 s<= 0)
                *arg3 = 0x11
            else
                void* rcx_3 = arg1[1]
                int16_t* rax_4 = var_90
                int32_t* var_88
                
                if (rax_4 == 0)
                    rdx = *var_88
                else
                    uint32_t rdx_2 = zx.d(*rax_4)
                    int32_t r8_3 = *(rcx_3 + 0x34)
                    
                    if (rdx_2 s>= r8_3)
                        rdx_2 += *(rcx_3 + 0x30) - r8_3
                    
                    rdx = rdx_2 | 0x60000000
                rax_2 = sub_142ac3aa0(rcx_3, rdx, &var_a8)
                
                if (rax_2 != 0)
                    rdx.b = 1
                    sub_142a4aa20(&var_68, rdx.b, rax_2, var_a8)
                else
                    *arg3 = 0x11
    else
        rdx.b = 1
        sub_142a4aa20(&var_68, rdx.b, rax_2, var_a8)

sub_142a47930(arg2, &var_68)
sub_142a47ff0(&var_68)
__security_check_cookie(rax_1 ^ &var_c8)
return arg2
