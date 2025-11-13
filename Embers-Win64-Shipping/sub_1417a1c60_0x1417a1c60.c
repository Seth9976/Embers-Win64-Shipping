// 函数: sub_1417a1c60
// 地址: 0x1417a1c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
MSF_HB::MapStreamToMemory(arg1, arg2, arg3, arg4, arg5)
void* r8 = arg1[0x4c]
*arg1 = &data_142fc9008
sub_1417a0cf0(&arg1[0x6d], arg1, *(r8 + 0x38))
arg1[0xb5].d = 0xc4752a8f
arg1[0xb4] = 0
void* rcx_1 = &arg1[0xb8]
arg1[0xb3] = &data_142fc70a0
arg1[0xb6] = 0
arg1[0xb7] = 0
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_3 = *(rcx_1 + 0x10)
int32_t var_e0 = 0
int32_t var_e8 = 0

if (rax_3 != 0)
    rcx_1 = rax_3

int32_t var_f0 = 2
char var_f8
var_f8.d = 1
*rcx_1 = 0
*(rcx_1 + 8) = 0
arg1[0xbc].d = 0xffffffff
*(arg1 + 0x5e4) = 0
arg1[0xbe] = 0
arg1[0xbf].d = 0
sub_1417619d0(&arg1[0xc0], arg2, &arg1[0x49], &arg1[0x40], var_f8, var_f0, var_e8, var_e0)
sub_141761a60(&arg1[0xe2], &arg1[0xc0], 0)
float zmm2[0x4] = zx.o(0)
arg1[0xe2] = &data_142fc6fd0
__builtin_memset(&arg1[0xe7], 0, 0x50)
arg1[0xf1].b = 1
arg1[0xf3].d = data_143ef7ec4[0]
float zmm0[0x4] = data_142d3f660
*(arg1 + 0x79c) = data_1439b8eb0.d
arg1[0xf2] = &data_142fc8f88
arg1[0xf4] = arg2
arg1[0xf5] = 0
arg1[0xf6] = &arg1[0xf2]
arg1[0xf7] = &arg1[0xc0]
*(arg1 + 0x7c0) = zmm0
*(arg1 + 0x7d0) = zx.o(0)
int128_t zmm1 = data_14399f670
void** const var_70 = &data_142fc5458
float zmm3[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, zmm1.q), 
    _mm_unpacklo_ps(data_14399f66c, 0)[0].q)
*(arg1 + 0x7e0) = zmm3
arg1[0xfe].b = 1
arg1[0x100] = 0
arg1[0x102] = 0
arg1[0x108] = 0
arg1[0x10a] = 0
arg1[0x110] = 0
arg1[0x112] = 0
arg1[0x118] = 0
arg1[0x11a] = 0
arg1[0x120] = 0
arg1[0x122] = 0
arg1[0x128] = 0
arg1[0x12a] = 0
void** const var_78 = &data_142fc9228
arg1[0x130] = 0
arg1[0x132] = 0
void*** var_88 = nullptr
void*** var_68 = arg1
int64_t (* var_98)(int64_t arg1, void* arg2, int32_t* arg3) = sub_1417a8f20
int64_t (* var_d8)(int64_t arg1, void* arg2, int32_t* arg3) = sub_1417a8f20
float (* var_c8)[0x4] = nullptr
sub_1417a9200(&var_78, &var_c8)
float var_b8[0x4]
int128_t var_a8
float zmm4_1[0x4]
int128_t zmm5_1

if (&arg1[6] != &var_d8)
    zmm2 = *(arg1 + 0x30)
    zmm3 = *(arg1 + 0x40)
    zmm4_1 = *(arg1 + 0x50)
    zmm5_1 = *(arg1 + 0x60)
    zmm1 = var_c8.o
    *(arg1 + 0x30) = var_d8.o
    zmm0 = var_b8
    *(arg1 + 0x40) = zmm1
    zmm1 = var_a8
    *(arg1 + 0x50) = zmm0
    *(arg1 + 0x60) = zmm1
    var_d8.o = zmm2
    var_c8.o = zmm3
    var_b8 = zmm4_1
    var_a8 = zmm5_1

if (var_d8 != 0)
    float (* rax_5)[0x4] = var_c8
    float (* rcx_5)[0x4] = &var_b8
    
    if (rax_5 != 0)
        rcx_5 = rax_5
    
    (*(*rcx_5 + 0x10))(rcx_5, zmm1, zmm2, &arg1[0x40])

if (var_98 != 0)
    void** const* rcx_6 = &var_78
    
    if (var_88 != 0)
        rcx_6 = var_88
    
    (*rcx_6)[2](rcx_6, zmm1, zmm2, zmm3)

void*** var_88_1 = nullptr
var_78 = &data_142da2668
void*** var_70_1 = arg1
void** (* var_98_1)(int64_t arg1, int64_t* arg2, int64_t arg3) = sub_1417a8ec0
var_d8 = sub_1417a8ec0
var_c8 = nullptr
sub_14074cce0(&var_78, &var_c8)

if (&arg1[0xe] != &var_d8)
    zmm2 = *(arg1 + 0x70)
    zmm3 = *(arg1 + 0x80)
    zmm4_1 = *(arg1 + 0x90)
    zmm5_1 = *(arg1 + 0xa0)
    zmm1 = var_c8.o
    *(arg1 + 0x70) = var_d8.o
    zmm0 = var_b8
    *(arg1 + 0x80) = zmm1
    zmm1 = var_a8
    *(arg1 + 0x90) = zmm0
    *(arg1 + 0xa0) = zmm1
    var_d8.o = zmm2
    var_c8.o = zmm3
    var_b8 = zmm4_1
    var_a8 = zmm5_1

if (var_d8 != 0)
    float (* rax_9)[0x4] = var_c8
    float (* rcx_8)[0x4] = &var_b8
    
    if (rax_9 != 0)
        rcx_8 = rax_9
    
    (*(*rcx_8 + 0x10))(rcx_8, zmm1, zmm2, zmm3)

if (var_98_1 != 0)
    void** const* rcx_9 = &var_78
    
    if (var_88_1 != 0)
        rcx_9 = var_88_1
    
    (*rcx_9)[2](rcx_9, zmm1, zmm2, zmm3)

int64_t r14 = sx.q(arg1[3].d)
var_b8[0].q = &data_142da2668
int64_t (* rcx_10)(int64_t arg1, void* arg2, int32_t* arg3) = sub_1417a8ea0
var_c8 = nullptr
var_b8[2].q = arg1
int32_t rax_13 = (r14 + 1).d
var_d8 = sub_1417a8ea0
arg1[3].d = rax_13

if (rax_13 s> *(arg1 + 0x1c))
    sub_1405c4fe0(&arg1[2])
    rcx_10 = var_d8

int64_t (** rax_16)(int64_t arg1, void* arg2, int32_t* arg3) = &arg1[2][r14 * 8]
*rax_16 = rcx_10
rax_16[2] = 0

if (*rax_16 != 0)
    float (* rax_17)[0x4] = var_c8
    float (* rcx_12)[0x4] = &var_b8
    
    if (rax_17 != 0)
        rcx_12 = rax_17
    
    (**rcx_12)(rcx_12)

if (var_d8 != 0)
    float (* rax_19)[0x4] = var_c8
    float (* rcx_13)[0x4] = &var_b8
    
    if (rax_19 != 0)
        rcx_13 = rax_19
    
    (*(*rcx_13 + 0x10))(rcx_13)

int32_t r12 = arg1[0x1f].d
int64_t r14_1 = sx.q(r12)
int32_t rax_21 = (r14_1 + 1).d
arg1[0x1f].d = rax_21

if (rax_21 s> *(arg1 + 0xfc))
    sub_1405a4d70(&arg1[0x1e])

arg1[0x1e][r14_1] = &arg1[0xe2]
arg1[0xe2][3](&arg1[0xe2], &arg1[0x22], zx.q(r12))
void*** var_88_2 = nullptr
var_78 = &data_142d42d18
var_c8 = nullptr
int64_t (* var_98_2)() = sub_140594850
var_d8 = sub_140594850
sub_1405995f0(&var_78, &var_c8)

if (&arg1[0x130] != &var_d8)
    zmm2 = *(arg1 + 0x980)
    zmm3 = *(arg1 + 0x990)
    float zmm4_2[0x4] = *(arg1 + 0x9a0)
    int128_t zmm5_2 = *(arg1 + 0x9b0)
    zmm1 = var_c8.o
    *(arg1 + 0x980) = var_d8.o
    zmm0 = var_b8
    *(arg1 + 0x990) = zmm1
    zmm1 = var_a8
    *(arg1 + 0x9a0) = zmm0
    *(arg1 + 0x9b0) = zmm1
    var_d8.o = zmm2
    var_c8.o = zmm3
    var_b8 = zmm4_2
    int128_t var_a8_1 = zmm5_2

if (var_d8 != 0)
    float (* rax_24)[0x4] = var_c8
    float (* rcx_17)[0x4] = &var_b8
    
    if (rax_24 != 0)
        rcx_17 = rax_24
    
    (*(*rcx_17 + 0x10))(rcx_17, zmm1, zmm2, zmm3)

if (var_98_2 != 0)
    void** const* rcx_18 = &var_78
    
    if (var_88_2 != 0)
        rcx_18 = var_88_2
    
    void** const rdx_11 = *rcx_18
    rdx_11[2](rcx_18, rdx_11, zmm2, zmm3)

__security_check_cookie(rax_1 ^ &var_118)
return arg1
