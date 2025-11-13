// 函数: sub_142149e90
// 地址: 0x142149e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140cddf60(arg1, arg2)
void* result = arg1[6]
void* r9_2 = sx.q(arg1[7].d) * 0x30 + result

if (result != r9_2)
    int64_t r8_1 = *(arg2 + 0x28)
    
    do
        int64_t rdx = sx.q(*(result + 0xc)) * 0x1c
        result += 0x30
        r8_1 = r8_1 + 4 + rdx
        *(arg2 + 0x28) = r8_1
    while (result != r9_2)

return result
