// 函数: sub_140d35a90
// 地址: 0x140d35a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax_2 = *(arg2 + 0x20)
int64_t* i = *rax_2
*(arg2 + 0x20) = &rax_2[1]
int64_t* result = *(arg2 + 0x78)
*(arg2 + 0x30) = i

while (*result != i)
    result = result[2]

int64_t r8 = result[1]
*(arg2 + 0x38) = r8

if (arg3 != 0 && arg3 != r8)
    jump(*(*i + 0xc8))

return result
