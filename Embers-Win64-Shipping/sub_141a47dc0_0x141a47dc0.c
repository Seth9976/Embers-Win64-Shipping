// 函数: sub_141a47dc0
// 地址: 0x141a47dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg1 + 0x90)
int32_t rbx = arg2.d
uint128_t result = 0x3f800000
uint128_t zmm7 = 0x3f800000
uint128_t zmm0
uint128_t zmm1
double zmm2[0x2]

if (rax.b != 2)
    char rdx = *(arg1 + 0x70)
    int32_t rcx
    
    if (rdx == 0)
        rcx = *(arg1 + 0x58)
    else
        rcx = *(arg1 + 0x74)
    
    if (rcx s> 0)
        int64_t* r8_1 = *(arg1 + 0x60)
        
        if (r8_1 != 0)
            uint32_t rax_1
            
            if (rax.b != 1)
                rax_1 = (rax u>> 0x20).d + 1
            else
                rax_1 = (rax u>> 0x20).d
            
            int32_t rax_3
            
            if (rdx == 0)
                rax_3 = *(arg1 + 0x58)
            else
                rax_3 = *(arg1 + 0x74)
            
            zmm2 = _mm_cvtps_pd(arg2:4.d[0])
            zmm0 = _mm_cvtepi32_pd(zx.q(rbx - rax_1))
            zmm1 = _mm_cvtepi32_pd(zx.q(rax_3))
            zmm2[0] = zmm2[0] f+ zmm0.q
            zmm2[0] = zmm2[0] f/ zmm1.q
            
            if (not(zmm2[0] > 0.0))
                zmm7 = zx.o(0)
            else if (zmm2[0] < 1.0)
                int64_t* rcx_3 = *(arg1 + 0x68)
                zmm1 = _mm_cvtpd_ps(zmm2)
                
                if (rcx_3 == 0)
                    zmm0, result = sub_141a729f0(r8_1, zmm1, result)
                else
                    (*(*rcx_3 + 0x10))(rcx_3, zmm1)
                
                zmm7 = zmm0
            else
                zmm7 = 0x3f800000

int64_t rax_5 = *(arg1 + 0x98)

if (rax_5.b != 2)
    char rdx_1 = *(arg1 + 0x88)
    int32_t rcx_5
    
    if (rdx_1 == 0)
        rcx_5 = *(arg1 + 0x5c)
    else
        rcx_5 = *(arg1 + 0x8c)
    
    if (rcx_5 s> 0)
        int64_t* r8_2 = *(arg1 + 0x78)
        
        if (r8_2 != 0)
            int32_t rcx_6
            
            if (rdx_1 == 0)
                rcx_6 = *(arg1 + 0x5c)
            else
                rcx_6 = *(arg1 + 0x8c)
            
            uint32_t rax_7
            
            if (rax_5.b != 1)
                rax_7 = (rax_5 u>> 0x20).d
            else
                rax_7 = (rax_5 u>> 0x20).d + 1
            
            int32_t rax_8
            
            if (rdx_1 == 0)
                rax_8 = *(arg1 + 0x5c)
            else
                rax_8 = *(arg1 + 0x8c)
            
            zmm2 = _mm_cvtps_pd(arg2:4.d[0])
            zmm0 = _mm_cvtepi32_pd(zx.q(rcx_6 - rax_7 + rbx))
            zmm1 = _mm_cvtepi32_pd(zx.q(rax_8))
            zmm2[0] = zmm2[0] f+ zmm0.q
            zmm2[0] = zmm2[0] f/ zmm1.q
            
            if (not(zmm2[0] <= 0.0))
                if (zmm2[0] < 1.0)
                    int64_t* rcx_9 = *(arg1 + 0x80)
                    zmm1 = _mm_cvtpd_ps(zmm2)
                    
                    if (rcx_9 == 0)
                        zmm0, result = sub_141a729f0(r8_2, zmm1, result)
                    else
                        (*(*rcx_9 + 0x10))(rcx_9, zmm1)
                    
                    result.d = result.d f- zmm0.d
                else
                    result = zx.o(0)

result.d = result.d f* zmm7.d
return result
