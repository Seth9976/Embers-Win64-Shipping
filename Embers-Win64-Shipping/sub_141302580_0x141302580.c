// 函数: sub_141302580
// 地址: 0x141302580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rax = *arg1
uint64_t rbp = zx.q(arg3)
int128_t zmm1 = rax[1]
int128_t var_e8 = *rax
int128_t var_d8 = zmm1
int128_t var_c8 = rax[2]
int128_t var_b8 = rax[3]
int128_t var_a8 = rax[4]
int128_t zmm0 = rax[6]
int128_t var_98 = rax[5]
int128_t var_88 = zmm0
int128_t var_78 = rax[7]
int128_t var_68 = rax[8]
int128_t var_58 = rax[9]

if (arg3 == 1)
    var_c8:0xc.d = 0x15
    var_78:0xc.d = 0x15

void* rbx = arg1[1]
wchar16 const* const r8 = u"DOFDilateMinFgdCoc"
*arg2 = 0
arg2[1] = 0

if (rbp.d != 1)
    r8 = u"DOFDilateFgdCoc"

*arg2 = sub_141188e50(rbx, &var_e8, r8, 0)
wchar16 const* const r8_1 = u"DOFDilateMaxBgdCoc"

if (rbp.d != 1)
    r8_1 = u"DOFDilateBgdCoc"

arg2[1] = sub_141188e50(rbx, &var_98, r8_1, 0)
int64_t* rax_3 = sub_14081d830(0x60, *(arg1[1] + 8), 1, 0)
int64_t* rdi = rax_3

if (rax_3 == 0)
    rdi = nullptr
else
    *rax_3 = 0
    rax_3[1] = 0
    rax_3[4] = 0
    __builtin_memset(&rax_3[6], 0, 0x30)

memset(rdi, 0, 0x60)
sub_1405d16e0(&rdi[4], *arg1[2])
int32_t* rax_4 = arg1[3]
int32_t rcx_4 = *rax_4
int32_t rdx_6 = rax_4[1]
int32_t arg_38
int32_t rax_5 = arg_38
*rdi = 0
rdi[1].d = rcx_4
*(rdi + 0xc) = rdx_6
rdi[2].d = rax_5
*(rdi + 0x14) = _mm_cvtepi32_ps(zx.o(rax_5)).d
float zmm1_1 = *arg1[5] * *arg1[4]
uint128_t zmm0_1
zmm0_1.d = 1f / zmm1_1
rdi[3].d = zmm1_1
*(rdi + 0x1c) = zmm0_1.d
*(rdi + 0x30) = *arg4
*(rdi + 0x40) = *arg5
int128_t var_128
int64_t* rax_8
int512_t zmm6
rax_8, zmm6 = sub_1413115c0(&var_128, arg1[1], arg2)
*(rdi + 0x50) = *rax_8
int128_t var_138
char rcx_9 =
    sub_1419a2ec0(*(arg1[6] + 0x5150), &var_138, &data_143eb29d0, arg6 + (rbp << 1).d + rbp.d - 1)
int64_t* rax_10 = arg1[7]
zmm6.o = zx.o(0)
int128_t zmm8 = var_138
void* rbp_2 = arg1[1]
uint128_t zmm7 = zx.o(*rax_10)
int32_t rbx_1 = rax_10[1].d
var_128 = sub_141316ca0(rcx_9)
sub_141998c50(zmm8.q, &data_143eb5870, rdi)
uint64_t var_100 = zmm7.q
void*** rax_11
char rcx_11
rax_11, rcx_11 = sub_14081d830(0x60, *(rbp_2 + 8), 1, 0)
void*** rbx_2 = rax_11

if (rax_11 == 0)
    rbx_2 = nullptr
else
    var_138.q = rdi
    sub_141316ca0(rcx_11)
    var_138:8.q = &data_143eb58a0
    var_128 = var_138
    sub_141992bd0(rbx_2, &arg_38, &var_128, 2)
    *rbx_2 = &data_142f5cb20
    *(rbx_2 + 0x38) = rdi.o
    *(rbx_2 + 0x48) = zmm8
    rbx_2[0xb] = rbx_1.q

sub_1419968d0(rbp_2, rbx_2)
return arg2
