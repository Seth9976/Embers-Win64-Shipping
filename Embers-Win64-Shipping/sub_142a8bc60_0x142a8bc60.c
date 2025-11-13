// 函数: sub_142a8bc60
// 地址: 0x142a8bc60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s> 0)
    void* r8 = &arg1[sx.q(arg3)]
    
    if (arg1 u< r8)
        void* r9 = arg2 - arg1
        
        do
            uint32_t rax_2 = zx.d(*(r9 + arg1))
            uint32_t rdx = zx.d(*arg1)
            
            if (rdx != rax_2)
                return zx.q(rdx - rax_2)
            
            arg1 = &arg1[1]
        while (arg1 u< r8)

return 0
