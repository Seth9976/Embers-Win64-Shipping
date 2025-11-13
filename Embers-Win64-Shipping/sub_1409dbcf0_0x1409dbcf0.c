// 函数: sub_1409dbcf0
// 地址: 0x1409dbcf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg2[1]
int32_t* rcx = *r8

if (&rcx[1] u<= r8[1])
    *(arg1 + 0xc) = *rcx
    int64_t* rax_2 = arg2[1]
    *rax_2 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0xc, arg3)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0xc, 4)

int512_t zmm1 = sub_1409ad810(arg2, arg1 + 0x18, arg3)
int64_t* rcx_3 = arg2[1]
int32_t* rdx_2 = *rcx_3

if (&rdx_2[1] u> rcx_3[1])
    int32_t rax_6
    rax_6.b = *(arg1 + 0x28) != 0
    int32_t arg_8 = rax_6
    (*(*arg2 + 0x150))(arg2, &arg_8, 4)
    *(arg1 + 0x28) = arg_8 != 0
else
    void* rax_4
    rax_4.b = *rdx_2 != 0
    *(arg1 + 0x28) = rax_4.b
    int64_t* rax_5 = arg2[1]
    *rax_5 += 4

int64_t* rcx_5 = arg2[1]
int32_t* r8_1 = *rcx_5

if (&r8_1[1] u<= rcx_5[1])
    *(arg1 + 0x10) = *r8_1
    int64_t* result = arg2[1]
    *result += 4
    return result

if ((*(arg2 + 0x29) & 0x20) != 0)
    return sub_140b54070(arg2, arg1 + 0x10, zmm1) __tailcall

jump(*(*arg2 + 0x150))
