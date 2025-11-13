// 函数: sub_141a2b810
// 地址: 0x141a2b810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t rbx = result.d

if (result.d s>= 0)
    int32_t rdi_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        int32_t r10_1 = rbx
        
        if (rdi_1 s< arg2)
            do
                int32_t r9_1 = r10_1 * 2
                uint64_t rdx_1 = zx.q(r9_1 + 1)
                
                if ((rdx_1 + 1).d s< arg2)
                    if (arg1[sx.q(r9_1) + 2] u< arg1[sx.q(rdx_1.d)])
                        rdx_1 = zx.q(r9_1)
                    
                    rdx_1 = zx.q(rdx_1.d + 1)
                
                int32_t* r9_2 = &arg1[sx.q(rdx_1.d)]
                int32_t* r10_2 = &arg1[sx.q(r10_1)]
                result = zx.q(*r9_2)
                
                if (*r10_2 u>= result.d)
                    break
                
                if (r10_2 != r9_2)
                    int32_t rax_8 = *r10_2
                    *r10_2 = *r9_2
                    *r9_2 = rax_8
                
                result = zx.q(((rdx_1 << 1) + 1).d)
                r10_1 = rdx_1.d
            while (result.d s< arg2)
        
        rdi_1 -= 2
        temp2_1 = rbx
        rbx -= 1
    while (temp2_1 - 1 s>= 0)

int32_t i = arg2 - 1

if (i s> 0)
    result = sx.q(i)
    int32_t* rbx_1 = &arg1[result]
    
    do
        if (arg1 != rbx_1)
            result = zx.q(*arg1)
            *arg1 = *rbx_1
            *rbx_1 = result.d
        
        int32_t r10_3 = 0
        
        if (i s> 1)
            uint64_t rcx_3
            
            do
                int32_t r9_3 = r10_3 * 2
                rcx_3 = zx.q(r9_3 + 1)
                
                if ((rcx_3 + 1).d s< i)
                    if (arg1[sx.q(r9_3) + 2] u< arg1[sx.q(rcx_3.d)])
                        rcx_3 = zx.q(r9_3)
                    
                    rcx_3 = zx.q(rcx_3.d + 1)
                
                int32_t* r9_4 = &arg1[sx.q(rcx_3.d)]
                int32_t* r10_4 = &arg1[sx.q(r10_3)]
                result = zx.q(*r9_4)
                
                if (*r10_4 u>= result.d)
                    break
                
                if (r10_4 != r9_4)
                    result = zx.q(*r10_4)
                    *r10_4 = *r9_4
                    *r9_4 = result.d
                
                r10_3 = rcx_3.d
            while (((rcx_3 << 1) + 1).d s< i)
        
        i -= 1
        rbx_1 -= 4
    while (i s> 0)

return result
