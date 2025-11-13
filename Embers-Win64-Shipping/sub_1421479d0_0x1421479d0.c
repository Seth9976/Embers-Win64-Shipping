// 函数: sub_1421479d0
// 地址: 0x1421479d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8
sub_140d3a3a0(&arg_8, arg2)
uint64_t result = zx.q(*(arg1 + 0x1378))

if (result.d != *(arg1 + 0x13a4))
    int64_t rdx = arg_8
    void* r9_1 = arg1 + 0x13a8
    void* rcx_1 = *(r9_1 + 8)
    uint32_t r10_2 = (rdx u>> 0x20).d
    
    if (rcx_1 != 0)
        r9_1 = rcx_1
    
    result = zx.q(*(r9_1 + (((sx.q(rdx.d) ^ sx.q(r10_2)) & (sx.q(*(arg1 + 0x13b8)) - 1)) << 2)))
    
    if (result.d != 0xffffffff)
        int64_t r9_2 = *(arg1 + 0x1370)
        int64_t r8_5
        
        while (true)
            r8_5 = sx.q(result.d) * 0x18
            int64_t rcx_3 = *(r8_5 + r9_2)
            
            if (rcx_3.d == rdx.d && (rcx_3 u>> 0x20).d == r10_2)
                break
            
            result = zx.q(*(r8_5 + r9_2 + 0x10))
            
            if (result.d == 0xffffffff)
                return result
        
        if (result.d != 0xffffffff)
            result = r8_5 + r9_2
            
            if (result != 0)
                result = *(result + 8)
                
                if (result != 0)
                    *(result + 0x90) |= 2

return result
