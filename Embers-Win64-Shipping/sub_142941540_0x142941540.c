// 函数: sub_142941540
// 地址: 0x142941540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1b0)
void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
int64_t* rax_2 = sub_142891ee0()
int32_t rax_6

if (rax_2 == 0)
    rax_6 = 0
else if (sub_1428919c0(rax_2, &data_143522870, nullptr) == 0)
    sub_142891ea0(rax_2)
    rax_6 = 0
else
    char var_68
    
    if (sub_142891c10(rax_2, arg2, 0x39) == 0)
        sub_142891ea0(rax_2)
        rax_6 = 0
    else if (sub_142891820(rax_2, &var_68, 0x39) == 0)
        sub_142891ea0(rax_2)
        rax_6 = 0
    else
        sub_142891ea0(rax_2)
        var_68 &= 0xfc
        char var_31
        char var_31_1 = var_31 | 0x80
        char var_30_1 = 0
        void var_1a8
        sub_14296e560(&var_1a8, &var_68, 0x39)
        
        for (int32_t i = 1; i u< 4; i *= 2)
            sub_14296e7c0(&var_1a8, &var_1a8)
        
        void var_168
        sub_14293f1a0(&var_168, data_143b868f0, &var_1a8)
        sub_14293ef00(arg1, &var_168)
        sub_14296e740(&var_1a8)
        sub_14293ee60(&var_168)
        sub_1428b8960(&var_68, 0x39)
        rax_6 = -1

int32_t rdi
rdi.b = rax_6 == 0xffffffff
__security_check_cookie(rax_1 ^ &var_1c8)
return zx.q(rdi)
