// 函数: sub_140927770
// 地址: 0x140927770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int64_t* rbx = nullptr
void** const var_d8 = &data_142e20cf8
int64_t var_d0
__builtin_memset(&var_d0, 0, 0x20)
void** const var_b0 = &data_142e20cf0
int64_t var_a8
__builtin_memset(&var_a8, 0, 0x12)
int32_t var_94
__builtin_memset(&var_94, 0, 0x30)
int32_t var_64 = 0x80
int32_t var_60 = 0xffffffff
int32_t var_5c = 0
int64_t var_50 = 0
int32_t var_48 = 0
int64_t var_40
__builtin_memset(&var_40, 0, 0x18)
int32_t var_28 = 0x270f

if (arg1[1].d != 0)
    int64_t* rcx_1 = *arg1
    
    if (rcx_1 != 0 && (*(*rcx_1 + 0x28))(rcx_1) != 0)
        if (arg1[1].d != 0)
            rbx = *arg1
        
        (*(*rbx + 0x50))(rbx, 0, 0, &var_d8)

sub_14091b530(&var_d8)
int64_t result
result.b = 1
__security_check_cookie(rax_1 ^ &var_f8)
return result
