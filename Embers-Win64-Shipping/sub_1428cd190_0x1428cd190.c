// 函数: sub_1428cd190
// 地址: 0x1428cd190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)

if (arg1 != 0 && arg2 != 0)
    int32_t r8_1 = *arg1
    
    if (r8_1 == *arg2)
        if (r8_1 == 1)
            return zx.q(arg1[2] - arg2[2])
        
        if (r8_1 == 5)
            return 0
        
        int32_t* rdx = *(arg2 + 8)
        int32_t* rcx = *(arg1 + 8)
        
        if (r8_1 == 6)
            return sub_1428f6490(rcx, rdx) __tailcall
        
        return sub_1428f29b0(rcx, rdx) __tailcall

return 0xffffffff
