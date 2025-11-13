// 函数: sub_142139140
// 地址: 0x142139140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f7c300(arg1, arg2, arg3)
int64_t* r8 = arg1[1]
int32_t* rcx = *r8

if (&rcx[1] u<= r8[1])
    arg2[4] = *rcx
    int64_t* rax_2 = arg1[1]
    *rax_2 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[4], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[4], 4)

int64_t* rcx_2 = arg1[1]
int32_t* r8_1 = *rcx_2

if (&r8_1[1] u<= rcx_2[1])
    arg2[5] = *r8_1
    int64_t* rax_6 = arg1[1]
    *rax_6 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[5], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[5], 4)

int64_t* rcx_4 = arg1[1]
int32_t* r8_2 = *rcx_4

if (&r8_2[1] u<= rcx_4[1])
    arg2[6] = *r8_2
    int64_t* rax_10 = arg1[1]
    *rax_10 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[6], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[6], 4)

int64_t* rcx_6 = arg1[1]
int16_t* r8_3 = *rcx_6

if (&r8_3[1] u<= rcx_6[1])
    arg2[7].w = *r8_3
    int64_t* rax_14 = arg1[1]
    *rax_14 += 2
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54000(arg1, &arg2[7], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[7], 2)

int64_t* rcx_8 = arg1[1]
int16_t* r8_4 = *rcx_8

if (&r8_4[1] u<= rcx_8[1])
    *(arg2 + 0x1e) = *r8_4
    int64_t* rax_18 = arg1[1]
    *rax_18 += 2
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54000(arg1, arg2 + 0x1e, arg3)
else
    (*(*arg1 + 0x150))(arg1, arg2 + 0x1e, 2)

int64_t* rcx_10 = arg1[1]
int32_t* r8_5 = *rcx_10

if (&r8_5[1] u<= rcx_10[1])
    arg2[8] = *r8_5
    int64_t* rax_22 = arg1[1]
    *rax_22 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[8], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[8], 4)

int64_t* rcx_12 = arg1[1]
int32_t* r8_6 = *rcx_12

if (&r8_6[1] u<= rcx_12[1])
    arg2[9] = *r8_6
    int64_t* rax_26 = arg1[1]
    *rax_26 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[9], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[9], 4)

int64_t* rcx_14 = arg1[1]
int32_t* r8_7 = *rcx_14

if (&r8_7[1] u<= rcx_14[1])
    arg2[0xa] = *r8_7
    int64_t* rax_30 = arg1[1]
    *rax_30 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[0xa], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[0xa], 4)

int64_t* rcx_16 = arg1[1]
int32_t* r8_8 = *rcx_16

if (&r8_8[1] u<= rcx_16[1])
    arg2[0xb] = *r8_8
    int64_t* rax_34 = arg1[1]
    *rax_34 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[0xb], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[0xb], 4)

int64_t* rcx_18 = arg1[1]
int32_t* r8_9 = *rcx_18

if (&r8_9[1] u<= rcx_18[1])
    arg2[0xc] = *r8_9
    int64_t* rax_38 = arg1[1]
    *rax_38 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[0xc], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[0xc], 4)

int64_t* rcx_20 = arg1[1]
char* rdx_10 = *rcx_20

if (&rdx_10[1] u> rcx_20[1])
    (*(*arg1 + 0x150))(arg1, &arg2[0xd], 1)
else
    arg2[0xd].b = *rdx_10
    int64_t* rax_42 = arg1[1]
    *rax_42 += 1

int64_t* rcx_22 = arg1[1]
char* rdx_12 = *rcx_22

if (&rdx_12[1] u> rcx_22[1])
    (*(*arg1 + 0x150))(arg1, arg2 + 0x35, 1)
else
    *(arg2 + 0x35) = *rdx_12
    int64_t* rax_46 = arg1[1]
    *rax_46 += 1

int64_t* rcx_24 = arg1[1]
char* rdx_14 = *rcx_24

if (&rdx_14[1] u> rcx_24[1])
    (*(*arg1 + 0x150))(arg1, arg2 + 0x36, 1)
else
    *(arg2 + 0x36) = *rdx_14
    int64_t* rax_50 = arg1[1]
    *rax_50 += 1

int64_t* rcx_26 = arg1[1]
char* rdx_16 = *rcx_26

if (&rdx_16[1] u> rcx_26[1])
    (*(*arg1 + 0x150))(arg1, arg2 + 0x37, 1)
else
    *(arg2 + 0x37) = *rdx_16
    int64_t* rax_54 = arg1[1]
    *rax_54 += 1

int64_t* rcx_28 = arg1[1]
int32_t* r8_10 = *rcx_28

if (&r8_10[1] u<= rcx_28[1])
    arg2[0xe] = *r8_10
    int64_t* rax_58 = arg1[1]
    *rax_58 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[0xe], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[0xe], 4)

int64_t* rcx_30 = arg1[1]
int32_t* r8_11 = *rcx_30

if (&r8_11[1] u<= rcx_30[1])
    arg2[0xf] = *r8_11
    int64_t* rax_62 = arg1[1]
    *rax_62 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[0xf], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[0xf], 4)

if ((arg1[5].b & 1) != 0)
    *(arg2 + 0x37) &= 0x1f

return arg1
