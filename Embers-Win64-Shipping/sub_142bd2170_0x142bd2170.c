// 函数: sub_142bd2170
// 地址: 0x142bd2170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx_1 = arg3 * *(arg1 + 0x20)
uint64_t r15_3 = zx.q(((*(arg2 + 0x18) - *(arg2 + 0x10)) s>> 3).d - rdx_1)
int32_t i_2 = arg3
uint64_t rsi = zx.q(r15_3.d + i_2)

if (arg3 != 0)
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        int64_t rcx = *(arg2 + 0x10)
        int32_t* r14_2 = *(arg1 + 0x28) + 4
        int32_t rdi_1
        
        if (r15_3.d u< ((*(arg2 + 0x18) - rcx) s>> 3).d)
            int32_t rdx_2 = *(rcx + (r15_3 << 3) + 4)
            int32_t* rcx_1 = rcx + (r15_3 << 3)
            
            if (rdx_2 == 1)
                int32_t rax_4 = *rcx_1
                
                if (rax_4 s>= 0)
                    rdi_1 = (rax_4 + 0x2000) s>> 0xe
                else
                    rdi_1 = neg.d((0x2000 - rax_4) s>> 0xe)
            else
                rdi_1 = *rcx_1
                
                if (rdx_2 == 2)
                    rdi_1 <<= 0x10
        else
            int32_t* rax_3 = *(arg2 + 8)
            
            if (rax_3 != 0 && *rax_3 == 0)
                *rax_3 = 0x82
            
            rdi_1 = 0
        
        if (*(arg1 + 0x20) u> 1)
            int32_t j = 1
            
            do
                int64_t rcx_2 = *(arg2 + 0x10)
                int32_t rdx_4
                
                if (rsi.d u< ((*(arg2 + 0x18) - rcx_2) s>> 3).d)
                    int32_t rdx_5 = *(rcx_2 + (rsi << 3) + 4)
                    int32_t* rcx_3 = rcx_2 + (rsi << 3)
                    
                    if (rdx_5 == 1)
                        int32_t rax_9 = *rcx_3
                        
                        if (rax_9 s>= 0)
                            rdx_4 = (rax_9 + 0x2000) s>> 0xe
                        else
                            rdx_4 = neg.d((0x2000 - rax_9) s>> 0xe)
                    else
                        rdx_4 = *rcx_3
                        
                        if (rdx_5 == 2)
                            rdx_4 <<= 0x10
                else
                    int32_t* rax_8 = *(arg2 + 8)
                    
                    if (rax_8 != 0 && *rax_8 == 0)
                        *rax_8 = 0x82
                    
                    rdx_4 = 0
                
                rdi_1 += sub_142b93e80(*r14_2, rdx_4)
                r14_2 = &r14_2[1]
                rsi = zx.q(rsi.d + 1)
                j += 1
            while (j u< *(arg1 + 0x20))
        
        int64_t rdx_10 = *(arg2 + 0x10)
        
        if (r15_3.d u<= ((*(arg2 + 0x18) - rdx_10) s>> 3).d)
            uint64_t rcx_5 = r15_3 << 3
            *(rcx_5 + rdx_10) = rdi_1
            *(rcx_5 + *(arg2 + 0x10) + 4) = 0
        else
            int32_t* rax_14 = *(arg2 + 8)
            
            if (rax_14 != 0 && *rax_14 == 0)
                *rax_14 = 0x82
        
        r15_3 = zx.q(r15_3.d + 1)
        i = i_1
        i_1 -= 1
    while (i != 1)
    i_2 = arg3

int64_t rcx_6 = *(arg2 + 0x18)
int32_t rdx_11 = rdx_1 - i_2
int32_t* result

if (rdx_11 u<= ((rcx_6 - *(arg2 + 0x10)) s>> 3).d)
    result = zx.q(rdx_11) << 3
    *(arg2 + 0x18) = rcx_6 - result
else
    result = *(arg2 + 8)
    
    if (result != 0 && *result == 0)
        *result = 0xa1

return result
