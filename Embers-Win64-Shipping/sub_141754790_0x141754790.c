// 函数: sub_141754790
// 地址: 0x141754790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1 = sub_141755af0(arg1, arg2)
sub_14152dda0(arg2, arg1 + 0x10, zmm1)
sub_14152dda0(arg2, arg1 + 0x1c, zmm1)
sub_14152dda0(arg2, arg1 + 0x28, zmm1)
sub_14152dda0(arg2, arg1 + 0x34, zmm1)
sub_14152f230(arg2, arg1 + 0x60, sub_14152f1b0(arg2, arg1 + 0x40, zmm1))
sub_1417558e0(arg2, arg1 + 0x80)
int512_t zmm1_2 = sub_1417558e0(arg2, arg1 + 0x98)
int64_t* rcx_8 = arg2[1]
int32_t* r8 = *rcx_8

if (&r8[1] u<= rcx_8[1])
    *(arg1 + 0xb0) = *r8
    int64_t* result = arg2[1]
    *result += 4
    return result

if ((*(arg2 + 0x29) & 0x20) != 0)
    return sub_140b54070(arg2, arg1 + 0xb0, zmm1_2) __tailcall

jump(*(*arg2 + 0x150))
