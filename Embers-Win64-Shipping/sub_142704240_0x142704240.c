// 函数: sub_142704240
// 地址: 0x142704240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sub_14273f770()
int64_t r8 = *arg1
void* result = (*(r8 + 0x610))(arg1, rax, r8)

if (result != 0 && *(result + 0x1b8) != 0)
    result.b = 1
    return result

result.b = 0
return result
