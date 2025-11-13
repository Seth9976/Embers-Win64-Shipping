// 函数: sub_141f87b60
// 地址: 0x141f87b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d != *(arg1 + 0x34))
    void* rbx_1 = arg1[8]
    void* rdi_1 = &arg1[7]
    int64_t r9_1 = sx.q(sub_141f8bbb0(arg3))
    
    if (rbx_1 != 0)
        rdi_1 = rbx_1
    
    int32_t i = *(rdi_1 + ((r9_1 & (sx.q(arg1[9].d) - 1)) << 2))
    
    if (i != 0xffffffff)
        int64_t r8 = *arg1
        
        do
            int64_t rdx = sx.q(i) * 3
            
            if (*(r8 + (rdx << 3)) == *arg3 && *(r8 + (rdx << 3) + 8) == arg3[1])
                *arg2 = i
                return arg2
            
            i = *(r8 + (rdx << 3) + 0x10)
        while (i != 0xffffffff)

*arg2 = 0xffffffff
return arg2
