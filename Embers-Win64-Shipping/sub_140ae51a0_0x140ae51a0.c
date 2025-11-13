// 函数: sub_140ae51a0
// 地址: 0x140ae51a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *arg2
sub_140a6d3f0(arg1, arg1[1].d - *(arg1 + 0x34), 0)

if (arg1[9].d != 0)
    int32_t rax_2 = sub_140b5ead0(rbx.d) + rbx:4.d
    void* r8 = &arg1[7]
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t i = *(r8 + (((sx.q(arg1[9].d) - 1) & sx.q(rax_2)) << 2))
    int32_t i_1 = i
    
    if (i != 0xffffffff)
        int64_t r8_1 = *arg1
        
        do
            int64_t rdx_6 = sx.q(i_1) * 6
            i = *(r8_1 + (rdx_6 << 3) + 0x28)
            
            if (*(r8_1 + (rdx_6 << 3)) == rbx)
                break
            
            i_1 = i
        while (i != 0xffffffff)
    
    if (i_1 != 0xffffffff)
        int64_t r11_1 = *arg1
        
        do
            int64_t r8_3 = sx.q(i_1) * 6
            int16_t* const r10_1
            
            if (arg3[1].d == 0)
                r10_1 = &data_142d40450
            else
                r10_1 = *arg3
            
            int16_t* rdx_8
            
            if (*(r11_1 + (r8_3 << 3) + 0x10) == 0)
                rdx_8 = &data_142d40450
            else
                rdx_8 = *(r11_1 + (r8_3 << 3) + 8)
            
            void* r10_2 = r10_1 - rdx_8
            uint32_t j
            uint32_t r9_1
            
            do
                r9_1 = zx.d(*rdx_8)
                j = zx.d(*(rdx_8 + r10_2))
                
                if (r9_1 != j)
                    break
                
                rdx_8 = &rdx_8[1]
            while (j != 0)
            
            if (r9_1 - j == 0)
                int64_t rcx_3 = sx.q(i_1) * 0x30
                
                if (r11_1 + 8 != neg.q(rcx_3))
                    return r11_1 + 8 + rcx_3
                
                break
            
            i_1 = i
            
            if (i == 0xffffffff)
                break
            
            do
                int64_t rdx_10 = sx.q(i_1) * 6
                i = *(r11_1 + (rdx_10 << 3) + 0x28)
                
                if (*(r11_1 + (rdx_10 << 3)) == rbx)
                    break
                
                i_1 = i
            while (i != 0xffffffff)
        while (i_1 != 0xffffffff)

return sub_140ae49f0(arg1, arg2, arg3)
