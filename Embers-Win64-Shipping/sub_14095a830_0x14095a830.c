// 函数: sub_14095a830
// 地址: 0x14095a830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg1 + 0x10

if (arg1 == 0)
    result = nullptr

int64_t* r8 = *result

if (r8 != 0 && *(arg1 + 0x18) != 0)
    jump(*(*r8 + 0x38))

return result
