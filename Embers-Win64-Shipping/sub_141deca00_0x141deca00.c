// 函数: sub_141deca00
// 地址: 0x141deca00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 8)
int32_t i_2 = rdx - 1
int128_t zmm6
int128_t var_18 = zmm6
int128_t zmm7
int128_t var_28 = zmm7

if (rdx - 1 s>= 0)
    int64_t i_1 = sx.q(i_2)
    int64_t* rax_3 = (i_1 << 5) + *arg1
    int64_t i
    
    do
        float zmm3 = rax_3[1].d
        i = i_1
        
        if (not(arg2 < zmm3))
            void* rcx = *rax_3
            uint32_t zmm2[0x4]
            
            if (rcx == 0)
                zmm2 = 0x3f800000
            else
                zmm2 = *(rcx + 0x94)
            
            zmm2[0] = zmm2[0] f* *(rax_3 + 0x14)
            
            if (not(_mm_and_ps(zmm2, 0x7fffffff)[0] f> 9.99999994e-09f))
                zmm2 = 0x3f800000
            
            uint32_t zmm0[0x4] = zx.o(rax_3[3].d)
            zmm2 = _mm_and_ps(zmm2, 0x7fffffff)
            
            if (arg2 <= (rax_3[2].d f- *(rax_3 + 0xc)) f* _mm_cvtepi32_ps(zmm0)[0] f/ zmm2[0]
                    + zmm3)
                return zx.q(i_2)
        
        i_2 -= 1
        i_1 -= 1
        rax_3 -= 0x20
    while (i s> 0)

return 0xffffffff
