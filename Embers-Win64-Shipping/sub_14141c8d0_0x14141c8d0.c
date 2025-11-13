// 函数: sub_14141c8d0
// 地址: 0x14141c8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

char rcx = sub_14141ef80(arg1, arg2, arg3)

if ((*(arg1 + 0x34) & 0x100) != 0)
    void* rax_1 = arg1[1]
    *(rax_1 + 0xf8) -= 1
    void* rax_2 = arg1[1]
    void* rdx = *(rax_2 + 8)
    *(rdx + 0x38) = (sbb.b(rcx, rcx, *(rax_2 + 0xf8) != 0) & 0x10) | (*(rdx + 0x38) & 0xef)
    sub_141393890(arg1[1])

void* rcx_2 = arg1[3]

if (rcx_2 != 0)
    *(rcx_2 + 0x10) = arg1[2]
    rcx_2 = arg1[3]

*arg1[2] = rcx_2
void* rcx_3 = arg1[5]

if (rcx_3 != 0)
    *(rcx_3 + 0x20) = arg1[4]
    rcx_3 = arg1[5]

*arg1[4] = rcx_3
int64_t rax = data_143ececc0
data_143ececcc -= 1
*arg1 = rax
data_143ececc0 = arg1
