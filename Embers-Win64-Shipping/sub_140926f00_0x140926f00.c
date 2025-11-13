// 函数: sub_140926f00
// 地址: 0x140926f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx_2

if (arg1[1].d != *(arg1 + 0x34))
    int32_t rax_1 = *(arg3 + 0x20)
    int16_t* rdx
    
    if (rax_1 == 0)
        rdx = &data_142d40450
    else
        rdx = *(arg3 + 0x18)
    
    void* rbx_1 = arg1[8]
    void* rdi_1 = &arg1[7]
    int32_t rcx = rax_1 - 1
    
    if (rax_1 == 0)
        rcx = 0
    
    int64_t rcx_1 = sx.q(sub_1405969c0(rcx, rdx))
    
    if (rbx_1 != 0)
        rdi_1 = rbx_1
    
    rbx_2 = *(rdi_1 + ((rcx_1 & (sx.q(arg1[9].d) - 1)) << 2))

if (arg1[1].d == *(arg1 + 0x34) || rbx_2 == 0xffffffff)
label_140926fac:
    *arg2 = 0xffffffff
else
    int64_t rax_5 = *arg1
    
    while (true)
        int64_t rdi_2 = sx.q(rbx_2) * 0x48
        
        if ((**(rdi_2 + rax_5))(rdi_2 + rax_5, arg3) != 0)
            *arg2 = rbx_2
            break
        
        rax_5 = *arg1
        rbx_2 = *(rdi_2 + rax_5 + 0x40)
        
        if (rbx_2 == 0xffffffff)
            goto label_140926fac

return arg2
