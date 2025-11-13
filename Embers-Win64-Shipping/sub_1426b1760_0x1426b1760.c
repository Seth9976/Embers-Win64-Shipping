// 函数: sub_1426b1760
// 地址: 0x1426b1760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = sx.q(*(arg1 + 0x60))
int32_t r8 = 0

if (r9.d s> 0)
    int64_t* rax_1 = *(arg1 + 0x58)
    int64_t rcx = 0
    
    while (true)
        if (*rax_1 == arg2 || rax_1[1] == arg2)
            return zx.q(r8)
        
        r8 += 1
        rcx += 1
        rax_1 = &rax_1[6]
        
        if (rcx s>= r9)
            break
        
        continue

return 0xfffffffe
