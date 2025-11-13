// 函数: sub_142c3c900
// 地址: 0x142c3c900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *(arg1 + 0x98)

if ((*(result + 0x28) & 2) != 0)
    result = zx.q(*(arg3 + 0x60))
    
    if (result.d != 0)
        void* rcx_1 = *(arg3 + 0x70) + 0xe
        uint64_t i_1 = zx.q(result.d)
        uint64_t i
        
        do
            result.b = *(rcx_1 - 2) u>> 6
            
            if ((result.b & 1) != 0)
                char rax = *rcx_1
                
                if ((rax & 0x10) == 0)
                    result = zx.q(rax) & 0xf
                else
                    result = 0
                
                result.b &= 1
                result.b |= 8
                *(rcx_1 + 4) = result.b
                *(arg3 + 0x28) |= 0x1000000
            
            rcx_1 += 0x14
            i = i_1
            i_1 -= 1
        while (i != 1)

return result
