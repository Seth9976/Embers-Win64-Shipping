// 函数: sub_14037d3a0
// 地址: 0x14037d3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax = arg1[2]
int32_t* r9 = *arg1
float* rdx = arg1[1]
float zmm3 = *rax
float zmm4 = rax[1]
float zmm5 = rax[2]
int64_t i = *(arg1 + 0x24)
int64_t r10 = sx.q(*(arg1 + 0x3c))
int128_t zmm6 = rax[3]
int128_t zmm7 = rax[4]
int128_t zmm8 = rax[5]
int128_t* result = arg1[3]
float zmm0
float zmm1
float zmm2

if (result != 0)
    int128_t zmm9 = *result
    int128_t zmm10 = *(result + 4)
    int128_t zmm11 = *(result + 8)
    int128_t zmm12 = *(result + 0xc)
    int128_t zmm13 = result[1].d
    int128_t zmm14 = *(result + 0x14)
    
    while (i != 0)
        zmm2 = *r9
        i -= 1
        r9 = &r9[1]
        zmm0 = zmm2 * zmm3
        zmm1 = zmm2 * zmm4
        
        if (r10 == 0)
            *rdx = zmm0
            rdx[1] = zmm1
            zmm1 = zmm2 f* zmm6.d
            rdx[2] = zmm2 * zmm5
            zmm0 = zmm2 f* zmm7.d
            zmm2 = zmm2 f* zmm8.d
            rdx[3] = zmm1
            rdx[4] = zmm0
        else
            *rdx = zmm0 + *rdx
            rdx[1] = zmm1 + rdx[1]
            rdx[2] = zmm2 * zmm5 + rdx[2]
            rdx[3] = zmm2 f* zmm6.d + rdx[3]
            rdx[4] = zmm2 f* zmm7.d + rdx[4]
            zmm2 = zmm2 f* zmm8.d + rdx[5]
        
        rdx[5] = zmm2
        rdx = &rdx[6]
        zmm3 = zmm3 f+ zmm9.d
        zmm4 = zmm4 f+ zmm10.d
        zmm5 = zmm5 f+ zmm11.d
        zmm6.d = zmm6.d f+ zmm12.d
        zmm7.d = zmm7.d f+ zmm13.d
        zmm8.d = zmm8.d f+ zmm14.d
else
    while (i != 0)
        zmm2 = *r9
        i -= 1
        r9 = &r9[1]
        zmm0 = zmm2 * zmm3
        zmm1 = zmm2 * zmm4
        
        if (r10 == 0)
            *rdx = zmm0
            rdx[1] = zmm1
            zmm1 = zmm2 f* zmm6.d
            rdx[2] = zmm2 * zmm5
            zmm0 = zmm2 f* zmm7.d
            zmm2 = zmm2 f* zmm8.d
            rdx[3] = zmm1
            rdx[4] = zmm0
        else
            *rdx = zmm0 + *rdx
            rdx[1] = zmm1 + rdx[1]
            rdx[2] = zmm2 * zmm5 + rdx[2]
            rdx[3] = zmm2 f* zmm6.d + rdx[3]
            rdx[4] = zmm2 f* zmm7.d + rdx[4]
            zmm2 = zmm2 f* zmm8.d + rdx[5]
        
        rdx[5] = zmm2
        rdx = &rdx[6]
return result
