// 函数: sub_142ad4650
// 地址: 0x142ad4650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_28[0x4]
int32_t rbx = *sub_142ad4b50(_mm_cvtepi32_pd(zx.q(arg2)).q, &var_28)
int32_t r14 = rbx - 0x4e
double zmm0_1
double zmm6_1
zmm0_1, zmm6_1 = sub_142ad44e0(rbx, 1, 1)
int32_t rbp = int.d(zmm6_1 - zmm0_1)
int32_t rax_10
int32_t rbp_2

if (rbp s>= 0x50)
    int32_t rax_12 = rbx & 0x80000003
    
    if (rax_12 s< 0)
        rax_12 = ((rax_12 - 1) | 0xfffffffc) + 1
    
    int32_t rdx_9
    int32_t rdx_12
    
    if (rax_12 == 0)
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = muls.dp.d(0x51eb851f, rbx)
        rdx_9 = temp0_1 s>> 5
        
        if (rbx == rbx s/ 0x64 * 0x64)
            int32_t temp5_1
            int32_t temp6_1
            temp5_1:temp6_1 = muls.dp.d(0x51eb851f, rbx)
            rdx_12 = temp5_1 s>> 7
    
    int32_t rcx_5
    
    if (rax_12 != 0 || (rbx == (rdx_9 + (rdx_9 u>> 0x1f)) * 0x64
            && rbx != (rdx_12 + (rdx_12 u>> 0x1f)) * 0x190))
        rcx_5 = 0
    else
        rcx_5.b = 1
    
    int32_t rax_20
    rax_20.b = rcx_5.b != 0
    rax_10 = rax_20 + 0x1e
    rbp_2 = rbp - 0x50
else
    r14 -= 1
    int32_t rax_2 = (rbx - 1) & 0x80000003
    
    if (rax_2 s< 0)
        rax_2 = ((rax_2 - 1) | 0xfffffffc) + 1
    
    int32_t rdx_2
    int32_t rdx_6
    
    if (rax_2 == 0)
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = muls.dp.d(0x51eb851f, rbx - 1)
        rdx_2 = temp2_1 s>> 5
        
        if (rbx - 1 == (rbx - 1) s/ 0x64 * 0x64)
            int32_t temp7_1
            int32_t temp8_1
            temp7_1:temp8_1 = muls.dp.d(0x51eb851f, rbx - 1)
            rdx_6 = temp7_1 s>> 7
    
    char rcx_4
    
    if (rax_2 != 0 || (rbx - 1 == (rdx_2 + (rdx_2 u>> 0x1f)) * 0x64
            && rbx - 1 != (rdx_6 + (rdx_6 u>> 0x1f)) * 0x190))
        rcx_4 = 0
    else
        rcx_4 = 1
    
    int32_t rax_9
    rax_9.b = rcx_4 != 0
    rax_10 = rax_9 + 0x1e
    rbp_2 = rbp + 0xff + rax_10

int32_t rsi = rbp_2
int32_t rcx_6

if (rbp_2 s>= rax_10)
    int32_t rsi_1 = rsi - rax_10
    int32_t rax_23
    
    if (rsi_1 s>= 0x9b)
        rsi_1 -= 0x9b
        int32_t rbx_7 = rsi_1 s/ 0x1e
        rcx_6 = int.d(sub_142a4b9b0(_mm_cvtepi32_pd(zx.q(rbx_7)))) + 6
        rax_23 = rbx_7 * 0x1e
    else
        int32_t rbx_4 = rsi_1 s/ 0x1f
        rcx_6 = int.d(sub_142a4b9b0(_mm_cvtepi32_pd(zx.q(rbx_4)))) + 1
        rax_23 = rbx_4 * 0x1f
    
    rsi = rsi_1 - rax_23
else
    rcx_6 = 0

*(arg1 + 0xc) = 0
*(arg1 + 0x80) = 1
*(arg1 + 0x68) = 0x101
*(arg1 + 0x58) = r14
*(arg1 + 0xcc) = 1
*(arg1 + 0x7b) = 1
*(arg1 + 0x10) = r14
*(arg1 + 0x84) = 1
*(arg1 + 0x14) = rcx_6
*(arg1 + 0x88) = 1
*(arg1 + 0x6a) = 1
*(arg1 + 0x20) = rsi + 1
*(arg1 + 0x94) = 1
*(arg1 + 0x6d) = 0x101
*(arg1 + 0x24) = rbp_2 + 1
*(arg1 + 0x98) = 1
return rbp_2 + 1
