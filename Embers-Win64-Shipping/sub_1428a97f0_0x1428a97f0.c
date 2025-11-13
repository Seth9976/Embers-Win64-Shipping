// 函数: sub_1428a97f0
// 地址: 0x1428a97f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xf8)
void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int32_t result_1 = 0
int64_t r15 = sx.q(arg2)
int32_t result_2 = 0
char* r14 = arg1

if (arg1 != 0 && arg2 s> 0)
    *arg1 = 0

uint64_t result

if (arg3 == 0 || *(arg3 + 0x18) == 0)
    result = 0
else
    if (arg4 != 0)
        goto label_1428a99d3
    
    int32_t rax_2 = sub_1428a96d0(arg3)
    int64_t rdi_1 = sx.q(rax_2)
    
    if (rax_2 == 0)
        goto label_1428a99d3
    
    int32_t var_f8_1
    int64_t* rcx_2
    char* rbx_2
    
    if (rdi_1.d u> 0x4aa)
        rcx_2 = data_143fecad8
        
        if (rcx_2 == 0)
            goto label_1428a991a
        
        int32_t var_d8 = 3
        void var_b8
        void* var_d0_1 = &var_b8
        int32_t var_a8_1 = rdi_1.d
        int64_t* rax_3 = sub_1428a8d10(rcx_2, &var_d8)
        
        if (rax_3 == 0)
            var_f8_1 = 0x127
            goto label_1428a990e
        
        rbx_2 = *(rax_3[1] + 8)
        goto label_1428a98e7
    
    if (*(rdi_1 * 0x28 + 0x1434ed500) != 0)
        rbx_2 = (&data_1434ed4f8)[rdi_1 * 5]
    label_1428a98e7:
        
        if (rbx_2 == 0)
            goto label_1428a9913
        
    label_1428a9988:
        
        if (r14 != 0)
            sub_1428a7090(r14, rbx_2, r15)
        
        int64_t r12 = -1
        
        do
            r12 += 1
        while (rbx_2[r12] != 0)
        
        result = zx.q(r12.d)
    else
        var_f8_1 = 0x119
    label_1428a990e:
        sub_1428a5670(8, 0x66, 0x65, "crypto\objects\obj_dat.c", var_f8_1)
    label_1428a9913:
        rcx_2 = data_143fecad8
    label_1428a991a:
        int32_t var_f8_2
        void* rbx_3
        
        if (rdi_1.d u> 0x4aa)
            if (rcx_2 == 0)
                goto label_1428a99d3
            
            int32_t var_c8 = 3
            void var_90
            void* var_c0_1 = &var_90
            int32_t var_80_1 = rdi_1.d
            int64_t* rax_5 = sub_1428a8d10(rcx_2, &var_c8)
            
            if (rax_5 == 0)
                var_f8_2 = 0x10c
                goto label_1428a99ce
            
            rbx_3 = rax_5[1]
            goto label_1428a997d
        
        if (*(rdi_1 * 0x28 + 0x1434ed500) != 0)
            rbx_3 = &(&data_1434ed4f0)[rdi_1 * 5]
        label_1428a997d:
            rbx_2 = *rbx_3
            
            if (rbx_2 == 0)
                goto label_1428a99d3
            
            goto label_1428a9988
        
        var_f8_2 = 0xfe
    label_1428a99ce:
        sub_1428a5670(8, 0x68, 0x65, "crypto\objects\obj_dat.c", var_f8_2)
    label_1428a99d3:
        int32_t rax_6 = *(arg3 + 0x14)
        int64_t* rbp_1 = nullptr
        char* r13_1 = *(arg3 + 0x18)
        int32_t var_e0_1 = 1
        
        if (rax_6 s<= 0)
        label_1428a9c2a:
            sub_1428901a0(rbp_1)
            result = zx.q(result_1)
        else
            result_1 = -1
            
            while (true)
                int32_t rdi_2 = 0
                int32_t rsi_1 = 0
                
                while (true)
                    char rbx_4 = *r13_1
                    r13_1 = &r13_1[1]
                    
                    if (rax_6 == 1 && rbx_4 s< 0)
                        goto label_1428a9c2a
                    
                    if (rsi_1 == 0)
                        rdi_2 |= zx.d(rbx_4) & 0x7f
                    else if (sub_1428f4ee0(rbp_1, zx.q(rbx_4) & 0x7f) == 0)
                        goto label_1428a9c2a
                    
                    if (rbx_4 s>= 0)
                        if (var_e0_1 != 0)
                            var_e0_1 = 0
                            uint32_t rbx_5
                            
                            if (rdi_2 u< 0x50)
                                rbx_5 = rdi_2 u/ 0x28
                                rdi_2 += rbx_5 * 0xffffffd8
                            else
                                rbx_5 = 2
                                
                                if (rsi_1 == 0)
                                    rdi_2 -= 0x50
                                else if (sub_1428f53f0(rbp_1, 0x50) == 0)
                                    goto label_1428a9c2a
                            
                            if (r14 != 0 && r15.d s> 1)
                                rbx_5.b += 0x30
                                *r14 = rbx_5.b
                                r14 = &r14[1]
                                r15 = zx.q(r15.d - 1)
                                *r14 = 0
                            
                            result_2 += 1
                        
                        if (rsi_1 == 0)
                            char var_68[0x20]
                            sub_1428b7080(&var_68, 0x1a, ".%lu", zx.q(rdi_2))
                            int64_t rbx_8 = -1
                            
                            do
                                rbx_8 += 1
                            while (var_68[rbx_8] != 0)
                            
                            if (r14 != 0 && r15.d s> 0)
                                int64_t rdi_4 = sx.q(r15.d)
                                sub_1428a7090(r14, &var_68, rdi_4)
                                
                                if (rbx_8.d s<= r15.d)
                                    r14 = &r14[sx.q(rbx_8.d)]
                                    r15 = zx.q(r15.d - rbx_8.d)
                                else
                                    r14 = &r14[rdi_4]
                                    r15 = 0
                            
                            result_2 += rbx_8.d
                        else
                            char* rax_16 = sub_1428f5aa0(rbp_1)
                            
                            if (rax_16 == 0)
                                goto label_1428a9c2a
                            
                            int64_t rbx_7 = -1
                            
                            do
                                rbx_7 += 1
                            while (rax_16[rbx_7] != 0)
                            
                            if (r14 != 0)
                                if (r15.d s> 1)
                                    *r14 = 0x2e
                                    r14 = &r14[1]
                                    r15 = zx.q(r15.d - 1)
                                    *r14 = 0
                                
                                int64_t rsi_2 = sx.q(r15.d)
                                sub_1428a7090(r14, rax_16, rsi_2)
                                
                                if (rbx_7.d s<= r15.d)
                                    r14 = &r14[sx.q(rbx_7.d)]
                                    r15 = zx.q(r15.d - rbx_7.d)
                                else
                                    r14 = &r14[rsi_2]
                                    r15 = 0
                            
                            result_2 = result_2 + 1 + rbx_7.d
                            sub_1428a6780(rax_16)
                        
                        rax_6 -= 1
                        
                        if (rax_6 s> 0)
                            break
                        
                        result_1 = result_2
                        goto label_1428a9c2a
                    
                    if (rsi_1 == 0)
                        if (rdi_2 u<= 0x1ffffff)
                            rax_6 -= 1
                            rdi_2 <<= 7
                            continue
                        else
                            if (rbp_1 == 0)
                                int64_t* rax_11 = sub_142890500()
                                rbp_1 = rax_11
                                
                                if (rax_11 == 0)
                                    goto label_1428a9c2a
                            
                            if (sub_142890900(rbp_1, zx.q(rdi_2)) == 0)
                                goto label_1428a9c2a
                            
                            rsi_1 = 1
                    
                    if (sub_1428f5510(rbp_1, rbp_1, 7) == 0)
                        goto label_1428a9c2a
                    
                    rax_6 -= 1

__security_check_cookie(rax_1 ^ &var_118)
return result
