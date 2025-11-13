// 函数: sub_142890c90
// 地址: 0x142890c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_4 = sx.q(arg3)
int64_t r10 = *(arg1 + (rax_4 << 3) - 8)
int64_t temp0 = *(arg2 + (rax_4 << 3) - 8)
bool cond:0 = r10 u> temp0

if (r10 == temp0)
    int64_t rcx = sx.q(arg3 - 2)
    
    if (arg3 - 2 s< 0)
        return 0
    
    int64_t* rax_2 = arg2 + (rcx << 3)
    
    while (true)
        int64_t rdx = *(arg1 - arg2 + rax_2)
        int64_t temp1_1 = *rax_2
        cond:0 = rdx u> temp1_1
        
        if (rdx != temp1_1)
            break
        
        rax_2 -= 8
        int64_t temp2_1 = rcx
        rcx -= 1
        
        if (temp2_1 - 1 s< 0)
            return 0

if (cond:0)
    return 1

return 0xffffffff
