// 函数: sub_141304eb0
// 地址: 0x141304eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rbx = *(arg3 + 0x515a)
void* rax = *arg4
int32_t rcx = 1
uint128_t zmm1 = *(rax + 0x40)
uint128_t var_168 = *(rax + 0x30)
uint128_t var_158 = zmm1
uint128_t var_148 = *(rax + 0x50)
var_148:8.w = 1

if (rbx != 0)
    rcx = 0x10001

zmm1 = *arg4
uint128_t var_128 = *(rax + 0x70)
uint64_t var_1a8 = arg4[2]
int64_t var_138
var_138:4.d = rcx | ((*(rax + 0x60)).q:4.d & 0xfffeffff)
void* rcx_2 = zmm1.q
uint128_t temp0 = _mm_bsrli_si128(zmm1, 8)
uint128_t temp0_1 = _mm_bsrli_si128(zmm1, 8)
var_138:8.w = 0
int32_t var_1d8 = *(rcx_2 + 0x44)
int32_t var_1d4 = *(rcx_2 + 0x48)
int32_t rax_7 = var_1a8.d
int32_t var_1d0 = temp0_1.d
var_128:8.b = 1
char arg_8 = sub_14141f7a0(arg3)
void*** rax_11
int128_t zmm6_1
rax_11, zmm6_1 = sub_141188e50(arg2, &var_168, u"BloomSetup", 0)
int64_t* rdx_1 = *(arg2 + 8)
void*** rsi_1
uint128_t var_1b8
void* var_e8

if (rbx == 0)
    int64_t* rax_29 = sub_14081d830(0x130, rdx_1, 1, 0)
    int64_t* rdi_1 = rax_29
    
    if (rax_29 == 0)
        rdi_1 = nullptr
    else
        *rax_29 = 0
        __builtin_memset(&rax_29[0x10], 0, 0x18)
        sub_14117af20(&rax_29[0x14])
    
    memset(rdi_1, 0, 0x130)
    sub_141300250(rdi_1, sub_141312b00(&var_e8, arg3, &var_1d8, *arg4, arg4[3], arg4[4].d))
    sub_1405d1550(&var_e8)
    char var_1e0_1 = arg_8
    int16_t var_1df_1 = 0
    int32_t var_1dc_1 = 0xffffffff
    *(rdi_1 + 0xa0) = rax_11.o
    sub_1419a2ec0(*(arg3 + 0x5150), &var_1b8, &data_143eb3610, 0)
    uint128_t zmm6_4 = var_1b8
    sub_1419a2ec0(*(arg3 + 0x5150), &var_1b8, &data_143eb3710, 0)
    uint128_t zmm0_8 = zx.o(rax_7.q)
    uint128_t zmm1_2 = var_1d8.o
    uint128_t zmm2_1 = var_1b8
    int64_t* rdx_16 = *(arg2 + 8)
    var_148.q = data_14395da00
    var_148:8.q = data_14395d9e8
    int64_t rax_35 = data_1439c9210
    uint64_t var_d0_1 = zmm0_8.q
    uint64_t var_b8_1 = zmm0_8.q
    var_e8 = arg3
    char var_50_1 = 0
    uint64_t var_58_1 = rdi_1
    uint64_t var_80_1 = rax_35
    void*** rax_36
    char rcx_22
    rax_36, rcx_22 = sub_14081d830(0xd8, rdx_16, 1, 0)
    rsi_1 = rax_36
    
    if (rax_36 == 0)
        rsi_1 = nullptr
    else
        sub_1413166e0(rcx_22)
        var_1e0_1.q = &data_143eb65c0
        var_1b8 = rdi_1.o
        sub_141992bd0(rsi_1, &arg_8, &var_1b8, 1)
        *rsi_1 = &data_142f5cbc0
        *(rsi_1 + 0x38) = var_e8.o
        *(rsi_1 + 0x48) = zmm1_2
        *(rsi_1 + 0x58) = zmm1_2
        *(rsi_1 + 0x68) = var_b8_1.o
        *(rsi_1 + 0x78) = zmm6_4
        *(rsi_1 + 0x88) = zmm2_1
        *(rsi_1 + 0x98) = var_148
        *(rsi_1 + 0xa8) = zmm6_4
        *(rsi_1 + 0xb8) = zmm2_1
        *(rsi_1 + 0xc8) = var_58_1.o
else
    int64_t* rax_12 = sub_14081d830(0xb0, rdx_1, 1, 0)
    int64_t* rdi = rax_12
    
    if (rax_12 == 0)
        rdi = nullptr
    else
        *rax_12 = 0
        __builtin_memset(&rax_12[0x10], 0, 0x18)
        rax_12[0x14] = 0
    
    memset(rdi, 0, 0xb0)
    sub_141300250(rdi, sub_141312b00(&var_e8, arg3, &var_1d8, *arg4, arg4[3], arg4[4].d))
    sub_1405d1550(&var_e8)
    char var_1e0
    var_1e0.w = 0
    void*** rax_15
    int512_t zmm6_2
    rax_15, zmm6_2 = sub_14081d830(0x28, *(arg2 + 8), 1, 0)
    
    if (rax_15 == 0)
        rax_15 = nullptr
    else
        rax_15[1] = rax_11[1]
        *rax_15 = &data_142f285c0
        rax_15[2] = 0
        *(rax_15 + 0x18) = rax_11.o
    
    rdi[0x14] = rax_15
    int128_t var_118
    char rcx_11 = sub_1419a2ec0(*(arg3 + 0x5150), &var_118, &data_143eb3810, 0)
    zmm6_2.o = zx.o(0)
    int128_t zmm7_1 = var_118
    int32_t temp0_2
    int32_t temp1_1
    temp0_2:temp1_1 = sx.q(rax_7 - var_1d0 + 7)
    void*** var_1e8
    var_1e8.d = (temp1_1 + (temp0_2 & 7)) s>> 3
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q((var_1a8 u>> 0x20).d - (temp0.q u>> 0x20).d + 7)
    var_1e8:4.d = (temp3_1 + (temp2_1 & 7)) s>> 3
    var_1b8 = sub_141316570(rcx_11)
    sub_141998c50(zmm7_1.q, &data_143eb66a0, rdi)
    int64_t var_178
    var_178.d = 1
    void*** var_180_1 = var_1e8
    void*** rax_28
    char rcx_13
    rax_28, rcx_13 = sub_14081d830(0x60, *(arg2 + 8), 1, 0)
    rsi_1 = rax_28
    
    if (rax_28 == 0)
        rsi_1 = nullptr
    else
        sub_141316570(rcx_13)
        var_1e0.q = &data_143eb66d0
        var_1b8 = rdi.o
        sub_141992bd0(rsi_1, &arg_8, &var_1b8, 2)
        *rsi_1 = &data_142f5cbb0
        *(rsi_1 + 0x38) = rdi.o
        *(rsi_1 + 0x48) = zmm7_1
        rsi_1[0xb] = var_178
sub_1419968d0(arg2, rsi_1)
*arg1 = rax_11.o
arg1[1].q = zmm6_1:8.q
return arg1
