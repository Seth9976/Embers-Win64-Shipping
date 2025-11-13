// 函数: sub_1427e9bc0
// 地址: 0x1427e9bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *(arg1 + 0x68)
int64_t* rcx = *(arg1 + 0x60)
*(r9 + 0x134) = *arg2
*(r9 + 0x138) = arg2[1]
*(r9 + 0x13c) = arg2[2]
*(r9 + 0x140) = *arg3
*(r9 + 0x144) = arg3[1]
*(r9 + 0x148) = arg3[2]
jump(*(*rcx + 0x40))
