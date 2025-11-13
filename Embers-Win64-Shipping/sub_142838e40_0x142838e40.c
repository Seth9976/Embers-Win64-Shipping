// 函数: sub_142838e40
// 地址: 0x142838e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
uint128_t zmm7
uint128_t var_28 = zmm7
double zmm6[0x2] = zx.o(0)
int128_t zmm8 = zx.o(0)
int128_t zmm9
int128_t var_48 = zmm9
int64_t zmm1

if (*(arg1 + 0xd90) s> 0)
    void* rbx_1 = arg1 + 0x792
    
    do
        if (*(rbx_1 - 2) == 0x30 && ((*rbx_1 & 0x10) != 0 || (*(rbx_1 + 2) & 0x10) != 0))
            uint128_t zmm0_1
            zmm0_1, zmm6, zmm8, zmm9 = sub_142837e50(rbx_1 - 2, *(arg1 + 8), arg1)
            zmm1.d = fconvert.s(fabs(*(rbx_1 + 6))[0])
            double zmm0[0x2]
            
            if (*(rbx_1 - 1) == 0xe || (*rbx_1 & 2) != 0 || (*(rbx_1 + 2) & 2) != 0
                    || zmm9.q f> *(rbx_1 + 6))
                double temp0_1[0x2] = _mm_cvtps_pd(zmm1)
                temp0_1[0] = temp0_1[0] * -1.0
                zmm0 = _mm_cvtpd_ps(temp0_1)
            else
                zmm0 = zmm6
            
            if (not(zmm0_1.d f<= zmm0[0].d))
                zmm7.d = zmm0_1.d f- zmm0[0].d
                zmm8.d = zmm8.d f+ zmm7.d
        
        i += 1
        rbx_1 += 0x18
    while (i s< *(arg1 + 0xd90))

zmm1.d = (*(arg1 + 0xdd4)).d f- zmm8.d
return _mm_max_ss(zmm6[0].d, zmm1.d)
