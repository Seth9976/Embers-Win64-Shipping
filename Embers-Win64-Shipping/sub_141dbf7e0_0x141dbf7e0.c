// 函数: sub_141dbf7e0
// 地址: 0x141dbf7e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *arg4
char var_168
memset(&var_168, 0, 0x88)
int32_t var_160 = 0x3f800000
int64_t zmm0 = *rbx
int32_t rax = rbx[1].d
int32_t var_144 = rax
int64_t var_134 = *(rbx + 0xc)
int32_t rax_1 = *(rbx + 0x14)
int32_t var_12c = rax_1
int32_t var_110 = rbx[3].d.d
uint128_t var_108
sub_140d3a3a0(&var_108, rbx[5])
int64_t rax_2 = *arg3
uint128_t zmm0_1 = zx.o(arg4[2])
var_168 |= 1
int64_t var_100 = rax_2
int64_t rax_3 = arg3[1]
int32_t var_10c = arg3[2].d
int64_t var_f0 = *(arg3 + 0x14)
int64_t rax_6 = *(arg2 + 0x14)
int32_t rax_7 = arg4[3].d
uint64_t var_d8 = zmm0_1.q
int32_t var_d0 = rax_7
int64_t var_140
uint64_t var_c8 = var_140
int32_t var_c0 = rax_1
int32_t var_170 = rax
uint64_t var_178 = zmm0
int64_t rax_10 = sub_140d3c6e0(&arg3[1])
int64_t rax_11 = sub_140d3c6e0(arg3)
char var_1a8 = 1
(*(*arg1 + 0x388))(arg1, sub_140d3c6e0(arg2 + 8), rax_11, rax_10, 1, &var_178, &var_c8, &var_d8, 
    &var_168)
uint128_t var_128
uint128_t var_118
uint128_t var_b8

if (*(arg1 + 0x18d) != 0)
    int32_t rax_13 = arg4[3].d
    var_b8 = var_168.o
    uint128_t var_a8_1 = zmm0.o
    uint128_t var_98_1 = zmm0:4.o
    uint128_t var_88_1 = rax_1.o
    uint128_t var_78_1 = var_128
    uint128_t var_68_1 = var_118
    uint128_t var_58_1 = var_108
    uint128_t var_48_1 = rax_3.o
    uint64_t var_38_1 = rax_6
    var_178 = arg4[2]
    int32_t var_170_1 = rax_13
    var_1a8.q = &var_b8
    sub_141db2110(arg1 + 0x18d, arg1, sub_140d3c6e0(arg3), &var_178, var_1a8)

int64_t* result = sub_140d3c6e0(arg2 + 8)

if (result == 0 || result[0x7b].b == 0)
    return result

int32_t rax_15 = arg4[3].d
var_b8 = var_168.o
uint128_t var_a8_2 = zmm0.o
uint128_t var_98_2 = zmm0:4.o
uint128_t var_88_2 = rax_1.o
uint128_t var_78_2 = var_128
uint128_t var_68_2 = var_118
uint128_t var_58_2 = var_108
uint128_t var_48_2 = rax_3.o
uint64_t var_38_2 = rax_6
var_178 = arg4[2]
int32_t var_170_2 = rax_15
uint128_t* rax_16 = sub_140d3c6e0(&arg3[1])
uint128_t* var_1a0_1 = &var_b8
return sub_141db2220(&result[0x7b], result, sub_140d3c6e0(arg3), rax_16)
