// 函数: sub_140686070
// 地址: 0x140686070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
int64_t var_48 = -1
int32_t var_40 = 0xffffffff
void* var_38
sub_140686120(arg1, &var_48, sub_1406863e0(&var_38, arg2))
int64_t var_20

if (var_20 u>= 0x10)
    void* rcx_2 = var_38
    void* rax_3 = rcx_2
    
    if (var_20 + 1 u>= 0x1000)
        rcx_2 = *(rcx_2 - 8)
        
        if (rax_3 - rcx_2 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(rcx_2)

*arg1 = &YAML::InvalidNode::`vftable'{for `YAML::RepresentationException'}
__security_check_cookie(rax_1 ^ &var_68)
return arg1
