// 函数: sub_141c41eb0
// 地址: 0x141c41eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg3)
int32_t rbx = 0
void* rbp = arg2
*(arg1 + 0x210) = 0

if (rdi.d s> *(arg1 + 0x214))
    sub_140775b10(arg1 + 0x208, rdi.d)

*(arg1 + 0x220) = 0

if (rdi.d s> *(arg1 + 0x224))
    sub_140775b10(arg1 + 0x218, rdi.d)

*(arg1 + 0x1f0) = 0

if (rdi.d s> *(arg1 + 0x1f4))
    sub_140775b10(arg1 + 0x1e8, rdi.d)

*(arg1 + 0x200) = 0

if (rdi.d s> *(arg1 + 0x204))
    sub_140775b10(arg1 + 0x1f8, rdi.d)

int32_t rax = *(arg1 + 0x210) + rdi.d
*(arg1 + 0x210) = rax

if (rax s> *(arg1 + 0x214))
    sub_140775270(arg1 + 0x208)

int32_t rax_1 = *(arg1 + 0x220) + rdi.d
*(arg1 + 0x220) = rax_1

if (rax_1 s> *(arg1 + 0x224))
    sub_140775270(arg1 + 0x218)

int32_t rax_2 = *(arg1 + 0x1f0) + rdi.d
*(arg1 + 0x1f0) = rax_2

if (rax_2 s> *(arg1 + 0x1f4))
    sub_140775270(arg1 + 0x1e8)

int32_t rax_3 = *(arg1 + 0x200) + rdi.d
*(arg1 + 0x200) = rax_3

if (rax_3 s> *(arg1 + 0x204))
    sub_140775270(arg1 + 0x1f8)

float zmm2[0x4]

if (arg4 != 1)
    if (arg4 != 2)
        uint64_t count = rdi << 2
        memset(arg5, 0, count)
        return memset(arg6, 0, count)
    
    uint64_t rdx_9 = *(arg1 + 0x208)
    int32_t rax_4 = (rdi * 2).d
    
    if (rax_4 s> 0)
        uint64_t i_14 = zx.q(((rax_4 - 1) u>> 3) + 1)
        uint64_t i
        
        do
            zmm2 = *rbp
            int64_t rax_5 = sx.q(rbx)
            float temp0_1[0x4] = __shufps_xmmps_memps_immb(zmm2, *(rbp + 0x10), 0xdd)
            rbx += 4
            float temp0_2[0x4] = __shufps_xmmps_memps_immb(zmm2, *(rbp + 0x10), 0x88)
            rbp += 0x20
            *(rdx_9 + (rax_5 << 2)) = _mm_add_ps(temp0_1, temp0_2)
            i = i_14
            i_14 -= 1
        while (i != 1)
else
    memcpy(*(arg1 + 0x208), rbp, (rdi << 2).d)

float zmm1[0x4] = *(arg1 + 0x20)
zmm1[0] = zmm1[0] f* *(arg1 + 4)
int32_t rax_6 = *(arg1 + 0x210)
void* rcx_12 = *(arg1 + 0x208)
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(arg4))
zmm1[0] = zmm1[0] f/ zmm0.d
zmm2 = zmm1[0]
float temp0_5[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)

if (rax_6 s> 0)
    uint64_t i_17 = zx.q(((rax_6 - 1) u>> 2) + 1)
    uint64_t i_1
    
    do
        zmm0 = *rcx_12
        rcx_12 += 0x10
        *(rcx_12 - 0x10) = _mm_mul_ps(zmm0, temp0_5)
        i_1 = i_17
        i_17 -= 1
    while (i_1 != 1)

sub_141c3fc30(*(arg1 + 0x38), arg1 + 0x208, arg1 + 0x218)
sub_141c3f1e0(*(arg1 + 0x40), arg1 + 0x218, arg1 + 0x208)
sub_141c40010(*(arg1 + 0x48), arg1 + 0x208, arg1 + 0x218)
sub_141c40010(*(arg1 + 0x50), arg1 + 0x218, arg1 + 0x208)
sub_141c40010(*(arg1 + 0x58), arg1 + 0x208, arg1 + 0x218)
sub_141c40010(*(arg1 + 0x60), arg1 + 0x218, arg1 + 0x208)
sub_141c3e500(*(arg1 + 0xc8), rdi.d, arg1 + 0x218)
sub_141c3e500(*(arg1 + 0xd0), rdi.d, arg1 + 0x228)
sub_141c39680(arg1, rdi.d, arg1 + 0x1e8, arg1 + 0x1f8)
sub_141c432f0(*(arg1 + 0xc8), arg1 + 0x208, arg1 + 0x228, arg1 + 0x1e8, arg1 + 0xd8)
sub_141c432f0(*(arg1 + 0xd0), arg1 + 0x208, arg1 + 0x218, arg1 + 0x1f8, arg1 + 0x158)
float (* rbx_2)[0x4] = arg5
int32_t count_1 = (rdi << 2).d
memcpy(rbx_2, *(arg1 + 0x158), count_1)

if (rdi.d s> 0)
    int128_t* r8_15 = *(arg1 + 0x178) - rbx_2
    float (* rcx_25)[0x4] = rbx_2
    uint64_t i_18 = zx.q(((rdi - 1).d u>> 2) + 1)
    uint64_t i_2
    
    do
        *rcx_25 = __addps_xmmps_memps(*(r8_15 + rcx_25), *rcx_25)
        rcx_25 = &rcx_25[1]
        i_2 = i_18
        i_18 -= 1
    while (i_2 != 1)

if (rdi.d s> 0)
    void* r8_17 = *(arg1 + 0x198) - rbx_2
    float (* rcx_26)[0x4] = rbx_2
    uint64_t i_19 = zx.q(((rdi - 1).d u>> 2) + 1)
    uint64_t i_3
    
    do
        *rcx_26 = __subps_xmmps_memps(*rcx_26, *(r8_17 + rcx_26))
        rcx_26 = &rcx_26[1]
        i_3 = i_19
        i_19 -= 1
    while (i_3 != 1)

if (rdi.d s> 0)
    void* r8_19 = *(arg1 + 0x1b8) - rbx_2
    float (* rcx_27)[0x4] = rbx_2
    uint64_t i_20 = zx.q(((rdi - 1).d u>> 2) + 1)
    uint64_t i_4
    
    do
        *rcx_27 = __addps_xmmps_memps(*(r8_19 + rcx_27), *rcx_27)
        rcx_27 = &rcx_27[1]
        i_4 = i_20
        i_20 -= 1
    while (i_4 != 1)

if (rdi.d s> 0)
    void* r8_21 = *(arg1 + 0xe8) - rbx_2
    float (* rcx_28)[0x4] = rbx_2
    uint64_t i_21 = zx.q(((rdi - 1).d u>> 2) + 1)
    uint64_t i_5
    
    do
        *rcx_28 = __subps_xmmps_memps(*rcx_28, *(r8_21 + rcx_28))
        rcx_28 = &rcx_28[1]
        i_5 = i_21
        i_21 -= 1
    while (i_5 != 1)

if (rdi.d s> 0)
    void* r8_23 = *(arg1 + 0x108) - rbx_2
    float (* rcx_29)[0x4] = rbx_2
    uint64_t i_22 = zx.q(((rdi - 1).d u>> 2) + 1)
    uint64_t i_6
    
    do
        *rcx_29 = __subps_xmmps_memps(*rcx_29, *(r8_23 + rcx_29))
        rcx_29 = &rcx_29[1]
        i_6 = i_22
        i_22 -= 1
    while (i_6 != 1)

if (rdi.d s> 0)
    float (* r9_4)[0x4] = *(arg1 + 0x128) - rbx_2
    uint64_t i_15 = zx.q(((rdi - 1).d u>> 2) + 1)
    uint64_t i_7
    
    do
        *rbx_2 = __subps_xmmps_memps(*rbx_2, *(r9_4 + rbx_2))
        rbx_2 = &rbx_2[1]
        i_7 = i_15
        i_15 -= 1
    while (i_7 != 1)

float (* rbx_3)[0x4] = arg6
int64_t result = memcpy(rbx_3, *(arg1 + 0xd8), count_1)

if (rdi.d s> 0)
    int128_t* r8_26 = *(arg1 + 0xf8) - rbx_3
    float (* rcx_33)[0x4] = rbx_3
    uint64_t i_23 = zx.q(((rdi - 1).d u>> 2) + 1)
    uint64_t i_8
    
    do
        *rcx_33 = __addps_xmmps_memps(*(r8_26 + rcx_33), *rcx_33)
        rcx_33 = &rcx_33[1]
        i_8 = i_23
        i_23 -= 1
    while (i_8 != 1)

if (rdi.d s> 0)
    void* r8_28 = *(arg1 + 0x118) - rbx_3
    float (* rcx_34)[0x4] = rbx_3
    uint64_t i_24 = zx.q(((rdi - 1).d u>> 2) + 1)
    uint64_t i_9
    
    do
        *rcx_34 = __subps_xmmps_memps(*rcx_34, *(r8_28 + rcx_34))
        rcx_34 = &rcx_34[1]
        i_9 = i_24
        i_24 -= 1
    while (i_9 != 1)

if (rdi.d s> 0)
    void* r8_30 = *(arg1 + 0x138) - rbx_3
    float (* rcx_35)[0x4] = rbx_3
    uint64_t i_25 = zx.q(((rdi - 1).d u>> 2) + 1)
    uint64_t i_10
    
    do
        *rcx_35 = __addps_xmmps_memps(*(r8_30 + rcx_35), *rcx_35)
        rcx_35 = &rcx_35[1]
        i_10 = i_25
        i_25 -= 1
    while (i_10 != 1)

if (rdi.d s> 0)
    void* r8_32 = *(arg1 + 0x168) - rbx_3
    float (* rcx_36)[0x4] = rbx_3
    uint64_t i_26 = zx.q(((rdi - 1).d u>> 2) + 1)
    uint64_t i_11
    
    do
        *rcx_36 = __subps_xmmps_memps(*rcx_36, *(r8_32 + rcx_36))
        rcx_36 = &rcx_36[1]
        i_11 = i_26
        i_26 -= 1
    while (i_11 != 1)

if (rdi.d s> 0)
    void* r8_34 = *(arg1 + 0x188) - rbx_3
    float (* rcx_37)[0x4] = rbx_3
    uint64_t i_27 = zx.q(((rdi - 1).d u>> 2) + 1)
    uint64_t i_12
    
    do
        *rcx_37 = __subps_xmmps_memps(*rcx_37, *(r8_34 + rcx_37))
        rcx_37 = &rcx_37[1]
        i_12 = i_27
        i_27 -= 1
    while (i_12 != 1)

if (rdi.d s> 0)
    float (* rdx_46)[0x4] = *(arg1 + 0x1a8) - rbx_3
    uint64_t i_16 = zx.q(((rdi - 1).d u>> 2) + 1)
    uint64_t i_13
    
    do
        *rbx_3 = __subps_xmmps_memps(*rbx_3, *(rdx_46 + rbx_3))
        rbx_3 = &rbx_3[1]
        i_13 = i_16
        i_16 -= 1
    while (i_13 != 1)

return result
