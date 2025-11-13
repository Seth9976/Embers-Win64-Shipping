// 函数: sub_141b39d40
// 地址: 0x141b39d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result_1 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &result_1, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &result_1)

int64_t rax_2 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_2 != 0
int64_t result = result_1
*(arg2 + 0x20) = rdi + rax_2
*(arg1 + 0xe0) = result
return result
