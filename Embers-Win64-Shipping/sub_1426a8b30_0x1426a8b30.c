// 函数: sub_1426a8b30
// 地址: 0x1426a8b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = *(arg2 + 0x84)

if (rdi == 1)
    int64_t* rcx = arg2[5]
    rdi = 2
    *(arg2 + 0x84) = 2
    
    if (rcx == 0)
    label_1426a8b8b:
        
        if ((arg2[0x12].b & 1) == 0)
            rdi = (*(*arg2 + 0x2a8))(arg2, 1)
    else
        int32_t rax_1 = sub_1426a8a50(rcx, 1)
        
        if (rax_1 == 1)
            goto label_1426a8b8b
        
        if (rax_1 s< 2)
            rdi = 4
        else if (rax_1 s> 3)
            if (rax_1 == 4)
                goto label_1426a8b8b
            
            rdi = 4
    
    if (rdi s> *(arg2 + 0x84))
        *(arg2 + 0x84) = rdi
        
        if (rdi == 4)
            sub_1426be890(arg2, rdi - 1)

if (rdi != 0)
    return zx.q(rdi)

int32_t rbx = *(arg1 + 0xd0)
int32_t rbx_1 = rbx - 1

if (rbx - 1 s< 0)
    return zx.q(rdi)

int64_t* rsi_2 = sx.q(rbx_1) * 0x18
int64_t* r15_1 = rsi_2
int32_t temp1_1

do
    int64_t r9_1 = *(arg1 + 0xc8)
    
    if (*(rsi_2 + r9_1) == arg2)
        int32_t rdx_1 = *(arg1 + 0xd0)
        int32_t rcx_5 = rdx_1 - rbx_1 - 1
        
        if (rcx_5 s>= 1)
            rcx_5 = 1
        
        if (rcx_5 != 0)
            memcpy(r15_1 + r9_1, r9_1 + sx.q(rdx_1 - rcx_5) * 0x18, rcx_5 * 0x18)
            rdx_1 = *(arg1 + 0xd0)
        
        *(arg1 + 0xd0) = rdx_1 - 1
    
    r15_1 -= 0x18
    rsi_2 -= 0x18
    temp1_1 = rbx_1
    rbx_1 -= 1
while (temp1_1 - 1 s>= 0)
return zx.q(rdi)
