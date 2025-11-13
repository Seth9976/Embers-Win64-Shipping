// 函数: sub_142795810
// 地址: 0x142795810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x148) s<= 0)
    return 

int64_t rdx_1 = 0

do
    int64_t rcx = *(arg1 + 0x140)
    rdx_1 += 0x30
    int64_t rax = *(arg1 + 0x150)
    i += 1
    *(rdx_1 + rax - 0x30) = *(rcx + rdx_1 - 0x30)
    *(rdx_1 + rax - 0x20) = *(rcx + rdx_1 - 0x20)
    *(rdx_1 + rax - 0x10) = *(rcx + rdx_1 - 0x10)
while (i s< *(arg1 + 0x148))
