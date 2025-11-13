// 函数: sub_142443ed0
// 地址: 0x142443ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1419fe780(arg2, arg1 + 8, arg3)
sub_1419fe650(arg2, arg1 + 0x18, arg3)
int64_t* rcx_2 = arg2[1]
int32_t* r8 = *rcx_2

if (&r8[1] u<= rcx_2[1])
    *(arg1 + 0x28) = *r8
    int64_t* result = arg2[1]
    *result += 4
    return result

if ((*(arg2 + 0x29) & 0x20) != 0)
    return sub_140b54070(arg2, arg1 + 0x28, arg3) __tailcall

jump(*(*arg2 + 0x150))
