// 函数: sub_140bcf240
// 地址: 0x140bcf240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *arg2
void* const rcx_3

if (arg1[1].d == *(arg1 + 0x34))
label_140bcf2c0:
    rcx_3 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(rbx.d) + rbx:4.d
    void* r8_1 = &arg1[7]
    void* rcx_1 = *(r8_1 + 8)
    
    if (rcx_1 != 0)
        r8_1 = rcx_1
    
    int32_t rax_4 = *(r8_1 + (((sx.q(arg1[9].d) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_140bcf2c0_1:
        rcx_3 = nullptr
    else
        int64_t r8_2 = *arg1
        
        while (true)
            int64_t rdx_3 = sx.q(rax_4) * 5
            rcx_3 = r8_2 + (rdx_3 << 3)
            
            if (*(r8_2 + (rdx_3 << 3)) == rbx)
                break
            
            rax_4 = *(rcx_3 + 0x20)
            
            if (rax_4 == 0xffffffff)
                goto label_140bcf2c0_2
        
        if (rax_4 == 0xffffffff)
        label_140bcf2c0_2:
            rcx_3 = nullptr

if (rcx_3 == 0)
    return nullptr

return rcx_3 + 8
