// 函数: sub_142b0d980
// 地址: 0x142b0d980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = 0
int64_t r12 = sx.q(arg4)
void* r10_1 = arg3 - &data_1436698b0

for (int64_t i = 0; i s< 0x64; )
    void* rax_1 = i + &data_1436698b0
    
    if (*(i + &data_1436698b0) == 0)
        return zx.q(r14)
    
    int32_t r8_1 = neg.d(r12.d)
    
    while (true)
        bool cond:0_1
        
        if (neg.q(i + &data_1436698b0) + rax_1 s>= r12)
            if (sx.q(r8_1) + arg1 u>= arg2)
                *arg5 = 0xb
                break
            
            cond:0_1 = sx.d(*(r10_1 + arg1 - r12 - arg3 + rax_1)) != zx.d(*rax_1)
        else
            cond:0_1 = *(r10_1 + rax_1) != *rax_1
        
        if (cond:0_1)
            break
        
        rax_1 += 1
        r8_1 += 1
        
        if (*rax_1 == 0)
            return zx.q(r14)
    
    r14 += 1
    i += 5
    r10_1 -= 5

return 0xfffffffe
