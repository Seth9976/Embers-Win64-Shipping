// 函数: sub_140caec20
// 地址: 0x140caec20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r9 = *(*arg1 + 8)
int64_t* rcx = r9[1]
int32_t* rdx = *rcx

if (&rdx[1] u<= rcx[1])
    *arg2 = *rdx
    int64_t* rax_3 = r9[1]
    *rax_3 += 4
else if ((*(r9 + 0x29) & 0x20) != 0)
    sub_140b54070(r9, arg2, arg3)
else
    (*(*r9 + 0x150))(r9, arg2, 4)

int64_t* r9_1 = *(*arg1 + 8)
int64_t* rcx_2 = r9_1[1]
int32_t* r8 = *rcx_2

if (&r8[1] u<= rcx_2[1])
    arg2[1] = *r8
    int64_t* rax_8 = r9_1[1]
    *rax_8 += 4
else if ((*(r9_1 + 0x29) & 0x20) != 0)
    sub_140b54070(r9_1, &arg2[1], arg3)
else
    (*(*r9_1 + 0x150))(r9_1, &arg2[1], 4)

int64_t* r9_2 = *(*arg1 + 8)
int64_t* rcx_4 = r9_2[1]
int32_t* r8_1 = *rcx_4

if (&r8_1[1] u<= rcx_4[1])
    arg2[2] = *r8_1
    int64_t* rax_13 = r9_2[1]
    *rax_13 += 4
else if ((*(r9_2 + 0x29) & 0x20) != 0)
    sub_140b54070(r9_2, &arg2[2], arg3)
else
    (*(*r9_2 + 0x150))(r9_2, &arg2[2], 4)

int64_t* r9_3 = *(*arg1 + 8)
int64_t* rcx_6 = r9_3[1]
int32_t* r8_2 = *rcx_6

if (&r8_2[1] u<= rcx_6[1])
    arg2[3] = *r8_2
    int64_t* result = r9_3[1]
    *result += 4
    return result

if ((*(r9_3 + 0x29) & 0x20) != 0)
    return sub_140b54070(r9_3, &arg2[3], arg3) __tailcall

jump(*(*r9_3 + 0x150))
