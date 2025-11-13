// 函数: sub_141d92650
// 地址: 0x141d92650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int32_t rax_2 = 0
int32_t var_70 = 0
int64_t* rcx = nullptr
int64_t* var_78 = nullptr

if (arg3 != &var_78 && arg3[1].d != 0)
    int64_t* r8 = *arg3
    
    if (r8 != 0)
        (*(*r8 + 0x40))(r8, &var_78)
        rax_2 = var_70
        rcx = var_78

void*** var_58 = nullptr
void** const var_48 = &data_143239910
int64_t var_40 = 0
int32_t var_38 = 0

if (rax_2 != 0 && rcx != 0)
    (*(*rcx + 0x40))(rcx, &var_40)

var_48 = &data_143239930
void (* var_68)(int64_t* arg1, int64_t arg2) = sub_141d9ba50
sub_141d92910(arg1, arg2, arg4, &var_68)

if (var_68 != 0)
    void** const* rcx_3 = &var_48
    
    if (var_58 != 0)
        rcx_3 = var_58
    
    (*rcx_3)[2](rcx_3)

uint64_t result = sub_140745b20(&var_78)
__security_check_cookie(rax_1 ^ &var_98)
return result
