// 函数: sub_142af4880
// 地址: 0x142af4880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 s>= 0)
    if (arg1 s< 0x41)
        int64_t rax_2 = sx.q(arg1) * 2
        
        if (*((rax_2 << 3) + 0x14365c9f4) == 0)
            return zx.q(*(&data_14365c9f0 + (rax_2 << 3)))
        
        return 2
    
    if (arg1 s>= 0x1000)
        if (arg1 s< 0x1019)
            int64_t rcx_1 = sx.q(arg1 - 0x1000) << 5
            
            if (*(rcx_1 + 0x14365ce34) == 0)
                return zx.q(*(rcx_1 + &data_14365ce30))
            
            return 2
        
        if (arg1 s< 0x4000)
            int32_t rdx
            rdx.b = ((arg1 - 0x2000) & 0xffffefff) == 0
            return zx.q(rdx)
        
        if (arg1 s>= 0x400e)
            if (arg1 != 0x7000)
                return 0
            
            return 2
        
        if (arg1 - 0x4000 u<= 0xc)
            switch (arg1)
                case 0x4001
                    return 5
                case 0x4002, 0x4004, 0x4006, 0x4007, 0x4008, 0x4009, 0x400a, 0x400c
                    return 4
                case 0x4003, 0x4005, 0x400b
                    return 3
            
            return 2

return 0
