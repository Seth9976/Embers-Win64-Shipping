// 函数: sub_140a45180
// 地址: 0x140a45180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_4
int32_t rbp_1

if (arg1[1].d != *(arg1 + 0x34))
    rbp_1 = arg3[1].d
    int16_t* rdx
    
    if (rbp_1 == 0)
        rdx = &data_142d40450
    else
        rdx = *arg3
    
    void* rbx_1 = arg1[8]
    void* rdi_1 = &arg1[7]
    int32_t rcx = rbp_1 - 1
    
    if (rbp_1 == 0)
        rcx = 0
    
    int64_t rcx_1 = sx.q(sub_1405969c0(rcx, rdx))
    
    if (rbx_1 != 0)
        rdi_1 = rbx_1
    
    rax_4 = *(rdi_1 + ((rcx_1 & (sx.q(arg1[9].d) - 1)) << 2))

if (arg1[1].d == *(arg1 + 0x34) || rax_4 == 0xffffffff)
label_140a452a1:
    *arg2 = 0xffffffff
else
    while (true)
        int64_t* rbx_2 = (sx.q(rax_4) << 5) + *arg1
        int16_t* r9_1
        
        if (rbp_1 == 0)
            r9_1 = &data_142d40450
        else
            r9_1 = *arg3
        
        int16_t* const r11_1
        
        if (rbx_2[1].d == 0)
            r11_1 = &data_142d40450
        else
            r11_1 = *rbx_2
        
        int16_t* r11_2 = r11_1 - r9_1
        uint32_t rcx_7
        
        while (true)
            int16_t rcx_5 = *(r11_2 + r9_1)
            int16_t r10_1 = *r9_1
            r9_1 = &r9_1[1]
            
            if (rcx_5 != r10_1)
                if (((zx.d(rcx_5) | zx.d(r10_1)) & 0xffffff80) != 0)
                    rcx_7 = zx.d(rcx_5) - zx.d(r10_1)
                    break
                
                uint32_t r8_2 = zx.d(*(zx.q(r10_1) + &data_142e5e8a0))
                uint32_t rcx_6 = zx.d(*(zx.q(rcx_5) + &data_142e5e8a0))
                rcx_7 = rcx_6 - r8_2
                
                if (rcx_6 != r8_2)
                    break
            else
                if (rcx_5 == 0)
                    goto label_140a45258
        
        if (rcx_7 == 0)
        label_140a45258:
            *arg2 = rax_4
            break
        
        rax_4 = rbx_2[3].d
        
        if (rax_4 == 0xffffffff)
            goto label_140a452a1

return arg2
