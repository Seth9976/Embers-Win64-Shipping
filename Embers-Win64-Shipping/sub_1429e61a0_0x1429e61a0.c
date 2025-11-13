// 函数: sub_1429e61a0
// 地址: 0x1429e61a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x10e8) == 0)
    int32_t rdi_2 = *(arg1 + 0x370)
    *(arg1 + 0x452c)
    *(arg1 + 0x380) = sub_142a27dc0(rdi_2, *(arg1 + 0x374))
    *(arg1 + 0x452c)
    *(arg1 + 0x382) = sub_142a27d90(rdi_2, 0)
    *(arg1 + 0x452c)
    *(arg1 + 0x3a0) = sub_142a27dc0(rdi_2, *(arg1 + 0x378))
    *(arg1 + 0x452c)
    int16_t rax_9 = sub_142a27d90(rdi_2, *(arg1 + 0x37c))
    *(arg1 + 0x3a2) = rax_9
    return rax_9

int32_t i = 0
void* rsi = arg1 + 0x382
int16_t rax_5

do
    int32_t rax_1 = sub_142a27df0(arg1 + 0x10e8, i, *(arg1 + 0x370))
    *(arg1 + 0x452c)
    *(rsi - 2) = sub_142a27dc0(rax_1, *(arg1 + 0x374))
    *(arg1 + 0x452c)
    *rsi = sub_142a27d90(rax_1, 0)
    *(arg1 + 0x452c)
    *(rsi + 0x1e) = sub_142a27dc0(rax_1, *(arg1 + 0x378))
    *(arg1 + 0x452c)
    rax_5 = sub_142a27d90(rax_1, *(arg1 + 0x37c))
    i += 1
    *(rsi + 0x20) = rax_5
    rsi += 4
while (i s< 8)

return rax_5
