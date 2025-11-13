// 函数: sub_1416824d0
// 地址: 0x1416824d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = sx.q(arg2)

if (arg3[1].d != *(arg3 + 0x34))
    void* rcx = arg3[8]
    void* r10_1 = &arg3[7]
    
    if (rcx != 0)
        r10_1 = rcx
    
    int32_t i = *(r10_1 + (((sx.q(arg3[9].d) - 1) & r11) << 2))
    
    if (i != 0xffffffff)
        int64_t r9_4 = *arg3
        
        do
            int64_t rdx = sx.q(i) * 9
            void* rcx_2 = r9_4 + (rdx << 2)
            
            if (*(r9_4 + (rdx << 2)) == r11.d)
                if (i != 0xffffffff)
                    return rcx_2 + 4
                
                break
            
            i = *(rcx_2 + 0x1c)
        while (i != 0xffffffff)

return 4
