// 函数: sub_141752d70
// 地址: 0x141752d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x1d8))(arg2, &data_1439a9538)
int32_t rax_1
int512_t zmm1
rax_1, zmm1 = sub_140b4e7c0(arg2, &data_1439a9538)
int128_t* result_1
int512_t zmm1_1

if (rax_1 s>= 5)
    zmm1_1 = sub_14152ebb0(arg2, arg1 + 0x10, zmm1)
    int64_t* rcx_8 = arg2[1]
    int32_t* r8_1 = *rcx_8
    
    if (&r8_1[1] u<= rcx_8[1])
        *(arg1 + 0x90) = *r8_1
        int64_t* rax_11 = arg2[1]
        *rax_11 += 4
    else if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, arg1 + 0x90, zmm1_1)
    else
        (*(*arg2 + 0x150))(arg2, arg1 + 0x90, 4)
else
    result_1 = nullptr
    int32_t var_80_1 = 0
    int128_t zmm6_1
    zmm1_1, zmm6_1 = sub_14152f060(arg2, &result_1, zmm1)
    int64_t rsi_1 = sx.q(var_80_1)
    
    if (rsi_1.d s> *(arg1 + 0x1c))
        sub_1405a52a0(arg1 + 0x10, rsi_1.d)
    
    int128_t* result_3 = result_1
    int128_t* result_5 = result_3
    void* r12_1 = result_3 + rsi_1 * 0x28
    
    if (result_3 != r12_1)
        int128_t var_38_1 = zmm6_1
        int128_t zmm7
        int128_t var_48_1 = zmm7
        uint128_t zmm8
        uint128_t var_58_1 = zmm8
        int32_t var_94_1 = 0x7f7fffff
        int32_t var_90_1 = 0x7f7fffff
        result_1.d = 0xff7fffff
        result_1:4.d = 0xff7fffff
        uint128_t result_4 = zx.o(result_1)
        var_80_1 = 0xff7fffff
        int32_t rdx_2 = -0x800001
        
        do
            int64_t r14_1 = sx.q(*(arg1 + 0x18))
            zmm6_1 = *result_5
            zmm7 = result_5[1]
            int32_t rax_2 = (r14_1 + 1).d
            zmm8 = zx.o(result_5[2].q)
            *(arg1 + 0x18) = rax_2
            
            if (rax_2 s> *(arg1 + 0x1c))
                sub_1405c4fe0(arg1 + 0x10)
                rdx_2 = var_80_1
            
            result_5 += 0x28
            int128_t* rax_5 = (r14_1 << 6) + *(arg1 + 0x10)
            *rax_5 = zmm6_1
            rax_5[1] = zmm7
            rax_5[2].q = zmm8.q
            *(rax_5 + 0x28) = result_4.q
            *(rax_5 + 0x34) = 0x7f7fffff.q
            rax_5[3].d = rdx_2
            *(rax_5 + 0x3c) = 0x7f7fffff
        while (result_5 != r12_1)
    
    *(arg1 + 0x90) = 0x47c35000
    
    if (result_3 != 0)
        zmm1_1 = sub_140a74f90(result_3)

int64_t i_11 = 3
void* rdi = arg1 + 0x20
int64_t i_6 = 3
int64_t i

do
    int64_t* rcx_7 = arg2[1]
    int32_t* rdx_4 = *rcx_7
    
    if (&rdx_4[1] u<= rcx_7[1])
        *rdi = *rdx_4
        int64_t* rax_8 = arg2[1]
        *rax_8 += 4
    else if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdi, zmm1_1)
    else
        (*(*arg2 + 0x150))(arg2, rdi, 4)
    
    rdi += 4
    i = i_6
    i_6 -= 1
while (i != 1)
void* rdi_1 = arg1 + 0x2c
int64_t i_7 = 3
int64_t i_1

do
    int64_t* rcx_11 = arg2[1]
    int32_t* rdx_8 = *rcx_11
    
    if (&rdx_8[1] u<= rcx_11[1])
        *rdi_1 = *rdx_8
        int64_t* rax_16 = arg2[1]
        *rax_16 += 4
    else if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdi_1, zmm1_1)
    else
        (*(*arg2 + 0x150))(arg2, rdi_1, 4)
    
    rdi_1 += 4
    i_1 = i_7
    i_7 -= 1
while (i_1 != 1)
void* rdi_2 = arg1 + 0x38
int64_t i_8 = 3
int64_t i_2

do
    int64_t* rcx_13 = arg2[1]
    int32_t* rdx_10 = *rcx_13
    
    if (&rdx_10[1] u<= rcx_13[1])
        *rdi_2 = *rdx_10
        int64_t* rax_20 = arg2[1]
        *rax_20 += 4
    else if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdi_2, zmm1_1)
    else
        (*(*arg2 + 0x150))(arg2, rdi_2, 4)
    
    rdi_2 += 4
    i_2 = i_8
    i_8 -= 1
while (i_2 != 1)
void* rdi_3 = arg1 + 0x44
int64_t i_9 = 3
int64_t i_3

do
    int64_t* rcx_15 = arg2[1]
    int32_t* rdx_12 = *rcx_15
    
    if (&rdx_12[1] u<= rcx_15[1])
        *rdi_3 = *rdx_12
        int64_t* rax_24 = arg2[1]
        *rax_24 += 4
    else if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdi_3, zmm1_1)
    else
        (*(*arg2 + 0x150))(arg2, rdi_3, 4)
    
    rdi_3 += 4
    i_3 = i_9
    i_9 -= 1
while (i_3 != 1)
void* rdi_4 = arg1 + 0x50
int64_t i_4

do
    int64_t* rcx_17 = arg2[1]
    int32_t* rdx_14 = *rcx_17
    
    if (&rdx_14[1] u<= rcx_17[1])
        *rdi_4 = *rdx_14
        int64_t* rax_28 = arg2[1]
        *rax_28 += 4
    else if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdi_4, zmm1_1)
    else
        (*(*arg2 + 0x150))(arg2, rdi_4, 4)
    
    rdi_4 += 4
    i_4 = i_11
    i_11 -= 1
while (i_4 != 1)
int64_t* rcx_19 = arg2[1]
int32_t arg_8 = *(arg1 + 0x68)
int32_t* rdx_16 = *rcx_19

if (&rdx_16[1] u> rcx_19[1])
    int32_t* rdx_17 = &arg_8
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_17, zmm1_1)
    else
        (*(*arg2 + 0x150))(arg2, rdx_17, 4)
else
    arg_8 = *rdx_16
    *rcx_19 += 4

int32_t rax_34 = arg_8

if (rax_34 s> *(arg1 + 0x6c))
    sub_1405a5410(arg1 + 0x60, rax_34)
    rax_34 = arg_8

int64_t rdi_5 = sx.q(*(arg1 + 0x68))

if (rax_34 s> rdi_5.d)
    *(arg1 + 0x68) = rax_34
    
    if (rax_34 s> *(arg1 + 0x6c))
        sub_1405a4f90(arg1 + 0x60)
    
    memset((rdi_5 << 4) + *(arg1 + 0x60), 0, sx.q(rax_34 - rdi_5.d) << 4)
    rax_34 = arg_8
else if (rax_34 s< rdi_5.d)
    zmm1_1 = sub_140838580(arg1 + 0x60, rax_34, rdi_5.d - rax_34, 1)
    rax_34 = arg_8

int32_t rdi_7 = 0

if (rax_34 s> 0)
    do
        zmm1_1 = sub_14152e7d0(arg2, (sx.q(rdi_7) << 4) + *(arg1 + 0x60), zmm1_1)
        rdi_7 += 1
    while (rdi_7 s< arg_8)

int512_t zmm1_2 = sub_14152e7d0(arg2, arg1 + 0x70, zmm1_1)
int64_t* rcx_29 = arg2[1]
int32_t* rdx_25 = *rcx_29
int128_t* result

if (&rdx_25[1] u> rcx_29[1])
    int32_t rax_36
    rax_36.b = *(arg1 + 0x94) != 0
    arg_8 = rax_36
    (*(*arg2 + 0x150))(arg2, &arg_8, 4)
    result.b = arg_8 != 0
    *(arg1 + 0x94) = result.b
else
    void* rax_35
    rax_35.b = *rdx_25 != 0
    *(arg1 + 0x94) = rax_35.b
    result = arg2[1]
    *result += 4

if ((arg2[5].b & 1) != 0)
    result_1 = nullptr
    int32_t var_80_2 = 0
    int512_t zmm1_3 = sub_14152f060(arg2, &result_1, zmm1_2)
    result = result_1
    int128_t* result_2 = result
    void* r13_1 = result + sx.q(var_80_2) * 0x28
    
    if (result != r13_1)
        do
            int64_t r12_2 = sx.q(result_2[1].d)
            int64_t r14_4 = sx.q(*(arg1 + 0x88))
            
            if (r12_2.d s>= r14_4.d)
                int32_t i_10 = r12_2.d - r14_4.d + 1
                int32_t rax_39 = i_10 + r14_4.d
                *(arg1 + 0x88) = rax_39
                
                if (rax_39 s> *(arg1 + 0x8c))
                    sub_140adefe0(arg1 + 0x80)
                
                if (i_10 != 0)
                    char* rax_42 = *(arg1 + 0x80) + r14_4 * 0x24 + 0x20
                    int32_t i_5
                    
                    do
                        *rax_42 = 0
                        rax_42 = &rax_42[0x24]
                        i_5 = i_10
                        i_10 -= 1
                    while (i_5 != 1)
            
            int64_t rdx_29 = r12_2 * 9
            *(*(arg1 + 0x80) + (rdx_29 << 2) + 0x20) = 1
            sub_14152e0d0(arg2, *(arg1 + 0x80) + (rdx_29 << 2), zmm1_3)
            result_2 += 0x28
        while (result_2 != r13_1)
        
        result = result_1
    
    if (result != 0)
        return sub_140a74f90(result)

return result
