// 函数: sub_140d93b90
// 地址: 0x140d93b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
*(arg1 + 0x10) = *(arg2 + 0x10)
*(arg1 + 0x20) = *(arg2 + 0x20)
arg1[6] = arg2[6]
void* rax_2 = arg2[7]
arg1[7] = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

arg1[8] = arg2[8]
arg1[9].d = arg2[9].d
*(arg1 + 0x4c) = *(arg2 + 0x4c)
*(arg1 + 0x50) = *(arg2 + 0x50)
*(arg1 + 0x60) = *(arg2 + 0x60)
arg1[0xe].d = arg2[0xe].d
*(arg1 + 0x74) = *(arg2 + 0x74)
return arg1
