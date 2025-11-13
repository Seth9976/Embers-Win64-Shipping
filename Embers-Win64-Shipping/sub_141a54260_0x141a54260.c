// 函数: sub_141a54260
// 地址: 0x141a54260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_248
int64_t rax_1 = __security_cookie ^ &var_248

if (sub_140d3c6e0(arg1) != arg2)
    sub_141a4c5d0(arg1, arg3)
    sub_141a63350(&arg3[1])
    sub_141a63630(&arg3[0xb])
    arg1[0x1c] = 0
    
    if (arg1[0x1d] s<= 0xffffffff)
        sub_1405dadb0(&arg1[0x1a], 0)
    
    int32_t rax_3 = arg1[0x21]
    arg1[0x20] = 0
    
    if (rax_3 s< 0 && rax_3 != 0)
        sub_1405a5410(&arg1[0x1e], 0)
    
    int32_t rax_4 = arg1[0x39]
    arg1[0x38] = 0
    
    if (rax_4 s< 0 && rax_4 != 0)
        sub_1405dadb0(&arg1[0x36], 0)
    
    int32_t rax_5 = arg1[0x3d]
    arg1[0x3c] = 0
    
    if (rax_5 s< 0 && rax_5 != 0)
        sub_1405a5410(&arg1[0x3a], 0)
    
    void var_1c8
    sub_141a34420(&arg1[0x62], sub_141a30240(&var_1c8))
    int64_t var_58
    
    if (var_58 != 0)
        sub_140a74f90(var_58)
    
    void var_168
    sub_141a32c50(&var_168)
    int32_t var_170_1 = 0
    int64_t var_178
    
    if (var_178 != 0)
        sub_140a74f90(var_178)
    
    void var_1b8
    sub_141a32930(&var_1b8)
    sub_141a31fc0(&var_1c8)

sub_140d3a3a0(arg1, arg2)
int64_t* rcx_15 = *(arg1 + 0x148)
*(arg1 + 8) = (*(*rcx_15 + 8))(rcx_15, arg2)
arg1[4] = data_143f29fb0
sub_14229e040()
char result = sub_1422a6880()

if (result != 0 && (arg3[0x64].b & 1) == 0)
    int64_t var_220
    __builtin_memset(&var_220, 0, 0x2c)
    void** const var_228 = &data_14302ec00
    int32_t var_1f4_1 = 0x80
    int32_t var_1f0_1 = 0xffffffff
    int32_t var_1ec
    __builtin_memset(&var_1ec, 0, 0x24)
    sub_141a27ea0(&arg3[0x5c], &var_228)
    result = sub_1413c3130(&var_220)

__security_check_cookie(rax_1 ^ &var_248)
return result
