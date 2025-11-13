// 函数: sub_140b41f50
// 地址: 0x140b41f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
char var_b8 = 1
char* var_b0 = &var_b8
char** var_a0 = &var_b0
int64_t (* var_a8)(int64_t* arg1, int16_t* arg2) = sub_140b34650
uint128_t var_78
sub_140b24d50(&arg2[2], &var_78, &var_a8, nullptr)
char var_60

if (var_60 != 0)
    uint128_t zmm1_1 = var_78
    int64_t var_68
    var_b0 = var_68
    int32_t var_80_1 = ((_mm_bsrli_si128(zmm1_1, 8).q - zmm1_1.q) s>> 1).d
    var_a8.o = zmm1_1
    sub_140b3e780()
    zmm1_1 = zx.o(var_b0)
    void** const var_48_1 = &data_142e78548
    int128_t var_58 = data_143de7b00.o
    int128_t var_40_1 = var_a8.o
    int128_t zmm0_2
    zmm0_2.q = zmm1_1.q
    int128_t var_30_1 = zmm0_2
    sub_140b0e240(arg2, &var_78, &var_58)
    sub_140b0bbf0(&var_58)

*(arg1 + 0x18) = 0
__security_check_cookie(rax_1 ^ &var_d8)
return arg1
