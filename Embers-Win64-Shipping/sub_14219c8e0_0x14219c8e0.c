// 函数: sub_14219c8e0
// 地址: 0x14219c8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1 = sub_1421bfdf0(arg1, arg2, arg3)
int64_t* r8 = arg2[1]
int32_t* rcx = *r8

if (&rcx[1] u<= r8[1])
    *(arg1 + 0xd0) = *rcx
    int64_t* rax_2 = arg2[1]
    *rax_2 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0xd0, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0xd0, 4)

int64_t* rcx_2 = arg2[1]
int32_t* r8_1 = *rcx_2

if (&r8_1[1] u<= rcx_2[1])
    *(arg1 + 0xd4) = *r8_1
    int64_t* rax_6 = arg2[1]
    *rax_6 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0xd4, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0xd4, 4)

int64_t* rcx_4 = arg2[1]
int32_t* r8_2 = *rcx_4

if (&r8_2[1] u<= rcx_4[1])
    *(arg1 + 0xd8) = *r8_2
    int64_t* rax_10 = arg2[1]
    *rax_10 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0xd8, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0xd8, 4)

int64_t* rcx_6 = arg2[1]
int32_t* r8_3 = *rcx_6

if (&r8_3[1] u<= rcx_6[1])
    *(arg1 + 0xdc) = *r8_3
    int64_t* rax_14 = arg2[1]
    *rax_14 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0xdc, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0xdc, 4)

int64_t* rcx_8 = arg2[1]
int32_t* r8_4 = *rcx_8

if (&r8_4[1] u<= rcx_8[1])
    *(arg1 + 0xe0) = *r8_4
    int64_t* rax_18 = arg2[1]
    *rax_18 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0xe0, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0xe0, 4)

int64_t* rcx_10 = arg2[1]
int32_t* r8_5 = *rcx_10

if (&r8_5[1] u<= rcx_10[1])
    *(arg1 + 0xe4) = *r8_5
    int64_t* rax_22 = arg2[1]
    *rax_22 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0xe4, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0xe4, 4)

int64_t* rcx_12 = arg2[1]
int32_t* r8_6 = *rcx_12

if (&r8_6[1] u<= rcx_12[1])
    *(arg1 + 0xe8) = *r8_6
    int64_t* rax_26 = arg2[1]
    *rax_26 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0xe8, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0xe8, 4)

int64_t* rcx_14 = arg2[1]
int32_t* r8_7 = *rcx_14

if (&r8_7[1] u<= rcx_14[1])
    *(arg1 + 0xec) = *r8_7
    int64_t* result = arg2[1]
    *result += 4
    return result

if ((*(arg2 + 0x29) & 0x20) != 0)
    return sub_140b54070(arg2, arg1 + 0xec, zmm1) __tailcall

jump(*(*arg2 + 0x150))
