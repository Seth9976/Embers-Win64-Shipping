// 函数: sub_140bb9f90
// 地址: 0x140bb9f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(*arg2 + 8)
int512_t zmm1 = sub_140ce8e10(arg1, rbx)
int64_t* rdx_1 = rbx[1]
int32_t* rcx = *rdx_1

if (&rcx[1] u<= rdx_1[1])
    *(arg1 + 0x38) = *rcx
    int64_t* rax_3 = rbx[1]
    *rax_3 += 4
else if ((*(rbx + 0x29) & 0x20) != 0)
    sub_140b54070(rbx, arg1 + 0x38, zmm1)
else
    (*(*rbx + 0x150))(rbx, arg1 + 0x38, 4)

int64_t* rcx_2 = rbx[1]
int32_t* r8 = *rcx_2

if (&r8[1] u<= rcx_2[1])
    *(arg1 + 0x3c) = *r8
    int64_t* rax_7 = rbx[1]
    *rax_7 += 4
else if ((*(rbx + 0x29) & 0x20) != 0)
    sub_140b54070(rbx, arg1 + 0x3c, zmm1)
else
    (*(*rbx + 0x150))(rbx, arg1 + 0x3c, 4)

return sub_140a1d9d0(rbx, arg1 + 0x40, zmm1) __tailcall
