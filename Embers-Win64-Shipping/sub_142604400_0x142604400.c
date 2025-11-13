// 函数: sub_142604400
// 地址: 0x142604400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s<= 0)
    return 

void var_108
int64_t rax_2 = __security_cookie ^ &var_108
int128_t zmm6 = arg4
int64_t r13_1 = 0
int128_t zmm7 = 0x3f800000
int64_t var_98_1 = arg2
int64_t var_a0_1 = sx.q(arg3)

do
    int32_t* rdi_1 = *(arg2 + (r13_1 << 3))
    int64_t rax
    rax.b = 0
    char var_c8_1 = 0
    int64_t zmm0
    
    if (*(rdi_1 + 0x327) == 0)
        zmm0.d = zmm6.q.d f+ rdi_1[0xc2]
        rdi_1[0xc2] = zmm0.d
        
        if (not(zmm0.d f<= arg1[0xac1]))
            int64_t* rcx = *(rdi_1 + 0x270)
            *(*(arg1 + 0x2b18) + 8) = rcx
            
            if (rcx != 0)
                (*(*rcx + 0x10))()
            
            int64_t var_a8
            int32_t var_70[0x4]
            rax, zmm6, zmm7 = sub_14260acd0(*(arg1 + 0x2b18), &rdi_1[0x8b], &arg1[0x1b5], 
                &arg1[0x1b8 + zx.q(*(rdi_1 + 0x2af)) * 0x88], &var_a8, &var_70, nullptr)
            int64_t rdx_1 = var_a8
            
            if (rdx_1 != 0)
                *(rdi_1 + 0x327) = 1
                rdi_1[0xc2] = 0
                sub_142633800(rdi_1, rdx_1, &var_70)
                sub_1426337c0(&rdi_1[0x16])
                rax.b = 1
                var_c8_1 = 1
    
    if (*(rdi_1 + 0x327) == 1)
        rax = zx.q(*(rdi_1 + 0x325))
        
        if (rax.b != 0 && rax.b != 6)
            zmm0.d = zmm6.q.d f+ rdi_1[0xc2]
            rdi_1[0xc2] = zmm0.d
            int32_t r14_3 = ((rdi_1 - *(arg1 + 8)) s/ 0x328).d
            int64_t r15_1
            
            if (rdi_1[0x14] == 0)
                r15_1 = 0
            else
                r15_1 = **(rdi_1 + 0x48)
            
            void* rax_10 = *(arg1 + 0x2b18)
            int32_t var_80 = rdi_1[0x8b].d
            int32_t zmm1 = rdi_1[0x8c]
            int32_t var_78_1 = rdi_1[0x8d].d
            int64_t* rcx_7 = *(rdi_1 + 0x270)
            *(rax_10 + 8) = rcx_7
            
            if (rcx_7 != 0)
                (*(*rcx_7 + 0x10))()
            
            void* rbx_1
            
            if (sub_142612750(*(arg1 + 0x2b18), r15_1, &arg1[0x1b8 + zx.q(*(rdi_1 + 0x2af)) * 0x88])
                    != 0)
                rbx_1 = zx.q(var_c8_1)
            label_1426046f0:
                
                if (*(rdi_1 + 0x325) u>= 2)
                    if (sub_142612750(*(arg1 + 0x2b18), *(rdi_1 + 0x318), 
                            &arg1[0x1b8 + zx.q(*(rdi_1 + 0x2af)) * 0x88]) == 0)
                        int32_t var_b8
                        zmm6, zmm7 = sub_14260acd0(*(arg1 + 0x2b18), &rdi_1[0xc3], &arg1[0x1b5], 
                            &arg1[0x1b8 + zx.q(*(rdi_1 + 0x2af)) * 0x88], &rdi_1[0xc6], &var_b8, 
                            nullptr)
                        rdi_1[0xc3] = var_b8
                        int32_t var_b0
                        rdi_1[0xc5] = var_b0
                        int32_t var_b4
                        rdi_1[0xc4] = var_b4
                        rbx_1.b = 1
                    
                    if (*(rdi_1 + 0x318) == 0)
                        sub_142633800(rdi_1, r15_1, &var_80)
                        *(rdi_1 + 0x325) = 0
                
                rax = sub_14262d0e0(rdi_1, 0xa, *(arg1 + 0x2b18), 
                    &arg1[0x1b8 + zx.q(*(rdi_1 + 0x2af)) * 0x88])
                char r9_9 = *(rdi_1 + 0x325)
                char r8_11 = rbx_1.b
                
                if (rax.b == 0)
                    r8_11 = 1
                
                if (r9_9 == 2 && not(zmm7.d f>= rdi_1[0xc2]))
                    rax = sx.q(rdi_1[0x14])
                    
                    if (rax.d s>= 0xa)
                        goto label_14260482a
                    
                    int64_t rdx_9
                    
                    if (rax.d == 0)
                        rdx_9 = 0
                    else
                        rdx_9 = *(*(rdi_1 + 0x48) + (rax << 3) - 8)
                    
                    if (rdx_9 != *(rdi_1 + 0x318))
                        goto label_142604834
                
            label_14260482a:
                
                if (r8_11 != 0 && r9_9 != 0)
                label_142604834:
                    
                    if (r14_3 s>= 0 && r14_3 s<= *arg1)
                        void* rcx_24 = sx.q(r14_3) * 0x328 + *(arg1 + 8)
                        *(rcx_24 + 0x318) = *(rdi_1 + 0x318)
                        *(rcx_24 + 0x30c) = rdi_1[0xc3]
                        *(rcx_24 + 0x310) = rdi_1[0xc4]
                        *(rcx_24 + 0x314) = rdi_1[0xc5]
                        rax = 1
                        bool cond:1_1 = *(rcx_24 + 0x318) != 0
                        *(rcx_24 + 0x320) = 0
                        
                        if (cond:1_1)
                            rax = 3
                        
                        *(rcx_24 + 0x324) = 1
                        *(rcx_24 + 0x325) = rax.b
            else
                int128_t* var_d8_2 = nullptr
                int64_t var_90
                int32_t* var_e0_2 = &var_90
                int64_t* r9_4 = &arg1[0x1b8 + zx.q(*(rdi_1 + 0x2af)) * 0x88]
                int64_t* rcx_11 = *(arg1 + 0x2b18)
                int64_t var_c0 = 0
                zmm6, zmm7 = sub_14260acd0(rcx_11, &rdi_1[0x8b], &arg1[0x1b5], r9_4, &var_c0, 
                    var_e0_2, var_d8_2)
                r15_1 = var_c0
                int32_t* r8_5 = &var_80
                var_80.q = var_90
                
                if (r15_1 != 0)
                    sub_14262b250(rdi_1, r15_1, r8_5)
                    sub_1426337c0(&rdi_1[0x16])
                    rdi_1[0x8b] = var_80.d
                    rdi_1[0x8c] = zmm1
                    int32_t var_88
                    rdi_1[0x8d] = var_88.d
                    rbx_1.b = 1
                    goto label_1426046f0
                
                sub_142633800(rdi_1, 0, r8_5)
                sub_1426337c0(&rdi_1[0x16])
                *(rdi_1 + 0x327) = r15_1.b
                rdi_1[0xc2] = r15_1.d
    
    arg2 = var_98_1
    r13_1 += 1
while (r13_1 s< var_a0_1)

__security_check_cookie(rax_2 ^ &var_108)
