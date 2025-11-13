// 函数: sub_141c65070
// 地址: 0x141c65070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg4 + 0xc)
int64_t rbx = sx.q(arg3)
int32_t rsi = 0
arg4[1].d = 0
int64_t rbp = sx.q(divs.dp.d(sx.q(arg2[1].d), rbx.d))

if (rcx s< 0 && rcx != 0)
    sub_140775b10(arg4, 0)
    rcx = *(arg4 + 0xc)
    rsi = arg4[1].d

int32_t rax_3 = rsi + rbp.d
arg4[1].d = rax_3

if (rax_3 s> rcx)
    sub_140775270(arg4)

void* result = memset(*arg4 + (sx.q(rsi) << 2), 0, rbp << 2)
float zmm3[0x4] = 0x3f800000
int64_t r14_1 = *arg2
uint64_t r11 = *arg4
zmm3[0] = 1f / _mm_sqrt_ss(0, _mm_cvtepi32_ps(zx.o(rbx.d)).d)[0]
float zmm4[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)

if (rbp s> 0)
    int64_t r9 = 0
    int32_t r10_1 = 0
    
    do
        int32_t rdx_3 = 0
        
        if (rbx.d s> 0)
            uint128_t zmm0
            float zmm1[0x4]
            
            if (rbx.d u>= 8)
                int32_t zmm5_1 = *(r11 + (r9 << 2))
                int32_t rcx_5 = (rbx - 1).d
                int64_t r8_1 = sx.q(r10_1)
                result = r14_1 + (sx.q(r10_1 + rcx_5) << 2)
                
                if (r11 u> result || r11 + (sx.q(rcx_5) << 2) u< r14_1 + (r8_1 << 2))
                    float zmm2[0x4] = zx.o(0)
                    zmm1 = zx.o(0)
                    int32_t rcx_8 = rbx.d & 0x80000007
                    
                    if (rcx_8 s< 0)
                        rcx_8 = ((rcx_8 - 1) | 0xfffffff8) + 1
                    
                    int64_t i = 0
                    result = r14_1 + 0x10 + (r8_1 << 2)
                    
                    do
                        rdx_3 += 8
                        i += 8
                        zmm2 = _mm_add_ps(zmm2, _mm_mul_ps(*(result - 0x10), zmm4))
                        zmm0 = *result
                        result += 0x20
                        zmm1 = _mm_add_ps(zmm1, _mm_mul_ps(zmm0, zmm4))
                    while (i s< sx.q(rbx.d - rcx_8))
                    
                    zmm2 = _mm_add_ps(zmm2, zmm1)
                    zmm2[0].q = zmm2 u>> 0x40
                    zmm1 = _mm_add_ps(zmm2, zmm2)
                    zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0xf5)
                    zmm1[0] = zmm1[0] f+ zmm0.d
                    zmm1[0] = zmm1[0] f+ zmm5_1
                    *(r11 + (r9 << 2)) = zmm1[0]
            
            if (rdx_3 s< rbx.d)
                zmm1 = *(r11 + (r9 << 2))
                int64_t rdx_4 = sx.q(rdx_3)
                int64_t i_2 = rbx - rdx_4
                result = r14_1 + ((sx.q(r10_1) + rdx_4) << 2)
                int64_t i_1
                
                do
                    zmm0.d = zmm3.d f* *result
                    result += 4
                    zmm1[0] = zmm1[0] f+ zmm0.d
                    i_1 = i_2
                    i_2 -= 1
                while (i_1 != 1)
                *(r11 + (r9 << 2)) = zmm1[0]
        
        r10_1 += rbx.d
        r9 += 1
    while (r9 s< rbp)

return result
