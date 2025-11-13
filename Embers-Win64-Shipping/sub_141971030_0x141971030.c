// 函数: sub_141971030
// 地址: 0x141971030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d != *(arg1 + 0x34))
    void* rbx_1 = arg1[8]
    void* rdi_1 = &arg1[7]
    int64_t r9_1 = sx.q(sub_141973d30(arg3))
    
    if (rbx_1 != 0)
        rdi_1 = rbx_1
    
    int64_t* rdx_2
    
    for (int32_t i = *(rdi_1 + ((r9_1 & (sx.q(arg1[9].d) - 1)) << 2)); i != 0xffffffff; 
            i = rdx_2[7].d)
        rdx_2 = (sx.q(i) << 6) + *arg1
        
        if (*rdx_2 == *arg3 && rdx_2[1] == arg3[1] && rdx_2[2] == arg3[2] && rdx_2[3] == arg3[3]
                && rdx_2[4] == arg3[4] && rdx_2[5] == arg3[5])
            *arg2 = i
            return arg2

*arg2 = 0xffffffff
return arg2
