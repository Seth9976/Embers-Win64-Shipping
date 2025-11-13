// 函数: sub_142a29f20
// 地址: 0x142a29f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = 0

if (arg6 s<= 0)
    return 

do
    int32_t rax = 0
    
    if (arg5 s> 0)
        do
            char rdx
            
            if (arg2 == 0)
                rdx = 0
            else
                rdx = *(sx.q(*(arg1 + 0x364) * r10 + rax + arg4) + arg2)
            
            int32_t rcx_7 = *(arg1 + 0x364) * r10 + rax
            rax += 1
            *(sx.q(rcx_7 + arg4) + arg3) = rdx
        while (rax s< arg5)
    
    r10 += 1
while (r10 s< arg6)
