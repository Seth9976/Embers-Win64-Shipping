// 函数: sub_1418d70c0
// 地址: 0x1418d70c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg1[1]
int16_t* rcx = *r8

if (&rcx[1] u<= r8[1])
    *arg2 = *rcx
    int64_t* rax_2 = arg1[1]
    *rax_2 += 2
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54000(arg1, arg2, arg3)
else
    (*(*arg1 + 0x150))(arg1, arg3, 2)

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
    (*(*arg1 + 0x150))(arg1, arg2 + 3, 1)
else
    *(arg2 + 3) = *rdx_2
    int64_t* rax_10 = arg1[1]
    *rax_10 += 1

int64_t* rcx_6 = arg1[1]
char* rdx_4 = *rcx_6
int64_t* rax_14

if (&rdx_4[1] u> rcx_6[1])
    (*(*arg1 + 0x150))(arg1, &arg2[2], 1)
else
    arg2[2].b = *rdx_4
    rax_14 = arg1[1]
    *rax_14 += 1

if ((arg1[5].b & 1) != 0)
    uint32_t rcx_8 = zx.d(arg2[2].b)
    
    if (rcx_8 == 0x68)
        rax_14.b = 0
    else if (rcx_8 == 0x69)
        rax_14.b = 3
    else if (rcx_8 == 0x6c)
        rax_14.b = 2
    else if (rcx_8 == 0x6d)
        rax_14.b = 1
    else if (rcx_8 != 0x75)
        rax_14.b = 0
    else
        rax_14.b = 4
    
    *(arg2 + 5) = rax_14.b

int64_t* rcx_13 = arg1[1]
int16_t* r8_1 = *rcx_13

if (&r8_1[1] u<= rcx_13[1])
    arg2[3] = *r8_1
    int64_t* rax_18 = arg1[1]
    *rax_18 += 2
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54000(arg1, &arg2[3], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[3], 2)

int64_t* rcx_15 = arg1[1]
int16_t* r8_2 = *rcx_15

if (&r8_2[1] u<= rcx_15[1])
    arg2[4] = *r8_2
    int64_t* rax_22 = arg1[1]
    *rax_22 += 2
    return arg1

if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54000(arg1, &arg2[4], arg3)
    return arg1

(*(*arg1 + 0x150))(arg1, &arg2[4], 2)
return arg1
