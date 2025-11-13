// 函数: sub_142ab6090
// 地址: 0x142ab6090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    *(arg1 + 8) = *(arg2 + 8)
    *(arg1 + 0xc) = *(arg2 + 0xc)
    void* rax_3 = arg2 + 0x10
    char* rdx_1 = arg1 + 0x10 - rax_3
    char i
    
    do
        i = *rax_3
        *(rdx_1 + rax_3) = i
        rax_3 += 1
    while (i != 0)

return arg1
