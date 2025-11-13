// 函数: sub_140fc4050
// 地址: 0x140fc4050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0x18)

if (result != *(arg1 + 0x44))
    int32_t rax_1 = sub_140b5ead0(arg2.d) + arg2:4.d
    void* r8_1 = arg1 + 0x48
    void* rcx_1 = *(r8_1 + 8)
    
    if (rcx_1 != 0)
        r8_1 = rcx_1
    
    result = *(r8_1 + (((sx.q(*(arg1 + 0x58)) - 1) & sx.q(rax_1)) << 2))
    
    if (result != 0xffffffff)
        int64_t r8_2 = *(arg1 + 0x10)
        
        while (true)
            int64_t rdx_3 = sx.q(result) * 3
            
            if (*(r8_2 + (rdx_3 << 3)) == arg2)
                break
            
            result = *(r8_2 + (rdx_3 << 3) + 0x10)
            
            if (result == 0xffffffff)
                return result
        
        if (result != 0xffffffff)
            return sub_140943590(arg1 + 0x10, arg2)

return result
