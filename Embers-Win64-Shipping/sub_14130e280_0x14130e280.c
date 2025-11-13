// 函数: sub_14130e280
// 地址: 0x14130e280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm8 = *arg4
int64_t* r15 = zmm8.q
uint128_t var_158 = zmm8
uint128_t var_148 = arg4[1]
uint128_t var_d8
uint128_t var_c8
uint128_t var_a8
uint128_t var_98
char arg_8
int64_t rdx
int32_t r8
int32_t r9
uint128_t zmm1

if (r15 == 0)
label_14130e344:
    int128_t zmm6 = arg4[2]
    uint64_t var_f8_1 = arg4[3].q
    arg_8 = sub_14141f7a0(arg3)
    void* rax_4 = zmm6.q
    zmm1 = *(rax_4 + 0x40)
    var_d8 = *(rax_4 + 0x30)
    var_c8 = zmm1
    uint128_t var_b8_1 = *(rax_4 + 0x50)
    var_b8_1:8.w = 1
    var_98 = *(rax_4 + 0x70)
    var_a8:8.w = 0
    var_a8:4.d = ((*(rax_4 + 0x60)):4.d & 0xfffeffff) | 1
    var_98:8.b = 1
    void*** rax_8
    uint128_t zmm6_1
    rax_8, zmm6_1 = sub_141188e50(arg2, &var_d8, u"VisualizeGBufferHints", 0)
    r9 = var_f8_1.d
    var_158.q = rax_8
    r15 = rax_8
    uint128_t temp0_3 = _mm_bsrli_si128(zmm6_1, 8)
    r8 = _mm_bsrli_si128(zmm6_1, 8).d
    var_158:0xc.d = (temp0_3.q u>> 0x20).d
    var_158:8.d = r8
    var_148:4.d = (var_f8_1 u>> 0x20).d
    var_148.d = r9
    rdx = var_158:8.q
else
    r9 = var_148.d
    r8 = _mm_bsrli_si128(zmm8, 8).d
    var_158:8.d = r8
    
    if (r9 != r8)
        arg_8 = var_148:8.b
        rdx = var_158:8.q
    else
        rdx = _mm_bsrli_si128(zmm8, 8).q
        
        if ((var_148.q u>> 0x20).d == (rdx u>> 0x20).d)
            goto label_14130e344
        
        arg_8 = var_148:8.b

zmm1 = arg4[2]
uint64_t var_f8_2 = arg4[3].q
void* rcx_6 = zmm1.q
int32_t var_100 = r8
uint128_t temp0_5 = _mm_bsrli_si128(zmm1, 8)
uint128_t temp0_6 = _mm_bsrli_si128(zmm1, 8)
int32_t var_128 = *(rcx_6 + 0x44)
int32_t var_124 = *(rcx_6 + 0x48)
uint32_t var_11c = (temp0_5.q u>> 0x20).d
int32_t rax_15 = var_f8_2.d
uint32_t var_114 = (var_f8_2 u>> 0x20).d
int32_t var_120 = temp0_6.d
int32_t rax_18 = *(r15 + 0x44)
int32_t var_104 = r15[9].d
var_f8_2:4.d = (var_148.q u>> 0x20).d
int64_t rax_22 = data_14395fa10
uint32_t var_fc = (rdx u>> 0x20).d
var_f8_2.d = r9
int64_t* rax_23 = sub_14081d830(0x1c0, *(arg2 + 8), 1, 0)
int64_t* rdi = rax_23

if (rax_23 == 0)
    rdi = nullptr
else
    *rax_23 = 0
    __builtin_memset(&rax_23[0x11], 0, 0xa8)
    sub_14117af20(&rax_23[0x26])

memset(rdi, 0, 0x130)
memset(&rdi[0x28], 0, 0x80)
char var_160 = arg_8
int64_t* var_168 = r15
int16_t var_15f = 0
int32_t var_15c = 0xffffffff
*(rdi + 0x130) = var_168.o
sub_1405d16e0(rdi, *(arg3 + 0x10))
int32_t* rax_25
int512_t zmm6_2
int128_t zmm8_1
rax_25, zmm6_2, zmm8_1 = sub_141455b70(&var_d8, &var_128)
rdi[2] = *rax_25
rdi[3] = *(rax_25 + 8)
rdi[4] = *(rax_25 + 0x10)
rdi[5] = *(rax_25 + 0x18)
rdi[6].d = rax_25[8]
*(rdi + 0x34) = rax_25[9]
rdi[7].d = rax_25[0xa]
*(rdi + 0x3c) = rax_25[0xb]
rdi[8] = *(rax_25 + 0x30)
rdi[9] = *(rax_25 + 0x38)
rdi[0xa] = *(rax_25 + 0x40)
rdi[0xb] = *(rax_25 + 0x48)
rdi[0xc] = *(rax_25 + 0x50)
rdi[0xd] = *(rax_25 + 0x58)
rdi[0xe] = *(rax_25 + 0x60)
rdi[0xf] = *(rax_25 + 0x68)
uint128_t* rax_28 = arg4[5].q
*(rdi + 0x80) = *rax_28
*(rdi + 0x90) = rax_28[1]
*(rdi + 0xa0) = rax_28[2]
*(rdi + 0xb0) = rax_28[3]
*(rdi + 0xc0) = rax_28[4]
int64_t rax_29 = arg4[2].q
rdi[0x23] = rax_22
rdi[0x22] = rax_29
int64_t rax_30 = *(arg4 + 0x38)
rdi[0x25] = rax_22
rdi[0x24] = rax_30
sub_14142a1f0(&rdi[0x1a])
char rcx_17 = sub_1419a2ec0(*(arg3 + 0x5150), &var_168, &data_143eb4960, 0)
int128_t zmm7 = var_168.o
zmm6_2.o = zx.o(0)
int128_t var_138 = sub_141318ad0(rcx_17)
sub_141998c50(zmm7.q, &data_143eb8c80, rdi)
int64_t* rdx_8 = *(arg2 + 8)
var_d8.q = arg3
var_d8 = rax_18.o
var_98:8.q = rdi
var_a8.q = rax_15.q
var_c8:8.q = var_f8_2
char var_88 = 0
void*** rax_31
char rcx_19
rax_31, rcx_19 = sub_14081d830(0x90, rdx_8, 1, 0)
void*** rsi_1 = rax_31

if (rax_31 == 0)
    rsi_1 = nullptr
else
    var_168 = rdi
    int128_t zmm6_4 = sub_141318ad0(rcx_19)
    var_160.q = &data_143eb8cb0
    var_138 = var_168.o
    sub_141992bd0(rsi_1, &arg_8, &var_138, 1)
    uint128_t zmm0_5 = var_d8
    *rsi_1 = &data_142f5cc70
    *(rsi_1 + 0x38) = zmm0_5
    *(rsi_1 + 0x48) = var_c8
    *(rsi_1 + 0x58) = zmm6_4
    *(rsi_1 + 0x68) = zmm7
    *(rsi_1 + 0x78) = var_98
    rsi_1[0x11] = var_88.q

sub_1419968d0(arg2, rsi_1)
var_148:8.b = 1
int64_t* rax_32
int512_t zmm6_5
rax_32, zmm6_5 = sub_14081d830(0x90, *(arg2 + 8), 1, 0)
int64_t* rsi_2 = rax_32

if (rax_32 == 0)
    rsi_2 = nullptr
else
    sub_14117af20(rax_32)

memset(&rsi_2[2], 0, 0x80)
zmm6_5.o = var_148
var_168 = r15
var_160.w = 1
var_15f:1.b = 0
int32_t var_15c_1 = 0xffffffff
*rsi_2 = var_168.o
void* var_e0 = arg3
void*** rax_33 = sub_14081d830(0x68, *(arg2 + 8), 1, 0)
void*** rdi_1 = rax_33

if (rax_33 == 0)
    rdi_1 = nullptr
else
    int64_t* rax_34
    int128_t zmm6_6
    rax_34, zmm6_6 = sub_1412ec240(&var_168, rsi_2)
    var_138 = *rax_34
    sub_141992bd0(rdi_1, &arg_8, &var_138, 1)
    *(rdi_1 + 0x38) = zmm8_1
    *rdi_1 = &data_142f5cc80
    *(rdi_1 + 0x48) = zmm6_6
    *(rdi_1 + 0x58) = arg3.o

sub_1419968d0(arg2, rdi_1)
*arg1 = zmm8_1
arg1[1].q = var_148.q
return arg1
