// 函数: sub_1408a0820
// 地址: 0x1408a0820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
struct std::exception::VTable** var_48 = arg1
var_48.d = 1
void** var_40 = &data_14397fed0
int64_t var_20 = 0xf
int64_t var_28 = 0xe
uint64_t var_38 = 0x2064616572206f6e
int32_t var_30
__builtin_strncpy(&var_30, "access", 7)
var_48.o = var_48.o
sub_14058ea70(arg1, &var_48, &var_38)

if (var_20 u>= 0x10)
    uint64_t rcx = var_38
    uint64_t rax_2 = rcx
    
    if (var_20 + 1 u>= 0x1000)
        rcx = *(rcx - 8)
        
        if (rax_2 - rcx - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(rcx)

*arg1 = &data_142dfb090
__security_check_cookie(rax_1 ^ &var_68)
return arg1
