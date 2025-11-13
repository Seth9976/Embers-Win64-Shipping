// 函数: sub_140774540
// 地址: 0x140774540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(arg2)
int32_t result = *(arg1 + 0xd0)

if (result != *(arg1 + 0xfc))
    void* rcx = *(arg1 + 0x108)
    void* r9_1 = arg1 + 0x100
    
    if (rcx != 0)
        r9_1 = rcx
    
    result = *(r9_1 + (((sx.q(*(arg1 + 0x110)) - 1) & r10) << 2))
    
    if (result != 0xffffffff)
        int64_t r8_4 = *(arg1 + 0xc8)
        
        while (true)
            int64_t rdx = sx.q(result) * 3
            
            if (*(r8_4 + (rdx << 3)) == r10.d)
                break
            
            result = *(r8_4 + (rdx << 3) + 0x10)
            
            if (result == 0xffffffff)
                return result
        
        if (result != 0xffffffff)
            return sub_140773fa0(arg1 + 0xc8, r10.d) __tailcall

return result
