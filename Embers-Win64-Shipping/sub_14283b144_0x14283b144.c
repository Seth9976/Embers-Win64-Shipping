// 函数: sub_14283b144
// 地址: 0x14283b144
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t zmm5 = 0x3e45798ee2308c3a
int128_t* r11_1 = arg2 - arg3
int128_t zmm6
int128_t var_18 = zmm6
int32_t* r9 = arg4 - arg3
int64_t i_1 = 0x40
double result[0x2]
int64_t i

do
    double result_2[0x2] = *(r11_1 + arg3)
    void* rdx = arg1 + 0x28
    result_2[0].d = result_2[0].d f+ result_2[0].d
    result = zx.o(0)
    double result_4[0x2] = zx.o(0)
    int64_t j_2 = 8
    double result_3[0x2] = _mm_cvtps_pd(result_2[0])
    result_2 = *(arg1 + 0x18)
    result_3[0] = result_3[0] f+ zmm5
    result_2 = _mm_cvtps_pd(result_2[0])
    result_3[0] = result_3[0] * result_2[0]
    zmm6 = _mm_cvtpd_ps(result_3)
    double result_1[0x2]
    int64_t j
    
    do
        int64_t rcx = sx.q(*(rdx + 0x14))
        int64_t rax_1 = *(rdx + 8)
        result_2 = *rdx
        result_2[0].d = result_2[0].d f* *(rdx - 4)
        result_1 = *(rax_1 + (rcx << 2))
        result_4[0].d = result_4[0].d f+ result_1[0].d
        result_1[0].d = result_1[0].d f* *(rdx + 4)
        result_1[0].d = result_1[0].d f+ result_2[0].d
        *(rdx - 4) = result_1[0].d
        result_1[0].d = result_1[0].d f* *(rdx - 8)
        result_1[0].d = result_1[0].d f+ zmm6.d
        *(rax_1 + (rcx << 2)) = result_1[0].d
        *(rdx + 0x14) += 1
        int32_t rax_2 = *(rdx + 0x14)
        int32_t rcx_1 = rax_2
        int64_t rax_3 = *(rdx + 0x108)
        result_2 = *(rdx + 0x100)
        
        if (rax_2 s>= *(rdx + 0x10))
            rcx_1 = 0
        
        result_2[0].d = result_2[0].d f* *(rdx + 0xfc)
        *(rdx + 0x14) = rcx_1
        int64_t rcx_2 = sx.q(*(rdx + 0x114))
        result_1 = *(rax_3 + (rcx_2 << 2))
        result[0].d = result[0].d f+ result_1[0].d
        result_1[0].d = result_1[0].d f* *(rdx + 0x104)
        result_1[0].d = result_1[0].d f+ result_2[0].d
        *(rdx + 0xfc) = result_1[0].d
        result_1[0].d = result_1[0].d f* *(rdx + 0xf8)
        result_1[0].d = result_1[0].d f+ zmm6.d
        *(rax_3 + (rcx_2 << 2)) = result_1[0].d
        *(rdx + 0x114) += 1
        int32_t rax_4 = *(rdx + 0x114)
        int32_t rcx_3 = rax_4
        
        if (rax_4 s>= *(rdx + 0x110))
            rcx_3 = 0
        
        *(rdx + 0x114) = rcx_3
        rdx += 0x20
        j = j_2
        j_2 -= 1
    while (j != 1)
    void* rdx_1 = arg1 + 0x234
    int64_t j_3 = 4
    int64_t j_1
    
    do
        int64_t rcx_4 = sx.q(*rdx_1)
        int64_t rax_5 = *(rdx_1 - 0xc)
        result_2 = *(rax_5 + (rcx_4 << 2))
        result_3 = result_2
        result_2[0].d = result_2[0].d f* *(rdx_1 - 0x14)
        result_3[0].d = result_3[0].d f- result_4[0].d
        result_2[0].d = result_2[0].d f+ result_4[0].d
        result_4 = result_3
        *(rax_5 + (rcx_4 << 2)) = result_2[0].d
        *rdx_1 += 1
        int32_t rax_6 = *rdx_1
        int32_t rcx_5 = rax_6
        int64_t rax_7 = *(rdx_1 + 0x54)
        
        if (rax_6 s>= *(rdx_1 - 4))
            rcx_5 = 0
        
        *rdx_1 = rcx_5
        int64_t rcx_6 = sx.q(*(rdx_1 + 0x60))
        result_2 = *(rax_7 + (rcx_6 << 2))
        result_1 = result_2
        result_2[0].d = result_2[0].d f* *(rdx_1 + 0x4c)
        result_1[0].d = result_1[0].d f- result[0].d
        result_2[0].d = result_2[0].d f+ result[0].d
        result = result_1
        *(rax_7 + (rcx_6 << 2)) = result_2[0].d
        *(rdx_1 + 0x60) += 1
        int32_t rax_8 = *(rdx_1 + 0x60)
        int32_t rcx_7 = rax_8
        
        if (rax_8 s>= *(rdx_1 + 0x5c))
            rcx_7 = 0
        
        *(rdx_1 + 0x60) = rcx_7
        rdx_1 += 0x18
        j_1 = j_3
        j_3 -= 1
    while (j_1 != 1)
    result_2 = _mm_cvtps_pd(result_3[0])
    result_3 = _mm_cvtps_pd(result_1[0])
    result_2[0] = result_2[0] f- zmm5
    result_3[0] = result_3[0] f- zmm5
    result = _mm_cvtpd_ps(result_2)
    result_4 = _mm_cvtpd_ps(result_3)
    result[0].d = result[0].d f* *(arg1 + 0xc)
    result_4[0].d = result_4[0].d f* *(arg1 + 0x10)
    result_4[0].d = result_4[0].d f+ result[0].d
    result_4[0].d = result_4[0].d f+ *arg3
    *arg3 = result_4[0].d
    result_4[0].d = result_4[0].d f* *(arg1 + 0xc)
    result[0].d = result[0].d f* *(arg1 + 0x10)
    result_4[0].d = result_4[0].d f+ result[0].d
    result_4[0].d = result_4[0].d f+ *(r9 + arg3)
    *(r9 + arg3) = result_4[0].d
    arg3 = &arg3[1]
    i = i_1
    i_1 -= 1
while (i != 1)
return result
