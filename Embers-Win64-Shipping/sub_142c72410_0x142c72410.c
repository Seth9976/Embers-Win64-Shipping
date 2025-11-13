// 函数: sub_142c72410
// 地址: 0x142c72410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_308
int64_t var_48 = __security_cookie ^ &var_308
int64_t result

if (sub_142898c70(arg3) s> 0)
    int32_t rbp_1 = 0
    
    if (sub_142898c70(arg3) s<= 0)
    label_142c725bd:
        result = 0
    else
        while (true)
            int64_t* rax_4 = sub_142898ea0(arg3, rbp_1)
            char var_248[0x200]
            char (* rdi_1)[0x200] = &var_248
            int64_t* rax_5 = sub_14289a500(&data_1434ea7b0)
            
            if (rax_5 == 0)
                result = 1
                break
            
            char var_2c8[0x80]
            sub_1428cddd0(&var_2c8, 0x80, sub_142891580(rax_4))
            int32_t rax_7
            int512_t zmm2_1
            rax_7, zmm2_1 = sub_142968230(rax_5, rax_4, 0, 0)
            
            if (rax_7 == 0)
                sub_14292ba90(rax_5, sub_1428e74e0(rax_4))
            
            int64_t* var_2d8
            sub_142899cf0(rax_5, 0x73, 0, &var_2d8)
            int64_t* rdx_3 = var_2d8
            int64_t rbx_2 = 0
            int64_t rax_9 = *rdx_3
            
            if (rax_9 != 0)
                do
                    char* rcx_9 = rdx_3[1]
                    void* const r9_2 = &data_1434cce10
                    
                    if (rcx_9[rbx_2] == 0xa)
                        r9_2 = &data_1436b3158
                        rbx_2 += 1
                    
                    if (rbx_2 u< rax_9)
                        while (rcx_9[rbx_2] == 0x20)
                            rbx_2 += 1
                            
                            if (rbx_2 u>= rax_9)
                                break
                        
                        if (rbx_2 u< rax_9)
                            int32_t var_2e8_1 = sx.d(rcx_9[rbx_2])
                            int32_t rax_11
                            rax_11, zmm2_1 =
                                sub_142c564b0(rdi_1, &var_48 - rdi_1, "%s%c", r9_2, zmm2_1)
                            rdx_3 = var_2d8
                            rdi_1 = &(*rdi_1)[sx.q(rax_11)]
                    
                    rax_9 = *rdx_3
                    rbx_2 += 1
                while (rbx_2 u< rax_9)
            
            sub_142c5b8d0(arg1, arg2, &var_2c8, &var_248, zmm2_1)
            sub_142899e70(rax_5)
            rbp_1 += 1
            
            if (rbp_1 s>= sub_142898c70(arg3))
                goto label_142c725bd
else
    result = 1

__security_check_cookie(var_48 ^ &var_308)
return result
