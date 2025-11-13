// 函数: sub_140686120
// 地址: 0x140686120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
void* var_48
char* rax_2 = sub_140686d00(&var_48, arg2, arg3)

if (*(rax_2 + 0x18) u>= 0x10)
    rax_2 = *rax_2

arg1[1] = rax_2
*arg1 = &std::runtime_error::`vftable'{for `std::exception'}
int64_t var_30

if (var_30 u>= 0x10)
    void* rcx_1 = var_48
    void* rax_3 = rcx_1
    
    if (var_30 + 1 u>= 0x1000)
        rcx_1 = *(rcx_1 - 8)
        
        if (rax_3 - rcx_1 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(rcx_1)

*arg1 = &YAML::Exception::`vftable'{for `std::runtime_error'}
arg1[2] = *arg2
arg1[3].d = arg2[1].d
sub_140592d30(&arg1[4], arg3)
*arg1 = &YAML::RepresentationException::`vftable'{for `YAML::Exception'}
__security_check_cookie(rax_1 ^ &var_68)
return arg1
