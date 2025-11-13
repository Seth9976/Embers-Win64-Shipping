// 函数: sub_1414047a0
// 地址: 0x1414047a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0xdc0) s<= 0)
    return 

char* rbx_1 = nullptr

do
    if ((rbx_1[*(arg1 + 0xe48)] & 1) != 0)
        sub_1413ade40(*(*(arg1 + 0xdb8) + (rbx_1 << 3)))
        rbx_1[*(arg1 + 0xe48)] = *(*(*(arg1 + 0xdb8) + (rbx_1 << 3)) + 0x12c)
    
    i += 1
    rbx_1 = &rbx_1[1]
while (i s< *(arg1 + 0xdc0))
