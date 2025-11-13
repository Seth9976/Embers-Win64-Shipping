// 函数: sub_1422af3d0
// 地址: 0x1422af3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = (*(*arg1 + 0x150))()
float temp0[0x4] = __minss_xmmss_memss(arg2[0], 0x3f8ccccd)
int32_t rsi = 0
uint128_t zmm7 = *(rax_1 + 0x528)
uint128_t zmm0
zmm0.d = zmm7.d f- arg1[0x5f].d
temp0[0] = temp0[0] * 1000f

if (zmm0.d f< 1f)
    uint64_t r8_1 = zx.q(*(arg1 + 0x229))
    
    if ((*(arg1 + (r8_1 << 2) + 0x28a) & 7) u< 7)
        int16_t rdx_2 = *(arg1 + (r8_1 << 2) + 0x288)
        temp0[0] = temp0[0] + temp0[0]
        temp0[0] = temp0[0] - 0.5f
        *(arg1 + (r8_1 << 2) + 0x288) =
            ((((int.d(temp0[0]) s>> 1).w + rdx_2) ^ rdx_2) & 0x1fff) ^ rdx_2
        uint64_t rdx_3 = zx.q(*(arg1 + 0x229))
        char rax_9 = *(arg1 + (rdx_3 << 2) + 0x28a)
        *(arg1 + (rdx_3 << 2) + 0x28a) = (((rax_9 + 1) ^ rax_9) & 7) ^ rax_9
else
    (*(*arg1 + 0x660))(arg1)
    int64_t i_1 = 7
    char rax_3 = *(arg1 + 0x229) + 1
    arg1[0x5f].d = zmm7.d
    int64_t var_68 = 0
    uint64_t rcx_1 = zx.q(rax_3) & 3
    *(arg1 + 0x229) = rcx_1.b
    temp0[0] = temp0[0] + temp0[0]
    int32_t var_5c_1 = 0
    *(arg1 + (rcx_1 << 2) + 0x288) &= 0xe000
    int64_t r15_1 = 0
    int32_t var_58_1 = zx.o(0).d
    int32_t rbx_1 = 0
    temp0[0] = temp0[0] - 0.5f
    int32_t rbp_1 = 0
    *(arg1 + (rcx_1 << 2) + 0x288) |= (int.d(temp0[0]) s>> 1).w & 0x1fff
    uint64_t rax_6 = zx.q(*(arg1 + 0x229))
    *(arg1 + (rax_6 << 2) + 0x28a) &= 0xf9
    *(arg1 + (rax_6 << 2) + 0x28a) |= 1
    int64_t i
    
    do
        int64_t rdi_1 = sx.q(rbx_1)
        rbx_1 = (rdi_1 + 1).d
        
        if (rbx_1 s> rbp_1)
            sub_140594770(&var_68)
            rbp_1 = var_5c_1
            r15_1 = var_68
        
        *(r15_1 + (rdi_1 << 1)) = 0xffff
        i = i_1
        i_1 -= 1
    while (i != 1)
    void* rdi_4 = &arg1[zx.q(*(arg1 + 0x229)) * 3 + 0x53]
    
    if (rdi_4 != &var_68)
        int64_t rcx_3 = *rdi_4
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        *rdi_4 = r15_1
        r15_1 = 0
        *(rdi_4 + 8) = rbx_1
        *(rdi_4 + 0xc) = rbp_1
    
    *(rdi_4 + 0x10) = var_58_1.d
    
    if (r15_1 != 0)
        sub_140a74f90(r15_1)

uint64_t rax_10 = zx.q(*(arg1 + 0x229))
void* rdi_5 = &arg1[rax_10 * 3 + 0x53]
int16_t* rcx_11 = arg1[rax_10 * 3 + 0x53]
uint32_t rax_11 = zx.d(rcx_11[6])
zmm0 = _mm_cvtepi32_ps(zx.o(rax_11))

if (temp0[0] f>= zmm0.d)
    return rax_11

int64_t rdx_4 = 0

while (true)
    uint32_t rax_12 = zx.d(*rcx_11)
    zmm0 = _mm_cvtepi32_ps(zx.o(rax_12))
    
    if (temp0[0] f< zmm0.d)
        break
    
    rsi += 1
    rdx_4 += 1
    rcx_11 = &rcx_11[1]
    
    if (rdx_4 s>= 7)
        return rax_12

int32_t rbp_2 = *(rdi_5 + 8)
temp0[0] = temp0[0] + temp0[0]
temp0[0] = temp0[0] - 0.5f
*(rdi_5 + 8) = rbp_2 + 1
int16_t r14_2 = (int.d(temp0[0]) s>> 1).w

if (rbp_2 + 1 s> *(rdi_5 + 0xc))
    sub_140594770(rdi_5)

int64_t rbx_2 = sx.q(rsi)
int64_t rdx_6 = *rdi_5 + (rbx_2 << 1)
memmove(rdx_6 + 2, rdx_6, (rbp_2 - rsi) * 2)
*(*rdi_5 + (rbx_2 << 1)) = r14_2
int32_t rax_16 = *(rdi_5 + 8)

if (rax_16 != 8)
    int64_t rcx_14 = *rdi_5
    memmove(rcx_14 + 0xe, rcx_14 + 0x10, (rax_16 - 8) * 2)
    rax_16 = *(rdi_5 + 8)

*(rdi_5 + 8) = rax_16 - 1
return sub_1405a50a0(rdi_5)
