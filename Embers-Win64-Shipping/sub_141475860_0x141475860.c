// 函数: sub_141475860
// 地址: 0x141475860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 1
void* rbx = &arg1[4]
*(arg1 + 4) = 1
arg1[3].w = 0
*(arg1 + 0x78) = 0
arg1[0x20] = 0
arg1[0x21] = 5
*(rbx + 0x70) += 1

if (*(rbx + 0x70) s> *(rbx + 0x74))
    sub_1413f6cc0(rbx, 0)

void* rax_1 = *(rbx + 0x68)

if (rax_1 != 0)
    rbx = rax_1

if (rbx != 0)
    *rbx = -1
    *(rbx + 8) = 0
    *(rbx + 0xc) = arg2
    *(rbx + 0xe) = arg2
    *(rbx + 0x10) = 0

*(arg1 + 0x88) = 0
*(arg1 + 0x90) = 0
return arg1
