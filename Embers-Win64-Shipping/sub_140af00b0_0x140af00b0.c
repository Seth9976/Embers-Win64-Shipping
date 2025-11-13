// 函数: sub_140af00b0
// 地址: 0x140af00b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int32_t var_d8
sub_140a452d0(arg1, &var_d8, arg2)
int64_t rax_2 = sx.q(var_d8)
int64_t rax_4

if (rax_2.d == 0xffffffff)
    rax_4 = 0
else
    rax_4 = rax_2 * 0xb8 + *arg1

int64_t result_2 = rax_4 + 0x10

if (rax_4 == 0)
    result_2 = 0

int64_t result

if (result_2 != 0)
    result = result_2
else
    int64_t var_c8
    __builtin_memset(&var_c8, 0, 0x2c)
    int32_t var_9c_1 = 0x80
    int32_t var_98_1 = 0xffffffff
    int32_t var_94
    __builtin_memset(&var_94, 0, 0x48)
    int32_t var_4c_1 = 0x80
    int32_t var_48_1 = 0xffffffff
    int32_t var_44
    __builtin_memset(&var_44, 0, 0x1c)
    int64_t result_1 = sub_140ae4bb0(arg1, arg2, &var_c8)
    int64_t var_30
    var_30.d = 0
    int64_t var_38
    
    if (var_38 != 0)
        sub_140a74f90(var_38)
    
    uint64_t var_78
    sub_1407547c0(&var_78, 0)
    int64_t var_58
    
    if (var_58 != 0)
        sub_140a74f90(var_58)
    
    uint64_t rcx_4 = var_78
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    int64_t var_80
    var_80.d = 0
    int64_t var_88
    
    if (var_88 != 0)
        sub_140a74f90(var_88)
    
    sub_140a42d40(&var_c8, 0)
    int64_t var_a8
    
    if (var_a8 != 0)
        sub_140a74f90(var_a8)
    
    int64_t rcx_8 = var_c8
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    result = result_1

__security_check_cookie(rax_1 ^ &var_f8)
return result
