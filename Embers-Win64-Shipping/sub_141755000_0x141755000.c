// 函数: sub_141755000
// 地址: 0x141755000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_8
(*(*arg1 + 0xa0))(arg1, &arg_8)
int512_t zmm1 = sub_141755af0(arg1, arg2)
int64_t* rax_1 = sub_14152dda0(arg2, &arg1[2], zmm1)
int64_t* rdx_3 = rax_1[1]
int32_t* rax_2 = *rdx_3

if (&rax_2[1] u<= rdx_3[1])
    *(arg1 + 0x1c) = *rax_2
    int64_t* result = rax_1[1]
    *result += 4
    return result

if ((*(rax_1 + 0x29) & 0x20) != 0)
    return sub_140b54070(rax_1, arg1 + 0x1c, zmm1) __tailcall

jump(*(*rax_1 + 0x150))
