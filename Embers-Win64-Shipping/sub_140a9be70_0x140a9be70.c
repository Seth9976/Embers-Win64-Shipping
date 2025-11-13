// 函数: sub_140a9be70
// 地址: 0x140a9be70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
void* rsi = *arg1
void var_a8
sub_140b24bd0(&arg3[2], &var_a8, *(rsi + 0x10), nullptr)
char var_90

if (var_90 != 0)
    int16_t* var_88
    sub_140b24b40(&arg3[2], &var_88, &var_a8)
    char var_70
    
    if (var_70 != 0)
        int16_t rdi_1 = *var_88
        
        if (rdi_1 == *(rsi + 0x10) || rdi_1 == *(rsi + 0x12) || rdi_1 == *(rsi + 0x14)
                || rdi_1 == *(rsi + 0x16))
            sub_140ab24c0()
            int16_t var_50_1 = rdi_1
            void** const var_58_1 = &data_142e66778
            int128_t var_68 = data_143db9f68.o
            sub_140b0e240(arg3, &var_a8, &var_68)
            sub_140b0bbf0(&var_68)

*(arg2 + 0x18) = 0
__security_check_cookie(rax_1 ^ &var_c8)
return arg2
