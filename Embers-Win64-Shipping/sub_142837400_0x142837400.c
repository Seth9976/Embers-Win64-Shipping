// 函数: sub_142837400
// 地址: 0x142837400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result
int64_t r8
result, r8 = malloc(0x70)

if (result == 0)
    sub_142833a04((result + 1).d, "Out of memory", r8)
    return nullptr

memset(result, 0, 0x70)
*(result + 0x38) = 1
return result
