// 函数: sub_142375050
// 地址: 0x142375050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
void* result
int512_t zmm1
result, zmm1 = sub_140ce8e10(arg1, arg2)

if (arg2[8].d s< 0x107)
    int32_t var_3c_1 = 0x80
    int64_t var_68
    __builtin_memset(&var_68, 0, 0x2c)
    int32_t var_34_1 = 0
    int64_t var_28_1 = 0
    int32_t var_20_1 = 0
    int32_t var_38_1 = 0xffffffff
    sub_142352880(arg2, &var_68, zmm1)
    int32_t var_20_2 = 0
    
    if (var_28_1 != 0)
        sub_140a74f90(var_28_1)
    
    int64_t var_60
    var_60.d = 0
    int32_t var_38_2 = 0xffffffff
    int32_t var_34_2 = 0
    int64_t var_58
    result = sub_14059a8e0(&var_58, 0)
    int64_t var_48
    
    if (var_48 != 0)
        result = sub_140a74f90(var_48)
    
    int64_t rcx_5 = var_68
    
    if (rcx_5 != 0)
        result = sub_140a74f90(rcx_5)

__security_check_cookie(rax_1 ^ &var_88)
return result
