// 函数: sub_14037bae0
// 地址: 0x14037bae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax_2 = arg1[2]
int16_t* r9 = *arg1
void* rdx = arg1[1]
int64_t i = *(arg1 + 0x24)
int64_t r10 = sx.q(*(arg1 + 0x3c))
float zmm2 = *rax_2 * 3.05175781e-05f
float zmm3 = rax_2[1] f* 3.05175781e-05f
uint64_t rax = arg1[3]
float zmm0
uint128_t zmm1

if (rax != 0)
    float zmm4 = *rax * 3.05175781e-05f
    float zmm5 = *(rax + 4) * 3.05175781e-05f
    
    while (i != 0)
        rax = zx.q(sx.d(*r9))
        i -= 1
        r9 = &r9[1]
        zmm1 = _mm_cvtepi32_ps(zx.o(rax.d))
        zmm0 = zmm1.d
        zmm1.d = zmm1.d f* zmm3
        zmm0 = zmm0 * zmm2
        
        if (r10 == 0)
            *rdx = zmm0
        else
            *rdx = zmm0 f+ *rdx
            zmm1.d = zmm1.d f+ *(rdx + 4)
        
        *(rdx + 4) = zmm1.d
        rdx += 8
        zmm2 = zmm2 + zmm4
        zmm3 = zmm3 + zmm5
else if (i != 0)
    int32_t rax_1
    
    do
        rax_1 = sx.d(*r9)
        i -= 1
        r9 = &r9[1]
        zmm1 = _mm_cvtepi32_ps(zx.o(rax_1))
        zmm0 = zmm1.d
        zmm1.d = zmm1.d f* zmm3
        zmm0 = zmm0 * zmm2
        
        if (r10 == 0)
            *rdx = zmm0
        else
            *rdx = zmm0 f+ *rdx
            zmm1.d = zmm1.d f+ *(rdx + 4)
        
        *(rdx + 4) = zmm1.d
        rdx += 8
    while (i != 0)
    
    return rax_1
return rax
