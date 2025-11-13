// 函数: sub_141df6860
// 地址: 0x141df6860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(*(arg2 + 0x18))
void* rdi = arg2

if (r10.d == 0)
    return 

int32_t* r13_1 = *(arg2 + 0x40)
uint64_t r9_1 = zx.q(*r13_1)
int32_t r11_2 = r10.d - r9_1.d
int32_t r8 = r13_1[1]

if (r8 == 0)
    return 

arg4 = arg4 f* r13_1[2]
int32_t temp0_1
int32_t temp1_1
temp0_1:temp1_1 = sx.q((r10 + 0x1f).d)
int32_t rdx_2 = r8 - 1
uint32_t rcx = (temp1_1 + (temp0_1 & 0x1f)) s>> 5 << 2
int32_t r9_2 = 0
void* rbx_2 = &r13_1[3] + sx.q(rcx + (r9_1 << 2).d)
int32_t rcx_3 = int.d(arg4 + arg4 - 0.5f) s>> 1
int32_t rax_9

if (rcx_3 s>= 0)
    rax_9 = rdx_2
    
    if (rcx_3 s< rdx_2)
        rax_9 = rcx_3
else
    rax_9 = 0

int32_t r14_1 = 0
int32_t var_48 = 0
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(rax_9))

if (rax_9 + 1 s<= rdx_2)
    rdx_2 = rax_9 + 1

int32_t var_44 = 0
int32_t r8_1 = 0
int64_t r15_1 = r10
arg4 = arg4 f- zmm0.d
void* var_30_1 = rbx_2 + (sx.q(rdx_2 * r11_2) << 2)

if (r10.d s<= 0)
    return 

int64_t rbp_1 = 0

while (true)
    int32_t rax_14 = r8_1
    int32_t rcx_6 = r8_1 & 0x1f
    
    if (r8_1 s< 0)
        rax_14 = r8_1 + 0x1f
        rcx_6 -= 0x20
    
    int64_t* rbx_3 = arg3[2]
    int32_t rsi_1 = rbx_3[1].d
    int32_t r10_2 = r13_1[sx.q(rax_14 s>> 5) + 3] & 1 << rcx_6.b
    uint32_t r11_3 = zx.d(*(*(rdi + 0x10) + rbp_1 + 8))
    int16_t rdx_5
    
    if (r11_3 s>= rsi_1)
        rdx_5 = -1
    else
        rdx_5 = *(*rbx_3 + (zx.q(r11_3.w) << 1))
    
    if (rdx_5 != 0xffff)
        float zmm1
        
        if (r10_2 == 0)
            int64_t rax_20 = sx.q(r14_1)
            zmm0 = *(rbx_2 + (sx.q(rax_9 * r11_2) << 2) + (rax_20 << 2))
            zmm1 = (*(var_30_1 + (rax_20 << 2)) f- zmm0.d) * arg4 f+ zmm0.d
        else
            zmm1 = *(sx.q(rcx) + 0xc + r13_1 + (sx.q(r9_2) << 2))
        
        int16_t rdx_6
        
        if (r11_3 s>= rsi_1)
            rdx_6 = -1
        else
            rdx_6 = *(*rbx_3 + (zx.q(r11_3.w) << 1))
        
        if (rdx_6 != 0xffff)
            int64_t rax_22 = *arg3
            uint64_t rcx_12 = zx.q(rdx_6)
            *(rax_22 + (rcx_12 << 3)) = zmm1
            *(rax_22 + (rcx_12 << 3) + 4) = 1
    
    void* rax = &var_48
    
    if (r10_2 == 0)
        rax = &var_44
    
    r8_1 += 1
    rbp_1 += 0xc
    *rax += 1
    int64_t temp2_1 = r15_1
    r15_1 -= 1
    
    if (temp2_1 == 1)
        break
    
    r9_2 = var_48
    r14_1 = var_44
    rdi = arg2
