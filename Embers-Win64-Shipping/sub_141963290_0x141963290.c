// 函数: sub_141963290
// 地址: 0x141963290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg1[1]
int64_t* rcx = *r8

if (&rcx[1] u<= r8[1])
    *arg2 = *rcx
    int64_t* rax_2 = arg1[1]
    *rax_2 += 8
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b540d0(arg1, arg2, arg3)
else
    (*(*arg1 + 0x150))(arg1, arg3, 8)

int64_t* rcx_2 = arg1[1]
int32_t* r8_1 = *rcx_2

if (&r8_1[1] u<= rcx_2[1])
    arg2[1].d = *r8_1
    int64_t* rax_6 = arg1[1]
    *rax_6 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[1], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[1], 4)

int64_t* rcx_4 = arg1[1]
int32_t* r8_2 = *rcx_4

if (&r8_2[1] u<= rcx_4[1])
    *(arg2 + 0xc) = *r8_2
    int64_t* rax_10 = arg1[1]
    *rax_10 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, arg2 + 0xc, arg3)
else
    (*(*arg1 + 0x150))(arg1, arg2 + 0xc, 4)

int64_t* rcx_6 = arg1[1]
char* rdx_2 = *rcx_6

if (&rdx_2[1] u> rcx_6[1])
    (*(*arg1 + 0x150))(arg1, &arg2[2], 1)
else
    arg2[2].b = *rdx_2
    int64_t* rax_14 = arg1[1]
    *rax_14 += 1

sub_1409ac860(arg1, arg2 + 0x14, arg3)
int64_t* rcx_9 = arg1[1]
int64_t* r8_3 = *rcx_9

if (&r8_3[1] u<= rcx_9[1])
    arg2[5] = *r8_3
    int64_t* rax_18 = arg1[1]
    *rax_18 += 8
    return arg1

if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b540d0(arg1, &arg2[5], arg3)
    return arg1

(*(*arg1 + 0x150))(arg1, &arg2[5], 8)
return arg1
