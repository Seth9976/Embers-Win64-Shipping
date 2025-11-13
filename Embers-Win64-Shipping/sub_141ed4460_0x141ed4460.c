// 函数: sub_141ed4460
// 地址: 0x141ed4460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
void* result = sub_141e7aa60(*arg1, arg1[1])

if (result != 0)
    int128_t var_b8
    __builtin_memcpy(&var_b8, 
        "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\xc8\x42\x00\x00\x7a\x44", 0x14)
    char var_c8 = 2
    int64_t var_c0_1 = 0
    void** var_a0
    sub_141f7a080(&var_a0)
    int64_t var_c0_2 = arg1[2]
    var_b8.d = arg1[3].d.d
    sub_141dd92c0(result, 0, &var_c8)
    int64_t var_30
    
    if (var_30 != 0)
        sub_140a74f90(var_30)
    
    var_a0 = &data_142d6a040
    int64_t var_48
    
    if (var_48 != 0)
        sub_140a74f90(var_48)
    
    void var_98
    result = sub_1405ae180(&var_98)

__security_check_cookie(rax_1 ^ &var_e8)
return result
