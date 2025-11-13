// 函数: sub_14204cea0
// 地址: 0x14204cea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = 0
int64_t rbx = arg4
int64_t i

for (i = 0; i s< 2; i += 1)
    int32_t r8 = *(arg1 + (i << 2) + 8)
    arg4.b = 0
    
    if (r8 == arg3)
        arg4 = 0
        
        if (*(arg1 + (i << 3) + 0x10) == arg2)
            arg4 = 1
    
    if ((r8 != arg5 || *(arg1 + (i << 3) + 0x10) != rbx) && arg4.b == 0)
        int64_t rax = sx.q(r10)
        *(arg1 + (rax << 2) + 8) = arg3
        *(arg1 + (rax << 3) + 0x10) = arg2
        return rax
    
    r10 += 1

return i
