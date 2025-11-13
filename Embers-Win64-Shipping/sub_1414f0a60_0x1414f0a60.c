// 函数: sub_1414f0a60
// 地址: 0x1414f0a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg2 + 0x78)
char var_180 = 1
int32_t var_188 = 0
void* var_118
void** rax_2
int512_t zmm0
rax_2, zmm0 = sub_142127800(arg9, &var_118, &data_143ef0a00, (*(*rbx + 0x40))(rbx), arg5)
int64_t var_130 = rax_2[1]
int128_t zmm11 = (*rax_2).o
char var_180_1 = 1
int32_t var_188_1 = 0
void** rax_6
int128_t zmm6_1
rax_6, zmm6_1 = sub_142127800(arg9, &var_118, &data_143ef0b60, (*(*rbx + 0x40))(rbx), zmm0)
int64_t var_130_1 = rax_6[1]
int128_t zmm12 = (*rax_6).o
int64_t rax_12

if ((zx.d(arg6) & 0x1f) - 1 u> 0x1d)
    rax_12 = data_1439b7670
else
    switch (zx.d(arg6) & 0x1f)
        case 1
            rax_12 = data_1439b73b8
        case 2
            rax_12 = data_1439b73d0
        case 3
            rax_12 = data_1439b73e8
        case 4
            rax_12 = data_1439b7400
        case 5
            rax_12 = data_1439b7418
        case 6
            rax_12 = data_1439b7430
        case 7
            rax_12 = data_1439b7448
        case 8
            rax_12 = data_1439b7460
        case 9
            rax_12 = data_1439b7478
        case 0xa
            rax_12 = data_1439b7490
        case 0xb
            rax_12 = data_1439b74a8
        case 0xc
            rax_12 = data_1439b74c0
        case 0xd
            rax_12 = data_1439b74d8
        case 0xe
            rax_12 = data_1439b74f0
        case 0xf
            rax_12 = data_1439b7508
        case 0x10
            rax_12 = data_1439b7520
        case 0x11
            rax_12 = data_1439b7538
        case 0x12
            rax_12 = data_1439b7550
        case 0x13
            rax_12 = data_1439b7568
        case 0x14
            rax_12 = data_1439b7670
        case 0x15
            rax_12 = data_1439b7580
        case 0x16
            rax_12 = data_1439b7598
        case 0x17
            rax_12 = data_1439b75b0
        case 0x18
            rax_12 = data_1439b75c8
        case 0x19
            rax_12 = data_1439b75e0
        case 0x1a
            rax_12 = data_1439b75f8
        case 0x1b
            rax_12 = data_1439b7610
        case 0x1c
            rax_12 = data_1439b7628
        case 0x1d
            rax_12 = data_1439b7640
        case 0x1e
            rax_12 = data_1439b7658

*(arg1 + 0x28) = rax_12
int64_t arg_8 = sub_141261c60(arg2)
int32_t rax_14 = sub_141261c10(arg2, arg9, &arg_8)
int32_t rax_15 = sub_141261bd0(arg2, arg9, &arg_8)
void* rdx_5 = *(arg1 + 0x18)
char var_180_2 = 0
int128_t var_128 = zx.o(0)
sub_141458e70(&var_128, rdx_5, arg7, arg2, arg4, 0)
int16_t rcx_11 = *(arg7 + 0x30) - 0x8000
int128_t var_108 = zmm11
uint64_t rax_18 = zx.q(rcx_11) << 0x30 | zx.q(*(arg2 + 0x98))
int128_t var_f8 = zmm6_1
int128_t var_e8 = zx.o(0)
var_180_2.q = arg9
int32_t var_188_2
var_188_2.q = arg8
int128_t var_d8 = zmm12
int128_t var_c8
__builtin_memset(&var_c8, 0, 0x30)
return sub_1410e6100(arg1, arg2, arg3, arg7, var_188_2, nullptr, arg1 + 0x28, &var_108, rax_14, 
    rax_15, rax_18, 0, &var_128)
