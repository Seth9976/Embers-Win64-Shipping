// 函数: sub_140a39e70
// 地址: 0x140a39e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
sub_1405b6730(arg1 + 8, *(arg1 + 0x10) - *(arg1 + 0x3c), 0)

if (*(arg1 + 0x50) != 0)
    int32_t rax_2 = sub_140b5ead0(arg2.d) + arg2:4.d
    void* r8 = arg1 + 0x40
    void* rcx_2 = *(r8 + 8)
    
    if (rcx_2 != 0)
        r8 = rcx_2
    
    int32_t i = *(r8 + (((sx.q(*(arg1 + 0x50)) - 1) & sx.q(rax_2)) << 2))
    int32_t i_1 = i
    int32_t i_2 = i
    
    if (i != 0xffffffff)
        int64_t r9_1 = *(arg1 + 8)
        
        do
            int64_t rcx_3 = sx.q(i_1) * 3
            i = *(r9_1 + (rcx_3 << 3) + 0x10)
            i_2 = i
            
            if (*(r9_1 + (rcx_3 << 3)) == arg2)
                break
            
            i_1 = i
        while (i != 0xffffffff)
    
    if (i_1 != 0xffffffff)
        int64_t r10_1 = *(arg1 + 8)
        
        do
            if (*(r10_1 + sx.q(i_1) * 0x18 + 8) == arg3)
                sub_1405c2fb0(arg1 + 8, i_1)
                break
            
            i_1 = i_2
            
            if (i == 0xffffffff)
                break
            
            do
                int64_t rcx_4 = sx.q(i_1) * 3
                i = *(r10_1 + (rcx_4 << 3) + 0x10)
                i_2 = i
                
                if (*(r10_1 + (rcx_4 << 3)) == arg2)
                    break
                
                i_1 = i
            while (i != 0xffffffff)
        while (i_1 != 0xffffffff)

return sub_140a37c80(arg1 + 0x70, &arg_10, arg3)
