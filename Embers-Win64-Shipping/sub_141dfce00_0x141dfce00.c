// 函数: sub_141dfce00
// 地址: 0x141dfce00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *(arg3 + 0x10)
int128_t zmm13
int128_t var_48 = zmm13
int64_t rcx = sx.q(*(r10 + 0x30) * arg4)
int64_t rax_2 = *(r10 + 0x20)
int32_t* r9_1 = sx.q(*(rax_2 + (rcx << 2))) + *(r10 + 0x38)
int32_t rbx = *(rax_2 + (rcx << 2) + 4)
uint64_t rcx_1
uint64_t rdx
uint128_t zmm0
float zmm2[0x4]
uint128_t zmm12

if (rbx s>= 2)
    zmm0 = *(arg3 + 0x1c)
    
    if (zmm0.d f> 0f)
        rcx_1 = zx.q(rbx - 1)
        
        if (zmm0.d f< 1f)
            zmm12.d = _mm_cvtepi32_ps(zx.o(rcx_1.d)).d f* zmm0.d
            zmm2 = zmm12
            int32_t rdx_1 = int.d(zmm2[0])
            
            if (rdx_1 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rdx_1)).d f== zmm2[0]))
                zmm2 = _mm_cvtepi32_ps(zx.o(rdx_1
                    - (_mm_movemask_ps(_mm_unpacklo_ps(zmm2, zmm2[0].q)) & 1)))
            
            rdx = zx.q(rcx_1.d)
            int32_t rax_5 = int.d(zmm2.d)
            
            if (rax_5 s<= rcx_1.d)
                rdx = zx.q(rax_5)
            
            if (*(arg3 + 4) != 1)
                zmm12.d = zmm12.d f- zmm2[0]
            else
                zmm12 = zx.o(0)
            
            int32_t rax_6 = (rdx + 1).d
            
            if (rax_6 s<= rcx_1.d)
                rcx_1 = zx.q(rax_6)
        else
            rdx = zx.q(rcx_1.d)
            zmm12 = zx.o(0)
    else
        rdx = 0
        rcx_1 = 0
        zmm12 = zx.o(0)
else
    zmm12 = zx.o(0)
    rdx = 0
    rcx_1 = 0

int64_t r10_1 = 0x18

if (rbx s<= 1)
    r10_1 = 0

zmm2 = zx.o(0)
int32_t* r8_1 = sx.q((rdx << 2).d) + r10_1
int32_t result
float zmm3[0x4]

if (rdx.d == rcx_1.d)
    int32_t rcx_8 = *(r8_1 + r9_1)
    zmm3 = zx.o(0)
    zmm3[0] = float.s((rcx_8 & 0x3ff) - 0x1ff)
    result = (rcx_8 u>> 0xa & 0x7ff) - 0x3ff
    zmm3[0] = zmm3[0] * 0.00195694715f
    zmm2[0] = float.s(result)
    zmm3[0] = zmm3[0] f* r9_1[3]
    zmm2[0] = zmm2[0] * 0.000977517106f
    zmm3[0] = zmm3[0] f+ *r9_1
    zmm0.d = float.s((rcx_8 u>> 0x15) - 0x3ff)
    zmm2[0] = zmm2[0] f* r9_1[4]
    zmm0.d = zmm0.d f* 0.000977517106f
    zmm2[0] = zmm2[0] f+ r9_1[1]
    zmm0.d = zmm0.d f* r9_1[5]
    zmm0.d = zmm0.d f+ r9_1[2]
else
    int32_t rcx_2 = *(r8_1 + r9_1)
    zmm3 = zx.o(0)
    zmm2[0] = float.s((rcx_2 & 0x3ff) - 0x1ff)
    zmm2[0] = zmm2[0] * 0.00195694715f
    zmm2[0] = zmm2[0] f* r9_1[3]
    int128_t zmm10
    zmm10.d = float.s((rcx_2 u>> 0x15) - 0x3ff)
    int32_t rcx_5 = *(sx.q((rcx_1 << 2).d) + r10_1 + r9_1)
    zmm2[0] = zmm2[0] f+ *r9_1
    zmm10.d = zmm10.d f* 0.000977517106f
    zmm3[0] = float.s((rcx_5 & 0x3ff) - 0x1ff)
    result = (rcx_5 u>> 0xa & 0x7ff) - 0x3ff
    zmm3[0] = zmm3[0] * 0.00195694715f
    zmm10.d = zmm10.d f* r9_1[5]
    zmm3[0] = zmm3[0] f* r9_1[3]
    zmm10.d = zmm10.d f+ r9_1[2]
    int32_t zmm5 = float.s((rcx_2 u>> 0xa & 0x7ff) - 0x3ff) f* 0.000977517106f f* r9_1[4]
    zmm3[0] = zmm3[0] f+ *r9_1
    zmm0.d = float.s((rcx_5 u>> 0x15) - 0x3ff)
    zmm5 = zmm5 f+ r9_1[1]
    zmm3[0] = zmm3[0] - zmm2[0]
    zmm0.d = zmm0.d f* 0.000977517106f
    zmm0.d = zmm0.d f* r9_1[5]
    zmm3[0] = zmm3[0] f* zmm12.d
    zmm0.d = zmm0.d f+ r9_1[2]
    zmm3[0] = zmm3[0] + zmm2[0]
    zmm2 = zx.o(0)
    zmm2[0] = float.s(result)
    zmm0.d = zmm0.d f- zmm10.d
    zmm2[0] = zmm2[0] * 0.000977517106f
    zmm2[0] = zmm2[0] f* r9_1[4]
    zmm0.d = zmm0.d f* zmm12.d
    zmm2[0] = zmm2[0] f+ r9_1[1]
    zmm0.d = zmm0.d f+ zmm10.d
    zmm2[0] = zmm2[0] f- zmm5
    zmm2[0] = zmm2[0] f* zmm12.d
    zmm2[0] = zmm2[0] f+ zmm5

float temp0_6[0x4] = _mm_unpacklo_ps(zmm2, 0)
*(arg2 + 0x20) = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0.q), temp0_6[0].q)
return result
