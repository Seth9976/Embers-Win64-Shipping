// 函数: sub_14282dcf8
// 地址: 0x14282dcf8
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
sub_14282b1a8(arg1)
*(arg1 + 0x82) = 0
int32_t var_98 = 0
int32_t var_94 = 0x12
int64_t var_90 = arg1[1]
int32_t var_88 = arg1[2].d
int64_t var_70 = 0
int64_t var_68 = 0xf
char var_80 = 0
int64_t* var_60
__builtin_memset(&var_60, 0, 0x1c)
sub_14282aff8(arg1)
char rax_3 = sub_14282a90c(arg1)
char rax_4

if (rax_3 != 0)
    rax_4 = sub_14282b034(arg1)

int128_t var_58
void* var_38
int64_t var_20

if (rax_3 == 0 || rax_4 != 0x3c)
    char var_a8
    sub_14058a4a0(&var_80, sub_14282f110(&var_38, arg1, &var_a8))
    
    if (var_20 u>= 0x10)
        sub_14058ba50(var_38, var_20 + 1)
    
    char rax_6 = var_a8
    
    if (rax_6 != 0)
        int32_t var_48_3 = 2
        
        if (var_70 != 0)
        label_14282de1d:
            int32_t var_48_4 = 1
        
        if (rax_6 != 0 && sub_14282b034(arg1) == 0x21)
            sub_14282aff8(arg1)
            char* rax_8 = sub_14282f284(&var_38, arg1)
            int128_t* rcx_12 = var_58.q
            
            if (rcx_12 == var_58:8.q)
                sub_140909240(&var_60, rcx_12, rax_8)
            else
                rcx_12[1].q = 0
                *(rcx_12 + 0x18) = 0
                sub_140593830(rcx_12, rax_8)
                var_58.q += 0x20
            
            if (var_20 u>= 0x10)
                sub_14058ba50(var_38, var_20 + 1)
            
            int32_t var_48_5 = 3
    else
        if (var_70 != 0)
            goto label_14282de1d
        
        int32_t var_48_2 = 4
else
    sub_14282f3a8(&var_38, arg1)
    sub_14058a4a0(&var_80, &var_38)
    int32_t var_48_1 = 0
    
    if (var_20 u>= 0x10)
        sub_14058ba50(var_38, var_20 + 1)
int64_t result = sub_14282b618(&arg1[0xb], &var_98)
int64_t* rcx_16 = var_60

if (rcx_16 != 0)
    sub_140688f70(rcx_16, var_58.q)
    int64_t* rcx_17 = var_60
    result = sub_14058ba50(rcx_17, (var_58:8.q - rcx_17) & 0xffffffffffffffe0)
    __builtin_memset(&var_60, 0, 0x18)

if (var_68 u>= 0x10)
    result = sub_14058ba50(var_80.q, var_68 + 1)

__security_check_cookie(rax_1 ^ &var_c8)
return result
