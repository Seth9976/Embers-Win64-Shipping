// 函数: sub_142085df0
// 地址: 0x142085df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_358
int64_t result = __security_cookie ^ &var_358
int64_t result_1 = result

if (*(arg1 + 0x288) s> 0 && *(arg1 + 0x278) != 0)
    int64_t* rcx = *(arg1 + 0x220)
    int32_t var_300
    void var_2b8
    (*(*rcx + 0x6f8))(rcx, &var_300, &var_2b8)
    int64_t rax_2 = sub_1423de050()
    sub_1405d9400()
    void var_258
    sub_1420767c0(&var_258, &data_143dbb1f0, &data_143cd6fd8, rax_2, &data_14399f5c0)
    int32_t rax_3 = *(arg1 + 0x288)
    int32_t r14_1 = 0
    int128_t zmm9 = zx.o(0)
    uint32_t zmm0_1[0x4]
    
    if (rax_3 s> 0)
        int32_t r15_1 = 1
        int64_t* rdi_1 = nullptr
        uint32_t zmm11[0x4] = 0x7fffffff
        uint32_t zmm6[0x4]
        uint32_t var_38_1[0x4] = zmm6
        uint32_t zmm7[0x4]
        uint32_t var_48_1[0x4] = zmm7
        int128_t zmm8
        int128_t var_58_1 = zmm8
        
        do
            int64_t rcx_7 = *(arg1 + 0x280)
            
            if (*(rdi_1 + rcx_7) != 0)
                int64_t rax_11 = *(rdi_1 + rcx_7 + 0x50)
                
                if (rax_11 == 0)
                    rax_11 = sub_1423de050()
                    rcx_7 = *(arg1 + 0x280)
                
                int64_t var_110_1 = rax_11
                uint32_t zmm1_1[0x4] = *(rdi_1 + rcx_7 + 0x34)
                float zmm3
                
                if (_mm_and_ps(zmm1_1, zmm11)[0] f> 9.99999994e-09f)
                    zmm0_1 = *(rdi_1 + rcx_7 + 0x30)
                    zmm0_1[0] = zmm0_1[0] f/ zmm1_1[0]
                    zmm3 = 1f f- zmm0_1[0]
                else
                    zmm3 = zmm9.d
                
                zmm7 = *(rdi_1 + rcx_7 + 0x14)
                zmm7[0] = zmm7[0] f- *(rdi_1 + rcx_7 + 8)
                zmm8.d = (*(rdi_1 + rcx_7 + 0x1c)).d f- *(rdi_1 + rcx_7 + 0x10)
                char rdx_5 = (*(rdi_1 + rcx_7 + 0x3c)).b
                zmm7[0] = zmm7[0] f* zmm3
                zmm8.d = zmm8.d f* zmm3
                zmm7[0] = zmm7[0] f+ *(rdi_1 + rcx_7 + 8)
                zmm8.d = zmm8.d f+ *(rdi_1 + rcx_7 + 0x10)
                
                if ((rdx_5 & 1) == 0)
                    uint32_t zmm4_1[0x4] = *(rdi_1 + rcx_7 + 0x18)
                    uint32_t zmm5_1 = zmm7[0]
                    zmm4_1[0] = zmm4_1[0] f- *(rdi_1 + rcx_7 + 0xc)
                    zmm4_1[0] = zmm4_1[0] f* zmm3
                    zmm4_1[0] = zmm4_1[0] f+ *(rdi_1 + rcx_7 + 0xc)
                    
                    if ((rdx_5 & 2) == 0)
                        zmm4_1[0] = zmm4_1[0] f+ *(rdi_1 + rcx_7 + 0x44)
                        zmm7[0] = zmm7[0] f+ *(rdi_1 + rcx_7 + 0x40)
                        zmm8.d = zmm8.d f+ *(rdi_1 + rcx_7 + 0x48)
                        uint32_t var_324_3 = zmm4_1[0]
                        zmm6 = zmm4_1
                    else
                        void* rcx_8 = *(*(rdi_1 + rcx_7) + 0x130)
                        int32_t* rax_13
                        
                        if (rcx_8 == 0)
                            int32_t var_2e8_1 = data_143dbb200
                            int64_t var_2f0
                            rax_13 = &var_2f0
                            var_2f0 = data_143dbb1f8.q
                        else
                            zmm1_1 = *(rcx_8 + 0x1d0)
                            uint32_t var_310
                            rax_13 = &var_310
                            var_310 = zmm1_1[0]
                            zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                            uint32_t var_268_1[0x4] = zmm1_1
                            uint32_t var_308_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
                            uint32_t var_30c_1 = zmm0_1[0]
                        
                        zmm0_1 = zx.o(*rax_13)
                        int32_t rax_15 = rax_13[2]
                        zmm6 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
                        zmm7 = zmm0_1
                        zmm6[0] = zmm6[0] f+ zmm4_1[0]
                        zmm7[0] = zmm7[0] f+ zmm5_1
                        zmm8.d = rax_15.d f+ zmm8.d
                        uint32_t var_324_2 = zmm6[0]
                else
                    zmm6 = *(rdi_1 + rcx_7 + 0x18)
                    zmm6[0] = zmm6[0] f- *(rdi_1 + rcx_7 + 0xc)
                    zmm6[0] = zmm6[0] f* zmm3
                    zmm6[0] = zmm6[0] f+ *(rdi_1 + rcx_7 + 0xc)
                    uint32_t var_324_1 = zmm6[0]
                
                uint32_t var_328_1 = zmm7[0]
                int32_t var_320_1 = zmm8.d
                int32_t var_218
                int32_t var_1e0
                
                if ((*(arg1 + 0x230) & 4) != 0 || (rdx_5 & 4) != 0)
                    var_218 |= 2
                    var_1e0 = 0x3f800000
                    uint32_t var_1f0_1[0x4] = data_14399f5e0
                    int32_t var_1dc_1 = 0x3f800000
                else
                    var_218 &= 0xfffffffd
                    var_1e0.q = data_143dbb1f0
                zmm7[0] = zmm7[0] f- var_300
                int32_t var_2fc
                zmm6[0] = zmm6[0] f- var_2fc
                int32_t var_2f8
                zmm8.d = zmm8.d f- var_2f8
                void var_298
                int32_t* rax_16
                rax_16, zmm6, zmm7, zmm8, zmm9, zmm11 = sub_140ae4210(&var_2b8, &var_298)
                zmm6[0] = zmm6[0] f* rax_16[1]
                zmm7[0] = zmm7[0] f* *rax_16
                zmm8.d = zmm8.d f* rax_16[2]
                zmm6[0] = zmm6[0] f+ zmm7[0]
                zmm6[0] = zmm6[0] f+ zmm8.d
                
                if (not(zmm6[0] f<= zmm9.d))
                    void* rcx_10 = *(arg1 + 0x270)
                    int64_t var_2d8 = var_328_1.q
                    int32_t var_2d0_1 = var_320_1
                    int32_t var_2c8
                    sub_14241d460(rcx_10, &var_2c8, &var_2d8)
                    int64_t rbx_5 = sx.q(r14_1) * 0x60
                    int128_t var_2a8
                    sub_140acc920(&var_2a8, *(arg1 + 0x280) + 0x38 + rbx_5)
                    int128_t var_230_1 = var_2a8
                    void var_288
                    int64_t* rax_19 = sub_140aae420(&var_288, *(arg1 + 0x280) + 0x20 + rbx_5)
                    int64_t var_128
                    int64_t rdx_14 = var_128
                    var_128 = *rax_19
                    *rax_19 = rdx_14
                    int64_t var_120
                    int64_t rdx_15 = var_120
                    var_120 = rax_19[1]
                    rax_19[1] = rdx_15
                    int32_t var_118_1 = rax_19[2].d
                    int64_t* var_280
                    
                    if (var_280 != 0)
                        var_280[1].d -= 1
                        
                        if (var_280[1].d == 1)
                            (**var_280)(var_280)
                            int32_t rax_23 = *(var_280 + 0xc)
                            *(var_280 + 0xc) -= 1
                            
                            if (rax_23 == 1)
                                (*(*var_280 + 8))(var_280, 1)
                    
                    float zmm1_2[0x4] = var_2c8
                    int32_t rcx_17 = int.d(zmm1_2[0])
                    uint128_t zmm0_3 = *(*(arg1 + 0x280) + rdi_1 + 0x58)
                    int32_t var_1b8_1 = zmm0_3.d
                    int32_t var_1b4_1 = zmm0_3.d
                    
                    if (rcx_17 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_17)).d f== zmm1_2[0]))
                        zmm1_2 = _mm_cvtepi32_ps(zx.o(rcx_17
                            + ((_mm_movemask_ps(_mm_unpacklo_ps(zmm1_2, zmm1_2[0].q)) & 1) ^ 1)))
                    
                    float var_318_1 = zmm1_2[0]
                    int32_t var_2c4
                    zmm1_2 = var_2c4
                    int32_t rcx_19 = int.d(zmm1_2[0])
                    
                    if (rcx_19 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_19)).d f== zmm1_2[0]))
                        zmm1_2 = _mm_cvtepi32_ps(zx.o(rcx_19
                            + ((_mm_movemask_ps(_mm_unpacklo_ps(zmm1_2, zmm1_2[0].q)) & 1) ^ 1)))
                    
                    float var_314_1 = zmm1_2[0]
                    sub_142409890(*(arg1 + 0x278), &var_258)
                
                int64_t rax_32 = *(arg1 + 0x280)
                zmm0_1 = *(rax_32 + rdi_1 + 0x30)
                
                if (not(zmm0_1[0] f== -1f))
                    zmm0_1[0] = zmm0_1[0] f- *(arg1 + 0x24c)
                    *(rax_32 + rdi_1 + 0x30) = zmm0_1[0]
            else
                int64_t rbx_3 = sx.q(r14_1) * 0x60
                int64_t rcx_2 = *(rcx_7 + rbx_3 + 0x20)
                
                if (rcx_2 != 0)
                    sub_140a74f90(rcx_2)
                
                int32_t rcx_5 = *(arg1 + 0x288)
                int32_t rax_6 = rcx_5 - r14_1
                
                if (rax_6 != 1)
                    int64_t rcx_3 = *(arg1 + 0x280)
                    memmove(rcx_3 + rbx_3, sx.q(r15_1) * 0x60 + rcx_3, (rax_6 - 1) * 0x60)
                    rcx_5 = *(arg1 + 0x288)
                
                *(arg1 + 0x288) = rcx_5 - 1
                sub_140d3e820(arg1 + 0x280)
                r14_1 -= 1
                r15_1 -= 1
                rdi_1 -= 0x60
            
            rax_3 = *(arg1 + 0x288)
            r14_1 += 1
            r15_1 += 1
            rdi_1 = &rdi_1[0xc]
        while (r14_1 s< rax_3)
    
    int32_t rdi_2 = rax_3 - 1
    
    if (rdi_2 s>= 0)
        int64_t r14_3 = sx.q(rdi_2) * 0x60
        int64_t rsi_1 = r14_3
        int64_t r15_3 = sx.q(rdi_2 + 1) * 0x60
        int32_t temp1_1
        
        do
            int64_t rax_35 = *(arg1 + 0x280)
            zmm0_1 = *(r14_3 + rax_35 + 0x30)
            
            if (not(zmm0_1[0] f== -1f) && not(zmm0_1[0] f> zmm9.d))
                int64_t rcx_23 = *(rsi_1 + rax_35 + 0x20)
                
                if (rcx_23 != 0)
                    sub_140a74f90(rcx_23)
                
                int32_t rcx_26 = *(arg1 + 0x288)
                int32_t rax_37 = rcx_26 - rdi_2
                
                if (rax_37 != 1)
                    int64_t rcx_24 = *(arg1 + 0x280)
                    memmove(rcx_24 + rsi_1, rcx_24 + r15_3, (rax_37 - 1) * 0x60)
                    rcx_26 = *(arg1 + 0x288)
                
                *(arg1 + 0x288) = rcx_26 - 1
                sub_140d3e820(arg1 + 0x280)
            
            r15_3 -= 0x60
            rsi_1 -= 0x60
            r14_3 -= 0x60
            temp1_1 = rdi_2
            rdi_2 -= 1
        while (temp1_1 - 1 s>= 0)
    
    result = sub_141fa61e0(&var_258)

__security_check_cookie(result_1 ^ &var_358)
return result
