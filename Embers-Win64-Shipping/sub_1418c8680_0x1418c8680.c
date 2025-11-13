// 函数: sub_1418c8680
// 地址: 0x1418c8680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x1a58)
void* rdx = *(arg1 + 0x1a50)

if (rax != rdx)
    sub_1418c8600(arg1, rax)
    rdx = *(arg1 + 0x1a50)

return sub_1418c8600(arg1, rdx) __tailcall
