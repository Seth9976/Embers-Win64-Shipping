// 函数: sub_140961a90
// 地址: 0x140961a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int32_t i = 0

if (arg1[7].d s> 0)
    do
        int32_t rax_2 = (*(*arg1 + 0x310))(arg1, zx.q(i))
        int32_t rcx_2 = *(arg1 + 0x3c) - rax_2
        
        if (rbx s>= rcx_2)
            rcx_2 = rbx
        
        i += 1
        rbx = rcx_2
    while (i s< arg1[7].d)

return zx.q(rbx)
