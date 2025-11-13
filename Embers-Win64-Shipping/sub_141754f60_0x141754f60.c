// 函数: sub_141754f60
// 地址: 0x141754f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1 = sub_141755af0(arg1, arg2)
int64_t* rax = sub_14152dda0(arg2, arg1 + 0x10, zmm1)
int64_t* rdx_1 = rax[1]
int32_t* rax_1 = *rdx_1

if (&rax_1[1] u<= rdx_1[1])
    *(arg1 + 0x1c) = *rax_1
    int64_t* result = rax[1]
    *result += 4
    return result

if ((*(rax + 0x29) & 0x20) != 0)
    return sub_140b54070(rax, arg1 + 0x1c, zmm1) __tailcall

jump(*(*rax + 0x150))
