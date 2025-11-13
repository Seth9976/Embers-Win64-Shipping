// 函数: sub_141fb2e20
// 地址: 0x141fb2e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = *arg2

if (*(arg1 + 0x1378) != *(arg1 + 0x13a4))
    void* r8_1 = arg1 + 0x13a8
    void* rdx = *(r8_1 + 8)
    
    if (rdx != 0)
        r8_1 = rdx
    
    int32_t i =
        *(r8_1 + (((sx.q((r10 u>> 0x20).d) ^ sx.q(r10.d)) & (sx.q(*(arg1 + 0x13b8)) - 1)) << 2))
    
    if (i != 0xffffffff)
        int64_t r8_2 = *(arg1 + 0x1370)
        
        do
            int64_t rdx_2 = sx.q(i) * 0x18
            int64_t rcx_4 = *(rdx_2 + r8_2)
            
            if (rcx_4.d == r10.d && (rcx_4 u>> 0x20).d == (r10 u>> 0x20).d)
                if (i != 0xffffffff)
                    void* rax_6 = rdx_2 + r8_2
                    
                    if (rax_6 != 0)
                        return *(rax_6 + 8)
                
                break
            
            i = *(rdx_2 + r8_2 + 0x10)
        while (i != 0xffffffff)

return 0
