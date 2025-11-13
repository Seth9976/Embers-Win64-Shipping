// 函数: sub_14077b320
// 地址: 0x14077b320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx_2

if (arg1[1].d != *(arg1 + 0x34))
    void* r10_1 = arg1[8]
    void* rbx_1 = &arg1[7]
    
    if (r10_1 != 0)
        rbx_1 = r10_1
    
    rbx_2 = *(rbx_1 + (((sx.q(arg1[9].d) - 1) & sx.q(arg3)) << 2))

if (arg1[1].d == *(arg1 + 0x34) || rbx_2 == 0xffffffff)
label_14077b3aa:
    *arg2 = 0xffffffff
else
    int64_t rcx = *arg1
    
    while (true)
        int64_t arg_8 = *arg4
        int64_t rdi_2 = sx.q(rbx_2) * 6
        int64_t var_28 = *(rcx + (rdi_2 << 3))
        
        if (sub_14077a170(&var_28, &arg_8) != 0)
            *arg2 = rbx_2
            break
        
        rcx = *arg1
        rbx_2 = *(rcx + (rdi_2 << 3) + 0x28)
        
        if (rbx_2 == 0xffffffff)
            goto label_14077b3aa

return arg2
