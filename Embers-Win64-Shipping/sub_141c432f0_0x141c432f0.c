// 函数: sub_141c432f0
// 地址: 0x141c432f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg2[1].d
int64_t result = sub_141c45700(arg5, rbx)

if (rbx != arg3[1].d || rbx != arg4[1].d)
    return result

int32_t rdi_1 = 0
*(arg1 + 0xb0) = 0

if (rbx s> *(arg1 + 0xb4))
    sub_140775b10(arg1 + 0xa8, rbx)

int32_t rax = *(arg1 + 0xb0) + rbx
*(arg1 + 0xb0) = rax

if (rax s> *(arg1 + 0xb4))
    sub_140775270(arg1 + 0xa8)

*(arg1 + 0xc0) = 0

if (rbx s> *(arg1 + 0xc4))
    sub_140775b10(arg1 + 0xb8, rbx)

int32_t rax_1 = *(arg1 + 0xc0) + rbx
*(arg1 + 0xc0) = rax_1

if (rax_1 s> *(arg1 + 0xc4))
    sub_140775270(arg1 + 0xb8)

*(arg1 + 0xd0) = 0

if (rbx s> *(arg1 + 0xd4))
    sub_140775b10(arg1 + 0xc8, rbx)

int32_t rax_2 = *(arg1 + 0xd0) + rbx
*(arg1 + 0xd0) = rax_2

if (rax_2 s> *(arg1 + 0xd4))
    sub_140775270(arg1 + 0xc8)

int32_t rax_3 = *(arg1 + 0xb4)
int128_t zmm6
zmm6.d = 1f f- *(arg1 + 0xc)
*(arg1 + 0xb0) = 0

if (rax_3 s< 0 && rax_3 != 0)
    sub_140775b10(arg1 + 0xa8, 0)
    rdi_1 = *(arg1 + 0xb0)

int32_t rcx_9 = arg3[1].d + rdi_1
*(arg1 + 0xb0) = rcx_9

if (rcx_9 s> *(arg1 + 0xb4))
    sub_140775270(arg1 + 0xa8)

int32_t rax_4 = arg3[1].d
uint64_t r8 = *(arg1 + 0xa8)
float (* rcx_11)[0x4] = *arg3
int64_t r9_1 = *arg2
int64_t* arg_10
arg_10.d = zmm6.d
float zmm1[0x4] = arg_10.d
float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)

if (rax_4 s> 0)
    float (* r8_1)[0x4] = r8 - rcx_11
    float (* r9_2)[0x4] = r9_1 - rcx_11
    uint64_t i_3 = zx.q(((rax_4 - 1) u>> 2) + 1)
    uint64_t i
    
    do
        *(r8_1 + rcx_11) = __addps_xmmps_memps(_mm_mul_ps(*rcx_11, temp0_1), *(r9_2 + rcx_11))
        rcx_11 = &rcx_11[1]
        i = i_3
        i_3 -= 1
    while (i != 1)

float zmm7_1[0x4] = sub_141c3f3d0(*(arg1 + 0x48), arg1 + 0xa8, arg4, arg1 + 0xb8)
sub_141c3fc30(*(arg1 + 0x50), arg1 + 0xb8, arg5)
sub_141c3fc30(*(arg1 + 0x58), arg5, &arg5[2])
sub_141c3fc30(*(arg1 + 0x60), &arg5[2], &arg5[4])
sub_141c3fc30(*(arg1 + 0x68), &arg5[4], arg1 + 0xa8)
int32_t rax_5 = *(arg1 + 0xb0)
uint64_t rcx_17 = *(arg1 + 0xa8)
zmm7_1[0] = zmm7_1[0] f- *(arg1 + 8)
arg_10.d = zmm7_1[0]
float zmm1_1[0x4] = arg_10.d
float temp0_4[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0)

if (rax_5 s> 0)
    uint64_t i_4 = zx.q(((rax_5 - 1) u>> 2) + 1)
    uint64_t i_1
    
    do
        float zmm0_2[0x4] = *rcx_17
        rcx_17 += 0x10
        *(rcx_17 - 0x10) = _mm_mul_ps(zmm0_2, temp0_4)
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)

sub_141c3f1e0(*(arg1 + 0x70), arg1 + 0xa8, arg1 + 0xb8)
zmm7_1[0] = zmm7_1[0] f- *(arg1 + 0xc)
int32_t rax_6 = *(arg1 + 0xc0)
void* rcx_19 = *(arg1 + 0xb8)
arg_10.d = zmm7_1[0]
float zmm1_2[0x4] = arg_10.d
float temp0_6[0x4] = _mm_shuffle_ps(zmm1_2, zmm1_2, 0)

if (rax_6 s> 0)
    uint64_t i_5 = zx.q(((rax_6 - 1) u>> 2) + 1)
    uint64_t i_2
    
    do
        float zmm0_3[0x4] = *rcx_19
        rcx_19 += 0x10
        *(rcx_19 - 0x10) = _mm_mul_ps(zmm0_3, temp0_6)
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)

sub_141c3fe90(*(arg1 + 0x78), arg1 + 0xb8, arg1 + 0xa8, arg1 + 0xc8)
sub_141c3fc30(*(arg1 + 0x80), arg1 + 0xc8, &arg5[6])
sub_141c3fc30(*(arg1 + 0x88), &arg5[6], &arg5[8])
sub_141c3fc30(*(arg1 + 0x90), arg1 + 0xa8, &arg5[0xa])
sub_141c3fc30(*(arg1 + 0x98), &arg5[0xa], &arg5[0xc])
return sub_141c3fc30(*(arg1 + 0xa0), &arg5[0xc], &arg5[0xe])
