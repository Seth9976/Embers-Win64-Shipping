// 函数: sub_141aebf90
// 地址: 0x141aebf90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
void*** result_2 = j_sub_140a82f30(0xa8)
void*** result = result_2
void*** result_1

if (result_2 == 0)
    result = nullptr
else
    void* rcx = &result[3]
    int64_t var_40_1 = 0
    int64_t var_30_1 = 0
    *result = &data_143052bd0
    __builtin_memset(&result[1], 0, 0x14)
    result[2] = 0
    *(rcx + 0x1c) = 0x80
    void* rax_2 = *(rcx + 0x10)
    int64_t var_78 = 0
    int64_t var_70_1 = 0
    
    if (rax_2 != 0)
        rcx = rax_2
    
    int32_t var_4c_1 = 0x80
    int64_t var_68
    __builtin_memset(&var_68, 0, 0x1c)
    __builtin_memset(rcx, 0, 0x1c)
    void* rcx_1 = &result[0xd]
    result[7].d = 0xffffffff
    *(result + 0x3c) = 0
    result[9] = 0
    result[0xa].d = 0
    result[0xb] = 0
    result[0xc] = 0
    *(rcx_1 + 0x1c) = 0x80
    void* rax_3 = *(rcx_1 + 0x10)
    int32_t var_48_1 = 0xffffffff
    
    if (rax_3 != 0)
        rcx_1 = rax_3
    
    int32_t var_44_1 = 0
    int64_t var_38_1 = 0
    result_1.d = 0xffffffff
    result_1:4.d = 0
    *rcx_1 = 0
    *(rcx_1 + 8) = 0
    result[0x11].d = 0xffffffff
    *(result + 0x8c) = 0
    result[0x13] = 0
    result[0x14].d = 0
    sub_141aedf60(&result[1], &result_1, &var_78)
    var_30_1.d = 0
    
    if (var_38_1 != 0)
        sub_140a74f90(var_38_1)
    
    var_70_1.d = 0
    int32_t var_48_2 = 0xffffffff
    int32_t var_44_2 = 0
    sub_14059a8e0(&var_68, 0)
    int64_t var_58
    
    if (var_58 != 0)
        sub_140a74f90(var_58)
    
    int64_t rcx_7 = var_78
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)

int64_t* rcx_8 = *(arg1 + 8)
result_1 = result
sub_1406f3ea0(rcx_8, arg2, &result_1)
void*** result_3 = result_1

if (result_3 != 0)
    void** r8_3 = *result_3
    (*r8_3)(result_3, 1, r8_3)

__security_check_cookie(rax_1 ^ &var_a8)
return result
