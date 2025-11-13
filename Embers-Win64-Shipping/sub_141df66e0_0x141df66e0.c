// 函数: sub_141df66e0
// 地址: 0x141df66e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_2 = sx.q(*(arg2 + 0x18))

if (i_2.d == 0)
    return 

int32_t* r12_1 = *(arg2 + 0x40)
int32_t rbp_1 = *r12_1

if (rbp_1 == 0)
    return 

arg4 = arg4 f* r12_1[1]
int32_t rcx = rbp_1 - 1
int32_t r11_1 = 0
int32_t rdx_1 = int.d(arg4 + arg4 - 0.5f) s>> 1
uint64_t rax

if (rdx_1 s>= 0)
    rax = zx.q(rcx)
    
    if (rdx_1 s< rcx)
        rax = zx.q(rdx_1)
else
    rax = 0

int32_t rdx_2 = (rax + 1).d
int64_t i_1 = i_2
arg4 = arg4 f- _mm_cvtepi32_ps(zx.o(rax.d)).d

if (i_2.d s<= 0)
    return 

int64_t r10_1 = 0

if (rdx_2 s<= rcx)
    rcx = rdx_2

int64_t r13_1 = sx.q(rax.d)
int64_t i

do
    uint64_t* r8 = arg3[2]
    uint32_t rdx_3 = zx.d(*(r10_1 + *(arg2 + 0x10) + 8))
    int32_t rdi_1 = r8[1].d
    int16_t r9
    
    if (rdx_3 s>= rdi_1)
        r9 = -1
    else
        r9 = *(*r8 + (zx.q(rdx_3.w) << 1))
    
    if (r9 != 0xffff)
        int64_t rcx_2 = sx.q(r11_1)
        uint128_t zmm0 = r12_1[rcx_2 + r13_1 + 2]
        int16_t rdx_4
        
        if (rdx_3 s>= rdi_1)
            rdx_4 = -1
        else
            rdx_4 = *(*r8 + (zx.q(rdx_3.w) << 1))
        
        if (rdx_4 != 0xffff)
            rax = *arg3
            uint64_t rcx_4 = zx.q(rdx_4)
            *(rax + (rcx_4 << 3)) = (r12_1[sx.q(rcx) + rcx_2 + 2] f- zmm0.d) * arg4 f+ zmm0.d
            *(rax + (rcx_4 << 3) + 4) = 1
    
    r11_1 += rbp_1
    r10_1 += 0xc
    i = i_1
    i_1 -= 1
while (i != 1)
