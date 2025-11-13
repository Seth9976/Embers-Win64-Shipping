// 函数: sub_142619930
// 地址: 0x142619930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r12

if (arg3 == 0)
    r12 = -1
else
    r12 = *arg3

uint64_t result = zx.q(*(arg1 + 4))
uint64_t rsi
uint64_t arg_10 = rsi
int32_t i = 0
uint64_t r13
uint64_t var_30 = r13
int128_t zmm6
int128_t var_48 = zmm6
int128_t zmm7
int128_t var_58 = zmm7
int32_t arg_20 = r12
int32_t i_2 = 0
int32_t var_b8
int64_t var_80
float zmm1

if (result.d s> 0)
    int64_t* r14_1 = nullptr
    int128_t zmm8 = 0x40800000
    int64_t* var_88_1 = nullptr
    
    do
        int32_t* rdi_1 = *(r14_1 + *(arg1 + 0x10))
        
        if (*(rdi_1 + 0x327) == 1)
            char rax_1 = *(rdi_1 + 0x325)
            
            if (rax_1 != 0 && rax_1 != 6)
                int64_t* rcx = *(rdi_1 + 0x270)
                rsi.b = rdi_1[0x59] == 0
                *(*(arg1 + 0x2b18) + 8) = rcx
                
                if (rcx != 0)
                    (*(*rcx + 0x10))()
                
                zmm1 = rdi_1[0xa0]
                char var_90_1 = rsi.b
                var_b8 = 4
                int32_t rax_8
                rax_8, zmm6, zmm7, zmm8 = sub_14262a8a0(rdi_1, &rdi_1[0xac], &rdi_1[0xc0], 
                    &rdi_1[0xb8], 4, *(arg1 + 0x2b18), 
                    arg1.d + 0x6e0 + zx.d(*(rdi_1 + 0x2af)) * 0x220, zmm1 f* *(arg1 + 0x2b08), 
                    (zmm1 f* zmm8.d).b)
                rdi_1[0xc1] = rax_8
                int64_t rdx_4 = (rdi_1 - *(arg1 + 8)) s/ 0x328
                var_80 = rdx_4
                
                if (r12 == rdx_4.d)
                    __builtin_memset(&arg3[1], 0, 0x18)
                
                char rax_12 = (rdi_1[0xab].w).b
                
                if ((rax_12 & 8) != 0)
                    rsi = zx.q(rdi_1[0xc1])
                    
                    if (rsi.d s> 1)
                        bool cond:1_1 = *(arg1 + 0x2b20) == 0
                        r13.b = 0x3f
                        char arg_8 = 0x3f
                        
                        if (not(cond:1_1))
                            int64_t rdx_5
                            
                            if (rdi_1[0x14] == 0)
                                rdx_5 = 0
                            else
                                rdx_5 = **(rdi_1 + 0x48)
                            
                            sub_1426101c0(**(arg1 + 0x2b18), rdx_5, &arg_8)
                            r13 = zx.q(arg_8)
                            *(arg1 + (r13 << 2) + 0x28e8) = 0x3f800000
                            *(arg1 + 0x2aec) = _mm_min_ss(*(arg1 + 0x2aec), zmm7.d)
                            rsi = zx.q(rdi_1[0xc1])
                            rax_12 = (rdi_1[0xab].w).b
                        
                        rsi = zx.q(rsi.d - 1)
                        int32_t j = rsi.d
                        
                        if ((rax_12 & 0x20) != 0)
                            j = 1
                        
                        if (rsi.d s>= j)
                            uint32_t rbp = (rsi * 3).d
                            
                            do
                                void* r14_2 = &rdi_1[sx.q(rbp)]
                                void* rax_15
                                
                                if (*(arg1 + 0x2b20) == 0)
                                    rax_15 = arg1 + 0x6e0 + zx.q(*(rdi_1 + 0x2af)) * 0x220
                                else
                                    rax_15 = arg1 + 0x28e0
                                
                                var_b8.q = rax_15
                                char rax_18
                                rax_18, zmm6, zmm8 = sub_14262d980(rdi_1, r14_2 + 0x2b0, 
                                    rdi_1[0xa5], *(arg1 + 0x2b18), 4)
                                
                                if (rax_18 != 0)
                                    if (arg_20 == var_80.d)
                                        arg3[1] = *rdi_1
                                        arg3[2] = rdi_1[1]
                                        arg3[3] = rdi_1[2]
                                        arg3[4] = *(r14_2 + 0x2b0)
                                        arg3[5] = *(r14_2 + 0x2b4)
                                        arg3[6] = *(r14_2 + 0x2b8)
                                    
                                    break
                                
                                rsi = zx.q(rsi.d - 1)
                                rbp -= 3
                            while (rsi.d s>= j)
                            
                            i = i_2
                            r14_1 = var_88_1
                        
                        *(arg1 + (zx.q(r13.b) << 2) + 0x28e8) = 0x7f7fffff
                        *(arg1 + 0x2aec) = _mm_min_ss(*(arg1 + 0x2aec), zmm6.d)
        
        result = zx.q(*(arg1 + 4))
        i += 1
        r12 = arg_20
        r14_1 = &r14_1[1]
        i_2 = i
        var_88_1 = r14_1
    while (i s< result.d)

int32_t i_1 = 0

if (result.d s> 0)
    zmm6 = 0x40a20000
    int64_t r13_1 = 0
    
    do
        result = *(arg1 + 0x10)
        int32_t* rdi_2 = *(result + r13_1)
        
        if (*(rdi_2 + 0x327) == 1)
            result = zx.q(*(rdi_2 + 0x325))
            
            if (result.b != 0 && result.b != 6)
                int64_t rcx_9 = sx.q(rdi_2[0xc1])
                int128_t zmm2 = rdi_2[0xa0]
                
                if (rcx_9.d != 0 && (*(rcx_9 + rdi_2 + 0x2ff) & 4) != 0)
                    result = zx.q((rcx_9 * 3).d)
                    zmm2.d = zmm2.d f* zmm2.d
                    int64_t rcx_10 = sx.q(result.d)
                    zmm2.d = zmm2.d f* zmm6.d
                    zmm1 = rdi_2[rcx_10 + 0xab] f- rdi_2[0x8d]
                    float zmm0 = rdi_2[rcx_10 + 0xa9] f- rdi_2[0x8b]
                    
                    if (not(zmm1 * zmm1 + zmm0 * zmm0 f>= zmm2.d))
                        int64_t* rcx_13 = *(rdi_2 + 0x270)
                        int32_t* rsi_3 =
                            (sx.q(((rdi_2 - *(arg1 + 8)) s/ 0x328).d) << 6) + *(arg1 + 0x18)
                        *(*(arg1 + 0x2b18) + 8) = rcx_13
                        
                        if (rcx_13 != 0)
                            (*(*rcx_13 + 0x10))()
                        
                        int64_t* r8_2 = &var_80
                        var_b8.q = &rsi_3[3]
                        int64_t rdx_11 = *(rdi_2 + (sx.q(rdi_2[0xc1]) << 3) + 0x2d8)
                        
                        if (*(arg1 + 0x2b21) == 0)
                            result, zmm6, zmm7 =
                                sub_14262d530(rdi_2, rdx_11, r8_2, &rdi_2[0x8b], var_b8, &rsi_3[6])
                        else
                            result, zmm6, zmm7 = sub_142622f90(rdi_2, rdx_11, r8_2, &rdi_2[0x8b], 
                                var_b8, &rsi_3[6], *(arg1 + 0x2b18))
                        
                        if (result.b != 0)
                            *rsi_3 = rdi_2[0x8b]
                            rsi_3[1] = rdi_2[0x8c]
                            rsi_3[2] = rdi_2[0x8d]
                            int64_t var_78
                            *(rsi_3 + 0x28) = var_78
                            result = 0
                            rsi_3[0xc] = 0
                            rsi_3[0xe].b = 1
                            zmm1 = rsi_3[6] f- rsi_3[3]
                            zmm0 = rsi_3[8] f- rsi_3[5]
                            rsi_3[0xd] =
                                _mm_sqrt_ss(0, zmm0 * zmm0 + zmm1 * zmm1) * zmm7.d f/ rdi_2[0xa3]
                            *(rdi_2 + 0x327) = 2
                            rdi_2[0xc1] = 0
                            rdi_2[0x89] = 0
        
        i_1 += 1
        r13_1 += 8
    while (i_1 s< *(arg1 + 4))

return result
