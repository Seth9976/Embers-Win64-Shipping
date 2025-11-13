// 函数: sub_141390670
// 地址: 0x141390670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm8 = *arg4
int64_t* r15 = zmm8.q
uint128_t var_138 = zmm8
uint128_t var_128 = arg4[1]
uint64_t var_d8
uint128_t var_b8
uint128_t var_a8
uint128_t var_88
uint128_t var_78
char arg_8
int64_t rdx
int32_t r8
int32_t r9
uint128_t zmm1

if (r15 == 0)
label_141390730:
    int128_t zmm6 = arg4[2]
    var_d8 = arg4[3].q
    arg_8 = sub_14141f7a0(arg3)
    void* rax_4 = zmm6.q
    zmm1 = *(rax_4 + 0x40)
    var_b8 = *(rax_4 + 0x30)
    var_a8 = zmm1
    uint128_t var_98_1 = *(rax_4 + 0x50)
    var_98_1:8.w = 1
    var_78 = *(rax_4 + 0x70)
    var_88:8.w = 0
    var_88:4.d = ((*(rax_4 + 0x60)):4.d & 0xfffeffff) | 1
    var_78:8.b = 1
    void*** rax_8
    uint128_t zmm6_1
    rax_8, zmm6_1 = sub_141188e50(arg2, &var_b8, u"VisualizeShadingModel", 0)
    r9 = var_d8.d
    var_138.q = rax_8
    r15 = rax_8
    uint128_t temp0_3 = _mm_bsrli_si128(zmm6_1, 8)
    r8 = _mm_bsrli_si128(zmm6_1, 8).d
    var_138:0xc.d = (temp0_3.q u>> 0x20).d
    var_138:8.d = r8
    zmm8 = var_138
    var_128:4.d = (var_d8 u>> 0x20).d
    var_128.d = r9
    rdx = var_138:8.q
else
    r9 = var_128.d
    r8 = _mm_bsrli_si128(zmm8, 8).d
    var_138:8.d = r8
    
    if (r9 != r8)
        arg_8 = var_128:8.b
        rdx = var_138:8.q
    else
        rdx = _mm_bsrli_si128(zmm8, 8).q
        
        if ((var_128.q u>> 0x20).d == (rdx u>> 0x20).d)
            goto label_141390730
        
        arg_8 = var_128:8.b

zmm1 = arg4[2]
uint64_t var_108 = arg4[3].q
void* rcx_6 = zmm1.q
int32_t var_110 = r8
uint128_t temp0_5 = _mm_bsrli_si128(zmm1, 8)
uint128_t temp0_6 = _mm_bsrli_si128(zmm1, 8)
int32_t var_e8 = *(rcx_6 + 0x44)
int32_t var_e4 = *(rcx_6 + 0x48)
uint32_t var_dc = (temp0_5.q u>> 0x20).d
var_d8.d = var_108.d
var_d8:4.d = (var_108 u>> 0x20).d
int32_t rax_18 = *(r15 + 0x44)
int32_t var_114 = r15[9].d
uint32_t var_10c = (rdx u>> 0x20).d
var_108.d = r9
var_108:4.d = (var_128.q u>> 0x20).d
int32_t var_e0 = temp0_6.d
int64_t* rax_22 = sub_14081d830(0x240, *(arg2 + 8), 1, 0)
int64_t* rdi = rax_22

if (rax_22 == 0)
    rdi = nullptr
else
    *rax_22 = 0
    __builtin_memset(&rax_22[3], 0, 0x98)
    sub_14117af20(&rax_22[0x36])

memset(rdi, 0, 0x1b0)
memset(&rdi[0x38], 0, 0x80)
char var_140 = arg_8
int64_t* var_148 = r15
int16_t var_13f = 0
int32_t var_13c = 0xffffffff
*(rdi + 0x1b0) = var_148.o
sub_1405d16e0(rdi, *(arg3 + 0x10))
int128_t* rax_24 = *(arg4 + 0x38)
*(rdi + 0x10) = *rax_24
*(rdi + 0x20) = rax_24[1]
*(rdi + 0x30) = rax_24[2]
*(rdi + 0x40) = rax_24[3]
*(rdi + 0x50) = rax_24[4]
rdi[0x14] = arg4[2].q
rdi[0x15] = data_14395fa10
sub_14142a1f0(&rdi[0xc])
rdi[0x16].d = zx.d(*(arg3 + 0x4980)) & 1
rdi[0x18].d = zx.d(*(arg3 + 0x4980)) u>> 1 & 1
rdi[0x1a].d = zx.d(*(arg3 + 0x4980)) u>> 2 & 1
rdi[0x1c].d = zx.d(*(arg3 + 0x4980)) u>> 3 & 1
rdi[0x1e].d = zx.d(*(arg3 + 0x4980)) u>> 4 & 1
rdi[0x20].d = zx.d(*(arg3 + 0x4980)) u>> 5 & 1
rdi[0x22].d = zx.d(*(arg3 + 0x4980)) u>> 6 & 1
rdi[0x24].d = zx.d(*(arg3 + 0x4980)) u>> 7 & 1
rdi[0x26].d = zx.d(*(arg3 + 0x4980)) u>> 8 & 1
rdi[0x28].d = zx.d(*(arg3 + 0x4980)) u>> 9 & 1
rdi[0x2a].d = zx.d(*(arg3 + 0x4980)) u>> 0xa & 1
rdi[0x2c].d = zx.d(*(arg3 + 0x4980)) u>> 0xb & 1
rdi[0x2e].d = zx.d(*(arg3 + 0x4980)) u>> 0xc & 1
rdi[0x30].d = zx.d(*(arg3 + 0x4980)) u>> 0xd & 1
rdi[0x32].d = zx.d(*(arg3 + 0x4980)) u>> 0xe & 1
rdi[0x34].d = zx.d(*(arg3 + 0x4980)) u>> 0xf
char rcx_13 = sub_1419a2ec0(*(arg3 + 0x5150), &var_148, &data_143ec5200, 0)
int128_t zmm7 = var_148.o
int512_t zmm6_2
zmm6_2.o = zx.o(0)
int128_t var_f8 = sub_14139f2f0(rcx_13)
sub_141998c50(zmm7.q, &data_143ec7060, rdi)
int64_t* rdx_6 = *(arg2 + 8)
var_b8.q = arg3
var_b8 = rax_18.o
var_78:8.q = rdi
var_88.q = var_d8
var_a8:8.q = var_108
char var_68 = 0
void*** rax_73
char rcx_15
rax_73, rcx_15 = sub_14081d830(0x90, rdx_6, 1, 0)
void*** rsi_1 = rax_73

if (rax_73 == 0)
    rsi_1 = nullptr
else
    var_148 = rdi
    int128_t zmm6_4 = sub_14139f2f0(rcx_15)
    var_140.q = &data_143ec7090
    var_f8 = var_148.o
    sub_141992bd0(rsi_1, &arg_8, &var_f8, 1)
    uint128_t zmm0_5 = var_b8
    *rsi_1 = &data_142f6e2c0
    *(rsi_1 + 0x38) = zmm0_5
    *(rsi_1 + 0x48) = var_a8
    *(rsi_1 + 0x58) = zmm6_4
    *(rsi_1 + 0x68) = zmm7
    *(rsi_1 + 0x78) = var_78
    rsi_1[0x11] = var_68.q

sub_1419968d0(arg2, rsi_1)
var_128:8.b = 1
int64_t* rax_74
int512_t zmm6_5
rax_74, zmm6_5 = sub_14081d830(0x90, *(arg2 + 8), 1, 0)
int64_t* rsi_2 = rax_74

if (rax_74 == 0)
    rsi_2 = nullptr
else
    sub_14117af20(rax_74)

memset(&rsi_2[2], 0, 0x80)
zmm6_5.o = var_128
var_148 = r15
var_140.w = 1
var_13f:1.b = 0
int32_t var_13c_1 = 0xffffffff
*rsi_2 = var_148.o
void* var_c0 = arg3
void*** rax_75 = sub_14081d830(0x68, *(arg2 + 8), 1, 0)
void*** rdi_1 = rax_75

if (rax_75 == 0)
    rdi_1 = nullptr
else
    int64_t* rax_76
    int128_t zmm6_6
    rax_76, zmm6_6 = sub_1412ec240(&var_148, rsi_2)
    var_f8 = *rax_76
    sub_141992bd0(rdi_1, &arg_8, &var_f8, 1)
    *(rdi_1 + 0x38) = zmm8
    *rdi_1 = &data_142f6e2d0
    *(rdi_1 + 0x48) = zmm6_6
    *(rdi_1 + 0x58) = arg3.o

sub_1419968d0(arg2, rdi_1)
*arg1 = zmm8
arg1[1].q = var_128.q
return arg1
