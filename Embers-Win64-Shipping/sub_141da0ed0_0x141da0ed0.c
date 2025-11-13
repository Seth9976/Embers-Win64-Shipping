// 函数: sub_141da0ed0
// 地址: 0x141da0ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int64_t var_c0
sub_140596d10(&var_c0, arg2)
void** const var_48 = &data_142fe8568
void* var_40 = arg1
void*** var_58 = nullptr
void var_38
sub_140596d10(&var_38, &var_c0)
int64_t* rcx_2 = nullptr
var_48 = &data_143239600
int64_t* var_d8 = nullptr
int64_t (* var_68)(int64_t* arg1, void* arg2) = j_sub_141d96ee0
int32_t rax_3 = 0
int32_t var_d0 = 0

if (arg3 != &var_d8 && arg3[1].d != 0)
    int64_t* r8_1 = *arg3
    
    if (r8_1 != 0)
        (*(*r8_1 + 0x40))(r8_1, &var_d8)
        rax_3 = var_d0
        rcx_2 = var_d8

void*** var_98 = nullptr
void** const var_88 = &data_143239910
int64_t var_80 = 0
int32_t var_78 = 0

if (rax_3 != 0 && rcx_2 != 0)
    (*(*rcx_2 + 0x40))(rcx_2, &var_80)

var_88 = &data_143239930
void (* var_a8)(int64_t* arg1, int64_t arg2) = sub_141d9ba50
sub_141d92fd0(arg1, 0x11, &var_68, &var_a8)

if (var_a8 != 0)
    void** const* rcx_5 = &var_88
    
    if (var_98 != 0)
        rcx_5 = var_98
    
    (*rcx_5)[2](rcx_5)

uint64_t result = sub_140745b20(&var_d8)

if (var_68 != 0)
    void** const* rcx_7 = &var_48
    
    if (var_58 != 0)
        rcx_7 = var_58
    
    result = (*rcx_7)[2](rcx_7)

int64_t rcx_8 = var_c0

if (rcx_8 != 0)
    result = sub_140a74f90(rcx_8)

__security_check_cookie(rax_1 ^ &var_f8)
return result
