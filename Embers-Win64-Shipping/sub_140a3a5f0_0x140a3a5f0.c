// 函数: sub_140a3a5f0
// 地址: 0x140a3a5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_2

if (arg1[1].d != *(arg1 + 0x34))
    void* r10_1 = arg1[8]
    void* rbx_1 = &arg1[7]
    
    if (r10_1 != 0)
        rbx_1 = r10_1
    
    rax_2 = *(rbx_1 + (((sx.q(arg1[9].d) - 1) & sx.q(arg3)) << 2))

if (arg1[1].d == *(arg1 + 0x34) || rax_2 == 0xffffffff)
label_140a3a6e8:
    *arg2 = 0xffffffff
else
    int64_t rbp_1 = *arg1
    
    while (true)
        int64_t* rbx_2 = sx.q(rax_2) * 0xb8
        int16_t* r9
        
        if (arg4[1].d == 0)
            r9 = &data_142d40450
        else
            r9 = *arg4
        
        int16_t* const r11_4
        
        if (*(rbx_2 + rbp_1 + 8) == 0)
            r11_4 = &data_142d40450
        else
            r11_4 = *(rbx_2 + rbp_1)
        
        int16_t* r11_5 = r11_4 - r9
        uint32_t rcx_3
        
        while (true)
            int16_t rcx_1 = *(r11_5 + r9)
            int16_t r10_2 = *r9
            r9 = &r9[1]
            
            if (rcx_1 != r10_2)
                if (((zx.d(rcx_1) | zx.d(r10_2)) & 0xffffff80) != 0)
                    rcx_3 = zx.d(rcx_1) - zx.d(r10_2)
                    break
                
                uint32_t r8_2 = zx.d(*(zx.q(r10_2) + &data_142e5e8a0))
                uint32_t rcx_2 = zx.d(*(zx.q(rcx_1) + &data_142e5e8a0))
                rcx_3 = rcx_2 - r8_2
                
                if (rcx_2 != r8_2)
                    break
            else
                if (rcx_1 == 0)
                    goto label_140a3a69b
        
        if (rcx_3 == 0)
        label_140a3a69b:
            *arg2 = rax_2
            break
        
        rax_2 = *(rbx_2 + rbp_1 + 0xb0)
        
        if (rax_2 == 0xffffffff)
            goto label_140a3a6e8

return arg2
