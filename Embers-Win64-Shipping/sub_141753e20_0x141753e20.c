// 函数: sub_141753e20
// 地址: 0x141753e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_8
(*(*arg1 + 0xa0))(arg1, &arg_8)
sub_1417513e0(&arg1[2], arg2, sub_141755af0(arg1, arg2))
(*(*arg2 + 0x1d8))(arg2, &data_1439a9538)
int32_t rax_2
int512_t zmm1_1
rax_2, zmm1_1 = sub_140b4e7c0(arg2, &data_1439a9538)
int32_t zmm6 = 0x3f800000
int96_t var_3c
int32_t result
uint128_t zmm0_1
int64_t zmm2_1
uint128_t zmm3

if (rax_2 s< 7)
    zmm0_1 = *(arg1 + 0x9c)
    zmm1_1.o = *(arg1 + 0xa4)
    zmm3 = arg1[0x13].d
    int32_t rcx_13 = zx.d(*(arg1 + 0x46)) - 1
    zmm2_1 = arg1[0x15].d
    result = zx.d(*(arg1 + 0x44)) - 1
    _mm_shuffle_ps(zmm3, zmm3, 0xe1)
    zmm3.d = zmm0_1.d
    _mm_shuffle_ps(zmm3, zmm3, 0xc6)
    zmm3.d = zmm1_1.d
    _mm_shuffle_ps(zmm3, zmm3, 0x27)
    zmm1_1.o = zx.o(result)
    zmm3.d = zmm2_1.d
    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x39)
    *(arg1 + 0x70) = zmm3
    arg1[0xa] = 0
    zmm1_1.o = _mm_cvtepi32_ps(zmm1_1.o)
    zmm0_1 = _mm_cvtepi32_ps(zx.o(rcx_13))
    *(arg1 + 0x5c) = zmm1_1.d
    arg1[0xb].d = zmm0_1.d
    arg1[0xc].d = rcx_13
    *(arg1 + 0x64) = result
    arg1[0xd].d = 0x3f800000
    *(arg1 + 0x6c) = 0x3f800000
    var_3c = zmm3.12
else
    sub_14152df70(arg2, &arg1[0xa], zmm1_1)
    sub_14152df70(arg2, &arg1[0xb], zmm1_1)
    void* rdi_1 = &arg1[0xc]
    int64_t i_1 = 2
    int64_t i
    
    do
        int64_t* rcx_6 = arg2[1]
        int32_t* rdx_5 = *rcx_6
        
        if (&rdx_5[1] u<= rcx_6[1])
            *rdi_1 = *rdx_5
            int64_t* rax_5 = arg2[1]
            *rax_5 += 4
        else if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdi_1, zmm1_1)
        else
            (*(*arg2 + 0x150))(arg2, rdi_1, 4)
        
        rdi_1 += 4
        i = i_1
        i_1 -= 1
    while (i != 1)
    sub_14152df70(arg2, &arg1[0xd], zmm1_1)
    sub_14152df70(arg2, &arg1[0xe], zmm1_1)
    sub_14152df70(arg2, &arg1[0xf], zmm1_1)
    result, zmm1_1, zmm6 = sub_1417558e0(arg2, &arg1[0x10])

if ((arg2[5].b & 1) != 0)
    uint32_t rax_8 = zx.d(*(arg1 + 0x44))
    int32_t rcx_15 = zx.d(*(arg1 + 0x46)) - 1
    arg1[0xa] = 0
    zmm1_1.o = zx.o(rax_8 - 1)
    arg1[0xb].d = _mm_cvtepi32_ps(zx.o(rcx_15)).d
    zmm1_1.o = _mm_cvtepi32_ps(zmm1_1.o)
    *(arg1 + 0x5c) = zmm1_1.d
    *(arg1 + 0x64) = rax_8 - 1
    arg1[0xc].d = rcx_15
    arg1[0xd].d = zmm6
    *(arg1 + 0x6c) = zmm6
    zmm3 = arg1[6].d
    zmm1_1.o = arg1[7].d
    uint128_t zmm5_1 = zmm3
    zmm2_1 = *(arg1 + 0x34)
    zmm0_1.d = zmm1_1.o.d f* *(arg1 + 0x94)
    int64_t zmm4_1 = zmm2_1
    zmm3.d = zmm3.d f* arg1[0x10].d
    zmm2_1.d = zmm2_1.d f* *(arg1 + 0x84)
    zmm5_1.d = zmm5_1.d f* *(arg1 + 0x8c)
    zmm1_1.d = zmm1_1.d f* arg1[0x11].d
    zmm4_1.d = zmm4_1.d f* arg1[0x12].d
    var_3c:8.d = zmm0_1.d
    arg1[0x13] = (_mm_unpacklo_ps(zmm3, zmm2_1)).q
    zmm0_1 = _mm_unpacklo_ps(zmm5_1, zmm4_1)
    arg1[0x14].d = zmm1_1.d
    result = var_3c:8.d
    *(arg1 + 0xa4) = zmm0_1.q
    *(arg1 + 0xac) = result

return result
