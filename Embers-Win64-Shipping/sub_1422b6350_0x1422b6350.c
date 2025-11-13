// 函数: sub_1422b6350
// 地址: 0x1422b6350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax_2 =
    sub_1409ac860(sub_1409ac860(sub_1409ac860(arg1, arg2, arg3), &arg2[4], arg3), &arg2[8], arg3)
int64_t* rdx_2 = rax_2[1]
int16_t* rax_3 = *rdx_2

if (&rax_3[1] u<= rdx_2[1])
    arg2[0xc].w = *rax_3
    int64_t* rcx_4 = rax_2[1]
    *rcx_4 += 2
else if ((*(rax_2 + 0x29) & 0x20) != 0)
    sub_140b54000(rax_2, &arg2[0xc], arg3)
else
    (*(*rax_2 + 0x150))(rax_2, &arg2[0xc], 2)

int64_t* rcx_6 = rax_2[1]
int16_t* r8 = *rcx_6

if (&r8[1] u<= rcx_6[1])
    *(arg2 + 0x32) = *r8
    int64_t* rax_7 = rax_2[1]
    *rax_7 += 2
else if ((*(rax_2 + 0x29) & 0x20) != 0)
    sub_140b54000(rax_2, arg2 + 0x32, arg3)
else
    (*(*rax_2 + 0x150))(rax_2, arg2 + 0x32, 2)

int64_t* rcx_8 = rax_2[1]
int16_t* r8_1 = *rcx_8

if (&r8_1[1] u<= rcx_8[1])
    arg2[0xd].w = *r8_1
    int64_t* rax_11 = rax_2[1]
    *rax_11 += 2
else if ((*(rax_2 + 0x29) & 0x20) != 0)
    sub_140b54000(rax_2, &arg2[0xd], arg3)
else
    (*(*rax_2 + 0x150))(rax_2, &arg2[0xd], 2)

int64_t* rcx_10 = rax_2[1]
int16_t* r8_2 = *rcx_10

if (&r8_2[1] u<= rcx_10[1])
    *(arg2 + 0x36) = *r8_2
    int64_t* rax_15 = rax_2[1]
    *rax_15 += 2
else if ((*(rax_2 + 0x29) & 0x20) != 0)
    sub_140b54000(rax_2, arg2 + 0x36, arg3)
else
    (*(*rax_2 + 0x150))(rax_2, arg2 + 0x36, 2)

int64_t* rcx_12 = rax_2[1]
int32_t* r8_3 = *rcx_12

if (&r8_3[1] u<= rcx_12[1])
    arg2[0xe] = *r8_3
    int64_t* rax_19 = rax_2[1]
    *rax_19 += 4
else if ((*(rax_2 + 0x29) & 0x20) != 0)
    sub_140b54070(rax_2, &arg2[0xe], arg3)
else
    (*(*rax_2 + 0x150))(rax_2, &arg2[0xe], 4)

int64_t* rcx_14 = rax_2[1]
int32_t* r8_4 = *rcx_14

if (&r8_4[1] u<= rcx_14[1])
    arg2[0xf] = *r8_4
    int64_t* rax_23 = rax_2[1]
    *rax_23 += 4
else if ((*(rax_2 + 0x29) & 0x20) != 0)
    sub_140b54070(rax_2, &arg2[0xf], arg3)
else
    (*(*rax_2 + 0x150))(rax_2, &arg2[0xf], 4)

return arg1
