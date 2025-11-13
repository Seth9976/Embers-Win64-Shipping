// 函数: sub_140cd4e30
// 地址: 0x140cd4e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = *(*arg1 + 8)
int64_t* rcx = rsi[1]
int32_t* r8 = *rcx

if (&r8[1] u<= rcx[1])
    *(arg2 + 0xc) = *r8
    int64_t* rax_3 = rsi[1]
    *rax_3 += 4
else if ((*(rsi + 0x29) & 0x20) != 0)
    sub_140b54070(rsi, arg2 + 0xc, arg3)
else
    (*(*rsi + 0x150))(rsi, arg2 + 0xc, 4)

int64_t* r9 = *(*arg1 + 8)
int64_t* rcx_2 = r9[1]
int32_t* r8_1 = *rcx_2

if (&r8_1[1] u<= rcx_2[1])
    *(arg2 + 0x14) = *r8_1
    int64_t* rax_8 = r9[1]
    *rax_8 += 4
else if ((*(r9 + 0x29) & 0x20) != 0)
    sub_140b54070(r9, arg2 + 0x14, arg3)
else
    (*(*r9 + 0x150))(r9, arg2 + 0x14, 4)

if (rsi[8].d s>= 0x1fc)
    int64_t* r9_1 = *(*arg1 + 8)
    int64_t* rcx_4 = r9_1[1]
    int32_t* r8_2 = *rcx_4
    
    if (&r8_2[1] u<= rcx_4[1])
        *(arg2 + 0x18) = *r8_2
        int64_t* rax_13 = r9_1[1]
        *rax_13 += 4
    else if ((*(r9_1 + 0x29) & 0x20) != 0)
        sub_140b54070(r9_1, arg2 + 0x18, arg3)
    else
        (*(*r9_1 + 0x150))(r9_1, arg2 + 0x18, 4)

int64_t* r9_2 = *(*arg1 + 8)
int64_t* rcx_6 = r9_2[1]
int32_t* r8_3 = *rcx_6

if (&r8_3[1] u<= rcx_6[1])
    *(arg2 + 8) = *r8_3
    int64_t* rax_18 = r9_2[1]
    *rax_18 += 4
else if ((*(r9_2 + 0x29) & 0x20) != 0)
    sub_140b54070(r9_2, arg2 + 8, arg3)
else
    (*(*r9_2 + 0x150))(r9_2, arg2 + 8, 4)

int64_t* rcx_8 = *(*arg1 + 8)
(*(*rcx_8 + 0x140))(rcx_8, arg2)
int32_t arg_8 = *(arg2 + 0x1c) & 0x2d4003b
int64_t* r9_3 = *(*arg1 + 8)
int64_t* rcx_9 = r9_3[1]
int32_t* rdx_5 = *rcx_9

if (&rdx_5[1] u> rcx_9[1])
    int32_t* rdx_6 = &arg_8
    
    if ((*(r9_3 + 0x29) & 0x20) != 0)
        sub_140b54070(r9_3, rdx_6, arg3)
    else
        (*(*r9_3 + 0x150))(r9_3, rdx_6, 4)
else
    arg_8 = *rdx_5
    int64_t* rax_27 = r9_3[1]
    *rax_27 += 4

if ((rsi[5].b & 1) != 0)
    *(arg2 + 0x1c) = arg_8 & 0x2d4003b

int32_t arg_10

if (rsi[8].d s>= 0x1ff)
    int64_t* r9_6 = *(*arg1 + 8)
    int64_t* rcx_15 = r9_6[1]
    int64_t* rdx_11 = *rcx_15
    
    if (&rdx_11[1] u<= rcx_15[1])
        *(arg2 + 0x20) = *rdx_11
        int64_t* rax_50 = r9_6[1]
        *rax_50 += 8
    else if ((*(r9_6 + 0x29) & 0x20) != 0)
        sub_140b540d0(r9_6, arg2 + 0x20, arg3)
    else
        (*(*r9_6 + 0x150))(r9_6, arg2 + 0x20, 8)
    
    int64_t* r9_7 = *(*arg1 + 8)
    int64_t* rcx_17 = r9_7[1]
    int64_t* r8_4 = *rcx_17
    
    if (&r8_4[1] u<= rcx_17[1])
        *(arg2 + 0x28) = *r8_4
        int64_t* rax_55 = r9_7[1]
        *rax_55 += 8
    else if ((*(r9_7 + 0x29) & 0x20) != 0)
        sub_140b540d0(r9_7, arg2 + 0x28, arg3)
    else
        (*(*r9_7 + 0x150))(r9_7, arg2 + 0x28, 8)
else
    arg_10 = *(arg2 + 0x20)
    int64_t* r9_4 = *(*arg1 + 8)
    int64_t* rcx_11 = r9_4[1]
    int32_t* rdx_7 = *rcx_11
    
    if (&rdx_7[1] u> rcx_11[1])
        int32_t* rdx_8 = &arg_10
        
        if ((*(r9_4 + 0x29) & 0x20) != 0)
            sub_140b54070(r9_4, rdx_8, arg3)
        else
            (*(*r9_4 + 0x150))(r9_4, rdx_8, 4)
    else
        arg_10 = *rdx_7
        int64_t* rax_35 = r9_4[1]
        *rax_35 += 4
    
    *(arg2 + 0x20) = sx.q(arg_10)
    int32_t arg_18 = *(arg2 + 0x28)
    int64_t* r9_5 = *(*arg1 + 8)
    int64_t* rcx_13 = r9_5[1]
    int32_t* rdx_9 = *rcx_13
    
    if (&rdx_9[1] u> rcx_13[1])
        int32_t* rdx_10 = &arg_18
        
        if ((*(r9_5 + 0x29) & 0x20) != 0)
            sub_140b54070(r9_5, rdx_10, arg3)
            *(arg2 + 0x28) = sx.q(arg_18)
        else
            (*(*r9_5 + 0x150))(r9_5, rdx_10, 4)
            *(arg2 + 0x28) = sx.q(arg_18)
    else
        arg_18 = *rdx_9
        int64_t* rax_42 = r9_5[1]
        *rax_42 += 4
        *(arg2 + 0x28) = sx.q(arg_18)

int64_t* r9_8 = *(*arg1 + 8)
int64_t* rcx_19 = r9_8[1]
int32_t* rdx_14 = *rcx_19

if (&rdx_14[1] u> rcx_19[1])
    int32_t rax_60
    rax_60.b = *(arg2 + 0x4c) != 0
    arg_10 = rax_60
    (*(*r9_8 + 0x150))(r9_8, &arg_10, 4)
    *(arg2 + 0x4c) = arg_10 != 0
else
    void* rax_58
    rax_58.b = *rdx_14 != 0
    *(arg2 + 0x4c) = rax_58.b
    int64_t* rax_59 = r9_8[1]
    *rax_59 += 4

int64_t* r9_9 = *(*arg1 + 8)
int64_t* rcx_21 = r9_9[1]
int32_t* rdx_16 = *rcx_21

if (&rdx_16[1] u> rcx_21[1])
    int32_t rax_66
    rax_66.b = *(arg2 + 0x4d) != 0
    arg_10 = rax_66
    (*(*r9_9 + 0x150))(r9_9, &arg_10, 4)
    *(arg2 + 0x4d) = arg_10 != 0
else
    void* rax_64
    rax_64.b = *rdx_16 != 0
    *(arg2 + 0x4d) = rax_64.b
    int64_t* rax_65 = r9_9[1]
    *rax_65 += 4

int64_t* r9_10 = *(*arg1 + 8)
int64_t* rcx_23 = r9_10[1]
int32_t* rdx_18 = *rcx_23

if (&rdx_18[1] u> rcx_23[1])
    int32_t rax_72
    rax_72.b = *(arg2 + 0x4e) != 0
    arg_10 = rax_72
    (*(*r9_10 + 0x150))(r9_10, &arg_10, 4)
    *(arg2 + 0x4e) = arg_10 != 0
else
    void* rax_70
    rax_70.b = *rdx_18 != 0
    *(arg2 + 0x4e) = rax_70.b
    int64_t* rax_71 = r9_10[1]
    *rax_71 += 4

sub_140b0c350(arg1, arg2 + 0x54, arg3)
int64_t* r9_11 = *(*arg1 + 8)
int64_t* rcx_26 = r9_11[1]
int32_t* r8_5 = *rcx_26
int64_t* rax_78

if (&r8_5[1] u<= rcx_26[1])
    *(arg2 + 0x64) = *r8_5
    rax_78 = r9_11[1]
    *rax_78 += 4
else if ((*(r9_11 + 0x29) & 0x20) != 0)
    rax_78 = sub_140b54070(r9_11, arg2 + 0x64, arg3)
else
    rax_78 = (*(*r9_11 + 0x150))(r9_11, arg2 + 0x64, 4)

if (rsi[8].d s>= 0x16d)
    int64_t* r9_12 = *(*arg1 + 8)
    int64_t* rcx_28 = r9_12[1]
    int32_t* rdx_22 = *rcx_28
    
    if (&rdx_22[1] u> rcx_28[1])
        int32_t rax_82
        rax_82.b = *(arg2 + 0x4f) != 0
        arg_10 = rax_82
        (*(*r9_12 + 0x150))(r9_12, &arg_10, 4)
        rax_78.b = arg_10 != 0
        *(arg2 + 0x4f) = rax_78.b
    else
        void* rax_81
        rax_81.b = *rdx_22 != 0
        *(arg2 + 0x4f) = rax_81.b
        rax_78 = r9_12[1]
        *rax_78 += 4

if (rsi[8].d s>= 0x1e5)
    int64_t* r9_13 = *(*arg1 + 8)
    int64_t* rcx_30 = r9_13[1]
    int32_t* rdx_24 = *rcx_30
    
    if (&rdx_24[1] u> rcx_30[1])
        int64_t rax_86 = *r9_13
        int32_t r14
        r14.b = *(arg2 + 0x50) != 0
        arg_10 = r14
        (*(rax_86 + 0x150))(r9_13, &arg_10, 4)
        rax_78.b = arg_10 != 0
        *(arg2 + 0x50) = rax_78.b
    else
        void* rax_85
        rax_85.b = *rdx_24 != 0
        *(arg2 + 0x50) = rax_85.b
        rax_78 = r9_13[1]
        *rax_78 += 4

if (rsi[8].d s< 0x1fb)
    return rax_78

int64_t* r9_14 = *(*arg1 + 8)
int64_t* rcx_32 = r9_14[1]
int32_t* r8_6 = *rcx_32

if (&r8_6[1] u<= rcx_32[1])
    *(arg2 + 0x68) = *r8_6
    int64_t* rax_90 = r9_14[1]
    *rax_90 += 4
else if ((*(r9_14 + 0x29) & 0x20) != 0)
    sub_140b54070(r9_14, arg2 + 0x68, arg3)
else
    (*(*r9_14 + 0x150))(r9_14, arg2 + 0x68, 4)

int64_t* r9_15 = *(*arg1 + 8)
int64_t* rcx_34 = r9_15[1]
int32_t* r8_7 = *rcx_34

if (&r8_7[1] u<= rcx_34[1])
    *(arg2 + 0x6c) = *r8_7
    int64_t* rax_95 = r9_15[1]
    *rax_95 += 4
else if ((*(r9_15 + 0x29) & 0x20) != 0)
    sub_140b54070(r9_15, arg2 + 0x6c, arg3)
else
    (*(*r9_15 + 0x150))(r9_15, arg2 + 0x6c, 4)

int64_t* r9_16 = *(*arg1 + 8)
int64_t* rcx_36 = r9_16[1]
int32_t* r8_8 = *rcx_36

if (&r8_8[1] u<= rcx_36[1])
    *(arg2 + 0x70) = *r8_8
    int64_t* rax_100 = r9_16[1]
    *rax_100 += 4
else if ((*(r9_16 + 0x29) & 0x20) != 0)
    sub_140b54070(r9_16, arg2 + 0x70, arg3)
else
    (*(*r9_16 + 0x150))(r9_16, arg2 + 0x70, 4)

int64_t* r9_17 = *(*arg1 + 8)
int64_t* rcx_38 = r9_17[1]
int32_t* r8_9 = *rcx_38

if (&r8_9[1] u<= rcx_38[1])
    *(arg2 + 0x74) = *r8_9
    int64_t* rax_105 = r9_17[1]
    *rax_105 += 4
else if ((*(r9_17 + 0x29) & 0x20) != 0)
    sub_140b54070(r9_17, arg2 + 0x74, arg3)
else
    (*(*r9_17 + 0x150))(r9_17, arg2 + 0x74, 4)

int64_t* r9_18 = *(*arg1 + 8)
int64_t* rcx_40 = r9_18[1]
int32_t* r8_10 = *rcx_40

if (&r8_10[1] u<= rcx_40[1])
    *(arg2 + 0x78) = *r8_10
    int64_t* rax_110 = r9_18[1]
    *rax_110 += 4
    return rax_110

if ((*(r9_18 + 0x29) & 0x20) != 0)
    return sub_140b54070(r9_18, arg2 + 0x78, arg3)

return (*(*r9_18 + 0x150))(r9_18, arg2 + 0x78, 4)
