// 函数: sub_141751e20
// 地址: 0x141751e20
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

int32_t rcx_6 = arg_8

if (rcx_6 s> *(arg1 + 0x44))
    sub_141750570(arg1 + 0x38, rcx_6)
    rcx_6 = arg_8

int64_t rbp = sx.q(*(arg1 + 0x40))

if (rcx_6 s> rbp.d)
    *(arg1 + 0x40) = rcx_6
    int32_t i_1 = rcx_6 - rbp.d
    
    if (rcx_6 s> *(arg1 + 0x44))
        sub_1417500c0(arg1 + 0x38)
        rcx_6 = arg_8
    
    void*** rdx_7 = rbp * 0x98 + *(arg1 + 0x38)
    
    if (i_1 != 0)
        void* rax_5 = rdx_7 + 0x6c
        int32_t i
        
        do
            *(rax_5 - 0x64) = 0x100
            rax_5 += 0x98
            *rdx_7 = &data_142fc49a8
            rdx_7 = &rdx_7[0x13]
            *(rax_5 - 0xf4) = 0
            *(rax_5 - 0xec) = 0
            *(rax_5 - 0xa4) = 0
            *(rax_5 - 0x9c) = 0
            *(rax_5 - 0xb4) = 0
            *(rax_5 - 0xac) = 0
            __builtin_memset(rax_5 - 0x94, 0, 0x20)
            *(rax_5 - 0x74) = 0x47c35000
            i = i_1
            i_1 -= 1
        while (i != 1)
        rcx_6 = arg_8
else if (rcx_6 s< rbp.d)
    zmm1_1 = sub_14174cf20(arg1 + 0x38, rcx_6, rbp.d - rcx_6, 1)
    rcx_6 = arg_8

int32_t rdi_2 = 0

if (rcx_6 s> 0)
    do
        zmm1_1 = sub_141752d70(sx.q(rdi_2) * 0x98 + *(arg1 + 0x38), arg2)
        rdi_2 += 1
    while (rdi_2 s< arg_8)

sub_14152ebb0(arg2, arg1 + 0x58, sub_14152ebb0(arg2, arg1 + 0x48, zmm1_1))
int32_t rax_7
int512_t zmm1_3
rax_7, zmm1_3 = sub_140b4e7c0(arg2, &data_1439a9538)
bool cond:3_1

if (rax_7 s>= 0x1b)
    int64_t* rcx_14 = arg2[1]
    int64_t rdx_12 = *rcx_14
    
    if (rdx_12 + 4 u> rcx_14[1])
        int64_t rax_10 = *arg2
        arg_8 = 0
        (*(rax_10 + 0x150))(arg2, &arg_8, 4)
        cond:3_1 = arg_8 != 0
    else
        cond:3_1 = *rdx_12 != 0
        *rcx_14 = rdx_12 + 4

if (rax_7 s< 0x1b || cond:3_1 != 0)
    zmm1_3 = sub_141752500(arg1 + 0x68, arg2, zmm1_3)

int64_t* rcx_17 = arg2[1]
int32_t* r8_3 = *rcx_17

if (&r8_3[1] u<= rcx_17[1])
    *(arg1 + 0x78) = *r8_3
    int64_t* rax_13 = arg2[1]
    *rax_13 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x78, zmm1_3)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x78, 4)

int64_t* rcx_19 = arg2[1]
int32_t* r8_4 = *rcx_19

if (&r8_4[1] u<= rcx_19[1])
    *(arg1 + 0x7c) = *r8_4
    int64_t* rax_17 = arg2[1]
    *rax_17 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x7c, zmm1_3)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x7c, 4)

int64_t* rcx_21 = arg2[1]
int32_t* r8_5 = *rcx_21

if (&r8_5[1] u<= rcx_21[1])
    *(arg1 + 0x80) = *r8_5
    int64_t* result = arg2[1]
    *result += 4
    return result

if ((*(arg2 + 0x29) & 0x20) != 0)
    return sub_140b54070(arg2, arg1 + 0x80, zmm1_3)

return (*(*arg2 + 0x150))(arg2, arg1 + 0x80, 4)
