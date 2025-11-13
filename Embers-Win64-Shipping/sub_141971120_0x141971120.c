// 函数: sub_141971120
// 地址: 0x141971120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx_2

if (arg1[1].d != *(arg1 + 0x34))
    void* rbx_1 = arg1[8]
    void* rdi_1 = &arg1[7]
    int64_t r9_1 = sx.q(sub_141974050(arg3))
    
    if (rbx_1 != 0)
        rdi_1 = rbx_1
    
    rbx_2 = *(rdi_1 + ((r9_1 & (sx.q(arg1[9].d) - 1)) << 2))

if (arg1[1].d == *(arg1 + 0x34) || rbx_2 == 0xffffffff)
label_1419711a7:
    *arg2 = 0xffffffff
else
    int64_t r14_1 = *arg1
    
    while (true)
        int64_t* rdi_3 = sx.q(rbx_2) * 0xb8 + r14_1
        
        if (sub_141965390(rdi_3, arg3) != 0)
            *arg2 = rbx_2
            break
        
        rbx_2 = rdi_3[0x16].d
        
        if (rbx_2 == 0xffffffff)
            goto label_1419711a7

return arg2
