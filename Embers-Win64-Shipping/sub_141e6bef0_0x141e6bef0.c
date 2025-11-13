// 函数: sub_141e6bef0
// 地址: 0x141e6bef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax_2 = *(arg1 + 0x10)

if ((rax_2[0x20].d & 0x400) == 0 || arg2 == 0)
    arg2 = 0
else
    arg2 = 1

char rcx = (*(arg1 + 0x74) & 0xfe) | arg2
*(arg1 + 0x74) = rcx

if ((rax_2[0x20].d & 0x200) != 0)
    rcx &= 0xfe
    *(arg1 + 0x74) = rcx

char rdx = rcx

if (data_143a2d2c8 == 0 && *(*rax_2 + 0x204) s> 2)
    rdx &= 0xfe
    *(arg1 + 0x74) = rdx

return zx.q(rdx) & 1
