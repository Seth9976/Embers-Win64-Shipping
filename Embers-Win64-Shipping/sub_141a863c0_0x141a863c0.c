// 函数: sub_141a863c0
// 地址: 0x141a863c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141a84fb0(arg2, arg1 + 8)
int64_t* rcx_1 = arg2[1]
char* r8 = *rcx_1

if (&r8[1] u> rcx_1[1])
    jump(*(*arg2 + 0x150))

*(arg1 + 0x10) = *r8
int64_t* result = arg2[1]
*result += 1
return result
