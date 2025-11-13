// 函数: sub_14058eca0
// 地址: 0x14058eca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
struct std::exception::VTable** var_48 = arg1
int64_t var_20 = 0xf
int64_t var_28 = 0
char var_38 = 0
var_48.o = *arg2
sub_14058ea70(arg1, &var_48, &var_38)

if (var_20 u>= 0x10)
    void* rcx = var_38.q
    void* rax_2 = rcx
    
    if (var_20 + 1 u>= 0x1000)
        rcx = *(rcx - 8)
        
        if (rax_2 - rcx - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(rcx)

*arg1 = &std::system_error::`vftable'{for `std::_System_error'}
__security_check_cookie(rax_1 ^ &var_68)
return arg1
