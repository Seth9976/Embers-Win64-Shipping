// 函数: sub_1417c5a00
// 地址: 0x1417c5a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x140))(arg2, arg1 + 8)
int64_t* rcx_1 = arg2[1]
int32_t* r8 = *rcx_1

if (&r8[1] u<= rcx_1[1])
    *(arg1 + 0x10) = *r8
    int64_t* result = arg2[1]
    *result += 4
    return result

if ((*(arg2 + 0x29) & 0x20) != 0)
    return sub_140b54070(arg2, arg1 + 0x10, arg3) __tailcall

jump(*(*arg2 + 0x150))
