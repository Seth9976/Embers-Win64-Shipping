// 函数: sub_142bde8b0
// 地址: 0x142bde8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8_1 = sx.q(*(arg1 + 0x3c))
int32_t i = arg2
int64_t rdx_1 = *(arg1 + 0x20) - (r8_1 << 2)
uint64_t rax = zx.q((r8_1 - 1).d)
int64_t r8 = sx.q(rax.d)

if (rax.d s< 0)
label_142bde911:
    *(arg1 + 0x28) -= 4
    
    if (*(arg1 + 0x28) u<= *(arg1 + 0x30))
        *(arg1 + 0x38) = 0x62
        int64_t rax_1
        rax_1.b = 1
        return rax_1
    
    *(arg1 + 0x3c) += 1
    *(*(arg1 + 0x20) - (sx.q(*(arg1 + 0x3c)) << 2)) = i
else
    while (i s< *(rdx_1 + (r8 << 2)))
        rax = zx.q(rax.d - 1)
        int64_t temp0_1 = r8
        r8 -= 1
        
        if (temp0_1 - 1 s< 0)
            break
    
    if (rax.d s< 0)
        goto label_142bde911
    
    int64_t rcx = sx.q(rax.d)
    int32_t* rdx_2 = rdx_1 + (rcx << 2)
    
    if (i s> *(rdx_1 + (rcx << 2)))
        int32_t temp1_1
        
        do
            temp1_1 = rax.d
            rax = zx.q(rax.d - 1)
            int32_t i_1 = *rdx_2
            *rdx_2 = i
            rdx_2 = &rdx_2[-1]
            i = i_1
        while (temp1_1 - 1 s>= 0)
        goto label_142bde911

rax.b = 0
return rax
