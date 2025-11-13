// 函数: sub_141c71b10
// 地址: 0x141c71b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xe0) &= 0xfffffffb
int32_t rax = *(arg1 + 0xe0)
*(arg1 + 0x50) = 0

if ((rax.b & 8) != 0 || *(arg1 + 0x88) s<= 0)
    if ((rax.b & 0x40) != 0)
        return rax
    
    return sub_141c69550(arg1)

int32_t rdi_1 = *(arg1 + 0x7c) * *(arg1 + 0x74)
int64_t* i = nullptr
*(arg1 + 0xe0) = rax | 4

do
    uint64_t* rcx = *(i + *(arg1 + 0x28))
    rcx[1].d = 0
    
    if (*(rcx + 0xc) s<= 0xffffffff)
        sub_140775b10(rcx, 0)
    
    int64_t* rsi_1 = *(i + *(arg1 + 0x28))
    int64_t r15_1 = sx.q(rsi_1[1].d)
    int32_t rax_4 = r15_1.d + rdi_1
    rsi_1[1].d = rax_4
    
    if (rax_4 s> *(rsi_1 + 0xc))
        sub_140775270(rsi_1)
    
    memset(*rsi_1 + (r15_1 << 2), 0, sx.q(rdi_1) << 2)
    i = &i[2]
while (i s< 0x20)

int64_t* rcx_3 = *(arg1 + 0x28)
int32_t i_1 = 0
int64_t r11 = *(arg1 + 0x80)
int32_t rbp_2 = 8
int64_t r10_1 = zx.q(rdi_1 * 2) + r11
int64_t r14 = **rcx_3
int64_t rsi_2 = *rcx_3[2]
uint128_t zmm0_1
float zmm1[0x4]

if (rdi_1 != 0)
    if (rdi_1 u>= 0x10)
        uint64_t rax_8 = zx.q(rdi_1 - 1)
        
        if (r14 u> r11 + (rax_8 << 1) || r14 + (rax_8 << 2) u< r11)
            zmm1 = data_14320b220
            int32_t r9_1 = 8
            
            do
                uint64_t i_7 = zx.q(i_1)
                i_1 += 0x10
                zmm0_1 = zx.o(*(r11 + (i_7 << 1)))
                *(r14 + (i_7 << 2)) = _mm_mul_ps(
                    _mm_cvtepi32_ps(_mm_srai_epi32(_mm_unpacklo_epi16(zmm0_1, zmm0_1.q), 0x10)), 
                    zmm1)
                uint64_t rax_10 = zx.q(r9_1 - 4)
                zmm0_1 = zx.o(*(r11 + (rax_10 << 1)))
                *(r14 + (rax_10 << 2)) = _mm_mul_ps(
                    _mm_cvtepi32_ps(_mm_srai_epi32(_mm_unpacklo_epi16(zmm0_1, zmm0_1.q), 0x10)), 
                    zmm1)
                uint64_t rax_11 = zx.q(r9_1)
                zmm0_1 = zx.o(*(r11 + (rax_11 << 1)))
                *(r14 + (rax_11 << 2)) = _mm_mul_ps(
                    _mm_cvtepi32_ps(_mm_srai_epi32(_mm_unpacklo_epi16(zmm0_1, zmm0_1.q), 0x10)), 
                    zmm1)
                uint64_t rax_12 = zx.q(r9_1 + 4)
                r9_1 += 0x10
                zmm0_1 = zx.o(*(r11 + (rax_12 << 1)))
                *(r14 + (rax_12 << 2)) = _mm_mul_ps(
                    _mm_cvtepi32_ps(_mm_srai_epi32(_mm_unpacklo_epi16(zmm0_1, zmm0_1.q), 0x10)), 
                    zmm1)
            while (i_1 u< (rdi_1 & 0xfffffff0))
    
    if (i_1 u< rdi_1)
        if (rdi_1 - i_1 u>= 4)
            uint64_t i_8 = zx.q(i_1)
            void* rcx_5 = r14 + 8 + (i_8 << 2)
            void* rdx_6 = r11 + 4 + (i_8 << 1)
            uint64_t rax_19 = zx.q(((rdi_1 - i_1 - 4) u>> 2) + 1)
            uint64_t i_15 = zx.q(rax_19.d)
            i_1 += (rax_19 << 2).d
            uint64_t i_2
            
            do
                int32_t rax_20 = sx.d(*(rdx_6 - 4))
                rcx_5 += 0x10
                rdx_6 += 8
                zmm0_1.d = _mm_cvtepi32_ps(zx.o(rax_20)).d f* 3.05175781e-05f
                *(rcx_5 - 0x18) = zmm0_1.d
                float temp0_18[0x4] = _mm_cvtepi32_ps(zx.o(sx.d(*(rdx_6 - 0xa))))
                temp0_18[0] = temp0_18[0] * 3.05175781e-05f
                *(rcx_5 - 0x14) = temp0_18[0]
                zmm0_1.d = _mm_cvtepi32_ps(zx.o(sx.d(*(rdx_6 - 8)))).d f* 3.05175781e-05f
                *(rcx_5 - 0x10) = zmm0_1.d
                float temp0_20[0x4] = _mm_cvtepi32_ps(zx.o(sx.d(*(rdx_6 - 6))))
                temp0_20[0] = temp0_20[0] * 3.05175781e-05f
                *(rcx_5 - 0xc) = temp0_20[0]
                i_2 = i_15
                i_15 -= 1
            while (i_2 != 1)
        
        if (i_1 u< rdi_1)
            uint64_t i_9 = zx.q(i_1)
            void* rcx_6 = r14 + (i_9 << 2)
            int16_t* rdx_7 = r11 + (i_9 << 1)
            uint64_t i_13 = zx.q(rdi_1 - i_1)
            uint64_t i_3
            
            do
                int32_t rax_26 = sx.d(*rdx_7)
                rcx_6 += 4
                rdx_7 = &rdx_7[1]
                zmm0_1.d = _mm_cvtepi32_ps(zx.o(rax_26)).d f* 3.05175781e-05f
                *(rcx_6 - 4) = zmm0_1.d
                i_3 = i_13
                i_13 -= 1
            while (i_3 != 1)

int32_t i_4 = 0

if (rdi_1 != 0)
    if (rdi_1 u>= 0x10)
        uint64_t rax_27 = zx.q(rdi_1 - 1)
        
        if (rsi_2 u> r10_1 + (rax_27 << 1) || rsi_2 + (rax_27 << 2) u< r10_1)
            zmm1 = data_14320b220
            
            do
                uint64_t i_10 = zx.q(i_4)
                i_4 += 0x10
                zmm0_1 = zx.o(*(r10_1 + (i_10 << 1)))
                *(rsi_2 + (i_10 << 2)) = _mm_mul_ps(
                    _mm_cvtepi32_ps(_mm_srai_epi32(_mm_unpacklo_epi16(zmm0_1, zmm0_1.q), 0x10)), 
                    zmm1)
                uint64_t rax_29 = zx.q(rbp_2 - 4)
                zmm0_1 = zx.o(*(r10_1 + (rax_29 << 1)))
                *(rsi_2 + (rax_29 << 2)) = _mm_mul_ps(
                    _mm_cvtepi32_ps(_mm_srai_epi32(_mm_unpacklo_epi16(zmm0_1, zmm0_1.q), 0x10)), 
                    zmm1)
                uint64_t rax_30 = zx.q(rbp_2)
                zmm0_1 = zx.o(*(r10_1 + (rax_30 << 1)))
                *(rsi_2 + (rax_30 << 2)) = _mm_mul_ps(
                    _mm_cvtepi32_ps(_mm_srai_epi32(_mm_unpacklo_epi16(zmm0_1, zmm0_1.q), 0x10)), 
                    zmm1)
                uint64_t rax_31 = zx.q(rbp_2 + 4)
                rbp_2 += 0x10
                zmm0_1 = zx.o(*(r10_1 + (rax_31 << 1)))
                *(rsi_2 + (rax_31 << 2)) = _mm_mul_ps(
                    _mm_cvtepi32_ps(_mm_srai_epi32(_mm_unpacklo_epi16(zmm0_1, zmm0_1.q), 0x10)), 
                    zmm1)
            while (i_4 u< (rdi_1 & 0xfffffff0))
    
    if (i_4 u< rdi_1)
        if (rdi_1 - i_4 u>= 4)
            uint64_t i_11 = zx.q(i_4)
            void* rcx_8 = rsi_2 + 8 + (i_11 << 2)
            void* rdx_12 = r10_1 + 4 + (i_11 << 1)
            uint64_t rax_38 = zx.q(((rdi_1 - i_4 - 4) u>> 2) + 1)
            uint64_t i_16 = zx.q(rax_38.d)
            i_4 += (rax_38 << 2).d
            uint64_t i_5
            
            do
                int32_t rax_39 = sx.d(*(rdx_12 - 4))
                rcx_8 += 0x10
                rdx_12 += 8
                zmm0_1.d = _mm_cvtepi32_ps(zx.o(rax_39)).d f* 3.05175781e-05f
                *(rcx_8 - 0x18) = zmm0_1.d
                float temp0_39[0x4] = _mm_cvtepi32_ps(zx.o(sx.d(*(rdx_12 - 0xa))))
                temp0_39[0] = temp0_39[0] * 3.05175781e-05f
                *(rcx_8 - 0x14) = temp0_39[0]
                zmm0_1.d = _mm_cvtepi32_ps(zx.o(sx.d(*(rdx_12 - 8)))).d f* 3.05175781e-05f
                *(rcx_8 - 0x10) = zmm0_1.d
                float temp0_41[0x4] = _mm_cvtepi32_ps(zx.o(sx.d(*(rdx_12 - 6))))
                temp0_41[0] = temp0_41[0] * 3.05175781e-05f
                *(rcx_8 - 0xc) = temp0_41[0]
                i_5 = i_16
                i_16 -= 1
            while (i_5 != 1)
        
        if (i_4 u< rdi_1)
            uint64_t i_12 = zx.q(i_4)
            uint64_t i_14 = zx.q(rdi_1 - i_4)
            void* rcx_9 = rsi_2 + (i_12 << 2)
            int16_t* rdx_13 = r10_1 + (i_12 << 1)
            uint64_t i_6
            
            do
                int32_t rax_43 = sx.d(*rdx_13)
                rcx_9 += 4
                rdx_13 = &rdx_13[1]
                zmm0_1.d = _mm_cvtepi32_ps(zx.o(rax_43)).d f* 3.05175781e-05f
                *(rcx_9 - 4) = zmm0_1.d
                i_6 = i_14
                i_14 -= 1
            while (i_6 != 1)

int64_t* rax_44 = *(arg1 + 0x28)
int64_t* rdi_3 = rax_44[1]
int64_t rbp_3 = *rax_44

if (rdi_3 != 0)
    rdi_3[1].d += 1

*(arg1 + 8) += 1
int64_t* rax_45 = j_sub_140a82f30(0x18)

if (rax_45 != 0)
    *rax_45 = 0
    rax_45[1] = rbp_3
    rax_45[2] = rdi_3
    
    if (rdi_3 != 0)
        rdi_3[1].d += 1
    
    int64_t** rax_46 = *(arg1 + 0x40)
    *(arg1 + 0x40) = rax_45
    *rax_46 = rax_45

if (rdi_3 != 0)
    rdi_3[1].d -= 1
    
    if (rdi_3[1].d == 1)
        (**rdi_3)(rdi_3)
        int32_t rax_49 = *(rdi_3 + 0xc)
        *(rdi_3 + 0xc) -= 1
        
        if (rax_49 == 1)
            (*(*rdi_3 + 8))(rdi_3, 1)

void* rax_51 = *(arg1 + 0x28)
int64_t* rdi_4 = *(rax_51 + 0x18)
int64_t r14_1 = *(rax_51 + 0x10)

if (rdi_4 != 0)
    rdi_4[1].d += 1

*(arg1 + 8) += 1
int64_t* rax_52 = j_sub_140a82f30(0x18)
int64_t* rcx_13 = rax_52

if (rax_52 != 0)
    *rax_52 = 0
    rax_52[1] = r14_1
    rax_52[2] = rdi_4
    
    if (rdi_4 != 0)
        rdi_4[1].d += 1
    
    rax_52 = *(arg1 + 0x40)
    *(arg1 + 0x40) = rcx_13
    *rax_52 = rcx_13

if (rdi_4 != 0)
    rax_52 = zx.q(rdi_4[1].d)
    rdi_4[1].d -= 1
    
    if (rax_52.d == 1)
        rax_52 = (**rdi_4)(rdi_4)
        int32_t rbp_4 = *(rdi_4 + 0xc)
        *(rdi_4 + 0xc) -= 1
        
        if (rbp_4 == 1)
            rax_52 = (*(*rdi_4 + 8))(rdi_4, zx.q(rbp_4))

*(arg1 + 0x50) = 2
return rax_52
