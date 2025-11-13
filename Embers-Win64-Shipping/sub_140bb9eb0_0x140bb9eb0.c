// 函数: sub_140bb9eb0
// 地址: 0x140bb9eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1 = sub_140ce8e10(arg1, arg2)
int64_t* r8 = arg2[1]
int32_t* rcx = *r8

if (&rcx[1] u<= r8[1])
    *(arg1 + 0x38) = *rcx
    int64_t* rax_2 = arg2[1]
    *rax_2 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x38, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x38, 4)

int64_t* rcx_2 = arg2[1]
int32_t* r8_1 = *rcx_2

if (&r8_1[1] u<= rcx_2[1])
    *(arg1 + 0x3c) = *r8_1
    int64_t* rax_6 = arg2[1]
    *rax_6 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x3c, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x3c, 4)

return sub_140a1d9d0(arg2, arg1 + 0x40, zmm1) __tailcall
