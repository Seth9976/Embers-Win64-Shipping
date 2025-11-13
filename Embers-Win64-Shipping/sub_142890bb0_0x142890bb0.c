// 函数: sub_142890bb0
// 地址: 0x142890bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg3)
bool cond:0 = arg4 s<= 0

if (arg4 s< 0)
    int64_t r10_1 = sx.q(arg4)
    int64_t* rdx = arg2 + ((rdi - 1 - r10_1) << 3)
    int64_t temp1_1
    
    do
        if (*rdx != 0)
            return 0xffffffff
        
        rdx -= 8
        temp1_1 = r10_1
        r10_1 += 1
    while (temp1_1 + 1 s< 0)
    cond:0 = arg4 s<= 0

if (not(cond:0))
    int64_t i = sx.q(arg4)
    
    if (arg4 s> 0)
        int64_t* rdx_1 = arg1 + ((rdi - 1 + i) << 3)
        
        do
            if (*rdx_1 != 0)
                return 1
            
            i -= 1
            rdx_1 -= 8
        while (i s> 0)

int64_t rdx_2 = *(arg1 + ((rdi - 1) << 3))
int64_t r8_1 = *(arg2 + ((rdi - 1) << 3))
bool cond:1 = rdx_2 u> r8_1

if (rdx_2 == r8_1)
    int32_t rax_7 = (rdi - 2).d
    int64_t rcx = sx.q(rax_7)
    
    if (rax_7 s< 0)
        return 0
    
    int64_t* rax_8 = arg2 + (rcx << 3)
    
    while (true)
        int64_t rdx_3 = *(arg1 - arg2 + rax_8)
        int64_t temp2_1 = *rax_8
        cond:1 = rdx_3 u> temp2_1
        
        if (rdx_3 != temp2_1)
            break
        
        rax_8 -= 8
        int64_t temp3_1 = rcx
        rcx -= 1
        
        if (temp3_1 - 1 s< 0)
            return 0

if (cond:1)
    return 1

return 0xffffffff
