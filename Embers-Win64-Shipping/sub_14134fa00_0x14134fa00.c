// 函数: sub_14134fa00
// 地址: 0x14134fa00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_18 = arg3
uint128_t zmm8 = *arg4
float (* r13)[0x4] = zmm8.q
uint128_t var_168 = zmm8
uint128_t var_158 = arg4[1]
uint64_t var_138
uint128_t var_e8
uint128_t var_d8
uint128_t var_b8
uint128_t var_a8
char arg_10
int64_t arg_20
int32_t r12_1
uint128_t zmm1

if (r13 == 0)
label_14134faca:
    int128_t zmm6 = arg4[2]
    var_138 = arg4[3].q
    arg_10 = sub_14141f7a0(arg3)
    void* rax_4 = zmm6.q
    zmm1 = *(rax_4 + 0x40)
    var_e8 = *(rax_4 + 0x30)
    var_d8 = zmm1
    uint128_t var_c8_1 = *(rax_4 + 0x50)
    var_c8_1:8.w = 1
    var_a8 = *(rax_4 + 0x70)
    var_b8:8.w = 0
    var_b8:4.d = ((*(rax_4 + 0x60)):4.d & 0xfffeffff) | 1
    var_a8:8.b = 1
    float (* rax_8)[0x4]
    uint128_t zmm6_1
    rax_8, zmm6_1 = sub_141188e50(arg2, &var_e8, u"VisualizeSubsurface", 0)
    var_168.q = rax_8
    r13 = rax_8
    var_158.d = var_138.d
    uint64_t rax_10 = var_138
    uint128_t temp0_3 = _mm_bsrli_si128(zmm6_1, 8)
    r12_1 = _mm_bsrli_si128(zmm6_1, 8).d
    var_168:0xc.d = (temp0_3.q u>> 0x20).d
    var_168:8.d = r12_1
    var_158:4.d = (rax_10 u>> 0x20).d
    arg_20 = var_168:8.q
else
    r12_1 = _mm_bsrli_si128(zmm8, 8).d
    var_168:8.d = r12_1
    
    if (var_158.d != r12_1)
        arg_10 = var_158:8.b
        arg_20 = var_168:8.q
    else
        uint128_t temp0_2 = _mm_bsrli_si128(zmm8, 8)
        arg_20 = temp0_2.q
        
        if ((var_158.q u>> 0x20).d == (temp0_2.q u>> 0x20).d)
            goto label_14134faca
        
        arg_10 = var_158:8.b

zmm1 = arg4[2]
int64_t* rdx_1 = arg2[1]
void* rcx_6 = zmm1.q
var_138 = arg4[3].q
uint128_t temp0_5 = _mm_bsrli_si128(zmm1, 8)
uint128_t temp0_6 = _mm_bsrli_si128(zmm1, 8)
int32_t var_108 = *(rcx_6 + 0x44)
int32_t var_104 = *(rcx_6 + 0x48)
uint32_t var_fc = (temp0_5.q u>> 0x20).d
int32_t rax_17 = var_138.d
uint32_t var_f4 = (var_138 u>> 0x20).d
int32_t var_100 = temp0_6.d
int64_t* rax_20 = sub_14081d830(0x150, rdx_1, 1, 0)
float (* rdi)[0x4] = rax_20

if (rax_20 == 0)
    rdi = nullptr
else
    __builtin_memset(&rax_20[2], 0, 0x20)
    rax_20[0x14] = 0
    rax_20[0x16] = 0
    rax_20[0x17] = 0
    *rax_20 = 0
    rax_20[1].d = 0
    *(rax_20 + 0xc) = 0x3f800000
    sub_14117af20(&rax_20[0x18])

memset(rdi, 0, 0x150)
float var_148
float (* rax_21)[0x4] = sub_14135b870(&var_148, *arg2, arg_18)
*rdi = *rax_21
sub_1405d1600(&rdi[1], &rax_21[1])
sub_1405d1600(&(*rdi)[6], &(*rax_21)[6])
rdi[2][0].q = rax_21[2][0].q
*(rdi + 0x28) = *(rax_21 + 0x28)
void var_130
sub_1405d1550(&var_130)
sub_1405d1550(&var_138)
char var_170 = arg_10
float (* var_178)[0x4] = r13
int16_t var_16f = 0
int32_t var_16c = 0xffffffff
rdi[0xc] = var_178.o
rdi[0xa][0].q = arg4[2].q
int32_t* rax_25
int512_t zmm6_2
int128_t zmm8_1
rax_25, zmm6_2, zmm8_1 = sub_141455b70(&var_e8, &var_108)
rdi[3][0].q = *rax_25
*(rdi + 0x38) = *(rax_25 + 8)
rdi[4][0].q = *(rax_25 + 0x10)
*(rdi + 0x48) = *(rax_25 + 0x18)
rdi[5][0] = rax_25[8]
(*rdi)[0x15] = rax_25[9]
(*rdi)[0x16] = rax_25[0xa]
(*rdi)[0x17] = rax_25[0xb]
rdi[6][0].q = *(rax_25 + 0x30)
*(rdi + 0x68) = *(rax_25 + 0x38)
rdi[7][0].q = *(rax_25 + 0x40)
*(rdi + 0x78) = *(rax_25 + 0x48)
rdi[8][0].q = *(rax_25 + 0x50)
*(rdi + 0x88) = *(rax_25 + 0x58)
rdi[9][0].q = *(rax_25 + 0x60)
*(rdi + 0x98) = *(rax_25 + 0x68)
*(rdi + 0xb8) = data_14395fa10
int64_t* rax_29 = sub_1414558d0()
void* r15_1 = arg_18
rdi[0xb][0].q = *rax_29
char rcx_20 = sub_1419a2ec0(*(r15_1 + 0x5150), &var_178, &data_143ebce70, 0)
zmm6_2.o = zx.o(0)
int128_t zmm7 = var_178.o
var_148 = (*r13)[0x11]
float var_144 = (*r13)[0x12]
uint32_t var_13c = (arg_20 u>> 0x20).d
var_138.d = var_158.d
var_138:4.d = (var_158.q u>> 0x20).d
int32_t var_140 = r12_1
int128_t var_118 = sub_14135aa10(rcx_20)
sub_141998c50(zmm7.q, &data_143ec1790, rdi)
int64_t* rdx_8 = arg2[1]
uint64_t zmm1_2 = var_138
var_e8.q = r15_1
var_e8 = var_148.o
var_a8:8.q = rdi
var_b8.q = rax_17.q
var_d8:8.q = zmm1_2
char var_98 = 0
void*** rax_37
char rcx_22
rax_37, rcx_22 = sub_14081d830(0x90, rdx_8, 1, 0)
void*** rbx_4 = rax_37

if (rax_37 == 0)
    rbx_4 = nullptr
else
    var_178 = rdi
    int128_t zmm6_4 = sub_14135aa10(rcx_22)
    var_170.q = &data_143ec17c0
    var_118 = var_178.o
    sub_141992bd0(rbx_4, &arg_18, &var_118, 1)
    uint128_t zmm0_6 = var_e8
    *rbx_4 = &data_142f64d30
    *(rbx_4 + 0x38) = zmm0_6
    *(rbx_4 + 0x48) = var_d8
    *(rbx_4 + 0x58) = zmm6_4
    *(rbx_4 + 0x68) = zmm7
    *(rbx_4 + 0x78) = var_a8
    rbx_4[0x11] = var_98.q

sub_1419968d0(arg2, rbx_4)
var_158:8.b = 1
int64_t* rax_38
int512_t zmm6_5
rax_38, zmm6_5 = sub_14081d830(0x90, arg2[1], 1, 0)
int64_t* rdi_1 = rax_38

if (rax_38 == 0)
    rdi_1 = nullptr
else
    sub_14117af20(rax_38)

memset(&rdi_1[2], 0, 0x80)
zmm6_5.o = var_158
var_178 = r13
var_170.w = 1
var_16f:1.b = 0
int32_t var_16c_1 = 0xffffffff
*rdi_1 = var_178.o
void*** rax_39 = sub_14081d830(0x68, arg2[1], 1, 0)
void*** rbx_5 = rax_39

if (rax_39 == 0)
    rbx_5 = nullptr
else
    int64_t* rax_40
    int128_t zmm6_6
    rax_40, zmm6_6 = sub_1412ec240(&var_178, rdi_1)
    var_118 = *rax_40
    sub_141992bd0(rbx_5, &arg_18, &var_118, 1)
    *(rbx_5 + 0x38) = zmm8_1
    *rbx_5 = &data_142f64d40
    *(rbx_5 + 0x48) = zmm6_6
    *(rbx_5 + 0x58) = r15_1.o

sub_1419968d0(arg2, rbx_5)
*arg1 = zmm8_1
arg1[1].q = var_158.q
return arg1
