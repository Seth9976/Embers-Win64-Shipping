// 函数: sub_1403e50a0
// 地址: 0x1403e50a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *(arg1 + 0x924)
int32_t result = divs.dp.d(0:0x7fff, r9 + 1)
int32_t rdx = 0
int32_t i = 0

if (r9 s<= 0)
    *(arg1 + 0x104c) = 0
    *(arg1 + 0x1050) = 0x307880
    return result

void* rcx = arg1 + 0xfec

do
    rdx += result
    i += 1
    rcx += 2
    *(rcx - 2) = rdx.w
while (i s< *(arg1 + 0x924))

*(arg1 + 0x104c) = 0
*(arg1 + 0x1050) = 0x307880
return result
