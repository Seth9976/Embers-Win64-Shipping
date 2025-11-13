// 函数: sub_142bee2c0
// 地址: 0x142bee2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* r8 = arg1

if (arg1 != 0)
    char rcx = *arg1
    
    if (rcx != 0)
        uint64_t result = 0
        int32_t r10_1 = 0
        
        if (rcx == 0x2d)
            r8 = &r8[1]
            r10_1 = 1
        
        uint32_t r9_1 = zx.d(*r8)
        
        while ((*((zx.q(r9_1) u>> 3) + 0x143699630) & (1 << (r9_1.b & 7)).b) != 0)
            if (result.d s>= 0xccccccb)
                result = 0x7fffffff
                break
            
            r8 = &r8[1]
            uint32_t rdx_2 = zx.d(*(sx.q(r9_1.b) + 0x1436995b0))
            r9_1 = zx.d(*r8)
            result = zx.q(rdx_2 + ((result * 5).d << 1))
        
        if (r10_1 == 0)
            return result
        
        return zx.q(neg.d(result.d))

return 0
