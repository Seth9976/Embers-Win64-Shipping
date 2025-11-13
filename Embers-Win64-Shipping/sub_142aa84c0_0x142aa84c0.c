// 函数: sub_142aa84c0
// 地址: 0x142aa84c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r10 = *(arg1 + 8)

if (r10[1] u< 0x12f)
    int32_t r8_1 = *r10
    
    while (true)
        int32_t rax_1 = r10[1]
        uint64_t rcx_1 = zx.q(rax_1) * 2
        r10[1] = rax_1 + 1
        
        if (r8_1 != 0x7fffffff && (*((rcx_1 << 3) + 0x1436502a8) & r8_1) != r8_1)
            if (rax_1 + 1 u>= 0x12f)
                break
            
            continue
        
        if (arg2 != 0)
            *arg2 = 3
        
        return (&data_1436502a0)[rcx_1]

if (arg2 != 0)
    *arg2 = 0

return 0
