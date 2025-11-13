// 函数: sub_141754990
// 地址: 0x141754990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x1d8))(arg2, &data_1439a9538)
(*(*arg2 + 0x1d8))(arg2, &data_1439a9548)
int512_t zmm1 = sub_1416f3c40(arg2, &arg1[0xa], arg3)
sub_1409ac860(arg2, arg1, zmm1)
sub_1409ac860(arg2, &arg1[4], zmm1)

if (sub_140b4e7c0(arg2, &data_1439a9538) s< 0x10)
    int32_t var_40_1 = 0
    *(arg1 + 0x30) = _mm_unpacklo_ps(zx.o(0), 0)
    int64_t temp0_2 = _mm_unpacklo_ps(zx.o(0), 0)
    int32_t var_34_1 = 0
    arg1[0xe] = 0
    *(arg1 + 0x3c) = temp0_2
    arg1[0x11] = 0
else
    sub_1417558e0(arg2, &arg1[0xc])

int32_t rax_3
int512_t zmm1_1
rax_3, zmm1_1 = sub_140b4e7c0(arg2, &data_1439a9538)

if (rax_3 s>= 0x12)
    sub_14152ed20(arg2, &arg1[0x12], zmm1_1)

int32_t rbx = 0
int32_t arg_8

if (sub_140b4e7c0(arg2, &data_1439a9538) s>= 0x16)
    int64_t* rcx_10 = arg2[1]
    int32_t* rdx_5 = *rcx_10
    
    if (&rdx_5[1] u> rcx_10[1])
        int32_t rax_7
        rax_7.b = arg1[0x22].b != 0
        arg_8 = rax_7
        (*(*arg2 + 0x150))(arg2, &arg_8, 4)
        arg1[0x22].b = arg_8 != 0
    else
        void* rax_5
        rax_5.b = *rdx_5 != 0
        arg1[0x22].b = rax_5.b
        int64_t* rax_6 = arg2[1]
        *rax_6 += 4

if (sub_140b4e7c0(arg2, &data_1439a9538) s>= 0x1a)
    int64_t* rcx_13 = arg2[1]
    int32_t* rdx_7 = *rcx_13
    
    if (&rdx_7[1] u> rcx_13[1])
        int32_t rax_13
        rax_13.b = *(arg1 + 0x89) != 0
        arg_8 = rax_13
        (*(*arg2 + 0x150))(arg2, &arg_8, 4)
        *(arg1 + 0x89) = arg_8 != 0
    else
        void* rax_11
        rax_11.b = *rdx_7 != 0
        *(arg1 + 0x89) = rax_11.b
        int64_t* rax_12 = arg2[1]
        *rax_12 += 4

int32_t rax_16
int512_t zmm1_2
rax_16, zmm1_2 = sub_140b4e7c0(arg2, &data_1439a9538)

if (rax_16 s>= 0x23)
    int64_t* rcx_16 = arg2[1]
    arg_8 = arg1[0x23]
    int32_t* rdx_9 = *rcx_16
    
    if (&rdx_9[1] u> rcx_16[1])
        int32_t* rdx_10 = &arg_8
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_10, zmm1_2)
        else
            (*(*arg2 + 0x150))(arg2, rdx_10, 4)
    else
        arg_8 = *rdx_9
        *rcx_16 += 4
    
    arg1[0x23] = arg_8

int32_t result
int512_t zmm1_3
result, zmm1_3 = sub_140b4e7c0(arg2, &data_1439a9548)

if (result s< 1)
    return result

int64_t* rcx_19 = arg2[1]
arg_8 = arg1[0x18]
int32_t* rdx_11 = *rcx_19

if (&rdx_11[1] u> rcx_19[1])
    int32_t* rdx_12 = &arg_8
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_12, zmm1_3)
    else
        (*(*arg2 + 0x150))(arg2, rdx_12, 4)
else
    arg_8 = *rdx_11
    *rcx_19 += 4

int32_t r8_1 = arg_8

if (r8_1 s> arg1[0x19])
    sub_1405dadb0(&arg1[0x16], r8_1)
    r8_1 = arg_8

int64_t r12_1 = sx.q(arg1[0x18])

if (r8_1 s> r12_1.d)
    arg1[0x18] = r8_1
    int32_t i_1 = r8_1 - r12_1.d
    
    if (r8_1 s> arg1[0x19])
        sub_1405a4cf0(&arg1[0x16])
        r8_1 = arg_8
    
    int32_t* rdx_15 = *(arg1 + 0x58) + (r12_1 << 2)
    
    if (i_1 != 0)
        int32_t i
        
        do
            *rdx_15 &= 0xff000000
            *(rdx_15 + 3) = 0
            rdx_15 = &rdx_15[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
        r8_1 = arg_8
else if (r8_1 s< r12_1.d)
    int32_t rax_27 = r12_1.d
    
    if (rax_27 != r8_1)
        arg1[0x18] = r12_1.d - (rax_27 - r8_1)
        sub_1405dac90(&arg1[0x16])
        r8_1 = arg_8

if (r8_1 s> 0)
    do
        sub_141708de0(arg2, *(arg1 + 0x58) + (sx.q(rbx) << 2), zmm1_3)
        rbx += 1
    while (rbx s< arg_8)

return sub_14152ed20(sub_14152de20(arg2, &arg1[0x1a], zmm1_3), &arg1[0x1e], zmm1_3)
