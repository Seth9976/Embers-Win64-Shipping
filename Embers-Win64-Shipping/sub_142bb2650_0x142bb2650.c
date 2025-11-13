// 函数: sub_142bb2650
// 地址: 0x142bb2650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x410)
int32_t* r14 = *(rcx + 0x18)

if (arg2 u> *r14)
    arg2 = *r14

uint64_t rdi = 0
int32_t i_1 = 0
uint64_t i_3

if (arg2 != 0)
    int32_t* rbx_1 = *(r14 + 0x10) + 0x10
    i_1 = arg2
    uint64_t i_4 = zx.q(arg2)
    int32_t* rsi_1 = arg4
    uint64_t i
    
    do
        int32_t rcx_1 = *(rsi_1 + arg3 - arg4)
        int32_t rdx = *rbx_1
        
        if (rcx_1 s> rdx)
            rcx_1 = rdx
        else if (rcx_1 s< rbx_1[-2])
            if (rcx_1 s<= rdx)
                rcx_1 = rbx_1[-2]
            else
                rcx_1 = rdx
        
        i_3 = zx.q(rbx_1[-1])
        
        if (rcx_1 s< i_3.d)
            *rsi_1 = neg.d(sub_142b91790(rcx_1 - i_3.d, rbx_1[-2] - i_3.d))
        else if (rcx_1 s<= i_3.d)
            *rsi_1 = 0
        else
            *rsi_1 = sub_142b91790(rcx_1 - i_3.d, rdx - i_3.d).d
        
        rsi_1 = &rsi_1[1]
        rbx_1 = &rbx_1[8]
        i = i_4
        i_4 -= 1
    while (i != 1)

while (i_1 u< *r14)
    i_3 = zx.q(i_1)
    i_1 += 1
    arg4[i_3] = 0

int16_t* rsi_2 = *(rcx + 0x38)

if (rsi_2 == 0 || *r14 u<= 0)
    return 

do
    uint32_t i_2 = zx.d(*rsi_2)
    i_3 = 1
    
    if (i_2 u> 1)
        int32_t r9 = arg4[rdi]
        int64_t r10_1 = *(rsi_2 + 8)
        
        do
            if (r9 s< *(r10_1 + (zx.q(i_3.d) << 3)))
                uint64_t rdx_4 = zx.q(i_3.d)
                uint64_t rbx_2 = zx.q((i_3 - 1).d) << 3
                uint32_t rax_1 = sub_142b93dd0(r9 - *(rbx_2 + r10_1), 
                    *(r10_1 + (rdx_4 << 3) + 4) - *(rbx_2 + r10_1 + 4), 
                    *(r10_1 + (rdx_4 << 3)) - *(rbx_2 + r10_1))
                arg4[rdi] = rax_1 + *(rbx_2 + *(rsi_2 + 8) + 4)
                break
            
            i_3 = zx.q(i_3.d + 1)
        while (i_3.d u< i_2)
    
    rdi = zx.q(rdi.d + 1)
    rsi_2 = &rsi_2[8]
while (rdi.d u< *r14)
