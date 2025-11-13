// 函数: sub_140946f40
// 地址: 0x140946f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx_2

if (arg1[1].d != *(arg1 + 0x34))
    void* r10_1 = arg1[8]
    void* rbx_1 = &arg1[7]
    
    if (r10_1 != 0)
        rbx_1 = r10_1
    
    rbx_2 = *(rbx_1 + (((sx.q(arg1[9].d) - 1) & sx.q(arg3)) << 2))

if (arg1[1].d == *(arg1 + 0x34) || rbx_2 == 0xffffffff)
label_140946fc8:
    *arg2 = 0xffffffff
else
    void* rcx = *arg1
    
    while (true)
        int64_t rdi_1 = sx.q(rbx_2) * 0x118
        
        if (sub_14094dfb0(rcx + rdi_1, arg4) != 0)
            *arg2 = rbx_2
            break
        
        rcx = *arg1
        rbx_2 = *(rdi_1 + rcx + 0x110)
        
        if (rbx_2 == 0xffffffff)
            goto label_140946fc8

return arg2
