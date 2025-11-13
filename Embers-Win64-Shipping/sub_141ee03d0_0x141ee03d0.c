// 函数: sub_141ee03d0
// 地址: 0x141ee03d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg1[0x11].b)

if ((result.b & 1) != 0)
    if ((result.b & 0x20) == 0)
        if ((result.b & 0x40) != 0)
            (*(*arg1 + 0x2d8))()
            result = zx.q(arg1[0x11].b)
        
        if (result.b s< 0)
            jump(*(*arg1 + 0x2e0))
    else
        if ((result.b & 2) != 0)
            (*(*arg1 + 0x2e8))()
            result = zx.q(arg1[0x11].b)
        
        if ((result.b & 1) != 0)
            result = arg1[0x15]
            
            if (*(result + 0x1b0) != 0)
                jump(*(*arg1 + 0x2d0))

return result
