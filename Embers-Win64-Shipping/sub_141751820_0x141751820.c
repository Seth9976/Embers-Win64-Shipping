// 函数: sub_141751820
// 地址: 0x141751820
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

int32_t rdx_4 = arg_8

if (rdx_4 s> *(arg1 + 0x44))
    sub_1405c5660(arg1 + 0x38, rdx_4)
    rdx_4 = arg_8

int64_t rbp = sx.q(*(arg1 + 0x40))

if (rdx_4 s> rbp.d)
    *(arg1 + 0x40) = rdx_4
    int32_t i_1 = rdx_4 - rbp.d
    
    if (rdx_4 s> *(arg1 + 0x44))
        sub_1405c4ec0(arg1 + 0x38)
        rdx_4 = arg_8
    
    int64_t* r8_1 = *(arg1 + 0x38) + rbp * 0x28
    
    if (i_1 != 0)
        void* rax_6 = r8_1 + 0x24
        int32_t i
        
        do
            *r8_1 = 0
            r8_1 = &r8_1[5]
            *(rax_6 - 0x1c) = 0
            __builtin_memcpy(rax_6 - 0x14, 
                "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff", 
                0x14)
            *rax_6 = 0xff7fffff
            rax_6 += 0x28
            i = i_1
            i_1 -= 1
        while (i != 1)
        rdx_4 = arg_8
else if (rdx_4 s< rbp.d)
    zmm1_1 = sub_14174cbb0(arg1 + 0x38, rdx_4, rbp.d - rdx_4, 1)
    rdx_4 = arg_8

int32_t rdi_2 = 0

if (rdx_4 s> 0)
    do
        zmm1_1 = sub_14152ea20(arg2, *(arg1 + 0x38) + sx.q(rdi_2) * 0x28, zmm1_1)
        rdi_2 += 1
    while (rdi_2 s< arg_8)

sub_14152ea20(arg2, arg1 + 0x58, sub_14152ea20(arg2, arg1 + 0x48, zmm1_1))
int32_t rax_9
int512_t zmm1_3
rax_9, zmm1_3 = sub_140b4e7c0(arg2, &data_1439a9538)
bool cond:3_1

if (rax_9 s>= 0x1b)
    int64_t* rcx_15 = arg2[1]
    int64_t rdx_9 = *rcx_15
    
    if (rdx_9 + 4 u> rcx_15[1])
        int64_t rax_12 = *arg2
        arg_8 = 1
        (*(rax_12 + 0x150))(arg2, &arg_8, 4)
        cond:3_1 = arg_8 != 0
    else
        cond:3_1 = *rdx_9 != 0
        *rcx_15 = rdx_9 + 4

if (rax_9 s< 0x1b || cond:3_1 != 0)
    zmm1_3 = sub_141752310(arg1 + 0x68, arg2, zmm1_3)
    *(arg1 + 0x70) = 0
    
    if (*(arg1 + 0x74) != 0)
        sub_1405a5410(arg1 + 0x68, 0)

int64_t* rcx_19 = arg2[1]
int32_t* r8_4 = *rcx_19

if (&r8_4[1] u<= rcx_19[1])
    *(arg1 + 0x78) = *r8_4
    int64_t* rax_15 = arg2[1]
    *rax_15 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x78, zmm1_3)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x78, 4)

int64_t* rcx_21 = arg2[1]
int32_t* r8_5 = *rcx_21

if (&r8_5[1] u<= rcx_21[1])
    *(arg1 + 0x7c) = *r8_5
    int64_t* rax_19 = arg2[1]
    *rax_19 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x7c, zmm1_3)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x7c, 4)

int64_t* rcx_23 = arg2[1]
int32_t* r8_6 = *rcx_23

if (&r8_6[1] u<= rcx_23[1])
    *(arg1 + 0x80) = *r8_6
    int64_t* result = arg2[1]
    *result += 4
    return result

if ((*(arg2 + 0x29) & 0x20) != 0)
    return sub_140b54070(arg2, arg1 + 0x80, zmm1_3)

return (*(*arg2 + 0x150))(arg2, arg1 + 0x80, 4)
