// 函数: sub_14041c600
// 地址: 0x14041c600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
void* rax_2 = j_sub_140a82f30(0x20)
int64_t var_28 = 0x13
int64_t var_20 = 0x1f
__builtin_strncpy(rax_2, "RtMidi Input Client", 0x14)
void* var_38 = rax_2
sub_14061ed80(&data_143cdb868, 0, &var_38, 0x64)

if (var_20 u>= 0x10)
    void* rcx_1 = var_38
    void* rax_3 = rcx_1
    
    if (var_20 + 1 u>= 0x1000)
        rcx_1 = *(rcx_1 - 8)
        
        if (rax_3 - rcx_1 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(rcx_1)

uint64_t result = atexit(sub_142cb1310)
__security_check_cookie(rax_1 ^ &var_58)
return result
