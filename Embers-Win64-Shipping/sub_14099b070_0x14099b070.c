// 函数: sub_14099b070
// 地址: 0x14099b070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rcx_5

if (arg1[1].d == *(arg1 + 0x34))
label_14099b0f0:
    rcx_5 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(arg3.d) + arg3:4.d
    void* r8 = &arg1[7]
    void* rdx = *(r8 + 8)
    
    if (rdx != 0)
        r8 = rdx
    
    int32_t rax_4 = *(r8 + (((sx.q(arg1[9].d) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_14099b0f0_1:
        rcx_5 = nullptr
    else
        int64_t r8_1 = *arg1
        
        while (true)
            int64_t rdx_1 = sx.q(rax_4) * 3
            rcx_5 = r8_1 + (rdx_1 << 3)
            
            if (*(r8_1 + (rdx_1 << 3)) == arg3)
                break
            
            rax_4 = *(rcx_5 + 0x10)
            
            if (rax_4 == 0xffffffff)
                goto label_14099b0f0_2
        
        if (rax_4 == 0xffffffff)
        label_14099b0f0_2:
            rcx_5 = nullptr

void* rax_5 = rcx_5 + 8

if (rcx_5 == 0)
    rax_5 = nullptr

void* rcx_6

if (rax_5 != 0)
    rcx_6 = *rax_5

if (rax_5 == 0 || *(rcx_6 + 8) != 6)
    *arg2 = nullptr
else
    *arg2 = rcx_6

return arg2
