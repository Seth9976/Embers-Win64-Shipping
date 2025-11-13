// 函数: sub_1418e0c30
// 地址: 0x1418e0c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx_1

if (arg1[1].d != *(arg1 + 0x34))
    void* r9_1 = arg1[8]
    void* r11_1 = &arg1[7]
    
    if (r9_1 != 0)
        r11_1 = r9_1
    
    rbx_1 = *(r11_1 + (((sx.q(arg1[9].d) - 1) & sx.q(*(arg3 + 0x40))) << 2))

if (arg1[1].d == *(arg1 + 0x34) || rbx_1 == 0xffffffff)
label_1418e0cb7:
    *arg2 = 0xffffffff
else
    int64_t r14_1 = *arg1
    
    while (true)
        void* rdi_2 = sx.q(rbx_1) * 0x190 + r14_1
        
        if (sub_1418d7450(rdi_2, arg3) != 0)
            *arg2 = rbx_1
            break
        
        rbx_1 = *(rdi_2 + 0x188)
        
        if (rbx_1 == 0xffffffff)
            goto label_1418e0cb7

return arg2
