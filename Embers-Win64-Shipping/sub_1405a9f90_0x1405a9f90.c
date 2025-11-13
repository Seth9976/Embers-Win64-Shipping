// 函数: sub_1405a9f90
// 地址: 0x1405a9f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t result = __security_cookie ^ &var_b8
int64_t result_1 = result
int64_t rbx = sx.q(arg1[1].d)

if (rbx.d s> 0)
    int32_t rbp_1 = 0
    void* rcx = nullptr
    int64_t rdi_1 = *arg1
    void* var_58_1 = nullptr
    int32_t var_50_1 = rbx.d
    void var_98
    
    if (rbx.d != 0)
        sub_1405c4c60(&var_98, rbx.d, 0)
        void* rcx_2 = &var_98
        
        if (var_58_1 != 0)
            rcx_2 = var_58_1
        
        result = memcpy(rcx_2, rdi_1, (rbx << 4).d)
        rcx = var_58_1
    else
        int32_t var_4c_1 = 4
    
    while (true)
    label_1405aa030:
        
        if (rbp_1 s< 0)
            break
        
        if (rbp_1 s>= var_50_1)
            break
        
        void* rbx_1 = &var_98
        int64_t rsi_2 = sx.q(rbp_1) << 4
        
        if (rcx != 0)
            rbx_1 = rcx
        
        void* rbx_2 = rbx_1 + rsi_2
        int32_t rcx_3
        rcx_3.b = sub_140b5b8a0(*(rbx_2 + 8), 0) == 0
        
        if ((*(rbx_2 + 0xc) != 0 | rcx_3.b) != 0)
            void* rax_3 = sub_140d3c6e0(rbx_2)
            
            if (rax_3 != 0 && sub_140d1fd20(rax_3, *(rbx_2 + 8)) != 0)
                void* rdi_2 = &var_98
                
                if (var_58_1 != 0)
                    rdi_2 = var_58_1
                
                void* rdi_3 = rdi_2 + rsi_2
                int64_t* rax_6 = sub_140d3c6e0(rdi_3)
                int64_t rax_7 = sub_140d1fd30(rax_6, *(rdi_3 + 8))
                int64_t r9_1 = *rax_6
                result = (*(r9_1 + 0x210))(rax_6, rax_7, arg2, r9_1)
                rcx = var_58_1
                rbp_1 += 1
                continue
        
        void* rdi_4 = &var_98
        
        if (var_58_1 != 0)
            rdi_4 = var_58_1
        
        void* rdi_5 = rdi_4 + rsi_2
        int32_t rbx_4 = *(rdi_5 + 0xc)
        result = sub_140b5b8a0(*(rdi_5 + 8), 0)
        
        if ((rbx_4 == 0 & result.b) != 0)
        label_1405aa119:
            void* r15_1 = *arg1
            void* rdi_6 = &var_98
            rcx = var_58_1
            void* rbx_5 = r15_1
            
            if (rcx != 0)
                rdi_6 = rcx
            
            void* rdi_7 = rdi_6 + rsi_2
            void* rsi_5 = (sx.q(arg1[1].d) << 4) + r15_1
            
            if (r15_1 != rsi_5)
                while (true)
                    if (*rbx_5 != *rdi_7 || *(rbx_5 + 4) != *(rdi_7 + 4))
                        result = sub_140d3e110(rbx_5)
                        
                        if (result.b == 0)
                            result = sub_140d3e110(rdi_7)
                            
                            if (result.b == 0)
                                goto label_1405aa16d
                    else
                    label_1405aa16d:
                        result = *(rdi_7 + 8)
                        
                        if (*(rbx_5 + 8) == result)
                            int32_t rbx_7 = ((rbx_5 - r15_1) s>> 4).d
                            
                            if (rbx_7 != 0xffffffff)
                                int32_t rdx_6 = arg1[1].d
                                int32_t rcx_15 = rdx_6 - rbx_7 - 1
                                
                                if (rcx_15 s>= 1)
                                    rcx_15 = 1
                                
                                if (rcx_15 != 0)
                                    memcpy((sx.q(rbx_7) << 4) + *arg1, 
                                        (sx.q(rdx_6 - rcx_15) << 4) + *arg1, rcx_15 << 4)
                                    rdx_6 = arg1[1].d
                                
                                arg1[1].d = rdx_6 - 1
                                result = sub_1405a5010(arg1)
                            
                            break
                    
                    rbx_5 += 0x10
                    
                    if (rbx_5 == rsi_5)
                        rcx = var_58_1
                        rbp_1 += 1
                        goto label_1405aa030
                
                rcx = var_58_1
        else
            result = sub_140d3c740(rdi_5, 1)
            
            if (result == 0)
                goto label_1405aa119
            
            rcx = var_58_1
        
        rbp_1 += 1
    
    if (rcx != 0)
        result = sub_140a74f90(rcx)

__security_check_cookie(result_1 ^ &var_b8)
return result
