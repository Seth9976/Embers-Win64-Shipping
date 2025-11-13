// 函数: sub_1405e22d0
// 地址: 0x1405e22d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx_2

if (arg1[1].d != *(arg1 + 0x34))
    void* rcx
    
    if (arg3[4] == 0)
        rcx = &data_142d40450
    else
        rcx = *(arg3 + 8)
        
        if ((rcx.b & 1) != 0)
            rcx = (rcx s>> 1) + &arg3[2]
    
    void* rbx_1 = arg1[8]
    void* rdi_1 = &arg1[7]
    int64_t rcx_2 = sx.q(sub_1405de2b0(rcx))
    
    if (rbx_1 != 0)
        rdi_1 = rbx_1
    
    rbx_2 = *(rdi_1 + ((rcx_2 & (sx.q(arg1[9].d) - 1)) << 2))

if (arg1[1].d == *(arg1 + 0x34) || rbx_2 == 0xffffffff)
label_1405e2373:
    *arg2 = 0xffffffff
else
    int64_t rax_5 = *arg1
    
    while (true)
        int64_t rdi_3 = sx.q(rbx_2) << 6
        
        if (sub_1405dfda0(rdi_3 + rax_5, arg3) != 0)
            *arg2 = rbx_2
            break
        
        rax_5 = *arg1
        rbx_2 = *(rdi_3 + rax_5 + 0x38)
        
        if (rbx_2 == 0xffffffff)
            goto label_1405e2373

return arg2
