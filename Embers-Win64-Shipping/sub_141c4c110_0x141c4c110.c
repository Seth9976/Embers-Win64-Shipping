// 函数: sub_141c4c110
// 地址: 0x141c4c110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141c4bb10(arg2, arg1 + 8, arg3)
int64_t* rcx_1 = arg2[1]
int32_t* r8 = *rcx_1

if (&r8[1] u<= rcx_1[1])
    *(arg1 + 0x18) = *r8
    int64_t* result = arg2[1]
    *result += 4
    return result

if ((*(arg2 + 0x29) & 0x20) != 0)
    return sub_140b54070(arg2, arg1 + 0x18, arg3) __tailcall

jump(*(*arg2 + 0x150))
