// 函数: sub_142bee450
// 地址: 0x142bee450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* r9 = arg1

if (arg1 != 0)
    uint32_t r8_1 = zx.d(*arg1)
    
    if (r8_1.b != 0)
        uint64_t result = 0
        
        if ((*((zx.q(r8_1.b) u>> 3) + 0x143699630) & (1 << (r8_1.b & 7)).b) != 0)
            do
                if (result.d u>= 0x19999998)
                    return 0xffffffff
                
                r9 = &r9[1]
                uint32_t rdx_2 = zx.d(*(sx.q(r8_1.b) + 0x1436995b0))
                r8_1 = zx.d(*r9)
                result = zx.q(rdx_2 + ((result * 5).d << 1))
            while ((*((zx.q(r8_1) u>> 3) + 0x143699630) & (1 << (r8_1.b & 7)).b) != 0)
            
            return result

return 0
