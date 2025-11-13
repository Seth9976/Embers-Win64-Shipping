// 函数: sub_1420253e0
// 地址: 0x1420253e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = (*(*arg1 + 0x150))()
void* r8 = *(result + 0x38)

if (r8 != 0)
    if (arg2 != 0)
        *(r8 + 0x2c1) = 0
        *(r8 + 0x2c4) = arg1[0x49].d
        *(r8 + 0x2c8) = *(arg1 + 0x24c)
        *(r8 + 0x2cc) = arg1[0x45].d
        *(r8 + 0x2d0) = arg1[0x4a].d
        *(r8 + 0x2d4) = *(arg1 + 0x254)
        *(r8 + 0x2d8) = arg1[0x4b].d
        *(r8 + 0x2dc) = *(arg1 + 0x25c)
        
        if (not(0f f>= arg1[0x49].d))
            result.b = 1
            *(r8 + 0x2c0) = 1
            return result
    
    result.b = 0
    *(r8 + 0x2c0) = 0

return result
