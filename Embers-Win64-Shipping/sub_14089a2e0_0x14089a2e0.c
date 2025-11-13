// 函数: sub_14089a2e0
// 地址: 0x14089a2e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0)
    PSTR rax_1 = sub_14089b210(arg2)
    PSTR rdx = rax_1
    uint32_t i
    uint32_t rbx_1
    
    do
        rbx_1 = zx.d(*rdx)
        i = zx.d(rdx[*arg4 - rax_1])
        
        if (rbx_1 != i)
            break
        
        rdx = &rdx[1]
    while (i != 0)
    
    free(rax_1)
    
    if (rbx_1 - i == 0)
        arg4[3].d = 1
        *(arg4 + 8) = *arg1
        return 0

return 1
