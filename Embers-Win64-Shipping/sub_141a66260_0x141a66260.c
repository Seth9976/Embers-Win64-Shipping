// 函数: sub_141a66260
// 地址: 0x141a66260
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
int64_t* rcx_12
int32_t* rdx_6
int64_t r8_4

if (rax_2 s>= 0xc)
    if (&rdx[1] u<= r8)
        *arg1 = *rdx
        int64_t* rax_24 = arg2[1]
        *rax_24 += 4
    else if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, arg1, zmm1)
    else
        (*(*arg2 + 0x150))(arg2, arg1, 4)
    
    int64_t* rcx_14 = arg2[1]
    int32_t* r8_5 = *rcx_14
    
    if (&r8_5[1] u<= rcx_14[1])
        arg1[1] = *r8_5
        int64_t* rax_28 = arg2[1]
        *rax_28 += 4
    else if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, &arg1[1], zmm1)
    else
        (*(*arg2 + 0x150))(arg2, &arg1[1], 4)
    
    int64_t* rcx_16 = arg2[1]
    int32_t* r8_6 = *rcx_16
    
    if (&r8_6[1] u<= rcx_16[1])
        arg1[2] = *r8_6
        int64_t* rax_32 = arg2[1]
        *rax_32 += 4
    else if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, &arg1[2], zmm1)
    else
        (*(*arg2 + 0x150))(arg2, &arg1[2], 4)
    
    int64_t* rcx_18 = arg2[1]
    int32_t* r8_7 = *rcx_18
    
    if (&r8_7[1] u<= rcx_18[1])
        arg1[3] = *r8_7
        int64_t* rax_36 = arg2[1]
        *rax_36 += 4
    else if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, &arg1[3], zmm1)
    else
        (*(*arg2 + 0x150))(arg2, &arg1[3], 4)
    
    int64_t* rcx_20 = arg2[1]
    rdx_6 = &arg1[4]
    char* r8_8 = *rcx_20
    
    if (&r8_8[1] u<= rcx_20[1])
        *rdx_6 = *r8_8
        int64_t* rax_40 = arg2[1]
        *rax_40 += 1
        rax_40.b = 1
        return rax_40
    
    r8_4 = 1
    rcx_12 = arg2
else
    if (&rdx[1] u<= r8)
        *arg1 = *rdx
        int64_t* rax_5 = arg2[1]
        *rax_5 += 4
    else if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, arg1, zmm1)
    else
        (*(*arg2 + 0x150))(arg2, arg1, 4)
    
    int64_t* rcx_5 = arg2[1]
    int32_t* r8_1 = *rcx_5
    
    if (&r8_1[1] u<= rcx_5[1])
        arg1[1] = *r8_1
        int64_t* rax_9 = arg2[1]
        *rax_9 += 4
    else if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, &arg1[1], zmm1)
    else
        (*(*arg2 + 0x150))(arg2, &arg1[1], 4)
    
    int64_t* rcx_7 = arg2[1]
    char* rdx_3 = *rcx_7
    
    if (&rdx_3[1] u> rcx_7[1])
        (*(*arg2 + 0x150))(arg2, &arg1[4], 1)
    else
        arg1[4].b = *rdx_3
        int64_t* rax_13 = arg2[1]
        *rax_13 += 1
    
    int64_t* rcx_9 = arg2[1]
    int32_t* r8_2 = *rcx_9
    
    if (&r8_2[1] u<= rcx_9[1])
        arg1[2] = *r8_2
        int64_t* rax_17 = arg2[1]
        *rax_17 += 4
    else if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, &arg1[2], zmm1)
    else
        (*(*arg2 + 0x150))(arg2, &arg1[2], 4)
    
    int64_t* rcx_11 = arg2[1]
    rdx_6 = &arg1[3]
    int32_t* r8_3 = *rcx_11
    
    if (&r8_3[1] u<= rcx_11[1])
        *rdx_6 = *r8_3
        int64_t* rax_21 = arg2[1]
        *rax_21 += 4
        rax_21.b = 1
        return rax_21
    
    rcx_12 = arg2
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(rcx_12, rdx_6, zmm1)
        int64_t* rax_22
        rax_22.b = 1
        return rax_22
    
    r8_4 = 4

(*(*arg2 + 0x150))(rcx_12, rdx_6, r8_4)
int64_t rax_42
rax_42.b = 1
return rax_42
