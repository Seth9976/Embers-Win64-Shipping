// 函数: sub_142a3ec60
// 地址: 0x142a3ec60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = arg1[((arg2 + 7) u>> 3) + 1]
int64_t* result = *(r8 + 8)

if (result == 0)
    return sub_142a3fd80(arg1, arg2) __tailcall

int64_t rcx_1 = *result
*(r8 + 0x10) += 1
*(r8 + 8) = rcx_1
return result
