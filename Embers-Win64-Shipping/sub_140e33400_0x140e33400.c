// 函数: sub_140e33400
// 地址: 0x140e33400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_a0 = -2
void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
char result = sub_140e33560(arg1, arg2, arg3)

if (result != 0)
    void** const var_98
    sub_14297aaa0(&var_98, &data_1437020ab)
    var_98 = &data_142ed6420
    int64_t var_70_1 = arg2
    int64_t var_68_1 = arg3
    int64_t var_60_1 = 0
    char var_a8
    sub_140e42ab0(&var_98, &var_a8, 4)
    var_98[5](&var_98, 0)
    char var_a7
    char var_a6
    char var_a5
    int64_t* rbx
    
    if (var_a8 != 0x76 || var_a7 != 0x2f || var_a6 != 0x31 || var_a5 != 1)
        rbx.b = 0
    else
        struct Imf_2_3::RgbaInputFile::VTable* var_58
        sub_142977fc0(&var_58, &var_98, sub_142977840())
        int32_t* rax_4 = sub_142978640(&var_58)
        int32_t rdx_4 = rax_4[3] - rax_4[1] + 1
        int32_t rax_7 = rax_4[2] - *rax_4 + 1
        *(arg1 + 0x3a) = 0x1000
        *(arg1 + 0x3c) = rax_7
        arg1[8].d = rdx_4
        rbx.b = 1
        sub_1429781e0(&var_58)
    
    sub_14297aba0(&var_98)
    result = rbx.b

__security_check_cookie(rax_1 ^ &var_c8)
return result
