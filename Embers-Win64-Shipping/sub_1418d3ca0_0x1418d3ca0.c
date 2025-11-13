// 函数: sub_1418d3ca0
// 地址: 0x1418d3ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg1[1]
int32_t* rcx = *r8

if (&rcx[1] u<= r8[1])
    *arg2 = *rcx
    int64_t* rax_2 = arg1[1]
    *rax_2 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, arg2, arg3)
else
    (*(*arg1 + 0x150))(arg1, arg3, 4)

int64_t* rcx_2 = arg1[1]
char* rdx = *rcx_2

if (&rdx[1] u> rcx_2[1])
    (*(*arg1 + 0x150))(arg1, &arg2[1], 1)
else
    arg2[1].b = *rdx
    int64_t* rax_6 = arg1[1]
    *rax_6 += 1

int64_t* rcx_4 = arg1[1]
char* rdx_2 = *rcx_4

if (&rdx_2[1] u> rcx_4[1])
    (*(*arg1 + 0x150))(arg1, arg2 + 5, 1)
else
    *(arg2 + 5) = *rdx_2
    int64_t* rax_10 = arg1[1]
    *rax_10 += 1

int64_t* rcx_6 = arg1[1]
char* rdx_4 = *rcx_6

if (&rdx_4[1] u> rcx_6[1])
    (*(*arg1 + 0x150))(arg1, arg2 + 6, 1)
else
    *(arg2 + 6) = *rdx_4
    int64_t* rax_14 = arg1[1]
    *rax_14 += 1

int64_t* rcx_8 = arg1[1]
char* rdx_6 = *rcx_8

if (&rdx_6[1] u> rcx_8[1])
    (*(*arg1 + 0x150))(arg1, arg2 + 7, 1)
else
    *(arg2 + 7) = *rdx_6
    int64_t* rax_18 = arg1[1]
    *rax_18 += 1

int64_t* rcx_10 = arg1[1]
char* rdx_8 = *rcx_10

if (&rdx_8[1] u> rcx_10[1])
    (*(*arg1 + 0x150))(arg1, &arg2[2], 1)
else
    arg2[2].b = *rdx_8
    int64_t* rax_22 = arg1[1]
    *rax_22 += 1

int64_t* rcx_12 = arg1[1]
char* rdx_10 = *rcx_12

if (&rdx_10[1] u> rcx_12[1])
    (*(*arg1 + 0x150))(arg1, arg2 + 9, 1)
else
    *(arg2 + 9) = *rdx_10
    int64_t* rax_26 = arg1[1]
    *rax_26 += 1

int64_t* rcx_14 = arg1[1]
int64_t* r8_1 = *rcx_14

if (&r8_1[1] u<= rcx_14[1])
    *(arg2 + 0x10) = *r8_1
    int64_t* rax_30 = arg1[1]
    *rax_30 += 8
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b540d0(arg1, &arg2[4], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[4], 8)

int64_t* rcx_16 = arg1[1]
int64_t* r8_2 = *rcx_16

if (&r8_2[1] u<= rcx_16[1])
    *(arg2 + 0x18) = *r8_2
    int64_t* rax_34 = arg1[1]
    *rax_34 += 8
    return arg1

if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b540d0(arg1, &arg2[6], arg3)
    return arg1

(*(*arg1 + 0x150))(arg1, &arg2[6], 8)
return arg1
