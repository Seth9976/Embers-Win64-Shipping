// 函数: sub_142128110
// 地址: 0x142128110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x30)
void* rdx
void arg_8

if (rcx == 0)
    rcx = *(arg1 + 0x28)
    void arg_10
    rdx = &arg_10
else
    rdx = &arg_8
*arg2 = *(*(*rcx + 0x400))(rcx, rdx)
return arg2
