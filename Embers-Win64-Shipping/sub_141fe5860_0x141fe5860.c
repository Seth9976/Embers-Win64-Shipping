// 函数: sub_141fe5860
// 地址: 0x141fe5860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2

if (arg4 != 0)
    int32_t rax_2 = *(arg4 + 4) * 0xbb38435 + 0x3619636b
    *(arg4 + 4) = rax_2
    zmm2 = (rax_2 u>> 9 | 0x3f800000) - 1f
else
    zmm2 = sub_140a50670()

return (*(arg1 + 0x38) f- *(arg1 + 0x3c)) * zmm2 f+ *(arg1 + 0x3c)
