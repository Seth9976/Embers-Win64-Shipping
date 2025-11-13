// 函数: sub_140e3cbd0
// 地址: 0x140e3cbd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 0

int32_t rdx = *(arg1 + 0x24f8)
uint32_t rsi_1 = rdx u>> (0x20 - arg2.b)
int32_t rcx_1 = *(arg1 + 0x24f4)
int32_t rax_2 = rcx_1 - arg2
*(arg1 + 0x24f4) = rax_2
char rcx_5

if (rax_2 s> 0)
    rcx_5 = arg2.b
else
    *(arg1 + 0x24f8) = rdx << rcx_1.b
    int32_t rax_3 = sub_140e3cd90(arg1, arg3)
    int32_t rax_4 = sub_140e3cd90(arg1, arg3)
    int32_t rcx_4 = *(arg1 + 0x24f4)
    rdx = (*(arg1 + 0x24f8) & 0xffff0000) | rax_3 << 8 | rax_4
    *(arg1 + 0x24f4) = rcx_4 + 0x10
    rcx_5 = (neg.d(rcx_4)).b
    *(arg1 + 0x24f8) = rdx

*(arg1 + 0x24f8) = rdx << rcx_5
return zx.q(rsi_1)
