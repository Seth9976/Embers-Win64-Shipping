// 函数: sub_14283e328
// 地址: 0x14283e328
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result
int64_t r8
result, r8 = malloc(0x2e8)

if (result == 0)
    sub_142833a04((result + 1).d, "Out of memory", r8)
    return nullptr

*(result + 0x10) = 0
*(result + 0x18) = arg1
*result = arg2
sub_14283e0c0(result)
sub_14283e128(result, 0)
return result
