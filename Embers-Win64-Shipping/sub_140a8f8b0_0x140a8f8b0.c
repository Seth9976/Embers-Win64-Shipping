// 函数: sub_140a8f8b0
// 地址: 0x140a8f8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
*arg1 = *arg2
*arg2 = 0
arg1[1].d = arg2[1].d
*(arg1 + 0xc) = *(arg2 + 0xc)
arg2[1] = 0
arg1[2].d = *arg3
arg1[3] = *(arg3 + 8)
arg1[3] = *(arg3 + 8)
arg1[3].d = arg3[2]
arg1[3] = *(arg3 + 8)
arg1[7].b = 0

if (arg3[0xa].b != 0)
    arg1[4] = *(arg3 + 0x10)
    void* rax_9 = *(arg3 + 0x18)
    arg1[5] = rax_9
    
    if (rax_9 != 0)
        *(rax_9 + 8) += 1
    
    arg1[6].d = arg3[8]
    arg1[7].b = 1

return arg1
