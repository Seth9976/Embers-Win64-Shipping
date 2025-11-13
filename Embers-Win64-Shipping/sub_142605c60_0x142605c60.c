// 函数: sub_142605c60
// 地址: 0x142605c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int32_t rbx_1 = 0x10
int32_t var_a4_1 = 0x10
uint64_t rax = data_143b50290(0x100, 1)
void* rcx = *(arg2 + 8)
int32_t i = 0
uint64_t r12_1 = rax
uint64_t var_b0 = rax
uint64_t j_1 = 0x10
int32_t i_1 = 0

if (*(rcx + 0x18) s> 0)
    void* r8 = nullptr
    int64_t r9 = 0
    void* var_a0_1 = nullptr
    int64_t var_70_1 = 0
    
    do
        int32_t r13_1 = 0
        int32_t* rdi_2 = *(arg2 + 0x10) + r9
        int32_t* var_78_1 = rdi_2
        rax = zx.q(*(rdi_2 + 0x1e))
        int32_t arg_10 = rax.d
        
        if (rax.d != 0)
            int32_t rcx_1 = arg_10
            rax = &rdi_2[1]
            uint64_t var_88_1 = rax
            
            do
                int16_t rax_1 = *(rax + 0xc)
                
                if (rax_1 s< 0)
                    uint32_t rbp_1 = zx.d(rax_1.b)
                    
                    if (arg4 == 0xffffffff || rbp_1 == arg4)
                        int64_t r8_1 = *(arg2 + 0x18)
                        int128_t* rax_5 = r8_1 + zx.q(*var_88_1) * 0xc
                        int128_t* rax_10 = r8_1
                            + zx.q(*(rdi_2 + (sx.q(mods.dp.d(sx.q(r13_1 + 1), arg_10)) << 1) + 4))
                            * 0xc
                        
                        if (rbx_1 s< 0)
                            if (rbx_1 == 0)
                                rbx_1 = 0
                                var_a4_1 = rbx_1
                            else if (rbx_1 s< 0)
                                rbx_1 = rbx_1 + 0x20 + ((0xffffffff - rbx_1) & 0xffffffe0)
                                var_a4_1 = rbx_1
                            
                            uint64_t rax_13 = data_143b50290(zx.q(rbx_1 << 4), 1)
                            
                            if (j_1.d != 0 && rax_13 != 0)
                                memcpy(rax_13, r12_1, j_1.d << 4)
                            
                            if (r12_1 != 0)
                                data_143b50298(r12_1)
                            
                            var_b0 = rax_13
                        
                        int128_t* rbx_5 = rax_5
                        int32_t j_2 = 0
                        float zmm6_1
                        float zmm7_1
                        float zmm8_1
                        zmm6_1, zmm7_1, zmm8_1 = sub_142609f90(arg1, rbx_5, rax_10, arg2, i_1, 
                            arg3, (rbp_1 - 4) & 7, &var_b0)
                        j_1 = zx.q(j_2)
                        int32_t j_3 = j_1.d
                        
                        if (j_1.d s> 0)
                            int64_t* rdi_4 = var_b0 + 8
                            uint64_t j
                            
                            do
                                int32_t r8_4 = arg2[1]
                                
                                if (r8_4 != 0xffffffff)
                                    int64_t rdx_4 = *(arg2 + 0x20)
                                    uint64_t rcx_9 = zx.q(r8_4) * 2
                                    arg2[1] = *(rdx_4 + (rcx_9 << 3) + 8)
                                    *(rdx_4 + (rcx_9 << 3)) = *rdi_4
                                    *(rdx_4 + (rcx_9 << 3) + 0xc) = r13_1.b
                                    *(rdx_4 + (rcx_9 << 3) + 0xd) = rbp_1.b
                                    *(rdx_4 + (rcx_9 << 3) + 8) = *var_78_1
                                    *var_78_1 = r8_4
                                    float zmm0_1
                                    float zmm1_1
                                    float zmm2_1
                                    float zmm3_1
                                    
                                    if (rbp_1 == 0 || rbp_1 == 4)
                                        zmm2_1 = *(rbx_5 + 8)
                                        zmm1_1 = zmm7_1 / (*(rax_10 + 8) - zmm2_1)
                                        zmm3_1 = (rdi_4[-1].d f- zmm2_1) * zmm1_1
                                        zmm0_1 = (*(rdi_4 - 4) - zmm2_1) * zmm1_1
                                        zmm2_1 = zmm0_1
                                        zmm0_1 = _mm_min_ss(zmm0_1, zmm3_1)
                                        zmm2_1 = _mm_max_ss(zmm2_1, zmm3_1)
                                        
                                        if (zmm0_1 >= zmm6_1)
                                        label_142605f73:
                                            zmm0_1 = _mm_min_ss(zmm0_1, zmm7_1)
                                            goto label_142605f83
                                        
                                        zmm0_1 = zmm6_1
                                    label_142605f83:
                                        *(rdx_4 + (rcx_9 << 3) + 0xe) = (int.d(zmm0_1 * zmm8_1)).b
                                        
                                        if (zmm2_1 >= zmm6_1)
                                            zmm2_1 = _mm_min_ss(zmm2_1, zmm7_1)
                                        else
                                            zmm2_1 = zmm6_1
                                        
                                        *(rdx_4 + (rcx_9 << 3) + 0xf) = (int.d(zmm2_1 * zmm8_1)).b
                                    else if (rbp_1 == 2 || rbp_1 == 6)
                                        zmm2_1 = *rbx_5
                                        zmm1_1 = zmm7_1 / (*rax_10 - zmm2_1)
                                        zmm3_1 = (rdi_4[-1].d f- zmm2_1) * zmm1_1
                                        zmm0_1 = (*(rdi_4 - 4) - zmm2_1) * zmm1_1
                                        zmm2_1 = zmm0_1
                                        zmm0_1 = _mm_min_ss(zmm0_1, zmm3_1)
                                        zmm2_1 = _mm_max_ss(zmm2_1, zmm3_1)
                                        
                                        if (zmm0_1 >= zmm6_1)
                                            goto label_142605f73
                                        
                                        zmm0_1 = zmm6_1
                                        goto label_142605f83
                                
                                if (arg5 != 0)
                                    int64_t r8_5 = *(arg2 + 0x78)
                                    uint64_t rdx_7 =
                                        zx.q((1 << (*(arg1 + 0xa0)).b).d - 1) & zx.q(*rdi_4)
                                    
                                    if (r8_5 != 0)
                                        int64_t rcx_11 = *(arg3 + 0x78)
                                        
                                        if (rcx_11 != 0 && i_1 s< *(*(arg2 + 8) + 0x3c)
                                                && rdx_7.d u< *(*(arg3 + 8) + 0x3c))
                                            int32_t var_c8_1
                                            var_c8_1.b = 1
                                            int32_t* var_d0_1
                                            var_d0_1.b = 1
                                            sub_142605ad0(arg1, arg2, zx.d(*(var_a0_1 + r8_5)), 
                                                arg3, zx.d(*(rcx_11 + (rdx_7 << 1))), 1, 1)
                                            var_c8_1.b = 1
                                            var_d0_1.b = 2
                                            sub_142605ad0(arg1, arg3, 
                                                zx.d(*(*(arg3 + 0x78) + (zx.q(rdx_7.d) << 1))), 
                                                arg2, zx.d(*(var_a0_1 + *(arg2 + 0x78))), 2, 1)
                                            rbx_5 = rax_5
                                
                                rdi_4 = &rdi_4[2]
                                j = j_1
                                j_1 -= 1
                            while (j != 1)
                            j_1 = zx.q(j_3)
                            rdi_2 = var_78_1
                        
                        rcx_1 = arg_10
                        r12_1 = var_b0
                        rbx_1 = var_a4_1
                
                r13_1 += 1
                rax = var_88_1 + 2
                var_88_1 = rax
            while (r13_1 s< rcx_1)
            
            rcx = *(arg2 + 8)
            i = i_1
            r8 = var_a0_1
            r9 = var_70_1
        
        i += 1
        r9 += 0x20
        r8 += 2
        i_1 = i
        var_70_1 = r9
        var_a0_1 = r8
    while (i s< *(rcx + 0x18))

if (r12_1 != 0)
    data_143b50298(r12_1, i)
