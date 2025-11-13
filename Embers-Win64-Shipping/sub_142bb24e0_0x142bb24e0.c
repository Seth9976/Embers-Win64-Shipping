// 函数: sub_142bb24e0
// 地址: 0x142bb24e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_6 = arg2
int32_t* r12 = *(arg1 + 0x410)
int32_t* rbx = arg4

if (arg2 u> *r12)
    i_6 = *r12

uint64_t i_7 = 0

if (i_6 != 0)
    int32_t* rcx = rbx
    i_7 = zx.q(i_6)
    uint64_t i_3 = zx.q(i_6)
    uint64_t i
    
    do
        *rcx = *(arg3 - rbx + rcx)
        rcx = &rcx[1]
        i = i_3
        i_3 -= 1
    while (i != 1)

if (i_7.d u< arg2)
    __builtin_memset(&rbx[i_7], 0, zx.q(arg2 - i_7.d) << 2)

int16_t* rsi = *(r12 + 0x38)

if (rsi != 0 && i_6 != 0)
    int32_t* r14_1 = rbx
    uint64_t i_4 = zx.q(i_6)
    uint64_t i_1
    
    do
        uint32_t rdx = zx.d(*rsi)
        int32_t rax_2 = 1
        
        if (rdx u> 1)
            int64_t r10_1 = *(rsi + 8)
            int32_t r9 = *r14_1
            
            do
                if (r9 s< *(r10_1 + (zx.q(rax_2) << 3) + 4))
                    uint64_t rdx_1 = zx.q(rax_2)
                    uint64_t rdi_3 = zx.q(rax_2 - 1) << 3
                    uint32_t rax_3 = sub_142b93dd0(r9 - *(rdi_3 + r10_1 + 4), 
                        *(r10_1 + (rdx_1 << 3)) - *(rdi_3 + r10_1), 
                        *(r10_1 + (rdx_1 << 3) + 4) - *(rdi_3 + r10_1 + 4))
                    *r14_1 = rax_3 + *(rdi_3 + *(rsi + 8))
                    break
                
                rax_2 += 1
            while (rax_2 u< rdx)
        
        r14_1 = &r14_1[1]
        rsi = &rsi[8]
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)

uint64_t result = *(r12 + 0x18)

if (i_6 != 0)
    int32_t* rdi_5 = *(result + 0x10) + 0xc
    uint64_t i_5 = zx.q(i_6)
    uint64_t i_2
    
    do
        int32_t rcx_6 = *rbx
        
        if (rcx_6 s< 0)
            result = zx.q(sub_142b93e80(rcx_6, *rdi_5 - rdi_5[-1]) + *rdi_5)
        else if (rcx_6 s<= 0)
            result = zx.q(*rdi_5)
        else
            result = zx.q(sub_142b93e80(rcx_6, rdi_5[1] - *rdi_5) + *rdi_5)
        
        *rbx = result.d
        rdi_5 = &rdi_5[8]
        rbx = &rbx[1]
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)

return result
