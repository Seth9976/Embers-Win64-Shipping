// 函数: sub_14037b800
// 地址: 0x14037b800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax = arg1[2]
int16_t* r9 = *arg1
void* rdx = arg1[1]
int64_t i = *(arg1 + 0x24)
int64_t r10 = sx.q(*(arg1 + 0x3c))
float zmm3 = *rax * 3.05175781e-05f
float zmm4 = rax[1] f* 3.05175781e-05f
float zmm5 = rax[2] f* 3.05175781e-05f
uint64_t result = arg1[3]
int128_t zmm6
zmm6.d = rax[3].d f* 3.05175781e-05f
int128_t zmm7
zmm7.d = rax[4].d f* 3.05175781e-05f
int128_t zmm8
zmm8.d = rax[5].d f* 3.05175781e-05f
float zmm0
float zmm1
uint128_t zmm2

if (result != 0)
    int128_t zmm9
    zmm9.d = (*result).d f* 3.05175781e-05f
    int128_t zmm10
    zmm10.d = (*(result + 4)).d f* 3.05175781e-05f
    int128_t zmm11
    zmm11.d = (*(result + 8)).d f* 3.05175781e-05f
    int128_t zmm12
    zmm12.d = (*(result + 0xc)).d f* 3.05175781e-05f
    int128_t zmm13
    zmm13.d = (*(result + 0x10)).d f* 3.05175781e-05f
    int128_t zmm14
    zmm14.d = (*(result + 0x14)).d f* 3.05175781e-05f
    
    while (i != 0)
        result = zx.q(sx.d(*r9))
        i -= 1
        r9 = &r9[1]
        zmm2 = _mm_cvtepi32_ps(zx.o(result.d))
        zmm0 = zmm2.d * zmm3
        zmm1 = zmm2.d * zmm4
        
        if (r10 == 0)
            *rdx = zmm0
            *(rdx + 4) = zmm1
            zmm1 = zmm2.d f* zmm6.d
            *(rdx + 8) = zmm2.d * zmm5
            zmm0 = zmm2.d f* zmm7.d
            zmm2.d = zmm2.d f* zmm8.d
            *(rdx + 0xc) = zmm1
            *(rdx + 0x10) = zmm0
        else
            *rdx = zmm0 f+ *rdx
            *(rdx + 4) = zmm1 f+ *(rdx + 4)
            *(rdx + 8) = zmm2.d * zmm5 f+ *(rdx + 8)
            zmm1 = zmm2.d f* zmm6.d f+ *(rdx + 0xc)
            zmm0 = zmm2.d
            zmm2.d = zmm2.d f* zmm8.d
            *(rdx + 0xc) = zmm1
            *(rdx + 0x10) = zmm0 f* zmm7.d f+ *(rdx + 0x10)
            zmm2.d = zmm2.d f+ *(rdx + 0x14)
        
        *(rdx + 0x14) = zmm2.d
        rdx += 0x18
        zmm3 = zmm3 f+ zmm9.d
        zmm4 = zmm4 f+ zmm10.d
        zmm5 = zmm5 f+ zmm11.d
        zmm6.d = zmm6.d f+ zmm12.d
        zmm7.d = zmm7.d f+ zmm13.d
        zmm8.d = zmm8.d f+ zmm14.d
else
    while (i != 0)
        result = zx.q(sx.d(*r9))
        i -= 1
        r9 = &r9[1]
        zmm2 = _mm_cvtepi32_ps(zx.o(result.d))
        zmm0 = zmm2.d * zmm3
        zmm1 = zmm2.d * zmm4
        
        if (r10 == 0)
            *rdx = zmm0
            *(rdx + 4) = zmm1
            zmm1 = zmm2.d f* zmm6.d
            *(rdx + 8) = zmm2.d * zmm5
            zmm0 = zmm2.d f* zmm7.d
            zmm2.d = zmm2.d f* zmm8.d
            *(rdx + 0xc) = zmm1
            *(rdx + 0x10) = zmm0
        else
            *rdx = zmm0 f+ *rdx
            *(rdx + 4) = zmm1 f+ *(rdx + 4)
            *(rdx + 8) = zmm2.d * zmm5 f+ *(rdx + 8)
            zmm1 = zmm2.d f* zmm6.d f+ *(rdx + 0xc)
            zmm0 = zmm2.d
            zmm2.d = zmm2.d f* zmm8.d
            *(rdx + 0xc) = zmm1
            *(rdx + 0x10) = zmm0 f* zmm7.d f+ *(rdx + 0x10)
            zmm2.d = zmm2.d f+ *(rdx + 0x14)
        
        *(rdx + 0x14) = zmm2.d
        rdx += 0x18
return result
