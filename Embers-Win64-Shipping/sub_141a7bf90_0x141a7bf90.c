// 函数: sub_141a7bf90
// 地址: 0x141a7bf90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x1d8))(arg2, &data_1439a93f8)
int32_t rax_1
int512_t zmm1
rax_1, zmm1 = sub_140b4e7c0(arg2, &data_1439a93f8)

if (rax_1 s< 0x13)
    rax_1.b = 0
    return rax_1

int64_t* rcx_2 = arg2[1]
int32_t* rdx = *rcx_2

if (&rdx[1] u<= rcx_2[1])
    *arg1 = *rdx
    int64_t* rax_4 = arg2[1]
    *rax_4 += 4
    rax_4.b = 1
    return rax_4

if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1, zmm1)
    int64_t* rax_7
    rax_7.b = 1
    return rax_7

(*(*arg2 + 0x150))(arg2, arg1, 4)
int64_t rax_6
rax_6.b = 1
return rax_6
