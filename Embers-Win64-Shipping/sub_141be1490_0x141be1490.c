// 函数: sub_141be1490
// 地址: 0x141be1490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr
*(arg1 + 0x10c) = *arg2
int64_t* rcx = *(arg1 + 0x138)

if (rcx != 0)
    char r15_1 = *(arg1 + 0x108)
    
    if (r15_1 != 2)
        int64_t* rax_3 = (*(*rcx + 0x188))()
        int32_t rdi_2 = 0
        int64_t rdx_2 = *rax_3
        int64_t var_60
        uint128_t zmm0
        uint128_t zmm1
        uint128_t zmm2
        
        if (r15_1 != 3)
            result = (*rdx_2)(rax_3, rdx_2)
            
            if (result s> 0)
                void** r12_2 = nullptr
                
                do
                    if (r15_1 == 0 || rdi_2 == 0)
                        zmm2 = zx.o(0)
                    else
                        zmm2 = *(arg1 + 0x110)
                    
                    if (r15_1 != 0 || rdi_2 == 0)
                        zmm1 = zx.o(0)
                    else
                        zmm1 = *(arg1 + 0x10c)
                    
                    int64_t var_70_1 = 0
                    char var_68_2 = 1
                    void* rcx_10 = *(r12_2 + rax_3[2])
                    zmm0.d = zmm1.d
                    var_60 = 0
                    _mm_shuffle_ps(zmm0, zmm0, 0xe1)
                    zmm0.d = zmm2.d
                    int32_t var_58_2 = 0
                    zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0xe1)
                    *(rcx_10 + 0x48) = zmm0
                    *(rcx_10 + 0x58) = 1
                    uint128_t var_78 = zmm0
                    sub_1407473e0(rcx_10 + 0x60, &var_60)
                    sub_140745b20(&var_60)
                    rdi_2 += 1
                    r12_2 = &r12_2[1]
                    result = (**rax_3)(rax_3)
                while (rdi_2 s< result)
        else
            result = (*rdx_2)(rax_3, rdx_2)
            
            if (result s> 0)
                int64_t r13_1 = 0
                
                do
                    uint128_t var_88_1 = zx.o(0)
                    uint128_t zmm3
                    bool cond:1_1
                    
                    if (*(arg1 + 0x120) s<= 0)
                        zmm0 = *(arg1 + 0x10c)
                        uint128_t zmm4_1 = _mm_cvtepi32_ps(zx.o(rdi_2))
                        zmm1.d = zmm0.d f* zmm4_1.d
                        
                        if (zmm0.d f< 0f)
                            zmm3 = zmm1
                            zmm1 = var_88_1.d
                            zmm3 ^= 0x80000000
                        else
                            zmm3 = var_88_1:8.d
                        
                        zmm0 = *(arg1 + 0x110)
                        zmm2.d = zmm0.d f* zmm4_1.d
                        cond:1_1 = zmm0.d f< 0f
                    else
                        zmm1 = zx.o(0)
                        zmm2 = zx.o(0)
                        int32_t i = 0
                        
                        if (rdi_2 s>= 4)
                            int32_t r15_2 = *(arg1 + 0x120)
                            int32_t r14_1 = 2
                            int64_t r11_1 = *(arg1 + 0x118)
                            
                            do
                                int32_t i_1 = i
                                i += 4
                                int64_t r9_1 = sx.q(mods.dp.d(sx.q(i_1), r15_2))
                                zmm2.d = zmm2.d f+ *(r11_1 + (r9_1 << 3) + 4)
                                int64_t r8_1 = sx.q(mods.dp.d(sx.q(r14_1 - 1), r15_2))
                                zmm0.d = (*(r11_1 + (r9_1 << 3))).d f+ zmm1.d
                                int32_t rax_9 = r14_1 + 1
                                int64_t rcx_4 = sx.q(mods.dp.d(sx.q(r14_1), r15_2))
                                r14_1 += 4
                                zmm1.d = zmm0.d f+ *(r11_1 + (r8_1 << 3))
                                zmm2.d = zmm2.d f+ *(r11_1 + (r8_1 << 3) + 4)
                                zmm1.d = zmm1.d f+ *(r11_1 + (rcx_4 << 3))
                                zmm2.d = zmm2.d f+ *(r11_1 + (rcx_4 << 3) + 4)
                                int64_t rax_11 = sx.q(mods.dp.d(sx.q(rax_9), r15_2))
                                zmm1.d = zmm1.d f+ *(r11_1 + (rax_11 << 3))
                                zmm2.d = zmm2.d f+ *(r11_1 + (rax_11 << 3) + 4)
                            while (i s< rdi_2 - 3)
                        
                        if (i s< rdi_2)
                            int64_t rcx_5 = *(arg1 + 0x118)
                            
                            do
                                int32_t i_2 = i
                                i += 1
                                int64_t rax_14 = sx.q(mods.dp.d(sx.q(i_2), *(arg1 + 0x120)))
                                zmm1.d = zmm1.d f+ *(rcx_5 + (rax_14 << 3))
                                zmm2.d = zmm2.d f+ *(rcx_5 + (rax_14 << 3) + 4)
                            while (i s< rdi_2)
                        
                        if (zmm1.d f< 0f)
                            zmm3 = zmm1
                            zmm1 = var_88_1.d
                            zmm3 ^= 0x80000000
                            cond:1_1 = zmm2.d f< 0f
                        else
                            zmm3 = var_88_1:8.d
                            cond:1_1 = zmm2.d f< 0f
                    
                    if (cond:1_1)
                        zmm0 = zmm2
                        zmm2 = var_88_1:4.d
                        zmm0 ^= 0x80000000
                    else
                        zmm0 = var_88_1:0xc.d
                    
                    void** rax_15 = rax_3[2]
                    _mm_shuffle_ps(zmm1, zmm1, 0xe1)
                    zmm1.d = zmm2.d
                    char var_68_1 = 1
                    _mm_shuffle_ps(zmm1, zmm1, 0xc6)
                    void* rcx_6 = *(rax_15 + r13_1)
                    zmm1.d = zmm3.d
                    _mm_shuffle_ps(zmm1, zmm1, 0x27)
                    zmm1.d = zmm0.d
                    var_60 = 0
                    zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0x39)
                    *(rcx_6 + 0x28) = zmm1
                    *(rcx_6 + 0x38) = 1
                    int32_t var_58_1 = 0
                    uint128_t var_78_1 = zmm1
                    sub_1407473e0(rcx_6 + 0x40, &var_60)
                    sub_140745b20(&var_60)
                    rdi_2 += 1
                    r13_1 += 8
                    result = (**rax_3)(rax_3)
                while (rdi_2 s< result)
    else
        int64_t* rdi_1 = *(arg1 + 0x140)
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
        
        sub_140f5e6e0(rcx, *(arg1 + 0x10c))
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                result = (**rdi_1)(rdi_1)
                int32_t temp3_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    return (*(*rdi_1 + 8))(rdi_1, 1)

return result
