// 函数: sub_1410212c0
// 地址: 0x1410212c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx_1

if (arg1[1].d != *(arg1 + 0x34))
    int32_t rax_1 = sub_140a6b260(&arg3[1], *arg3 * 2)
    void* rcx_1 = arg1[8]
    void* r8 = &arg1[7]
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & sx.q(rax_1)) << 2))

if (arg1[1].d == *(arg1 + 0x34) || rbx_1 == 0xffffffff)
label_141021367:
    *arg2 = 0xffffffff
else
    void* rbp_1 = *arg1
    int32_t r14_1 = *arg3
    
    while (true)
        int32_t* rdi_1 = sx.q(rbx_1) * 0xb8
        int32_t rax_4 = *(rdi_1 + rbp_1)
        
        if (rax_4 == r14_1 && memcmp(rbp_1 + 4 + rdi_1, &arg3[1], zx.q(rax_4) * 2) == 0)
            *arg2 = rbx_1
            break
        
        rbx_1 = *(rdi_1 + rbp_1 + 0xb0)
        
        if (rbx_1 == 0xffffffff)
            goto label_141021367

return arg2
