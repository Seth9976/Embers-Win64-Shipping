// 函数: sub_141dfdbc0
// 地址: 0x141dfdbc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *(arg3 + 0x10)
char rbp = *(arg3 + 4)
int64_t rcx = sx.q(*(r10 + 0x30) * arg4)
int64_t rax_2 = *(r10 + 0x20)
int64_t rsi = sx.q(*(rax_2 + (rcx << 2) + 4))
int32_t* rbx_1 = sx.q(*(rax_2 + (rcx << 2))) + *(r10 + 0x38)
int32_t r10_1 = *(r10 + 8)
uint64_t r9 = zx.q((rsi - 1).d)
void* rcx_4 = (sx.q((rsi << 2).d) + 3 + rbx_1) & 0xfffffffffffffffc
uint128_t zmm0

if (rsi.d s>= 2)
    zmm0 = *(arg3 + 0x1c)

uint64_t i_8
uint128_t zmm12

if (rsi.d s< 2 || zmm0.d f<= 0f)
    i_8 = 0
    r9 = 0
    zmm12 = zx.o(0)
else if (zmm0.d f< 1f)
    int32_t rdx = r10_1 - 2
    zmm12 = _mm_cvtepi32_ps(zx.o(r10_1 - 1))
    float temp0_2[0x4] = _mm_cvtepi32_ps(zx.o(r9.d))
    zmm12.d = zmm12.d f* zmm0.d
    temp0_2[0] = temp0_2[0] f* zmm0.d
    int32_t rax_5 = int.d(zmm12.d)
    
    if (rax_5 s< 0)
        rdx = 0
    else if (rax_5 s< rdx)
        rdx = rax_5
    
    int32_t rax_6 = int.d(temp0_2.d)
    int32_t r11_1
    
    if (rax_6 s>= 0)
        r11_1 = r9.d
        
        if (rax_6 s< r9.d)
            r11_1 = rax_6
    else
        r11_1 = 0
    
    int64_t rax_7 = sx.q(r11_1)
    uint32_t rdx_1
    uint32_t r8
    
    if (r10_1 s<= 0xff)
        if (zx.d(*(rax_7 + rcx_4)) s> rdx)
            int32_t i_7 = r11_1 - 1
            i_8 = 0
            void* i = sx.q(i_7)
            
            if (i_7 s> 0)
                do
                    if (zx.d(*(i + rcx_4)) s<= rdx)
                        i_8 = zx.q(i_7)
                        break
                    
                    i_7 -= 1
                    i -= 1
                while (i s> 0)
        else
            int32_t i_6 = r11_1 + 1
            void* i_1 = sx.q(i_6)
            i_8 = zx.q(r9.d)
            
            for (; i_1 s<= rsi - 1; i_1 += 1)
                if (zx.d(*(i_1 + rcx_4)) s> rdx)
                    i_8 = zx.q(i_6 - 1)
                    break
                
                i_6 += 1
        
        r8 = zx.d(*(sx.q(i_8.d) + rcx_4))
        int32_t rax_18 = (i_8 + 1).d
        
        if (rax_18 s<= r9.d)
            r9 = zx.q(rax_18)
        
        rdx_1 = zx.d(*(sx.q(r9.d) + rcx_4))
    else
        i_8 = sx.q(r9.d)
        
        if (zx.d(*(rcx_4 + (rax_7 << 1))) s> rdx)
            int32_t i_5 = r11_1 - 1
            i_8 = 0
            int64_t i_2 = sx.q(i_5)
            
            if (i_5 s> 0)
                do
                    if (zx.d(*(rcx_4 + (i_2 << 1))) s<= rdx)
                        i_8 = zx.q(i_5)
                        break
                    
                    i_5 -= 1
                    i_2 -= 1
                while (i_2 s> 0)
        else
            int32_t i_4 = r11_1 + 1
            
            for (int64_t i_3 = sx.q(i_4); i_3 s<= i_8; i_3 += 1)
                if (zx.d(*(rcx_4 + (i_3 << 1))) s> rdx)
                    i_8 = zx.q(i_4 - 1)
                    break
                
                i_4 += 1
        
        r8 = zx.d(*(rcx_4 + (sx.q(i_8.d) << 1)))
        int32_t rax_12 = (i_8 + 1).d
        
        if (rax_12 s<= r9.d)
            r9 = zx.q(rax_12)
        
        rdx_1 = zx.d(*(rcx_4 + (sx.q(r9.d) << 1)))
    
    uint32_t rdx_2 = rdx_1 - r8
    
    if (rbp != 1)
        uint32_t rax_20 = 1
        zmm0 = _mm_cvtepi32_ps(zx.o(r8))
        
        if (rdx_2 s>= 1)
            rax_20 = rdx_2
        
        zmm12.d = zmm12.d f- zmm0.d
        zmm12.d = zmm12.d f/ _mm_cvtepi32_ps(zx.o(rax_20)).d
    else
        zmm12 = zx.o(0)
else
    i_8 = zx.q(r9.d)
    zmm12 = zx.o(0)

int64_t r8_1 = 0x18

if (rsi.d s<= 1)
    r8_1 = 0

float zmm2[0x4] = zx.o(0)
int32_t rcx_7 = *(sx.q((i_8 << 2).d) + r8_1 + rbx_1)
int32_t result
float zmm3[0x4]

if (i_8.d == r9.d)
    zmm3 = zx.o(0)
    zmm3[0] = float.s((rcx_7 & 0x3ff) - 0x1ff)
    result = (rcx_7 u>> 0xa & 0x7ff) - 0x3ff
    zmm3[0] = zmm3[0] * 0.00195694715f
    zmm2[0] = float.s(result)
    zmm3[0] = zmm3[0] f* rbx_1[3]
    zmm2[0] = zmm2[0] * 0.000977517106f
    zmm3[0] = zmm3[0] f+ *rbx_1
    zmm0.d = float.s((rcx_7 u>> 0x15) - 0x3ff)
    zmm2[0] = zmm2[0] f* rbx_1[4]
    zmm0.d = zmm0.d f* 0.000977517106f
    zmm2[0] = zmm2[0] f+ rbx_1[1]
    zmm0.d = zmm0.d f* rbx_1[5]
    zmm0.d = zmm0.d f+ rbx_1[2]
else
    zmm3 = zx.o(0)
    zmm2[0] = float.s((rcx_7 & 0x3ff) - 0x1ff)
    zmm2[0] = zmm2[0] * 0.00195694715f
    zmm2[0] = zmm2[0] f* rbx_1[3]
    int128_t zmm10
    zmm10.d = float.s((rcx_7 u>> 0x15) - 0x3ff)
    int32_t rcx_10 = *(sx.q((r9 << 2).d) + r8_1 + rbx_1)
    zmm2[0] = zmm2[0] f+ *rbx_1
    zmm10.d = zmm10.d f* 0.000977517106f
    zmm3[0] = float.s((rcx_10 & 0x3ff) - 0x1ff)
    result = (rcx_10 u>> 0xa & 0x7ff) - 0x3ff
    zmm3[0] = zmm3[0] * 0.00195694715f
    zmm10.d = zmm10.d f* rbx_1[5]
    zmm3[0] = zmm3[0] f* rbx_1[3]
    zmm10.d = zmm10.d f+ rbx_1[2]
    int32_t zmm5 = float.s((rcx_7 u>> 0xa & 0x7ff) - 0x3ff) f* 0.000977517106f f* rbx_1[4]
    zmm3[0] = zmm3[0] f+ *rbx_1
    zmm0.d = float.s((rcx_10 u>> 0x15) - 0x3ff)
    zmm5 = zmm5 f+ rbx_1[1]
    zmm3[0] = zmm3[0] - zmm2[0]
    zmm0.d = zmm0.d f* 0.000977517106f
    zmm0.d = zmm0.d f* rbx_1[5]
    zmm3[0] = zmm3[0] f* zmm12.d
    zmm0.d = zmm0.d f+ rbx_1[2]
    zmm3[0] = zmm3[0] + zmm2[0]
    zmm2 = zx.o(0)
    zmm2[0] = float.s(result)
    zmm0.d = zmm0.d f- zmm10.d
    zmm2[0] = zmm2[0] * 0.000977517106f
    zmm2[0] = zmm2[0] f* rbx_1[4]
    zmm0.d = zmm0.d f* zmm12.d
    zmm2[0] = zmm2[0] f+ rbx_1[1]
    zmm0.d = zmm0.d f+ zmm10.d
    zmm2[0] = zmm2[0] f- zmm5
    zmm2[0] = zmm2[0] f* zmm12.d
    zmm2[0] = zmm2[0] f+ zmm5

float temp0_5[0x4] = _mm_unpacklo_ps(zmm2, 0)
*(arg2 + 0x20) = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0.q), temp0_5[0].q)
return result
