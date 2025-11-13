// 函数: sub_142baa920
// 地址: 0x142baa920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r9 = zx.q(arg2[1])
int32_t rcx_1 = *(arg1 + 0x260) + 1

if (r9.d u>= rcx_1)
    *(arg1 + 0x18) = 0x86
    return 

uint64_t rdx = *(arg1 + 0x248)
uint64_t rax = rdx + r9 * 0x18
uint64_t r8_2 = zx.q(*(arg1 + 0x240))

if (rcx_1 != r8_2.d || *(rax + 0xc) != r9.d)
    rax = rdx
    uint64_t rcx_2 = rax + r8_2 * 0x18
    bool cond:0_1 = rax == rcx_2
    
    if (rax u< rcx_2)
        while (*(rax + 0xc) != r9.d)
            rax += 0x18
            
            if (rax u>= rcx_2)
                break
        
        cond:0_1 = rax == rcx_2
    
    if (not(cond:0_1) && *(rax + 0x10) != 0)
        goto label_142baa992
    
    *(arg1 + 0x18) = 0x86
else if (*(rax + 0x10) == 0)
    *(arg1 + 0x18) = 0x86
else
label_142baa992:
    int64_t rcx_3 = sx.q(*(arg1 + 0x268))
    
    if (rcx_3.d s>= *(arg1 + 0x26c))
        *(arg1 + 0x18) = 0x82
        return 
    
    if (*arg2 s> 0)
        int32_t* r8_3 = *(arg1 + 0x270) + rcx_3 * 0x18
        *r8_3 = *(arg1 + 0x204)
        r8_3[1] = *(arg1 + 0x210) + 1
        r8_3[2] = *arg2
        *(r8_3 + 0x10) = rax
        *(arg1 + 0x268) += 1
        sub_142ba9d60(arg1, *rax, *(rax + 4))
        *(arg1 + 0x220) = 0
        *(arg1 + 0x378) += *arg2
        
        if (*(arg1 + 0x378) u> *(arg1 + 0x37c))
            *(arg1 + 0x18) = 0x8b
