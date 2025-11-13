// 函数: sub_142c1ee70
// 地址: 0x142c1ee70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx = zx.q(arg2)

if (arg3 != 0)
    int32_t i_3 = 0
    int32_t i_2 = *arg3
    uint32_t r10_3 = (zx.d(*arg1) << 8) + zx.d(arg1[1])
    
    if (rbx.d u<= r10_3)
        i_3 = r10_3 - rbx.d
    
    char* rax_5 = &arg1[(rbx + 1) << 1]
    
    if (i_3 u< i_2)
        i_2 = i_3
    
    *arg3 = i_2
    
    if (i_2 != 0)
        uint64_t i_1 = zx.q(i_2)
        uint64_t i
        
        do
            uint32_t rcx = zx.d(*rax_5)
            arg4 += 4
            uint32_t rdx = zx.d(rax_5[1])
            rax_5 = &rax_5[2]
            *(arg4 - 4) = rdx + (rcx << 8)
            i = i_1
            i_1 -= 1
        while (i != 1)

return zx.q((zx.d(*arg1) << 8) + zx.d(arg1[1]))
