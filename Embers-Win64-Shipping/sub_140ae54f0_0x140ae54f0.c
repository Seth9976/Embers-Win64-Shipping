// 函数: sub_140ae54f0
// 地址: 0x140ae54f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg2)

if (arg1[1].d != *(arg1 + 0x34))
    void* r10_1 = arg1[8]
    void* rbx_1 = &arg1[7]
    
    if (r10_1 != 0)
        rbx_1 = r10_1
    
    int64_t* rcx_3
    
    for (int32_t i = *(rbx_1 + (((sx.q(arg1[9].d) - 1) & rbp) << 2)); i != 0xffffffff; 
            i = rcx_3[5].d)
        rcx_3 = sx.q(i) * 0x30 + *arg1
        
        if (*rcx_3 == *arg3)
            if (i != 0xffffffff && rcx_3 != 0)
                return &rcx_3[1]
            
            break

return sub_140ae5000(arg1, rbp.d, arg3, arg4)
