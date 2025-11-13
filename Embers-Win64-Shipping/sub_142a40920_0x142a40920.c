// 函数: sub_142a40920
// 地址: 0x142a40920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg3 + 0x48)

if (rcx != 0)
    *(rcx + 0x40) = *(arg3 + 0x40)

void* rcx_1 = *(arg3 + 0x40)

if (rcx_1 != 0)
    *(rcx_1 + 0x48) = *(arg3 + 0x48)

if (arg3 == arg2[1])
    arg2[1] = *(arg3 + 0x48)

if (arg3 == *arg2)
    *arg2 = *(arg3 + 0x40)
    sub_142a40530(*(arg3 + 0x38), arg2)

*(arg3 + 0x48) = arg1[1]
*(arg3 + 0x40) = 0
void* rax_6 = arg1[1]

if (rax_6 == 0)
    *arg1 = arg3
    arg1[1] = arg3
    sub_142a40530(*(arg3 + 0x38), arg1)
else
    *(rax_6 + 0x40) = arg3
    arg1[1] = arg3

rcx_1.b = arg1[2] == 0x200010
char result = *(arg3 + 6) & 0xfe
rcx_1.b |= result
*(arg3 + 6) = rcx_1.b
return result
