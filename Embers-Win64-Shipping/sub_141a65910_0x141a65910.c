// 函数: sub_141a65910
// 地址: 0x141a65910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x1d8))(arg2, &data_1439a9488)
int32_t rax_1
int512_t zmm1
rax_1, zmm1 = sub_140b4e7c0(arg2, &data_1439a9488)

if (rax_1 s< 0xc)
    rax_1.b = 0
    return rax_1

int64_t* rcx_2 = arg2[1]
char* rdx = *rcx_2

if (&rdx[1] u> rcx_2[1])
    (*(*arg2 + 0x150))(arg2, arg1 + 8, 1)
else
    *(arg1 + 8) = *rdx
    int64_t* rax_4 = arg2[1]
    *rax_4 += 1

int64_t* rcx_4 = arg2[1]
char* rdx_2 = *rcx_4

if (&rdx_2[1] u> rcx_4[1])
    (*(*arg2 + 0x150))(arg2, arg1 + 9, 1)
else
    *(arg1 + 9) = *rdx_2
    int64_t* rax_8 = arg2[1]
    *rax_8 += 1

char rax_10 = arg2[5].b
int32_t arg_10
int32_t arg_18

if ((rax_10 & 1) != 0)
    int64_t* rcx_6 = arg2[1]
    arg_10 = 0
    int32_t* rdx_4 = *rcx_6
    
    if (&rdx_4[1] u> rcx_6[1])
        int32_t* rdx_5 = &arg_10
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_5, zmm1)
        else
            (*(*arg2 + 0x150))(arg2, rdx_5, 4)
    else
        arg_10 = *rdx_4
        *rcx_6 += 4
    
    if (arg_10 != 4 || (*(arg2 + 0x29) & 0x20) != 0)
        sub_141a34780(arg2, arg1 + 0x10, zmm1)
    else
        (*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0x18)) << 2, sx.q(*(arg1 + 0x1c)) << 2)
        int64_t* rcx_9 = arg2[1]
        arg_18 = 0
        int32_t* rdx_8 = *rcx_9
        
        if (&rdx_8[1] u> rcx_9[1])
            int32_t* rdx_9 = &arg_18
            
            if ((*(arg2 + 0x29) & 0x20) != 0)
                sub_140b54070(arg2, rdx_9, zmm1)
            else
                (*(*arg2 + 0x150))(arg2, rdx_9, 4)
        else
            arg_18 = *rdx_8
            *rcx_9 += 4
        
        int32_t rcx_12 = arg_18
        *(arg1 + 0x18) = 0
        
        if (*(arg1 + 0x1c) != rcx_12)
            sub_1405dadb0(arg1 + 0x10, rcx_12)
            rcx_12 = arg_18
        
        if (rcx_12 s> 0)
            int32_t rax_18 = *(arg1 + 0x18) + rcx_12
            *(arg1 + 0x18) = rax_18
            
            if (rax_18 s> *(arg1 + 0x1c))
                sub_1405a4cf0(arg1 + 0x10)
                rcx_12 = arg_18
            
            (*(*arg2 + 0x150))(arg2, *(arg1 + 0x10), sx.q(rcx_12 * arg_10))
    
    int64_t* rcx_17 = arg2[1]
    int32_t* rdx_14 = *rcx_17
    
    if (&rdx_14[1] u> rcx_17[1])
        int32_t* rdx_15 = &arg_10
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_15, zmm1)
        else
            (*(*arg2 + 0x150))(arg2, rdx_15, 4)
    else
        arg_10 = *rdx_14
        *rcx_17 += 4
    
    if (arg_10 != 0x1c || (*(arg2 + 0x29) & 0x20) != 0)
        zmm1 = sub_141a34930(arg2, arg1 + 0x20, zmm1)
    else
        int64_t r9_1 = *arg2
        (*(r9_1 + 8))(arg2, sx.q(*(arg1 + 0x28)) * 0x1c, sx.q(*(arg1 + 0x2c)) * 0x1c, r9_1)
        int64_t* rcx_20 = arg2[1]
        arg_18 = 0
        int32_t* rdx_17 = *rcx_20
        
        if (&rdx_17[1] u> rcx_20[1])
            int32_t* rdx_18 = &arg_18
            
            if ((*(arg2 + 0x29) & 0x20) != 0)
                sub_140b54070(arg2, rdx_18, zmm1)
            else
                (*(*arg2 + 0x150))(arg2, rdx_18, 4)
        else
            arg_18 = *rdx_17
            *rcx_20 += 4
        
        int32_t rcx_23 = arg_18
        *(arg1 + 0x28) = 0
        
        if (*(arg1 + 0x2c) != rcx_23)
            sub_1413f6f70(arg1 + 0x20, rcx_23)
            rcx_23 = arg_18
        
        if (rcx_23 s> 0)
            int32_t rax_28 = *(arg1 + 0x28) + rcx_23
            *(arg1 + 0x28) = rax_28
            
            if (rax_28 s> *(arg1 + 0x2c))
                sub_1405c50f0(arg1 + 0x20)
                rcx_23 = arg_18
            
            (*(*arg2 + 0x150))(arg2, *(arg1 + 0x20), sx.q(rcx_23 * arg_10))
else if ((rax_10 & 2) != 0)
    int64_t* rcx_26 = arg2[1]
    arg_18 = 4
    int32_t* rdx_22 = *rcx_26
    
    if (&rdx_22[1] u> rcx_26[1])
        int32_t* rdx_23 = &arg_18
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_23, zmm1)
        else
            (*(*arg2 + 0x150))(arg2, rdx_23, 4)
    else
        arg_18 = *rdx_22
        *rcx_26 += 4
    
    (*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0x18)) << 2, sx.q(*(arg1 + 0x1c)) << 2)
    int64_t* rcx_29 = arg2[1]
    arg_10 = *(arg1 + 0x18)
    int32_t* rdx_26 = *rcx_29
    
    if (&rdx_26[1] u> rcx_29[1])
        int32_t* rdx_27 = &arg_10
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_27, zmm1)
        else
            (*(*arg2 + 0x150))(arg2, rdx_27, 4)
    else
        arg_10 = *rdx_26
        *rcx_29 += 4
    
    int32_t rcx_31 = arg_10
    
    if (rcx_31 s> 0)
        (*(*arg2 + 0x150))(arg2, *(arg1 + 0x10), sx.q(rcx_31 * arg_18))
    
    int64_t r9_2 = *arg2
    (*(r9_2 + 8))(arg2, sx.q(*(arg1 + 0x28)) * 0x1c, sx.q(*(arg1 + 0x2c)) * 0x1c, r9_2)
    int64_t* rcx_35 = arg2[1]
    arg_18 = 0x1c
    int32_t* rdx_30 = *rcx_35
    
    if (&rdx_30[1] u> rcx_35[1])
        int32_t* rdx_31 = &arg_18
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_31, zmm1)
        else
            (*(*arg2 + 0x150))(arg2, rdx_31, 4)
    else
        arg_18 = *rdx_30
        *rcx_35 += 4
    
    int64_t* rcx_37 = arg2[1]
    arg_10 = *(arg1 + 0x28)
    int32_t* rdx_32 = *rcx_37
    
    if (&rdx_32[1] u> rcx_37[1])
        int32_t* rdx_33 = &arg_10
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_33, zmm1)
        else
            (*(*arg2 + 0x150))(arg2, rdx_33, 4)
    else
        arg_10 = *rdx_32
        *rcx_37 += 4
    
    int32_t rcx_39 = arg_10
    
    if (rcx_39 s> 0)
        (*(*arg2 + 0x150))(arg2, *(arg1 + 0x20), sx.q(rcx_39 * arg_18))
int64_t* rcx_42 = arg2[1]
int32_t* r8_10 = *rcx_42

if (&r8_10[1] u<= rcx_42[1])
    *(arg1 + 0x30) = *r8_10
    int64_t* rax_50 = arg2[1]
    *rax_50 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x30, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x30, 4)

int64_t* rcx_44 = arg2[1]
int32_t* rdx_36 = *rcx_44

if (&rdx_36[1] u> rcx_44[1])
    int64_t rax_54 = *arg2
    int32_t r14
    r14.b = *(arg1 + 0x34) != 0
    arg_10 = r14
    (*(rax_54 + 0x150))(arg2, &arg_10, 4)
    *(arg1 + 0x34) = arg_10 != 0
else
    void* rax_52
    rax_52.b = *rdx_36 != 0
    *(arg1 + 0x34) = rax_52.b
    int64_t* rax_53 = arg2[1]
    *rax_53 += 4

int64_t* rcx_46 = arg2[1]
int32_t* r8_11 = *rcx_46

if (&r8_11[1] u<= rcx_46[1])
    *(arg1 + 0x98) = *r8_11
    int64_t* rax_58 = arg2[1]
    *rax_58 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x98, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x98, 4)

int64_t* rcx_48 = arg2[1]
int32_t* r8_12 = *rcx_48

if (&r8_12[1] u<= rcx_48[1])
    *(arg1 + 0x9c) = *r8_12
    int64_t* rax_62 = arg2[1]
    *rax_62 += 4
    rax_62.b = 1
    return rax_62

if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x9c, zmm1)
    int64_t* rax_65
    rax_65.b = 1
    return rax_65

(*(*arg2 + 0x150))(arg2, arg1 + 0x9c, 4)
int64_t rax_64
rax_64.b = 1
return rax_64
