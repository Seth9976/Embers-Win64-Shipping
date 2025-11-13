// 函数: sub_1422e1520
// 地址: 0x1422e1520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int32_t result = arg2

if (*(arg1 + 0x10) != 0 || *(arg1 + 0x18) != 0)
    uint128_t zmm0 = data_142d3f660
    int512_t zmm1
    zmm1.o = zmm0
    uint128_t var_108 = zmm0
    int128_t var_f8
    __builtin_memcpy(&var_f8, 
        "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x"
    "00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80"
    "3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00"
    "00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80"
    "3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
        0x70)
    sub_1420faf20(result, &var_108, arg1)
    int64_t* rcx_1 = data_143f0f180
    uint128_t* r8_2 = &var_108
    int64_t rdx_1 = *(arg1 + 0x28)
    int64_t rax_2 = *rcx_1
    
    if (rdx_1 == 0)
        void var_118
        (*(rax_2 + 0xf8))(rcx_1, &var_118, r8_2, &data_143f484c0, 2, 1)
        sub_1405d1600(arg1 + 0x28, &var_118)
        result = sub_1405d1550(&var_118)
    else
        result = (*(rax_2 + 0x100))(rcx_1, rdx_1, r8_2)

__security_check_cookie(rax_1 ^ &var_148)
return result
