// 函数: sub_1421b5000
// 地址: 0x1421b5000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15 = 0
int32_t rbx

if (*(arg1 + 0x290) != 0)
    rbx = 0
else
    rbx = data_143a2ece8
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(*(*(arg1 + 0x1d8) + 0x164) + 0xf)
    int32_t rax_6 = (temp1_1 + (temp0_1 & 0xf)) s>> 4
    uint128_t zmm1
    zmm1.d = _mm_cvtepi32_ps(zx.o(rax_6)).d f* data_143a2ece4
    zmm1.d = zmm1.d f+ zmm1.d
    int32_t rax_7 = rax_6 - (int.d(-0.5f f- zmm1.d) s>> 1)
    
    if (rax_7 s<= rbx)
        rbx = rax_7

void* r13 = arg1 + 0x1f8
int32_t r14 = 0
int32_t r9_1 = *(r13 + 0x18) - 1
int32_t r8_1 = r9_1 s>> 5
int32_t rdx_3 = 1 << (r9_1.b & 0x1f)

if (r9_1 s< 0)
    return 0

int32_t temp3_1

do
    int32_t r11_1 = r8_1
    int32_t r10_1 = rdx_3
    
    if (r9_1 s< rbx)
        break
    
    void* rax_8 = *(r13 + 0x10)
    void* rcx_4 = r13
    
    if (rax_8 != 0)
        rcx_4 = rax_8
    
    if ((*(rcx_4 + (sx.q(r8_1) << 2)) & rdx_3) != 0)
        break
    
    rdx_3 u>>= 1
    r8_1 -= 1
    r14 += 1
    
    if (r10_1 u< 2)
        rdx_3 = -0x80000000
    
    if (r10_1 u>= 2)
        r8_1 = r11_1
    
    temp3_1 = r9_1
    r9_1 -= 1
while (temp3_1 - 1 s>= 0)

if (r14 s<= 0)
    return zx.q(r14)

int64_t r10_2 = sx.q(*(arg1 + 0x1f0))
int32_t r9_3 = r10_2.d - r14
int64_t rcx_5 = sx.q(r9_3)
int64_t rsi = rcx_5
void* rbp = *(*(arg1 + 0x1d0) + 0x80)
int32_t arg_10 = r10_2.d
int32_t arg_8 = r9_3
int64_t arg_18 = r10_2

if (rcx_5 s< r10_2)
    do
        int32_t rdi_1 = *(*(arg1 + 0x1e8) + (rsi << 2))
        EnterCriticalSection(rbp + 0xd0)
        *(*(rbp + 0xb8) + (sx.q(*(rbp + 0xc8)) << 2)) = rdi_1
        *(rbp + 0xc8) += 1
        
        if (rbp != -0xd0)
            LeaveCriticalSection(rbp + 0xd0)
        
        rsi += 1
    while (rsi s< r10_2)
    
    r9_3 = arg_8
    r13 = arg1 + 0x1f8
    r10_2 = zx.q(arg_10)

int32_t rax_13 = *(r13 + 0x18)
int32_t rdx_4 = rax_13

if (r10_2.d != rax_13)
    int32_t rcx_9 = 1
    int32_t rbx_2 = 0
    int32_t rsi_1 = 1
    int32_t r11_2 = 0
    int32_t r8_2 = 0
    
    if (rax_13 s> 0)
        do
            int32_t rdi_2 = r11_2
            
            if (r8_2 s< r9_3 || r8_2 s>= r10_2.d)
                if (rbx_2 != r8_2)
                    void* rax_14 = *(r13 + 0x10)
                    void* r9_4 = r13
                    int64_t r10_3 = sx.q(r15)
                    
                    if (rax_14 != 0)
                        r9_4 = rax_14
                    
                    int32_t rdx_5 = *(r9_4 + (r10_3 << 2))
                    
                    if ((*(r9_4 + (sx.q(r11_2) << 2)) & rsi_1) == 0)
                        *(r9_4 + (r10_3 << 2)) = not.d(rcx_9) & rdx_5
                    else
                        *(r9_4 + (r10_3 << 2)) = rdx_5 | rcx_9
                    
                    r10_2 = zx.q(arg_10)
                    r9_3 = arg_8
                
                rbx_2 += 1
                int32_t temp5_1 = rcx_9
                int32_t temp6_1 = rcx_9
                rcx_9 *= 2
                
                if (temp5_1 == neg.d(temp6_1))
                    rcx_9 = 1
                    r15 += 1
            
            rdx_4 = *(r13 + 0x18)
            int32_t rax_19 = rsi_1 * 2
            r8_2 += 1
            rsi_1 = 1
            
            if (rax_19 != 0)
                rsi_1 = rax_19
            
            r11_2 += 1
            
            if (rax_19 != 0)
                r11_2 = rdi_2
        while (r8_2 s< rdx_4)

*(r13 + 0x18) = rdx_4 - r14
int32_t rax_20 = *(arg1 + 0x1f0)
int32_t rcx_11 = rax_20 - r9_3
int64_t rdi_4 = arg_18 << 2
int64_t rsi_2

if (rcx_11 == r14)
    rsi_2 = rcx_5
else
    int64_t rax_21 = *(arg1 + 0x1e8)
    rsi_2 = sx.q(r9_3)
    memmove(rax_21 + (rsi_2 << 2), rax_21 + rdi_4, (rcx_11 - r14) << 2)
    rax_20 = *(arg1 + 0x1f0)

*(arg1 + 0x1f0) = rax_20 - r14
sub_1405dac90(arg1 + 0x1e8)
int32_t rax_23 = *(arg1 + 0x220)
int32_t rcx_16 = rax_23 - arg_8

if (rcx_16 != r14)
    int64_t r9_5 = *(arg1 + 0x218)
    memmove(r9_5 + (rsi_2 << 2), r9_5 + rdi_4, (rcx_16 - r14) << 2)
    rax_23 = *(arg1 + 0x220)

*(arg1 + 0x220) = rax_23 - r14
sub_1405dac90(arg1 + 0x218)
*(*(arg1 + 0x1e0) + 0x210) = 1
return zx.q(r14)
