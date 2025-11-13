// 函数: sub_141f31720
// 地址: 0x141f31720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg1 + 0xd8)
int32_t rdx_1 = arg2[1].d + r8

if (rdx_1 s> *(arg2 + 0xc))
    sub_1405c5570(arg2, rdx_1)
    r8 = *(arg1 + 0xd8)

int64_t* rbx = *(arg1 + 0xd0)
int64_t rsi = 0
int64_t r14 = 0
uint64_t r12_1 = sx.q(r8) << 3 u>> 3

if (rbx u> &rbx[sx.q(r8)])
    r12_1 = 0

if (r12_1 != 0)
    do
        int64_t r15_1 = *rbx
        
        if (r15_1 != 0)
            int64_t rbp_1 = sx.q(arg2[1].d)
            int32_t rax_2 = (rbp_1 + 1).d
            arg2[1].d = rax_2
            
            if (rax_2 s> *(arg2 + 0xc))
                sub_1405a4d70(arg2)
            
            *(*arg2 + (rbp_1 << 3)) = r15_1
        
        rbx = &rbx[1]
        r14 += 1
    while (r14 != r12_1)
    
    r8 = *(arg1 + 0xd8)
    rbx = *(arg1 + 0xd0)

void* result = &rbx[sx.q(r8)]
uint64_t r14_2 = sx.q(r8) << 3 u>> 3

if (rbx u> result)
    r14_2 = 0

if (r14_2 != 0)
    do
        int64_t rcx_2 = *rbx
        
        if (rcx_2 != 0)
            result = sub_141f31720(rcx_2, arg2)
        
        rbx = &rbx[1]
        rsi += 1
    while (rsi != r14_2)

return result
