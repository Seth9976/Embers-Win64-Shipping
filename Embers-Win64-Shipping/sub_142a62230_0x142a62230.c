// 函数: sub_142a62230
// 地址: 0x142a62230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
char** rbx = nullptr
char** result_1 = arg3
char** result

if (arg4 == 0 || *arg4 s> 0)
    result = result_1
else if (arg1 != 0)
    uint64_t rdx = zx.q(*(arg1 + 0xac))
    uint32_t rcx_1 = rdx.d u>> 0x1c
    
    if (((rcx_1 - 2) & 0xfffffffc) != 0 || rcx_1 == 3)
        *arg4 = 0x11
    else
        int32_t rax_3 = sub_142a60720(&arg1[5], rdx.d, arg2)
        char* var_c8 = arg2
        int32_t rsi_1 = rax_3
        
        if (rax_3 != 0xffffffff)
            char** result_3
            result_3, rdx =
                sub_142a60bf0(&arg1[5], rsi_1, arg2, 0xffffffff, arg1[1], arg1, 0, result_1, arg4)
            result_1 = result_3
        else
            rdx = arg1[4]
            int16_t var_8c
            void* rcx_3 = &var_8c:1
            void* rdi_1 = arg1[1]
            int32_t r13_1 = arg1[0x15].d
            void* var_98 = &var_8c:1
            int32_t var_60_1 = 0
            void* var_d8 = nullptr
            uint64_t var_c0_1 = rdx
            int32_t var_90_1 = 0x28
            var_8c = 0
            
            while (true)
                void* rax_4 = *(rdi_1 + 0x10)
                
                if (rax_4 == 0)
                    if (rsi_1 == 0xffffffff)
                        result_1 = arg3
                        *arg4 = 2
                    else
                    label_142a62469:
                        char* r14_1 = *rdi_1
                        char* rcx_11 = r14_1
                        void* rax_14 = j_sub_142a46ef0() - r14_1
                        uint32_t i
                        uint32_t r8_4
                        
                        do
                            r8_4 = zx.d(*rcx_11)
                            i = zx.d(*(rcx_11 + rax_14))
                            
                            if (r8_4 != i)
                                break
                            
                            rcx_11 = &rcx_11[1]
                        while (i != 0)
                        
                        if (r8_4 - i == 0)
                        label_142a624b6:
                            *arg4 = 0xffffff81
                        else
                            int64_t rcx_12 = 0
                            
                            while (true)
                                char rax_15 = r14_1[rcx_12]
                                rcx_12 += 1
                                
                                if (rax_15 != *(rcx_12 + 0x143613e9b))
                                    *arg4 = 0xffffff80
                                    break
                                
                                if (rcx_12 == 5)
                                    goto label_142a624b6
                        
                        char** result_2
                        result_2, rdx = sub_142a60bf0(rdi_1 + 0x28, rsi_1, arg2, 0xffffffff, rdi_1, 
                            arg1, 0, arg3, arg4)
                        rcx_3 = var_98
                        result_1 = result_2
                    
                    if (var_8c.b == 0)
                        break
                    
                    sub_142a7dcd0(rcx_3)
                    break
                
                rdi_1 = rax_4
                int32_t r15 = *(rax_4 + 0x48)
                
                if (*(rax_4 + 0x70) == 0)
                    int32_t var_60_2 = 0
                    *rcx_3 = 0
                    
                    if (r13_1 s> 0)
                        sub_142a8cbd0(&var_98, rdx, r13_1, arg4)
                    
                    void var_a8
                    uint128_t zmm1_1 = *sub_142a85330(&var_a8, arg2)
                    sub_142a8cbd0(&var_98, zmm1_1.q, _mm_bsrli_si128(zmm1_1, 8).d, arg4)
                    
                    if (*arg4 s> 0)
                        sub_142a61820(rbx, 1)
                        
                        if (var_8c.b != 0)
                            sub_142a7dcd0(var_98)
                        
                        result = arg3
                        goto label_142a6257f
                    
                    var_d8 = var_98
                    var_c8 = arg2
                    
                    do
                        int32_t rax_7 = sub_142ac3730(rdi_1 + 0x28, r15, &var_d8, &var_c8)
                        rsi_1 = rax_7
                        
                        if ((rax_7 & 0xf0000000) == 0x30000000)
                            if (*var_d8 == 0)
                                break
                            
                            char** rax_10 = sub_142a60bf0(rdi_1 + 0x28, rsi_1, nullptr, 0xffffffff, 
                                rdi_1, arg1, 0, rbx, arg4)
                            rbx = rax_10
                            
                            if (rax_10 == 0)
                                break
                            
                            rdi_1 = rax_10[1]
                            r15 = *(rax_10 + 0xac)
                            r13_1 = rbx[0x15].d
                            var_c0_1 = rax_10[4]
                    while (*var_d8 != 0)
                    
                    rcx_3 = var_98
                    rdx = var_c0_1
                
                if (rsi_1 == 0xffffffff)
                    continue
                
                goto label_142a62469
    
    rdx.b = 1
    sub_142a61820(rbx, rdx.b)
    result = result_1
else
    *arg4 = 1
    result = result_1

label_142a6257f:
__security_check_cookie(rax_1 ^ &var_128)
return result
