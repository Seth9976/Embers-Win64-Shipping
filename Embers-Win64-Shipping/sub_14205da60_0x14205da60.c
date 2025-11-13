// 函数: sub_14205da60
// 地址: 0x14205da60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143a2e2d8 != data_143a2e304)
    int32_t rax_2 = sub_140b5ead0(arg2.d) + arg2:4.d
    void* rcx_1 = data_143a2e310
    void* rax_4 = &data_143a2e308
    
    if (rcx_1 != 0)
        rax_4 = rcx_1
    
    int32_t i = *(rax_4 + (((sx.q(data_143a2e318) - 1) & sx.q(rax_2)) << 2))
    
    if (i != 0xffffffff)
        int64_t r8_1 = data_143a2e2d0
        
        do
            int64_t rcx_3 = sx.q(i) << 5
            
            if (*(rcx_3 + r8_1) == arg2)
                if (i != 0xffffffff)
                    void* rdx_4 = rcx_3 + r8_1
                    
                    if (rdx_4 != 0)
                        sub_140596d10(arg1, rdx_4 + 8)
                        return arg1
                
                break
            
            i = *(rcx_3 + r8_1 + 0x18)
        while (i != 0xffffffff)

*arg1 = 0
arg1[1] = 0
return arg1
