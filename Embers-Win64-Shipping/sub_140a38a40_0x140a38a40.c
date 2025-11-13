// 函数: sub_140a38a40
// 地址: 0x140a38a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
sub_1405b6730(arg1 + 8, *(arg1 + 0x10) - *(arg1 + 0x3c), 0)

if (*(arg1 + 0x50) != 0)
    int32_t rax_2 = sub_140b5ead0(arg2.d) + arg2:4.d
    void* r8_1 = arg1 + 0x40
    void* rcx_2 = *(r8_1 + 8)
    
    if (rcx_2 != 0)
        r8_1 = rcx_2
    
    int32_t i = *(r8_1 + (((sx.q(*(arg1 + 0x50)) - 1) & sx.q(rax_2)) << 2))
    int32_t i_2 = i
    
    if (i != 0xffffffff)
        int64_t r8_2 = *(arg1 + 8)
        
        do
            int64_t rdx_5 = sx.q(i_2) * 3
            i = *(r8_2 + (rdx_5 << 3) + 0x10)
            
            if (*(r8_2 + (rdx_5 << 3)) == arg2)
                break
            
            i_2 = i
        while (i != 0xffffffff)
    
    if (i_2 != 0xffffffff)
        int32_t i_1
        
        do
            rdi += 1
            i_1 = i
            
            if (i == 0xffffffff)
                break
            
            int64_t rdx_6 = *(arg1 + 8)
            
            do
                int64_t r8_3 = sx.q(i_1) * 3
                i = *(rdx_6 + (r8_3 << 3) + 0x10)
                
                if (*(rdx_6 + (r8_3 << 3)) == arg2)
                    break
                
                i_1 = i
            while (i != 0xffffffff)
        while (i_1 != 0xffffffff)

return zx.q(rdi)
