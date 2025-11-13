// 函数: sub_141751b10
// 地址: 0x141751b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x1d8))(arg2, &data_1439a9538)
int512_t zmm1_1 = sub_14152e3c0(arg2, arg1 + 0x28, sub_1417558e0(arg2, arg1 + 0x10))
int64_t* rcx_3 = arg2[1]
int32_t arg_8 = *(arg1 + 0x40)
int32_t* rdx_2 = *rcx_3

if (&rdx_2[1] u> rcx_3[1])
    int32_t* rdx_3 = &arg_8
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_3, zmm1_1)
    else
        (*(*arg2 + 0x150))(arg2, rdx_3, 4)
else
    arg_8 = *rdx_2
    *rcx_3 += 4

int32_t rax_5 = arg_8

if (rax_5 s> *(arg1 + 0x44))
    sub_1405a52a0(arg1 + 0x38, rax_5)
    rax_5 = arg_8

int64_t rbp = sx.q(*(arg1 + 0x40))

if (rax_5 s> rbp.d)
    *(arg1 + 0x40) = rax_5
    int32_t i_1 = rax_5 - rbp.d
    
    if (rax_5 s> *(arg1 + 0x44))
        sub_1405c4fe0(arg1 + 0x38)
        rax_5 = arg_8
    
    int32_t* rcx_9 = (rbp << 6) + *(arg1 + 0x38)
    
    if (i_1 != 0)
        void* rax_6 = &rcx_9[0xf]
        int32_t i
        
        do
            *rcx_9 = 0x7f7fffff
            rcx_9 = &rcx_9[0x10]
            __builtin_memcpy(rax_6 - 0x38, 
                "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\xff\x7f\xff", 
                0x14)
            *(rax_6 - 0x24) = 0
            *(rax_6 - 0x1c) = 0
            __builtin_memcpy(rax_6 - 0x14, 
                "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff", 
                0x14)
            *rax_6 = 0xff7fffff
            rax_6 += 0x40
            i = i_1
            i_1 -= 1
        while (i != 1)
        rax_5 = arg_8
else if (rax_5 s< rbp.d)
    zmm1_1 = sub_14174cc80(arg1 + 0x38, rax_5, rbp.d - rax_5, 1)
    rax_5 = arg_8

int32_t rdi_2 = 0

if (rax_5 s> 0)
    do
        zmm1_1 = sub_14152ebb0(arg2, *(arg1 + 0x38) + 0x18 + (sx.q(rdi_2) << 6), zmm1_1)
        rdi_2 += 1
    while (rdi_2 s< arg_8)

sub_14152ebb0(arg2, arg1 + 0x58, sub_14152ebb0(arg2, arg1 + 0x48, zmm1_1))
int32_t rax_7
int512_t zmm1_3
rax_7, zmm1_3 = sub_140b4e7c0(arg2, &data_1439a9538)
bool cond:3_1

if (rax_7 s>= 0x1b)
    int64_t* rcx_17 = arg2[1]
    int64_t rdx_12 = *rcx_17
    
    if (rdx_12 + 4 u> rcx_17[1])
        int64_t rax_10 = *arg2
        arg_8 = 0
        (*(rax_10 + 0x150))(arg2, &arg_8, 4)
        cond:3_1 = arg_8 != 0
    else
        cond:3_1 = *rdx_12 != 0
        *rcx_17 = rdx_12 + 4

if (rax_7 s< 0x1b || cond:3_1 != 0)
    zmm1_3 = sub_141752500(arg1 + 0x68, arg2, zmm1_3)

int64_t* rcx_20 = arg2[1]
int32_t* r8_3 = *rcx_20

if (&r8_3[1] u<= rcx_20[1])
    *(arg1 + 0x78) = *r8_3
    int64_t* rax_13 = arg2[1]
    *rax_13 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x78, zmm1_3)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x78, 4)

int64_t* rcx_22 = arg2[1]
int32_t* r8_4 = *rcx_22

if (&r8_4[1] u<= rcx_22[1])
    *(arg1 + 0x7c) = *r8_4
    int64_t* rax_17 = arg2[1]
    *rax_17 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x7c, zmm1_3)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x7c, 4)

int64_t* rcx_24 = arg2[1]
int32_t* r8_5 = *rcx_24

if (&r8_5[1] u<= rcx_24[1])
    *(arg1 + 0x80) = *r8_5
    int64_t* result = arg2[1]
    *result += 4
    return result

if ((*(arg2 + 0x29) & 0x20) != 0)
    return sub_140b54070(arg2, arg1 + 0x80, zmm1_3)

return (*(*arg2 + 0x150))(arg2, arg1 + 0x80, 4)
