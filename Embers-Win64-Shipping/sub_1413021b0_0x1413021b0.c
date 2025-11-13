// 函数: sub_1413021b0
// 地址: 0x1413021b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = *arg2
int32_t r14
r14.b = r10 != 0
bool arg_c = **arg1 != 0
int64_t rax_1 = r10.q
int32_t arg_8
arg_8.q = rax_1
int32_t rbx = rax_1.d

if (r10 == 2 && (rax_1 u>> 0x20).b == 0)
    rbx = 0

int128_t var_b8
int32_t rcx_2
int32_t r9
rcx_2, r9 = sub_1419a2ec0(*(arg1[1] + 0x5150), &var_b8, &data_143eb30d0, 0)
int128_t zmm7 = var_b8
int128_t var_a8
sub_1419a2ec0(*(arg1[1] + 0x5150), &var_a8, &data_143eb31d0, 
    (sbb.d(r9, r9, arg_c != 0) & 5) + rbx + (sbb.d(rcx_2, rcx_2, arg4 != 0) & 0xa))
int128_t zmm8 = var_a8
int64_t* rax_6 = sub_14081d830(0xf0, *(arg1[2] + 8), 1, 0)
int64_t* rbx_1 = rax_6

if (rax_6 == 0)
    rbx_1 = nullptr
else
    rax_6[4] = 0
    *rax_6 = 0
    rax_6[1].d = 0
    *(rax_6 + 0xc) = 0x3f800000
    rax_6[6] = 0
    rax_6[7].d = 0
    *(rax_6 + 0x3c) = 0x3f800000
    __builtin_memset(&rax_6[8], 0, 0x20)
    sub_14117af20(&rax_6[0xc])

memset(rbx_1, 0, 0xf0)
int32_t* rax_7 = arg1[3]
uint128_t zmm0 = zx.o(rax_7[1])
uint128_t zmm3 = _mm_cvtepi32_ps(zx.o(*rax_7))
zmm0 = _mm_cvtepi32_ps(zmm0)
uint128_t zmm1
zmm1.d = 1f f/ zmm3.d
_mm_shuffle_ps(zmm3, zmm3, 0xe1)
zmm3.d = zmm0.d
_mm_shuffle_ps(zmm3, zmm3, 0xc6)
zmm3.d = zmm1.d
uint128_t zmm2
zmm2.d = 1f f/ zmm0.d
_mm_shuffle_ps(zmm3, zmm3, 0x27)
zmm3.d = zmm2.d
zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x39)
*rbx_1 = zmm3
void* rax_8 = arg1[4]
uint128_t var_c8 = zmm3
rbx_1[2].d = *(rax_8 + 4)
zmm1.d = _mm_cvtepi32_ps(zx.o(*arg1[3])).d f/ _mm_cvtepi32_ps(zx.o(*arg1[5])).d
*(rbx_1 + 0x14) = zmm1.d
float zmm6 = sub_1405d16e0(&rbx_1[4], *arg1[6])

if (*arg1[7] != 0)
    rbx_1[9] = **arg1

int32_t* rax_13 = arg1[8]
uint128_t zmm0_1 = zx.o(rax_13[1])
zmm2 = _mm_cvtepi32_ps(zx.o(*rax_13))
rbx_1[8] = arg4
void* arg_28
void* rsi_1 = arg_28
zmm0_1 = _mm_cvtepi32_ps(zmm0_1)
float zmm1_1 = zmm6 f/ zmm2.d
_mm_shuffle_ps(zmm2, zmm2, 0xe1)
zmm2.d = zmm0_1.d
_mm_shuffle_ps(zmm2, zmm2, 0xc6)
zmm2.d = zmm1_1
_mm_shuffle_ps(zmm2, zmm2, 0x27)
zmm2.d = zmm6 f/ zmm0_1.d
zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0x39)
*(rbx_1 + 0x30) = zmm2
int64_t* rax_14 = arg1[9]
var_c8 = zmm2
var_c8.q = rsi_1
var_c8:8.q = 1
rbx_1[0xa] = *rax_14

if ((*(rsi_1 + 0x38) & 0x100) != 0)
    var_c8:8.d = 4
    var_c8:0xc.d = 0x1c

void*** rax_15
int64_t rcx_13
int512_t zmm6_1
rax_15, rcx_13, zmm6_1 = sub_14081d830(0x28, *(arg1[2] + 8), 1, 0)

if (rax_15 == 0)
    rax_15 = nullptr
else
    rcx_13 = *(rsi_1 + 8)
    uint128_t zmm0_2 = var_c8
    rax_15[1] = rcx_13
    *rax_15 = &data_142f285c0
    rax_15[2] = 0
    *(rax_15 + 0x18) = zmm0_2

rbx_1[0xb] = rax_15
zmm6_1.o = zx.o(0)
var_c8.q = *arg3
var_c8:8.w = 1
var_c8:0xa.b = 0
var_c8:0xc.d = 0xffffffff
*(rbx_1 + 0x60) = var_c8
int128_t zmm6_2 = sub_141315430(rcx_13.b)
var_c8.q = var_b8.q
var_c8:8.q = var_a8.q
var_a8.q = &var_c8
var_a8:8.d = 2
var_a8 = var_a8
var_b8 = zmm6_2
sub_141998da0(&var_a8, &data_143eb5cd0, rbx_1)
void* rsi_2 = arg1[2]
int64_t var_70 = *arg1[3]
void*** rax_18
char rcx_18
rax_18, rcx_18 = sub_14081d830(0x70, *(rsi_2 + 8), 1, 0)
void*** rdi_1 = rax_18

if (rax_18 == 0)
    rdi_1 = nullptr
else
    var_a8.q = rbx_1
    sub_141315430(rcx_18)
    var_a8:8.q = &data_143eb5d00
    var_a8 = var_a8
    sub_141992bd0(rdi_1, &arg_28, &var_a8, 1)
    *rdi_1 = &data_142f5cac0
    *(rdi_1 + 0x38) = rbx_1.o
    *(rdi_1 + 0x48) = zmm7
    *(rdi_1 + 0x58) = zmm8
    rdi_1[0xd] = r14.q

return sub_1419968d0(rsi_2, rdi_1)
