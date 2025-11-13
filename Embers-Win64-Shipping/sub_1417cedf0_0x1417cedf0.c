// 函数: sub_1417cedf0
// 地址: 0x1417cedf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int32_t var_74 = 4
int64_t var_d8
__builtin_memset(&var_d8, 0, 0x20)
int128_t var_48
__builtin_memset(&var_48, 0, 0x18)
void* rcx = arg1[1]
int32_t var_78 = 0
int64_t var_70
__builtin_memset(&var_70, 0, 0x20)
int64_t var_30 = -1
int32_t var_28 = 0xffffffff
int32_t var_24 = 0
int64_t var_20 = 0
int64_t var_50 = *(rcx + 0x2d8)
int32_t var_f0 = 0
int32_t var_ec = 0x30c00
int128_t var_e8 = (rcx + 8).o

if (*(rcx + 0x40) != 0)
    var_48:8.q = *(rcx + 0x2e0)
    int32_t var_f0_1 = 0
    int32_t var_ec_1 = 0x4020800
    int32_t var_78_1 = 1
    var_30:4.d = 1
    int128_t var_b8_1 = (rcx + 0x28).o

if (*(rcx + 0x60) != 0)
    int32_t var_f0_2 = 0
    int32_t var_ec_2 = 0x4050800
    var_48.q = *(rcx + 0x2e8)
    int32_t var_f0_3 = 0
    var_d8.o = (rcx + 0x48).o
    int32_t var_ec_3 = 0x4050804
    int64_t var_c8
    var_c8.o = (rcx + 0x48).o

if (*(rcx + 0x80) != 0)
    int64_t var_38_1 = *(rcx + 0x2f0)
    int32_t var_f0_4 = 0
    int32_t var_ec_4 = 0x4080400
    int64_t var_60
    var_60.o = (rcx + 0x68).o

sub_1421026a0(*arg1, &var_e8)
int64_t* rcx_2 = *arg1
int64_t result = (*(*rcx_2 + 0x28))(rcx_2)
__security_check_cookie(rax_1 ^ &var_118)
return result
