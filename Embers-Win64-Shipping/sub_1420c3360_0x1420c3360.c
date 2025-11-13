// 函数: sub_1420c3360
// 地址: 0x1420c3360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s< 0x20)
    int32_t rdx = 0
    int32_t rcx = 0
    
    if (arg3 s> 0)
        while (true)
            if (rcx s< 0x20 && (arg1 & 1 << rcx.b) s> 0)
                rcx += 1
                
                if (rcx s>= arg3)
                    break
                
                continue
            
            if (arg2 s>= 0 && arg2 s< arg3)
                rdx = arg2
            
            while (test_bit(arg1, rdx))
                rdx = mods.dp.d(sx.q(rdx + 1), arg3)
            
            return zx.q(rdx)

return 0xffffffff
