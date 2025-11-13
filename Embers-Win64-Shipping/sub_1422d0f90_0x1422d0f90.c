// 函数: sub_1422d0f90
// 地址: 0x1422d0f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax_1 = sub_1422b7690(arg2, arg1 + 0x20, arg3)
int64_t* r8 = rax_1[1]
int32_t* rax_2 = *r8

if (&rax_2[1] u<= r8[1])
    *(arg1 + 0x40) = *rax_2
    int64_t* rcx_2 = rax_1[1]
    *rcx_2 += 4
else if ((*(rax_1 + 0x29) & 0x20) != 0)
    sub_140b54070(rax_1, arg1 + 0x40, arg3)
else
    (*(*rax_1 + 0x150))(rax_1, arg1 + 0x40, 4)

int64_t* rcx_4 = rax_1[1]
int32_t* r8_1 = *rcx_4

if (&r8_1[1] u<= rcx_4[1])
    *(arg1 + 0x44) = *r8_1
    int64_t* result = rax_1[1]
    *result += 4
    return result

if ((*(rax_1 + 0x29) & 0x20) != 0)
    return sub_140b54070(rax_1, arg1 + 0x44, arg3) __tailcall

jump(*(*rax_1 + 0x150))
