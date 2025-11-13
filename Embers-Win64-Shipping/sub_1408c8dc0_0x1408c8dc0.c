// 函数: sub_1408c8dc0
// 地址: 0x1408c8dc0
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
int32_t* r8_1 = *rcx_2

if (&r8_1[1] u<= rcx_2[1])
    arg2[1] = *r8_1
    int64_t* rax_6 = arg1[1]
    *rax_6 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[1], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[1], 4)

int64_t* rcx_4 = arg1[1]
int32_t* r8_2 = *rcx_4

if (&r8_2[1] u<= rcx_4[1])
    arg2[2] = *r8_2
    int64_t* rax_10 = arg1[1]
    *rax_10 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[2], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[2], 4)

int64_t* rcx_6 = arg1[1]
int32_t* r8_3 = *rcx_6

if (&r8_3[1] u<= rcx_6[1])
    arg2[3] = *r8_3
    int64_t* rax_14 = arg1[1]
    *rax_14 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[3], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[3], 4)

int64_t* rcx_8 = arg1[1]
int32_t* r8_4 = *rcx_8

if (&r8_4[1] u<= rcx_8[1])
    arg2[4] = *r8_4
    int64_t* rax_18 = arg1[1]
    *rax_18 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[4], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[4], 4)

int64_t* rcx_10 = arg1[1]
int32_t* r8_5 = *rcx_10

if (&r8_5[1] u<= rcx_10[1])
    arg2[5] = *r8_5
    int64_t* rax_22 = arg1[1]
    *rax_22 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[5], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[5], 4)

int64_t* rcx_12 = arg1[1]
int32_t* rdx_5 = *rcx_12

if (&rdx_5[1] u> rcx_12[1])
    int32_t rax_26
    rax_26.b = arg2[6].b != 0
    int32_t arg_8 = rax_26
    (*(*arg1 + 0x150))(arg1, &arg_8, 4)
    arg2[6].b = arg_8 != 0
else
    void* rax_24
    rax_24.b = *rdx_5 != 0
    arg2[6].b = rax_24.b
    int64_t* rax_25 = arg1[1]
    *rax_25 += 4

int64_t* rcx_14 = arg1[1]
char* rdx_7 = *rcx_14

if (&rdx_7[1] u> rcx_14[1])
    (*(*arg1 + 0x150))(arg1, arg2 + 0x19, 1)
else
    *(arg2 + 0x19) = *rdx_7
    int64_t* rax_31 = arg1[1]
    *rax_31 += 1

int64_t* rcx_16 = arg1[1]
int16_t* r8_6 = *rcx_16

if (&r8_6[1] u<= rcx_16[1])
    *(arg2 + 0x1a) = *r8_6
    int64_t* rax_35 = arg1[1]
    *rax_35 += 2
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54000(arg1, arg2 + 0x1a, arg3)
else
    (*(*arg1 + 0x150))(arg1, arg2 + 0x1a, 2)

return sub_1408c9060(sub_1407e5270(arg1, &arg2[8], arg3), &arg2[0xc], arg3)
