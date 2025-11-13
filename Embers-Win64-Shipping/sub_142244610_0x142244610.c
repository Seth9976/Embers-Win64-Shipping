// 函数: sub_142244610
// 地址: 0x142244610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = j_sub_140a82f30(0x20)
int64_t* result

if (rax == 0)
    result = nullptr
else
    result = sub_142239e10(rax, arg1 + 0x320, arg2, arg3, arg4)

int64_t rdi_1 = sx.q(*(arg1 + 0x2020))
int32_t rax_2 = (rdi_1 + 1).d
*(arg1 + 0x2020) = rax_2

if (rax_2 s> *(arg1 + 0x2024))
    sub_1405a4d70(arg1 + 0x2018)

*(*(arg1 + 0x2018) + (rdi_1 << 3)) = result
*(arg1 + 0x20cd) = 1
return result
