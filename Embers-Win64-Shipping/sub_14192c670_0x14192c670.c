// 函数: sub_14192c670
// 地址: 0x14192c670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg1[1]
char* rcx = *r8

if (&rcx[1] u> r8[1])
    (*(*arg1 + 0x150))(arg1, arg3, 1)
else
    *arg2 = *rcx
    int64_t* rax_2 = arg1[1]
    *rax_2 += 1

int64_t* rcx_2 = arg1[1]
char* rdx = *rcx_2

if (&rdx[1] u> rcx_2[1])
    (*(*arg1 + 0x150))(arg1, &arg2[1], 1)
else
    arg2[1] = *rdx
    int64_t* rax_6 = arg1[1]
    *rax_6 += 1

int64_t* rcx_4 = arg1[1]
char* rdx_2 = *rcx_4

if (&rdx_2[1] u> rcx_4[1])
    (*(*arg1 + 0x150))(arg1, &arg2[2], 1)
else
    arg2[2] = *rdx_2
    int64_t* rax_10 = arg1[1]
    *rax_10 += 1

int64_t* rcx_6 = arg1[1]
char* rdx_4 = *rcx_6

if (&rdx_4[1] u> rcx_6[1])
    (*(*arg1 + 0x150))(arg1, &arg2[3], 1)
else
    arg2[3] = *rdx_4
    int64_t* rax_14 = arg1[1]
    *rax_14 += 1

int64_t* rcx_8 = arg1[1]
int32_t* r8_1 = *rcx_8

if (&r8_1[1] u<= rcx_8[1])
    *(arg2 + 4) = *r8_1
    int64_t* rax_18 = arg1[1]
    *rax_18 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[4], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[4], 4)

int64_t* rcx_10 = arg1[1]
int32_t* r8_2 = *rcx_10

if (&r8_2[1] u<= rcx_10[1])
    *(arg2 + 8) = *r8_2
    int64_t* rax_22 = arg1[1]
    *rax_22 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[8], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[8], 4)

int64_t* rcx_12 = arg1[1]
int32_t* r8_3 = *rcx_12

if (&r8_3[1] u<= rcx_12[1])
    *(arg2 + 0xc) = *r8_3
    int64_t* rax_26 = arg1[1]
    *rax_26 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[0xc], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[0xc], 4)

int64_t* rcx_14 = arg1[1]
int32_t* r8_4 = *rcx_14

if (&r8_4[1] u<= rcx_14[1])
    *(arg2 + 0x10) = *r8_4
    int64_t* rax_30 = arg1[1]
    *rax_30 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[0x10], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[0x10], 4)

int64_t* rcx_16 = arg1[1]
int32_t* r8_5 = *rcx_16

if (&r8_5[1] u<= rcx_16[1])
    *(arg2 + 0x14) = *r8_5
    int64_t* rax_34 = arg1[1]
    *rax_34 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[0x14], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[0x14], 4)

int64_t* rcx_18 = arg1[1]
char* r8_6 = *rcx_18

if (&r8_6[1] u> rcx_18[1])
    (*(*arg1 + 0x150))(arg1, &arg2[0x18], 1)
    return arg1

arg2[0x18] = *r8_6
int64_t* rax_38 = arg1[1]
*rax_38 += 1
return arg1
