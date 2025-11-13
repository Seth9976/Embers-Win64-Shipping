// 函数: sub_142a9c240
// 地址: 0x142a9c240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_138 = -2
void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int64_t* var_130 = arg1
*arg1 = sub_142ab2a40(arg4)
arg1[1] = arg2
sub_142a456d0(&arg1[2], arg2 + 0x18)
sub_142a456d0(&arg1[0x1e], arg3)
arg1[0x3e].d = 0
*(arg1 + 0x1f4) = 0
__builtin_memset(&arg1[0x3f], 0, 0x18)
arg1[0x3a].b = 0
arg1[0x3c].b = 0

if (*arg4 s<= 0)
    char* rax_3 = sub_141a50850(&arg1[0x1e])
    char* rax_4 = arg1[0x23]
    int64_t r8_1 = rax_3 - rax_4
    uint32_t i
    uint32_t rdx_2
    
    do
        rdx_2 = zx.d(*rax_4)
        i = zx.d(rax_4[r8_1])
        
        if (rdx_2 != i)
            break
        
        rax_4 = &rax_4[1]
    while (i != 0)
    
    if (rdx_2 - i != 0)
        struct icu_64::UObject::icu_64::Locale::VTable* var_128
        sub_142a45b10(&arg1[0x1e], sub_142a45710(&var_128, rax_3, nullptr, nullptr, nullptr))
        sub_142a45a20(&var_128)
        int32_t* var_148_2 = arg4
        int32_t rax_6 = sub_142a46470(arg3, "collation", &arg1[0x3a], 0xf)
        
        if (*arg4 s<= 0)
            *(sx.q(rax_6) + arg1 + 0x1d0) = 0
            
            if (rax_6 != 0)
                if (sub_142a862b0(&arg1[0x3a], "default", rax_6) != 0)
                    sub_142a861c0(&arg1[0x3a])
                    sub_142a46d60(&arg1[0x1e], "collation", &arg1[0x3a], arg4)
                else
                    arg1[0x3a].b = 0
        else
            *arg4 = 1

__security_check_cookie(rax_1 ^ &var_168)
return arg1
