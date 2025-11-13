// 函数: sub_14219c850
// 地址: 0x14219c850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1 = sub_14219c8e0(arg1, arg2, arg3)
int64_t* rcx = arg2[1]
int32_t* r8 = *rcx

if (&r8[1] u<= rcx[1])
    *(arg1 + 0xf0) = *r8
    int64_t* result = arg2[1]
    *result += 4
    return result

if ((*(arg2 + 0x29) & 0x20) != 0)
    return sub_140b54070(arg2, arg1 + 0xf0, zmm1) __tailcall

jump(*(*arg2 + 0x150))
