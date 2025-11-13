// 函数: sub_14130d980
// 地址: 0x14130d980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t var_98 = *(arg3 + 0x40)
uint128_t zmm1 = *(arg3 + 0x60)
int128_t var_a8 = *(arg3 + 0x30)
uint128_t var_78 = zmm1
int128_t var_88 = *(arg3 + 0x50)
var_78:4.d = (_mm_bsrli_si128(zmm1, 4).d & 0xfffeffff) | 1
int128_t var_68 = *(arg3 + 0x70)
void*** result = sub_141188e50(arg1, &var_a8, u"SceneColor", 0)
void** result_3 = sub_14081d830(0xd0, *(arg1 + 8), 1, 0)
void** result_2 = result_3

if (result_3 == 0)
    result_2 = nullptr
else
    __builtin_memset(&result_3[1], 0, 0x30)
    sub_14117af20(&result_3[8])

memset(&result_2[1], 0, 0xc8)
*result_2 = arg3
result_2[1] = data_14395fa10
result_2[2] = arg4
result_2[3] = data_14395fa10
int64_t arg_28
result_2[4] = arg_28
result_2[5] = data_14395fa10
sub_1405d16e0(&result_2[6], *(arg2 + 0x10))
void** result_1 = result
int16_t var_c0 = 0
char var_be = 0
int32_t var_bc = 0xffffffff
*(result_2 + 0x40) = result_1.o
char rcx_4 = sub_1419a2ec0(*(arg2 + 0x5150), &result_1, &data_143eb4ec0, 0)
int128_t zmm7 = result_1.o
int512_t zmm6
zmm6.o = zx.o(0)
int64_t rbx_1 = *(arg2 + 0x5150)
int128_t var_b8 = sub_1413169c0(rcx_4)
sub_141998c50(zmm7.q, &data_143eb9140, result_2)
*(arg2 + 0x1598)
var_a8.q = result_2
var_a8:8.q = rbx_1
var_68.q = 0
var_68:8.d = 0
void*** rax_7
char rcx_6
rax_7, rcx_6 = sub_14081d830(0x88, *(arg1 + 8), 1, 0)
void*** rbx_2 = rax_7

if (rax_7 == 0)
    rbx_2 = nullptr
else
    result_1 = result_2
    int128_t zmm6_2 = sub_1413169c0(rcx_6)
    var_c0.q = &data_143eb9170
    var_b8 = result_1.o
    sub_141992bd0(rbx_2, &arg_28, &var_b8, 1)
    int128_t zmm0_3 = var_a8
    *rbx_2 = &data_142f5ccb0
    *(rbx_2 + 0x38) = zmm0_3
    *(rbx_2 + 0x48) = zmm7
    *(rbx_2 + 0x58) = zmm6_2
    *(rbx_2 + 0x68) = zx.o(0)
    *(rbx_2 + 0x78) = var_68

sub_1419968d0(arg1, rbx_2)
return result
