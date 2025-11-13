// 函数: sub_141a65ec0
// 地址: 0x141a65ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x1d8))(arg2, &data_1439a9488)

if (sub_140b4e7c0(arg2, &data_1439a9488) s< 0xa)
    int32_t rax_1
    rax_1.b = 0
    return rax_1

int32_t rax_2
int512_t zmm1
rax_2, zmm1 = sub_140b4e7c0(arg2, &data_1439a9488)
int64_t* rcx_3 = arg2[1]
int32_t* rdx = *rcx_3
int64_t r8 = rcx_3[1]

if (rax_2 s< 0xc)
    if (&rdx[1] u<= r8)
        *arg1 = *rdx
        int64_t* rax_5 = arg2[1]
        *rax_5 += 4
    else if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, arg1, zmm1)
    else
        (*(*arg2 + 0x150))(arg2, arg1, 4)
    
    int64_t* rcx_5 = arg2[1]
    char* rdx_2 = *rcx_5
    
    if (&rdx_2[1] u> rcx_5[1])
        (*(*arg2 + 0x150))(arg2, &arg1[6], 1)
    else
        arg1[6].b = *rdx_2
        int64_t* rax_9 = arg2[1]
        *rax_9 += 1
    
    int64_t* rcx_7 = arg2[1]
    char* r8_1 = *rcx_7
    
    if (&r8_1[1] u> rcx_7[1])
        (*(*arg2 + 0x150))(arg2, arg1 + 0x19, 1)
        sub_141a66260(&arg1[1], arg2)
        int64_t rax_16
        rax_16.b = 1
        return rax_16
    
    *(arg1 + 0x19) = *r8_1
    int64_t* rax_13 = arg2[1]
    *rax_13 += 1
    sub_141a66260(&arg1[1], arg2)
    int64_t rax_14
    rax_14.b = 1
    return rax_14

if (&rdx[1] u<= r8)
    *arg1 = *rdx
    int64_t* rax_18 = arg2[1]
    *rax_18 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1, 4)

int64_t* rcx_12 = arg2[1]
int32_t* r8_2 = *rcx_12

if (&r8_2[1] u<= rcx_12[1])
    arg1[1] = *r8_2
    int64_t* rax_22 = arg2[1]
    *rax_22 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, &arg1[1], zmm1)
else
    (*(*arg2 + 0x150))(arg2, &arg1[1], 4)

int64_t* rcx_14 = arg2[1]
int32_t* r8_3 = *rcx_14

if (&r8_3[1] u<= rcx_14[1])
    arg1[2] = *r8_3
    int64_t* rax_26 = arg2[1]
    *rax_26 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, &arg1[2], zmm1)
else
    (*(*arg2 + 0x150))(arg2, &arg1[2], 4)

int64_t* rcx_16 = arg2[1]
int32_t* r8_4 = *rcx_16

if (&r8_4[1] u<= rcx_16[1])
    arg1[3] = *r8_4
    int64_t* rax_30 = arg2[1]
    *rax_30 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, &arg1[3], zmm1)
else
    (*(*arg2 + 0x150))(arg2, &arg1[3], 4)

int64_t* rcx_18 = arg2[1]
int32_t* r8_5 = *rcx_18

if (&r8_5[1] u<= rcx_18[1])
    arg1[4] = *r8_5
    int64_t* rax_34 = arg2[1]
    *rax_34 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, &arg1[4], zmm1)
else
    (*(*arg2 + 0x150))(arg2, &arg1[4], 4)

int64_t* rcx_20 = arg2[1]
char* rdx_12 = *rcx_20

if (&rdx_12[1] u> rcx_20[1])
    (*(*arg2 + 0x150))(arg2, &arg1[5], 1)
else
    arg1[5].b = *rdx_12
    int64_t* rax_38 = arg2[1]
    *rax_38 += 1

int64_t* rcx_22 = arg2[1]
char* rdx_14 = *rcx_22

if (&rdx_14[1] u> rcx_22[1])
    (*(*arg2 + 0x150))(arg2, &arg1[6], 1)
else
    arg1[6].b = *rdx_14
    int64_t* rax_42 = arg2[1]
    *rax_42 += 1

int64_t* rcx_24 = arg2[1]
char* rdx_16 = *rcx_24

if (&rdx_16[1] u> rcx_24[1])
    (*(*arg2 + 0x150))(arg2, arg1 + 0x19, 1)
else
    *(arg1 + 0x19) = *rdx_16
    int64_t* rax_46 = arg2[1]
    *rax_46 += 1

int64_t* rcx_26 = arg2[1]
char* r8_6 = *rcx_26

if (&r8_6[1] u> rcx_26[1])
    (*(*arg2 + 0x150))(arg2, arg1 + 0x1a, 1)
    int64_t rax_52
    rax_52.b = 1
    return rax_52

*(arg1 + 0x1a) = *r8_6
int64_t* rax_50 = arg2[1]
*rax_50 += 1
rax_50.b = 1
return rax_50
