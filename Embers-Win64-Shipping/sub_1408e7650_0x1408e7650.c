// 函数: sub_1408e7650
// 地址: 0x1408e7650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x1d8))(arg2, &data_1439a94b8)
int32_t rax_1
int512_t zmm1
rax_1, zmm1 = sub_140b4e7c0(arg2, &data_1439a94b8)

if (rax_1 s>= 0x11)
    zmm1 = sub_140ce8e10(arg1, arg2)

sub_1408dcaf0(arg2, arg1 + 0x30, zmm1)
sub_1408dc390(arg2, arg1 + 0x40, zmm1)
int64_t* rcx_5 = arg2[1]
int32_t* r8 = *rcx_5

if (&r8[1] u<= rcx_5[1])
    *(arg1 + 0x50) = *r8
    int64_t* rax_4 = arg2[1]
    *rax_4 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x50, zmm1)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x50, 4)

int64_t* rcx_7 = arg2[1]
int32_t i_2 = *(arg1 + 0x70)
int32_t* rdx_4 = *rcx_7

if (&rdx_4[1] u> rcx_7[1])
    int32_t* rdx_5 = &i_2
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_5, zmm1)
    else
        (*(*arg2 + 0x150))(arg2, rdx_5, 4)
else
    i_2 = *rdx_4
    *rcx_7 += 4

int32_t rsi = 0

if ((arg2[5].b & 1) != 0)
    int64_t r14_1 = sx.q(*(arg1 + 0x70))
    int32_t i_1 = i_2
    int32_t rax_10 = r14_1.d + i_1
    *(arg1 + 0x70) = rax_10
    
    if (rax_10 s> *(arg1 + 0x74))
        sub_1405c4f50(arg1 + 0x68)
    
    int32_t* rcx_12 = r14_1 * 0x30 + *(arg1 + 0x68)
    
    if (i_1 != 0)
        void* rax_11 = &rcx_12[0xa]
        int32_t i
        
        do
            *rcx_12 = 0
            rcx_12 = &rcx_12[0xc]
            *(rax_11 - 0x24) = 0
            *(rax_11 - 8) = 0
            *rax_11 = 0
            *(rax_11 + 4) = 0
            *(rax_11 - 0x18) = 0
            *(rax_11 - 0x10) = 0xffffffff
            rax_11 += 0x30
            i = i_1
            i_1 -= 1
        while (i != 1)

if (i_2 s> 0)
    int64_t r15_1 = 0
    
    do
        int32_t* r14_3 = *(arg1 + 0x68) + r15_1
        sub_140bd0790(&r14_3[4], 0x400)
        int32_t var_30_1 = 1
        zmm1 = sub_140bcfa90(&r14_3[4], arg2, arg1, zmm1, rsi.b, 0)
        int64_t* rcx_15 = arg2[1]
        int32_t* rdx_8 = *rcx_15
        
        if (&rdx_8[1] u<= rcx_15[1])
            *r14_3 = *rdx_8
            int64_t* rax_14 = arg2[1]
            *rax_14 += 4
        else if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, r14_3, zmm1)
        else
            (*(*arg2 + 0x150))(arg2, r14_3, 4)
        
        int64_t* rcx_17 = arg2[1]
        int32_t* r8_2 = *rcx_17
        
        if (&r8_2[1] u<= rcx_17[1])
            r14_3[1] = *r8_2
            int64_t* rax_18 = arg2[1]
            *rax_18 += 4
        else if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, &r14_3[1], zmm1)
        else
            (*(*arg2 + 0x150))(arg2, &r14_3[1], 4)
        
        int64_t* rcx_19 = arg2[1]
        int32_t* r8_3 = *rcx_19
        
        if (&r8_3[1] u<= rcx_19[1])
            r14_3[2] = *r8_3
            int64_t* rax_22 = arg2[1]
            *rax_22 += 4
        else if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, &r14_3[2], zmm1)
        else
            (*(*arg2 + 0x150))(arg2, &r14_3[2], 4)
        
        rsi += 1
        r15_1 += 0x30
    while (rsi s< i_2)

sub_1408dc920(arg2, arg1 + 0x78, zmm1)
return sub_1408dcca0(arg2, arg1 + 0x88, zmm1)
