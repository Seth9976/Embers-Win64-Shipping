// 函数: sub_1423c6f90
// 地址: 0x1423c6f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x48) != 0)
    int64_t* rax_1 = sub_142006940()
    int64_t r8_1 = *rax_1
    (*(r8_1 + 0x138))(rax_1, *(arg1 + 0x48), r8_1)
    *(arg1 + 0x48) = 0

int64_t* rax_2 = sub_142006940()
int64_t r8_2 = *rax_2
int64_t result = (*(r8_2 + 0x148))(rax_2, arg1 + 0x60, r8_2)
*(arg1 + 0x60) = 0
return result
