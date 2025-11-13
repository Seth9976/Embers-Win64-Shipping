// 函数: sub_1408a0910
// 地址: 0x1408a0910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
struct std::exception::VTable** var_48 = arg1
var_48.d = 1
void** var_40 = &data_14397fed0
void* rax_2 = j_sub_140a82f30(0x20)
int64_t var_28 = 0x10
int64_t var_20 = 0x1f
__builtin_strncpy(rax_2, "no random access", 0x11)
void* var_38 = rax_2
var_48.o = var_48.o
sub_14058ea70(arg1, &var_48, &var_38)

if (var_20 u>= 0x10)
    void* rcx_1 = var_38
    void* rax_3 = rcx_1
    
    if (var_20 + 1 u>= 0x1000)
        rcx_1 = *(rcx_1 - 8)
        
        if (rax_3 - rcx_1 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(rcx_1)

*arg1 = &data_142dfb090
__security_check_cookie(rax_1 ^ &var_68)
return arg1
