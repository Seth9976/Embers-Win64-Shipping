// 函数: sub_1416f5ae0
// 地址: 0x1416f5ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rbx = *arg2
void*** rax = sub_141750b40(arg1, rbx)

if (rax != 0)
    rbx = rax
    *arg2 = rax

void arg_8
(*rbx)[0x14](rbx, &arg_8)
int512_t zmm1 = sub_141755af0(rbx, arg1)
int64_t* rax_2 = sub_14152dda0(arg1, &rbx[2], zmm1)
int64_t* rdx_4 = rax_2[1]
int32_t* rax_3 = *rdx_4

if (&rax_3[1] u<= rdx_4[1])
    *(rbx + 0x1c) = *rax_3
    int64_t* result = rax_2[1]
    *result += 4
    return result

if ((*(rax_2 + 0x29) & 0x20) != 0)
    return sub_140b54070(rax_2, rbx + 0x1c, zmm1) __tailcall

jump(*(*rax_2 + 0x150))
