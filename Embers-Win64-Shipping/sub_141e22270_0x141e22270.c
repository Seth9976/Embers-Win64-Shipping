// 函数: sub_141e22270
// 地址: 0x141e22270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0x26]
int32_t r9

if (rcx == 0)
    r9 = 0
else
    r9 = (*(*rcx + 0x18))(rcx)

int32_t rdx = 0
void* rcx_1 = arg1[0x13]
void* r8_1 = sx.q(arg1[0x14].d) * 0x98 + rcx_1

while (rcx_1 != r8_1)
    int32_t rax_6 = *(rcx_1 + 0x90) * 0x1c
    rcx_1 += 0x98
    rdx = rdx + 0x98 + rax_6

uint128_t zmm1
zmm1.d = _mm_cvtepi32_ps(zx.o(arg1[0x25].d + r9)).d
    f/ _mm_cvtepi32_ps(zx.o(rdx + arg1[0x19].d * arg1[0x15].d * 0x28)).d
int64_t var_58
sub_140a2e390(&var_58, u"%.03f", _mm_cvtps_pd(zmm1.q))
void arg_8
int64_t* rax_9 = sub_140b58260(&arg_8, u"Compression Ratio", 1)
int64_t r14 = var_58
uint64_t var_40 = 0
int64_t rbx = *rax_9
int32_t var_50
int32_t var_34
int32_t r13
uint64_t r15

if (var_50 != 0)
    sub_1405a4c70(&var_40, var_50, 0)
    r15 = var_40
    memcpy(r15, r14, var_50 * 2)
    r13 = var_34
else
    r13 = 0
    r15 = 0

int64_t r14_1 = sx.q(arg2[1].d)
int32_t rax_10 = (r14_1 + 1).d
arg2[1].d = rax_10

if (rax_10 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int64_t* rax_13 = (r14_1 << 5) + *arg2
*rax_13 = rbx
rax_13[1] = r15
rax_13[2].d = var_50
uint64_t r12_1 = 0
*(rax_13 + 0x14) = r13
rax_13[3] = 2
int64_t rcx_7 = var_58

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t* rcx_8 = arg1[0x26]
int32_t rcx_9

if (rcx_8 == 0)
    rcx_9 = 0
else
    rcx_9 = (*(*rcx_8 + 0x18))(rcx_8)

uint128_t zmm0_1
zmm0_1.d = _mm_cvtepi32_ps(zx.o(arg1[0x25].d + rcx_9)).d f* 0.0009765625f
sub_140a2e390(&var_58, u"%.02f", _mm_cvtps_pd(zmm0_1.q))
int64_t* rax_18 = sub_140b58260(&arg_8, u"Compressed Size (KB)", 1)
int64_t r14_2 = var_58
var_40 = 0
int64_t rbx_1 = *rax_18
int32_t r13_1

if (var_50 != 0)
    sub_1405a4c70(&var_40, var_50, 0)
    r12_1 = var_40
    memcpy(r12_1, r14_2, var_50 * 2)
    r13_1 = var_34
else
    r13_1 = 0

int64_t r14_3 = sx.q(arg2[1].d)
int32_t rax_19 = (r14_3 + 1).d
arg2[1].d = rax_19

if (rax_19 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int64_t* rax_22 = (r14_3 << 5) + *arg2
*rax_22 = rbx_1
rax_22[1] = r12_1
uint64_t r12_2 = 0
rax_22[2].d = var_50
*(rax_22 + 0x14) = r13_1
rax_22[3] = 2
int64_t rcx_15 = var_58

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

int32_t zmm1_1 = arg1[0x12].d

if (not(zmm1_1 f> zx.o(0).d))
    zmm1_1 = 0x3f800000

int32_t rcx_17 = arg1[0x15].d - 1
int32_t rax_23 = 1

if (rcx_17 s>= 1)
    rax_23 = rcx_17

uint128_t zmm0_2
zmm0_2.d = _mm_cvtepi32_ps(zx.o(rax_23)).d f/ zmm1_1
sub_140a2e390(&var_58, u"%.2f", _mm_cvtps_pd(zmm0_2.q))
int64_t* rax_24 = sub_140b58260(&arg_8, u"FrameRate", 1)
int64_t r14_4 = var_58
var_40 = 0
int64_t rbx_2 = *rax_24
int32_t r13_2

if (var_50 != 0)
    sub_1405a4c70(&var_40, var_50, 0)
    r12_2 = var_40
    memcpy(r12_2, r14_4, var_50 * 2)
    r13_2 = var_34
else
    r13_2 = 0

int64_t r14_5 = sx.q(arg2[1].d)
int32_t rax_25 = (r14_5 + 1).d
arg2[1].d = rax_25

if (rax_25 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int64_t* rax_28 = (r14_5 << 5) + *arg2
*rax_28 = rbx_2
rax_28[1] = r12_2
rax_28[2].d = var_50
*(rax_28 + 0x14) = r13_2
rax_28[3] = 2
int64_t rcx_23 = var_58

if (rcx_23 != 0)
    sub_140a74f90(rcx_23)

return sub_140cdbf60(arg1, arg2) __tailcall
