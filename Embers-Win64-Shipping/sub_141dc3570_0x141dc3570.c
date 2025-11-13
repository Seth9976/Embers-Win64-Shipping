// 函数: sub_141dc3570
// 地址: 0x141dc3570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx_1

if (arg1[1].d != *(arg1 + 0x34))
    void* r9_1 = arg1[8]
    void* r10_1 = &arg1[7]
    
    if (r9_1 != 0)
        r10_1 = r9_1
    
    rbx_1 = *(r10_1 + (((sx.q((arg3 u>> 0x20).d) ^ sx.q(arg3.d)) & (sx.q(arg1[9].d) - 1)) << 2))

if (arg1[1].d == *(arg1 + 0x34) || rbx_1 == 0xffffffff)
label_141dc3607:
    *arg2 = 0xffffffff
else
    int64_t rcx = *arg1
    
    while (true)
        int64_t arg_8 = arg3
        int64_t rsi_2 = sx.q(rbx_1) * 0xa
        int64_t arg_20 = *(rcx + (rsi_2 << 3))
        
        if (sub_14077a170(&arg_20, &arg_8) != 0)
            *arg2 = rbx_1
            break
        
        rcx = *arg1
        rbx_1 = *(rcx + (rsi_2 << 3) + 0x40)
        
        if (rbx_1 == 0xffffffff)
            goto label_141dc3607

return arg2
