// 函数: sub_141302eb0
// 地址: 0x141302eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int32_t* rcx = arg1[1]
void* r10 = **arg1
uint128_t zmm2 = *(r10 + 0x30)
uint128_t zmm3 = *(r10 + 0x70)
uint128_t var_138 = *(r10 + 0x40)
uint128_t zmm0 = *(r10 + 0x60)
var_138:4.d = *rcx
uint128_t var_118 = zmm0
var_138:8.d = rcx[1]
int128_t var_128 = *(r10 + 0x50)
int32_t rax_3 = _mm_bsrli_si128(zmm0, 4).d
var_128:6.w = 1
int32_t rcx_1 = *arg2
int32_t rax_4 = rax_3 | 0x10000
uint128_t var_148 = zmm2
uint128_t var_108 = zmm3
var_128:0xc.d = 0xa
var_118:4.d = rax_4
wchar16 const* const rbx

if (rcx_1 == 0)
    rbx = u"DOFGatherForeground"
else if (rcx_1 == 1)
    rbx = u"DOFGatherForegroundFill"
else if (rcx_1 != 2)
    rbx = u"DOFGatherFocus"
    
    if (rcx_1 != 4)
        rbx = nullptr
else
    rbx = u"DOFGatherBackground"

uint128_t var_d8 = var_138
uint128_t var_b8 = var_118
uint128_t var_e8 = zmm2
int128_t var_c8 = var_128
uint128_t var_a8 = zmm3

if (arg2[4].b != 0 && arg2[2] == 0)
    var_b8:4.d = rax_4 | 1

*arg4 = sub_141188e50(arg1[2], &var_e8, rbx, 0)

if (*arg1[3] != 0)
    var_128:0xc.d = 0x15
    arg4[1] = sub_141188e50(arg1[2], &var_148, rbx, 0)

int32_t r9 = arg2[1]

if (r9 == 2)
    wchar16 const* const r8_2 = u"DOFScatterOcclusionBackground"
    
    if (*arg2 != r9)
        r8_2 = nullptr
    
    var_128:0xc.d = 0xf
    *arg5 = sub_141188e50(arg1[2], &var_148, r8_2, 0)
    r9 = arg2[1]

int32_t* rcx_5 = arg1[4]
int32_t r8_3 = *arg2
int32_t var_178 = r8_3
int32_t var_16c = r9
int32_t rdi = *rcx_5
int32_t temp0_1
int32_t temp1
temp0_1:temp1 = sx.q(rcx_5[1] + 7)
int64_t rbx_2 = *(**arg1 + 0x44)
int32_t var_174 = *arg1[5]
int32_t var_170 = arg2[3]
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rdi + 7)
int32_t rax_18

if (((temp3 + (temp2 & 7)) & 0xfffffff8) != rbx_2.d
        || (((temp0_1 & 7) + temp1) & 0xfffffff8) != (rbx_2 u>> 0x20).d)
    rax_18.b = 1
else
    rax_18.b = 0

uint128_t zmm0_1 = var_178.o
char var_168 = rax_18.b
char* rax_19 = arg1[6]
var_148 = zmm0_1
int32_t r15 = _mm_bsrli_si128(zmm0_1, 8).d
zmm0_1 = zx.o(data_1439b6750)
char var_167 = *rax_19
var_138.d = var_168.d

if (r15 == 1)
    r15 = 2

int32_t rax_21 = var_148:4.d

if (var_148.d == 4)
    rax_21 = 3

uint64_t var_f8 = zmm0_1.q
uint64_t arg_20 = zmm0_1.q
uint128_t zmm1_1
zmm1_1.d = _mm_cvtepi32_ps(zx.o(rdi)).d f/ _mm_cvtepi32_ps(zx.o(*arg1[7])).d
uint128_t zmm4
zmm4.d = zmm1_1.d f+ zmm1_1.d
uint128_t zmm7
uint128_t zmm9
uint128_t zmm10
uint128_t zmm6

if (r8_3 == 0)
    zmm3.d = zmm4.d f- 1f
    zmm0_1 = zmm4 ^ 0x80000000
    zmm4.d = zmm4.d f- zmm3.d
    zmm1_1 = zmm3 ^ 0x80000000
    zmm0_1.d = zmm0_1.d f- zmm1_1.d
    zmm10.d = 1f f/ zmm4.d
    zmm9.d = 1f f/ zmm0_1.d
    zmm7.d = zmm10.d f* zmm3.d
    zmm6.d = zmm9.d f* zmm1_1.d
    zmm7 ^= 0x80000000
else if (r8_3 == 1)
    zmm0_1.d = zmm4.d f+ 1f
    zmm0_1.d = zmm0_1.d f- zmm4.d
    zmm9.d = 1f f/ zmm0_1.d
    zmm6.d = zmm9.d f* zmm4.d
    data_142d3f780
    zmm7 = arg_20:4.d
    zmm10 = arg_20.d
else if (r8_3 != 2)
    zmm9 = zmm0_1.q.d
    
    if (r8_3 != 4)
        zmm7 = arg_20:4.d
        zmm10 = arg_20.d
    else
        zmm1_1.d = zmm1_1.d f+ zmm4.d
        zmm4.d = zmm4.d f- zmm1_1.d
        zmm10.d = 1f f/ zmm4.d
        zmm7.d = zmm10.d f* zmm1_1.d
        zmm7 ^= data_142d3f780
else
    zmm1_1.d = 1f f- zmm4.d
    zmm0_1 = _mm_unpacklo_ps(0x3f800000, zmm1_1.q)
    uint128_t temp0_6 = _mm_unpacklo_ps(0x3f800000, zmm1_1.q)
    zmm3 = zmm0_1
    zmm0_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
    _mm_shuffle_ps(temp0_6, temp0_6, 0x55)
    zmm7 = zmm0_1
    zmm9 = temp0_6.q.d
    zmm10 = zmm3.q.d
uint128_t* rax_23
uint128_t zmm6_1
rax_23, zmm6_1 = sub_14081d830(0xe0, *(arg1[2] + 8), 1, 0)
uint128_t* rdi_1 = rax_23

if (rax_23 == 0)
    rdi_1 = nullptr
else
    *(rdi_1 + 0xc) = 0x3f800000
    *rdi_1 = 0
    *(rdi_1 + 8) = 0
    *(rdi_1 + 0x14) = 0
    *(rdi_1 + 0x1c) = 0
    rdi_1[6].q = 0
    __builtin_memset(&rdi_1[9], 0, 0x28)
    __builtin_memset(&rdi_1[0xc], 0, 0x18)
    rdi_1[7].q = 0
    *(rdi_1 + 0x78) = 0
    *(rdi_1 + 0x7c) = 0x3f800000

memset(rdi_1, 0, 0xe0)
int32_t* rax_24 = arg1[7]
zmm3 = zx.o(*rax_24)
uint128_t zmm0_2 = _mm_cvtepi32_ps(zx.o(rax_24[1]))
zmm3 = _mm_cvtepi32_ps(zmm3)
zmm2.d = 1f f/ zmm0_2.d
uint128_t zmm1_2
zmm1_2.d = 1f f/ zmm3.d
_mm_shuffle_ps(zmm3, zmm3, 0xe1)
zmm3.d = zmm0_2.d
_mm_shuffle_ps(zmm3, zmm3, 0xc6)
zmm3.d = zmm1_2.d
_mm_shuffle_ps(zmm3, zmm3, 0x27)
zmm3.d = zmm2.d
zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x39)
*rdi_1 = zmm3
int32_t* rax_25 = arg1[7]
var_178.o = zmm3
int32_t rdx_9 = rax_25[1]
int32_t rcx_10 = *rax_25
*(rdi_1 + 0x14) = 0
*(rdi_1 + 0x18) = rcx_10
*(rdi_1 + 0x1c) = rdx_9
rdi_1[2].q = *(arg1[8] + 0x4974)
int32_t* rdx_10 = arg1[7]
int32_t* rcx_11 = arg1[4]
zmm2 = zx.o(rcx_11[1])
int32_t rax_28 = rdx_10[1] * rbx_2:4.d
zmm1_2 = _mm_cvtepi32_ps(zx.o(*rcx_11))
zmm2 = _mm_cvtepi32_ps(zmm2)
int32_t rax_29 = *rdx_10
zmm0_2 = _mm_cvtepi32_ps(zx.o(rax_28))
*(rdi_1 + 0x34) = zmm6_1.d
zmm2.d = zmm2.d f/ zmm0_2.d
rdi_1[3].d = zmm9.d
*(rdi_1 + 0x2c) = zmm2.d
rdi_1[4].d = zmm10.d
*(rdi_1 + 0x44) = zmm7.d
zmm1_2.d = zmm1_2.d f/ _mm_cvtepi32_ps(zx.o(rax_29 * rbx_2.d)).d
*(rdi_1 + 0x28) = zmm1_2.d
*(rdi_1 + 0x3c) = var_f8:4.d.d
*(rdi_1 + 0x38) = var_f8.d.d
int32_t* rcx_12 = arg1[7]
int32_t* rdx_11 = arg1[4]
int32_t rax_32 = rcx_12[1] * rbx_2:4.d
zmm0_2 = _mm_cvtepi32_ps(zx.o(rdx_11[1]))
int32_t rax_34 = *rcx_12 * rbx_2.d
zmm2.d = _mm_cvtepi32_ps(zx.o(rax_32)).d f/ zmm0_2.d
zmm0_2 = _mm_cvtepi32_ps(zx.o(*rdx_11))
*(rdi_1 + 0x4c) = zmm2.d
zmm1_2.d = _mm_cvtepi32_ps(zx.o(rax_34)).d f/ zmm0_2.d
*(rdi_1 + 0x48) = zmm1_2.d
zmm6_1.d = _mm_cvtepi32_ps(zx.o(*arg1[4])).d f/ _mm_cvtepi32_ps(zx.o(*arg1[7])).d
TEB* gsbase

if (data_143cda914 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cda914)
    
    if (data_143cda914 == 0xffffffff)
        data_143cda910 = 0x3fb8aa3b
        _Init_thread_footer(&data_143cda914)

uint128_t zmm0_3
zmm0_3.d = logf(zmm6_1.d).d f* data_143cda910
rdi_1[5].d = zmm0_3.d
int32_t* rax_40 = arg1[7]
zmm1_2.d = _mm_cvtepi32_ps(zx.o(*arg1[4])).d f* 3f
zmm1_2.d = zmm1_2.d f/ _mm_cvtepi32_ps(zx.o(*rax_40)).d
*(rdi_1 + 0x54) = zmm1_2.d
sub_1405d16e0(&rdi_1[6], *arg1[9])
uint128_t zmm0_4 = _mm_cvtepi32_ps(zx.o(rbx_2:4.d))
zmm2 = _mm_cvtepi32_ps(zx.o(rbx_2.d))
int128_t zmm8
zmm8.d = 1f f/ zmm0_4.d
uint128_t zmm1_3
zmm1_3.d = 1f f/ zmm2.d
_mm_shuffle_ps(zmm2, zmm2, 0xe1)
zmm2.d = zmm0_4.d
_mm_shuffle_ps(zmm2, zmm2, 0xc6)
zmm2.d = zmm1_3.d
_mm_shuffle_ps(zmm2, zmm2, 0x27)
zmm2.d = zmm8.d
zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0x39)
rdi_1[7] = zmm2
int32_t* rax_41 = arg1[4]
var_178.o = zmm2
zmm1_3 = zx.o(rax_41[1])
zmm0_4 = _mm_cvtepi32_ps(zx.o(*rax_41))
zmm1_3 = _mm_cvtepi32_ps(zmm1_3)
rdi_1[8].d = zmm0_4.d
*(rdi_1 + 0x84) = zmm1_3.d
rdi_1[9] = **arg1
rdi_1[0xb].q = arg_18
rdi_1[0xa] = *arg1[0xa]
int64_t* rax_45
int512_t zmm6_2
rax_45, zmm6_2 = sub_1413113d0(&var_178, arg1[2], arg4)
rdi_1[0xc] = *rax_45

if (arg2[1] == 2)
    void*** rbx_3 = *arg5
    var_178.q = rbx_3
    var_170.w = 0
    void*** rax_46
    rax_46, zmm6_2 = sub_14081d830(0x28, *(arg1[2] + 8), 1, 0)
    
    if (rax_46 != 0)
        int128_t zmm0_6 = var_178.o
        rax_46[1] = rbx_3[1]
        *rax_46 = &data_142f285c0
        rax_46[2] = 0
        *(rax_46 + 0x18) = zmm0_6
    
    rdi_1[0xd].q = rax_46

int32_t rcx_18 = 4

if (var_138:1.b != 0)
    rcx_18 = 0xc

uint64_t rcx_19 = zx.q(rcx_18 + var_148:0xc.d)
uint64_t rcx_20 = zx.q(rcx_19.d + r15 + (rcx_19 << 1).d)
uint64_t r9_2 = zx.q(rax_21 + (rcx_20 << 1).d + rcx_20.d - 3)
sub_1419a2ec0(*(arg1[8] + 0x5150), &var_178, &data_143eb2ed0, r9_2.d + var_148.d + (r9_2 << 2).d)
int32_t* rcx_24 = arg1[7]
zmm6_2.o = zx.o(0)
zmm7 = var_178.o
void* rsi_1 = arg1[2]
int32_t temp4
int32_t temp5
temp4:temp5 = sx.q(*rcx_24 + 7)
int64_t var_158
var_158.d = (temp5 + (temp4 & 7)) s>> 3
int32_t temp6
int32_t temp7
temp6:temp7 = sx.q(rcx_24[1] + 7)
var_158:4.d = (temp7 + (temp6 & 7)) s>> 3
var_f8.o = sub_1413170f0(rcx_24.b)
sub_141998c50(zmm7.q, &data_143eb5b90, rdi_1)
int64_t* rdx_22 = *(rsi_1 + 8)
var_148.q = rdi_1
var_148 = zmm7
var_128.d = 1
var_138:8.q = var_158
void*** rax_61
char rcx_26
rax_61, rcx_26 = sub_14081d830(0x60, rdx_22, 1, 0)
void*** rbx_4 = rax_61

if (rax_61 == 0)
    rbx_4 = nullptr
else
    var_178.q = rdi_1
    sub_1413170f0(rcx_26)
    var_170.q = &data_143eb5bc0
    var_178.o = var_178.o
    sub_141992bd0(rbx_4, &arg_18, &var_178, 2)
    uint128_t zmm0_9 = var_148
    *rbx_4 = &data_142f5cb70
    *(rbx_4 + 0x38) = zmm0_9
    *(rbx_4 + 0x48) = var_138
    rbx_4[0xb] = var_128.q

return sub_1419968d0(rsi_1, rbx_4)
