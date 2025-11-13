// 函数: sub_142380600
// 地址: 0x142380600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
sub_1423807e0(arg1, arg2, arg3)
arg1[0x21].b = 0
*(arg1 + 0x10c) = 0
*arg1 = &data_143336898
*(arg1 + 0x109) = arg4
void* rcx = arg2[0xa]

if (rcx != 0)
    arg1[0x21].b = *(rcx + 0x5f)
    *(rcx + 0x5f) = arg1[1].b
    *(arg2 + 0x3c) = *(rcx + 8) - arg1[1].b

void*** var_58 = nullptr
void*** var_40 = arg1
void*** var_98 = nullptr
void*** var_80 = arg1
int64_t (* var_a8)(int64_t* arg1, int64_t* arg2)
void** const var_88
void (* var_68)(int64_t* arg1, int64_t* arg2)
void** const var_48

if (arg4 == 0)
    arg1[0xc].d = 1
    var_88 = &data_142da2668
    var_a8 = sub_142385a90
    var_48 = &data_142da2668
    var_68 = sub_142385b40
    sub_140a3c510(&arg1[0xe], &var_68)
    arg1[0x16].d = 2
    sub_140a3c510(&arg1[0x18], &var_a8)
    
    if (var_68 != 0)
        void*** rcx_6 = &var_48
        
        if (var_58 != 0)
            rcx_6 = var_58
        
        (*rcx_6)[2](rcx_6)
    
    if (var_a8 != 0)
        void** const* rcx_7 = &var_88
        
        if (var_98 != 0)
            rcx_7 = var_98
        
        (*rcx_7)[2](rcx_7)
else
    arg1[0xc].d = 2
    var_48 = &data_142da2668
    var_68 = sub_142385a90
    var_88 = &data_142da2668
    var_a8 = sub_142385ad0
    sub_140a3c510(&arg1[0xe], &var_a8)
    arg1[0x16].d = 2
    sub_140a3c510(&arg1[0x18], &var_68)
    
    if (var_a8 != 0)
        void** const* rcx_3 = &var_88
        
        if (var_98 != 0)
            rcx_3 = var_98
        
        (*rcx_3)[2](rcx_3)
    
    if (var_68 != 0)
        void** const* rcx_4 = &var_48
        
        if (var_58 != 0)
            rcx_4 = var_58
        
        void** const rdx_3 = *rcx_4
        rdx_3[2](rcx_4, rdx_3)
__security_check_cookie(rax_1 ^ &var_c8)
return arg1
