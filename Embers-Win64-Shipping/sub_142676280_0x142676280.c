// 函数: sub_142676280
// 地址: 0x142676280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0xa0)
int128_t zmm6 = data_143dbb200
uint128_t zmm7 = data_143dbb1fc
uint128_t zmm8 = data_143dbb1f8
uint128_t zmm9 = zmm8
uint128_t zmm10 = zmm7
int128_t zmm11 = zmm6
uint128_t zmm0
uint128_t zmm1
int128_t zmm2

if (rbx != 0)
    void* rax_1 = sub_1426a0b20()
    void* rdx = rbx[2]
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        void* r8_1
        r8_1.b = 1
        void var_88
        int128_t* rax_5 = (*(*rbx + 0x548))(rbx, &var_88, r8_1, 0)
        void* rcx_2 = rbx[0x5e]
        uint64_t var_98_1 = rax_5[1].q
        zmm0 = *rax_5
        int32_t rax_6 = *(rax_5 + 0x18)
        int32_t var_90_1 = rax_6
        int64_t i_1
        
        if (rcx_2 != 0)
            i_1 = sx.q(*(rcx_2 + 0x30))
        
        if (rcx_2 == 0 || i_1 s<= 0)
            zmm6 = var_98_1:4.d
            zmm7 = var_98_1.d
            zmm8 = zmm0:0xc.d
            zmm11 = zmm0:8.d
            zmm10 = zmm0:4.d
            zmm9 = zmm0.d
        else
            int128_t* rcx_3 = *(rcx_2 + 0x28)
            zmm6 = var_98_1:4.d
            zmm7 = var_98_1.d
            zmm8 = zmm0:0xc.d
            zmm11 = zmm0:8.d
            zmm10 = zmm0:4.d
            zmm9 = zmm0.d
            int64_t i
            
            do
                if (rax_6.b == 0)
                    zmm0 = zx.o(*rcx_3)
                    zmm8 = zmm0
                    var_98_1:4.d = *(rcx_3 + 8)
                    zmm9 = zmm8
                    zmm6 = var_98_1:4.d
                    rax_6.b = 1
                    uint128_t var_a8_1
                    var_a8_1:0xc.q = zmm0.q
                    zmm11 = zmm6
                    zmm7 = var_98_1.d
                    zmm10 = zmm7
                else
                    zmm0 = *rcx_3
                    
                    if (not(zmm9.d f<= zmm0.d))
                        zmm9 = zmm0
                    
                    zmm1 = *(rcx_3 + 4)
                    
                    if (not(zmm10.d f<= zmm1.d))
                        zmm10 = zmm1
                    
                    zmm2 = *(rcx_3 + 8)
                    
                    if (not(zmm11.d f<= zmm2.d))
                        zmm11 = zmm2
                    
                    if (not(zmm8.d f>= zmm0.d))
                        zmm8 = zmm0
                    
                    if (not(zmm7.d f>= zmm1.d))
                        zmm7 = zmm1
                    
                    if (not(zmm6.d f>= zmm2.d))
                        zmm6 = zmm2
                
                rcx_3 = &rcx_3[2]
                i = i_1
                i_1 -= 1
            while (i != 1)

zmm8.d = zmm8.d f- zmm9.d
zmm7.d = zmm7.d f- zmm10.d
zmm6.d = zmm6.d f- zmm11.d
zmm8.d = zmm8.d f* 0.5f
zmm7.d = zmm7.d f* 0.5f
zmm6.d = zmm6.d f* 0.5f
*(arg2 + 0xc) = (_mm_unpacklo_ps(zmm8, zmm7.q)).q
*(arg2 + 0x14) = zmm6.d
zmm9.d = zmm9.d f+ *(arg2 + 0xc)
zmm10.d = zmm10.d f+ arg2[2].d
zmm11.d = zmm11.d f+ *(arg2 + 0x14)
*arg2 = (_mm_unpacklo_ps(zmm9, zmm10.q)).q
arg2[1].d = zmm11.d
zmm0 = arg2[2].d
zmm2 = *(arg2 + 0xc)
zmm1 = *(arg2 + 0x14)
zmm0.d = zmm0.d f* zmm0.d
zmm2.d = zmm2.d f* zmm2.d
zmm1.d = zmm1.d f* zmm1.d
zmm2.d = zmm2.d f+ zmm0.d
zmm2.d = zmm2.d f+ zmm1.d
arg2[3].d = _mm_sqrt_ss(0, zmm2.d).d
return arg2
