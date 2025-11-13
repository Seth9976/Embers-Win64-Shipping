// 函数: sub_141c40820
// 地址: 0x141c40820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6
float var_58[0x4] = zmm6
int64_t* r14 = &arg1[0x16]
int32_t rsi = 0
uint128_t zmm7
uint128_t var_68 = zmm7
int64_t rdi = sx.q(arg4)
r14[1].d = 0
int32_t* r15 = arg1

if (rdi.d s> *(r14 + 0xc))
    sub_140775b10(r14, rdi.d)

int32_t rax = r14[1].d + rdi.d
r14[1].d = rax

if (rax s> *(r14 + 0xc))
    sub_140775270(r14)

int64_t rcx_4 = rdi << 2
memcpy(*r14, sub_141c3bdb0(*(r15 + 0x78), rdi.d, 0), rcx_4.d)
int32_t* rax_2 = *(r15 + 0x80)
void* r12 = &r15[0x1a]
int64_t rbp = sx.q(r14[1].d)
int32_t rdx_4 = 0
*(r12 + 8) = 0

if (rbp.d s> *(r12 + 0xc))
    sub_140775b10(r12, rbp.d)
    rdx_4 = *(r12 + 8)

int32_t rax_3 = rdx_4 + rbp.d
*(r12 + 8) = rax_3

if (rax_3 s> *(r12 + 0xc))
    sub_140775270(r12)

if (rbp.d == arg3[1].d)
    int64_t rax_4 = *r12
    int64_t rcx_9 = *r14
    int64_t rax_5 = *arg3
    int32_t r13_1 = 0
    
    if (rbp.d s> 0)
        do
            int32_t rbx_1 = rax_2[1]
            int64_t rcx_10 = sx.q(r13_1)
            
            if (rbp.d s<= rbx_1)
                rbx_1 = rbp.d
            
            sub_141c40b80(rax_2, rcx_9 + (rcx_10 << 2), rax_5 + (rcx_10 << 2), rbx_1, 
                rax_4 + (rcx_10 << 2))
            r13_1 += rbx_1
            rbp = zx.q(rbp.d - rbx_1)
        while (rbp.d s> 0)
        
        r15 = arg1
        rdi = zx.q(arg4)
        r14 = &r15[0x16]
        r12 = &r15[0x1a]
else if (rbp.d s> 0)
    memset(*r12, 0, rbp << 2)

r15[0x14] = 0

if (rdi.d s> r15[0x15])
    sub_140775b10(&r15[0x12], rdi.d)

int32_t rax_7 = r15[0x14] + rdi.d
r15[0x14] = rax_7

if (rax_7 s> r15[0x15])
    sub_140775270(&r15[0x12])

int32_t rcx_14 = r15[4]
int32_t rax_8 = r15[6]
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(rcx_14))

if (rax_8 s< rcx_14)
    zmm6 = zx.o(rax_8)
    rax_8 += 1
    zmm6 = _mm_cvtepi32_ps(zmm6)
    r15[6] = rax_8
    zmm6.d = zmm6.d f* r15[2]
    zmm6.d = zmm6.d f/ zmm0.d
    zmm6.d = zmm6.d f+ *r15
    r15[1] = zmm6.d
else
    zmm6 = r15[1]

zmm7 = zmm6

if (rax_8 s< rcx_14)
    int32_t rax_10 = rax_8 - 1 + rdi.d
    
    if (rax_10 s<= rcx_14)
        rcx_14 = rax_10
    
    r15[6] = rcx_14
    zmm7.d = _mm_cvtepi32_ps(zx.o(rcx_14)).d f* r15[2]
    zmm7.d = zmm7.d f/ zmm0.d
    zmm7.d = zmm7.d f+ *r15
    r15[1] = zmm7.d

memcpy(*r14, *r12, rcx_4.d)
sub_141c37840(*r14, rdi.d, zmm6, zmm7.d)
float (* rcx_17)[0x4] = *r14

if (rdi.d s> 0)
    int128_t* r9_2 = arg2 - rcx_17
    float (* r8_6)[0x4] = *(r15 + 0x48) - rcx_17
    uint64_t i_2 = zx.q(((rdi - 1).d u>> 2) + 1)
    uint64_t i
    
    do
        *(r8_6 + rcx_17) = __addps_xmmps_memps(*(r9_2 + rcx_17), *rcx_17)
        rcx_17 = &rcx_17[1]
        i = i_2
        i_2 -= 1
    while (i != 1)

float zmm6_1[0x4] = sub_141c34ee0(*(r15 + 0x48), r15[0x14])
void* rdx_14 = *(r15 + 0x78)
int32_t temp0_4 = *(rdx_14 + 0x38)
*(rdx_14 + 0x38) -= rdi.d

if (temp0_4 - rdi.d s>= 0)
    int32_t rax_12 = *(rdx_14 + 0x40)
    int32_t rsi_3 = *(rdx_14 + 0x30) - rax_12 - rdi.d
    
    if (rsi_3 s<= 0)
        rsi = neg.d(rsi_3)
        *(rdx_14 + 0x20) = *(rdx_14 + 0x10) - (sx.q(rsi_3) << 2)
    else
        *(rdx_14 + 0x20) += rcx_4
        rsi = rax_12 + rdi.d
else
    int64_t rax_11 = *(rdx_14 + 0x10)
    *(rdx_14 + 0x38) = 0
    *(rdx_14 + 0x20) = rax_11

*(rdx_14 + 0x40) = rsi
sub_141c33790(*(r15 + 0x78), *(r15 + 0x48), rdi.d)
int64_t result =
    sub_141c37840(*(r15 + 0x48), rdi.d, zmm6_1 ^ data_142d3f780, (zmm7 ^ data_142d3f780).d)
float (* rcx_23)[0x4] = *(r15 + 0x48)

if (rdi.d s> 0)
    float (* r8_9)[0x4] = arg5 - rcx_23
    int128_t* r9_4 = *r12 - rcx_23
    uint64_t i_3 = zx.q(((rdi - 1).d u>> 2) + 1)
    uint64_t i_1
    
    do
        *(r8_9 + rcx_23) = __addps_xmmps_memps(*(r9_4 + rcx_23), *rcx_23)
        rcx_23 = &rcx_23[1]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

return result
