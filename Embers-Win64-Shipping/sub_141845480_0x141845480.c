// 函数: sub_141845480
// 地址: 0x141845480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x58) = 0

if (*(arg1 + 0x5c) s<= 0xffffffff)
    sub_1405a5130(arg1 + 0x50, 0)

if (*(arg1 + 0x48) == 0)
    return 

int128_t zmm0
zmm0.q = fconvert.d(arg2.d)
int64_t rax_1 = sub_14184de40(zmm0)
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int64_t r9_1 = *(arg1 + 0x40)
int64_t r8_1 = 0

if (performanceCount u> rax_1)
    r8_1 = performanceCount - rax_1

int64_t arg_8 = r8_1
void* rdx_3 = r9_1 + sx.q(*(arg1 + 0x48)) * 0x18
int32_t rdx_4

if (rdx_3 == r9_1)
label_141845523:
    rdx_4 = -1
else
    while (true)
        rdx_3 -= 0x18
        
        if (*(rdx_3 + 8) u<= r8_1)
            rdx_4 = ((rdx_3 - r9_1) s/ 0x18).d
            break
        
        if (rdx_3 == r9_1)
            goto label_141845523

int32_t i = rdx_4 + 1

if (i s< 0)
    return 

int64_t rbx_3 = sx.q(i) * 0x18

while (i s< *(arg1 + 0x48))
    int64_t rbp_1 = sx.q(*(arg1 + 0x58))
    int64_t rsi_1 = *(arg1 + 0x40)
    int32_t rax_3 = (rbp_1 + 1).d
    bool cond:1_1 = *(rbx_3 + rsi_1) u< r8_1
    *(arg1 + 0x58) = rax_3
    
    if (cond:1_1)
        if (rax_3 s> *(arg1 + 0x5c))
            sub_1405a4df0(arg1 + 0x50)
        
        int64_t rax_7 = *(arg1 + 0x50)
        int64_t rcx_8 = rbp_1 * 3
        *(rax_7 + (rcx_8 << 3)) = *(rbx_3 + rsi_1)
        *(rax_7 + (rcx_8 << 3) + 0x10) = *(rbx_3 + rsi_1 + 0x10)
        int64_t r9_2 = *(arg1 + 0x50)
        int64_t r8_2 = sx.q(*(arg1 + 0x58)) * 3
        *(r9_2 + (r8_2 << 3) - 0x18) = arg_8
        int64_t rcx_9 = *(rbx_3 + rsi_1 + 8)
        int64_t rdx_10 = *(rbx_3 + rsi_1)
        
        if (rcx_9 != rdx_10)
            *(r9_2 + (r8_2 << 3) - 8) *=
                divu.dp.q(0:(*(r9_2 + (r8_2 << 3) - 0x10) - arg_8), rcx_9 - rdx_10)
        else
            *(r9_2 + (r8_2 << 3) - 8) = 0
    else
        if (rax_3 s> *(arg1 + 0x5c))
            sub_1405a4df0(arg1 + 0x50)
        
        int64_t rax = *(arg1 + 0x50)
        int64_t rcx_5 = rbp_1 * 3
        *(rax + (rcx_5 << 3)) = *(rbx_3 + rsi_1)
        *(rax + (rcx_5 << 3) + 0x10) = *(rbx_3 + rsi_1 + 0x10)
    
    i += 1
    int64_t temp3_1 = rbx_3
    rbx_3 += 0x18
    
    if (temp3_1 + 0x18 s< 0)
        break
    
    r8_1 = arg_8
