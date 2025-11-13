// 函数: sub_140da0450
// 地址: 0x140da0450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d != *(arg1 + 0x34))
    int32_t rbp_1 = arg3[1].d
    int16_t* rcx
    
    if (rbp_1 == 0)
        rcx = &data_142d40450
    else
        rcx = *arg3
    
    void* rbx_1 = arg1[8]
    void* rdi_1 = &arg1[7]
    int64_t rcx_1 = sx.q(sub_140a5ff80(rcx, 0))
    
    if (rbx_1 != 0)
        rdi_1 = rbx_1
    
    int32_t i = *(rdi_1 + ((rcx_1 & (sx.q(arg1[9].d) - 1)) << 2))
    
    if (i != 0xffffffff)
        int64_t r11_1 = *arg1
        
        do
            int64_t r10_2 = sx.q(i) * 2
            int64_t* rcx_3 = *(r11_1 + (r10_2 << 3))
            int16_t* const r9_1
            
            if (rbp_1 == 0)
                r9_1 = &data_142d40450
            else
                r9_1 = *arg3
            
            int16_t* rcx_4
            
            if (rcx_3[1].d == 0)
                rcx_4 = &data_142d40450
            else
                rcx_4 = *rcx_3
            
            int64_t r9_2 = r9_1 - rcx_4
            uint32_t j
            uint32_t r8
            
            do
                r8 = zx.d(*rcx_4)
                j = zx.d(*(rcx_4 + r9_2))
                
                if (r8 != j)
                    break
                
                rcx_4 = &rcx_4[1]
            while (j != 0)
            
            if (r8 - j == 0)
                *arg2 = i
                return arg2
            
            i = *(r11_1 + (r10_2 << 3) + 8)
        while (i != 0xffffffff)

*arg2 = 0xffffffff
return arg2
