// 函数: sub_141f29cd0
// 地址: 0x141f29cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0xb0)

if (result != 0 && arg2 == 1)
    float zmm1[0x4] = *(result + 0x1d0)
    int32_t i_1 = 0
    int64_t* rdx = *(arg1 + 0x158)
    *(arg1 + 0x178) = 0
    bool cond:0_1 = *(rdx + 0xc) != 1
    int64_t zmm0 = *rdx
    float zmm2 = zmm0.d
    int128_t zmm7 = zmm0:4.d
    int64_t var_68_1 = zmm1[0].q
    int128_t zmm9 = var_68_1:4.d
    int128_t zmm10 = var_68_1.d
    int128_t zmm8 = rdx[1].d
    float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
    
    if (not(cond:0_1))
        zmm2 = zmm2 f+ zmm10.d
        zmm7.d = zmm7.d f+ zmm9.d
        zmm8.d = zmm8.d f+ temp0_1[0]
    
    result = zx.q(*(arg1 + 0x160))
    int32_t i = 0
    
    if (result.d s> 0)
        int64_t rdx_1 = 0
        
        do
            int64_t r9_1 = *(arg1 + 0x158)
            i += 1
            
            if (i s>= result.d)
                *(rdx_1 + r9_1 + 0x14) = 0
                *(rdx_1 + *(arg1 + 0x158) + 0x18) = 0x3f800000
                *(rdx_1 + *(arg1 + 0x158) + 0x10) = 0x3f800000
            else
                zmm0 = *(rdx_1 + r9_1 + 0x1c)
                float zmm3[0x4] = zmm0.d
                int128_t zmm4 = zmm0:4.d
                int128_t zmm5 = *(rdx_1 + r9_1 + 0x24)
                
                if (*(rdx_1 + r9_1 + 0x28) == 1)
                    zmm3[0] = zmm3[0] f+ zmm10.d
                    zmm4.d = zmm4.d f+ zmm9.d
                    zmm5.d = zmm5.d f+ temp0_1[0]
                
                zmm3[0] = zmm3[0] - zmm2
                zmm2 = zmm4.d f- zmm7.d
                zmm7 = zmm4
                zmm0.d = zmm5.q.d f- zmm8.d
                zmm8 = zmm5
                zmm3[0] = zmm3[0] * zmm3[0]
                zmm0.d = zmm0.d f* zmm0.d
                int64_t temp0_2 = _mm_sqrt_ss(0, zmm2 * zmm2 + zmm3[0] f+ zmm0.d)
                zmm2 = zmm3[0]
                *(rdx_1 + r9_1 + 0x14) = temp0_2.d
                zmm1 = *(rdx_1 + *(arg1 + 0x158) + 0x14)
                zmm1[0] = zmm1[0] f+ *(arg1 + 0x178)
                *(arg1 + 0x178) = zmm1[0]
            
            result = zx.q(*(arg1 + 0x160))
            rdx_1 += 0x1c
        while (i s< result.d)
    
    zmm1 = zx.o(0)
    
    if (result.d s> 0)
        int64_t rdx_2 = *(arg1 + 0x158)
        result = nullptr
        
        do
            *(result + rdx_2 + 0x10) = zmm1[0]
            rdx_2 = *(arg1 + 0x158)
            zmm0 = *(result + rdx_2 + 0x14)
            
            if (not(zmm0.d f== (zx.o(0)).d))
                zmm0.d = zmm0.d f/ *(arg1 + 0x178)
                *(result + rdx_2 + 0x18) = zmm0.d
                rdx_2 = *(arg1 + 0x158)
                zmm1[0] = zmm1[0] f+ *(result + rdx_2 + 0x18)
            
            i_1 += 1
            result += 0x1c
        while (i_1 s< *(arg1 + 0x160))

return result
