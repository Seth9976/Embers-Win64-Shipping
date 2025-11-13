// 函数: sub_141e7aa60
// 地址: 0x141e7aa60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x4d0) != *(arg1 + 0x4fc))
    void* r10_1 = arg1 + 0x500
    void* r9_1 = *(r10_1 + 8)
    
    if (r9_1 != 0)
        r10_1 = r9_1
    
    int32_t i =
        *(r10_1 + ((sx.q((arg2 u>> 0x20).d * 0x17 + arg2.d) & (sx.q(*(arg1 + 0x510)) - 1)) << 2))
    
    if (i != 0xffffffff)
        int64_t r8_3 = *(arg1 + 0x4c8)
        
        do
            int64_t i_1 = sx.q(i)
            int64_t rcx = i_1 * 3
            
            if (*(r8_3 + (rcx << 3)) == arg2)
                if (i != 0xffffffff)
                    void* rax_6 = r8_3 + i_1 * 0x18
                    
                    if (rax_6 != 0)
                        return *(rax_6 + 8)
                
                break
            
            i = *(r8_3 + (rcx << 3) + 0x10)
        while (i != 0xffffffff)

return 0
