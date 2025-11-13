// 函数: sub_1424b4460
// 地址: 0x1424b4460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t rax_2 = data_143dbb200
int64_t var_138 = data_143dbb1f8.q
int64_t var_12c = data_14399f698.q
int32_t var_130 = rax_2
int32_t rax_3 = data_14399f6a0
int32_t var_f0 = 0x41a00000
int64_t var_110
__builtin_memset(&var_110, 0, 0x20)
int32_t var_124 = rax_3
char var_120 = 0
int32_t var_11c = 0
int32_t var_118 = 0x3f800000
int32_t var_ec = 0
int32_t var_e4 = 0x3f800000
int16_t var_114 = 1
char var_e8 = 0
char var_e0 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_138, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_138)

int64_t* rax_5 = *(arg2 + 0x38)
int64_t* rsi = &var_138
int64_t var_d8 = 0
int128_t var_c8 = zx.o(0)

if (rax_5 != 0)
    rsi = rax_5

int64_t var_d0 = 0
int64_t var_b8 = 0
int32_t var_b0 = 0
int32_t var_4c = 0xffffffff
int128_t var_48 = data_143264930
int64_t var_38 = 0
int64_t var_30 = 0
void var_ac
memset(&var_ac, 0, 0x88)
int32_t var_a4 = 0x3f800000
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_d8, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_d8)

int64_t* rax_7 = *(arg2 + 0x38)
int64_t* r8_6 = &var_d8
int64_t* rcx_4 = arg_10

if (rax_7 != 0)
    r8_6 = rax_7

int64_t rax_8 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_8 != 0
*(arg2 + 0x20) = rdi + rax_8
char result = j_sub_142037630(rcx_4, rsi, r8_6)
int64_t rcx_5 = var_d8
*arg3 = result

if (rcx_5 != 0)
    result = sub_140a74f90(rcx_5)

int64_t var_100

if (var_100 != 0)
    result = sub_140a74f90(var_100)

int64_t rcx_7 = var_110

if (rcx_7 == 0)
    return result

return sub_140a74f90(rcx_7)
