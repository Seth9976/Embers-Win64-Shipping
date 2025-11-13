// 函数: sub_141e48670
// 地址: 0x141e48670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
sub_140ce8e10(arg1, arg2)
(*(*arg2 + 0x1d8))(arg2, &data_1439a9418)
int32_t result
int512_t zmm1
result, zmm1 = sub_140b4e7c0(arg2, &data_1439a9418)

if (result s>= 8)
    int64_t var_128
    sub_141df2500(&var_128, 1)
    sub_141e38ee0(arg2, &var_128, zmm1)
    int64_t var_38
    
    if (var_38 != 0)
        sub_140a74f90(var_38)
    
    int64_t var_48
    
    if (var_48 != 0)
        sub_140a74f90(var_48)
    
    void var_98
    sub_1405ae200(&var_98)
    void var_e8
    result = sub_1405ae200(&var_e8)
    int64_t var_f8
    
    if (var_f8 != 0)
        result = sub_140a74f90(var_f8)
    
    int64_t var_108
    
    if (var_108 != 0)
        result = sub_140a74f90(var_108)
    
    int64_t var_118
    
    if (var_118 != 0)
        result = sub_140a74f90(var_118)
    
    int64_t rcx_11 = var_128
    
    if (rcx_11 != 0)
        result = sub_140a74f90(rcx_11)

__security_check_cookie(rax_1 ^ &var_148)
return result
