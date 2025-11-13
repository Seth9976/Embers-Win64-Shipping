// 函数: sub_141e1a200
// 地址: 0x141e1a200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_48 = arg6
uint128_t zmm6 = arg1
uint64_t var_e8
int32_t* rax

if (arg3 == 0)
    int32_t var_e0_1 = arg4[1].d
    rax = &var_e8
    var_e8 = *arg4
else
    rax, zmm6 = sub_141e13530(arg3, &var_e8, arg4)

int32_t rax_2 = rax[2]
uint64_t var_70 = *rax
int32_t* rax_3

if (arg8 == 0)
    int32_t var_e0_2 = arg9[1].d
    rax_3 = &var_e8
    var_e8 = *arg9
else
    rax_3, zmm6 = sub_141e13530(arg8, &var_e8, arg9)

arg1 = zx.o(*rax_3)
float zmm2 = arg1.d f- var_70.d
arg6.d = rax_3[2].d f- rax_2
float zmm1 = 1f f/ zmm6.d
int32_t var_c0 = arg4[1].d
int32_t var_b4 = arg9[1].d
int32_t var_e0_4 = 0
int32_t* var_d8 = arg3
int32_t* var_d0 = arg8
int32_t var_a8 = 0
zmm6 = arg1
uint64_t var_c8 = *arg4
uint64_t var_bc = *arg9
arg1 = _mm_unpacklo_ps(0x3f800000, zx.o(0).q)
zmm6.d = _mm_shuffle_ps(zmm6, zmm6, 0x55).d f- var_70:4.d
uint64_t var_b0 = arg1.q
arg1 = data_143246230
float var_a4 = zmm2 * zmm1
zmm6.d = zmm6.d f* zmm1
arg6.d = arg6.d f* zmm1
int32_t zmm6_1
int64_t zmm9
zmm6_1, zmm9 = sub_141e328d0(&var_d8)
int64_t r13 = sx.q(arg2[1].d)
int32_t rax_8 = (r13 + 1).d
arg2[1].d = rax_8

if (rax_8 s> *(arg2 + 0xc))
    sub_1405fde00(arg2)

int64_t rax_9 = *arg2
int32_t var_e0_5 = 0
uint128_t zmm0 = var_d8.o
var_d8 = arg3
uint128_t* rcx_5 = r13 * 0x68
int32_t* var_d0_1 = arg8
*(rcx_5 + rax_9) = zmm0
*(rcx_5 + rax_9 + 0x10) = var_c8.o
*(rcx_5 + rax_9 + 0x20) = var_bc:4.o
*(rcx_5 + rax_9 + 0x30) = var_a8.o
*(rcx_5 + rax_9 + 0x40) = arg1
int128_t var_88
*(rcx_5 + rax_9 + 0x50) = var_88
int64_t var_78
*(rcx_5 + rax_9 + 0x60) = var_78
uint64_t var_c8_1 = *arg4
uint64_t var_bc_1 = *arg9
int32_t var_c0_1 = arg4[1].d
uint64_t var_b0_1 = (_mm_unpacklo_ps(zx.o(0), zmm9)).q
zmm0 = data_143246230
int32_t var_b4_1 = arg9[1].d
int32_t var_a4_1 = zmm6_1
int64_t zmm7
int32_t zmm8
zmm7, zmm8 = sub_141e328d0(&var_d8)
int64_t r13_1 = sx.q(arg2[1].d)
int32_t rax_13 = (r13_1 + 1).d
arg2[1].d = rax_13

if (rax_13 s> *(arg2 + 0xc))
    sub_1405fde00(arg2)

int64_t rax_14 = *arg2
int32_t var_e0_6 = 0x3f800000
uint128_t zmm0_1 = var_d8.o
var_d8 = arg3
uint128_t* rcx_8 = r13_1 * 0x68
int32_t* var_d0_2 = arg8
*(rcx_8 + rax_14) = zmm0_1
*(rcx_8 + rax_14 + 0x10) = var_c8_1.o
*(rcx_8 + rax_14 + 0x20) = var_bc_1:4.o
*(rcx_8 + rax_14 + 0x30) = var_e0_5.o
*(rcx_8 + rax_14 + 0x40) = zmm0
*(rcx_8 + rax_14 + 0x50) = var_88
*(rcx_8 + rax_14 + 0x60) = var_78
uint64_t var_c8_2 = *arg4
uint64_t var_bc_2 = *arg9
int32_t var_c0_2 = arg4[1].d
uint64_t var_b0_2 = (_mm_unpacklo_ps(zx.o(0), zmm7)).q
zmm0_1 = data_143246230
int32_t var_b4_2 = arg9[1].d
int32_t var_a4_2 = zmm8
int512_t zmm7_1
int512_t zmm8_1
int512_t zmm9_1
zmm7_1, zmm8_1, zmm9_1 = sub_141e328d0(&var_d8)
int64_t rdi_1 = sx.q(arg2[1].d)
int32_t rax_18 = (rdi_1 + 1).d
arg2[1].d = rax_18

if (rax_18 s> *(arg2 + 0xc))
    sub_1405fde00(arg2)

int64_t result = *arg2
zmm7_1.o = arg5
zmm8_1.o = var_48
zmm9_1.o = arg7
uint128_t* rcx_11 = rdi_1 * 0x68
*(rcx_11 + result) = var_d8.o
*(rcx_11 + result + 0x10) = var_c8_2.o
*(rcx_11 + result + 0x20) = var_bc_2:4.o
*(rcx_11 + result + 0x30) = var_e0_6.o
*(rcx_11 + result + 0x40) = zmm0_1
*(rcx_11 + result + 0x50) = var_88
*(rcx_11 + result + 0x60) = var_78
return result
