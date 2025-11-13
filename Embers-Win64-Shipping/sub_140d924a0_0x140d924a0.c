// 函数: sub_140d924a0
// 地址: 0x140d924a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
void* rax = arg2[1]
arg1[1] = rax

if (rax != 0)
    *(rax + 8) += 1

arg1[2].d = arg2[2].d
*(arg1 + 0x14) = *(arg2 + 0x14)
arg1[3].w = arg2[3].w
*(arg1 + 0x1a) = *(arg2 + 0x1a)
*(arg1 + 0x1c) = *(arg2 + 0x1c)
*(arg1 + 0x1e) = *(arg2 + 0x1e)
arg1[4].b = arg2[4].b
*(arg1 + 0x21) = *(arg2 + 0x21)
*(arg1 + 0x22) = *(arg2 + 0x22)
*(arg1 + 0x23) = *(arg2 + 0x23)
*(arg1 + 0x24) = *(arg2 + 0x24)
arg1[5] = arg2[5]
void* rax_13 = arg2[6]
arg1[6] = rax_13

if (rax_13 != 0)
    *(rax_13 + 0xc) += 1

arg1[7] = arg2[7]
void* rax_15 = arg2[8]
arg1[8] = rax_15

if (rax_15 != 0)
    *(rax_15 + 0xc) += 1

arg1[9] = arg2[9]
void* rax_17 = arg2[0xa]
arg1[0xa] = rax_17

if (rax_17 != 0)
    *(rax_17 + 0xc) += 1

arg1[0xb] = arg2[0xb]
void* rax_19 = arg2[0xc]
arg1[0xc] = rax_19

if (rax_19 != 0)
    *(rax_19 + 0xc) += 1

return arg1
