// 函数: sub_14099ae30
// 地址: 0x14099ae30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rcx_2

if (arg1[1].d == *(arg1 + 0x34))
label_14099aeb0:
    rcx_2 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(arg4.d) + arg4:4.d
    void* r9 = &arg1[7]
    void* r8 = *(r9 + 8)
    
    if (r8 != 0)
        r9 = r8
    
    int32_t rax_4 = *(r9 + (((sx.q(arg1[9].d) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_14099aeb0_1:
        rcx_2 = nullptr
    else
        int64_t r8_1 = *arg1
        
        while (true)
            int64_t rdx_3 = sx.q(rax_4) * 3
            rcx_2 = r8_1 + (rdx_3 << 3)
            
            if (*(r8_1 + (rdx_3 << 3)) == arg4)
                break
            
            rax_4 = *(rcx_2 + 0x10)
            
            if (rax_4 == 0xffffffff)
                goto label_14099aeb0_2
        
        if (rax_4 == 0xffffffff)
        label_14099aeb0_2:
            rcx_2 = nullptr

*arg2 = *(*(*(*(rcx_2 + 8) + 0x18) + sx.q(arg5) * 0x10) + (sx.q(arg3) << 3))
return arg2
