// 函数: sub_142aa4000
// 地址: 0x142aa4000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg4 s<= 0)
    if (arg3 s>= 0 && (arg2 != 0 || arg3 s<= 0))
        void* rdx = *(arg1 + 0x10)
        uint64_t rbx = zx.q(*(rdx + 0x48))
        
        if (rbx.d == 0)
            return 0
        
        if (rbx.d s<= arg3)
            memcpy(arg2, *(rdx + 0x40), (rbx << 2).d)
            return zx.q(rbx.d)
        
        *arg4 = 0xf
        return zx.q(rbx.d)
    
    *arg4 = 1

return 0
