// 函数: sub_140ec1fa0
// 地址: 0x140ec1fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_268
int64_t rax_1 = __security_cookie ^ &var_268
int64_t rbx_1 = *(*(arg1 + 0x3a8) + 0x80)
uint64_t result
result.b = (rbx_1 u>> 0x20).d != 0

if ((sub_140b5b8a0(rbx_1.d, 0) == 0 | result.b) == 0 || *(arg1 + 0x398) == 0)
    result.b = 0
else
    int64_t* rdi_1 = *(arg1 + 0x3a0)
    
    if (rdi_1 == 0)
        result.b = 0
    else
        result = zx.q(rdi_1[1].d)
        
        if (result.d s<= 0)
            result.b = 0
        else
            void* rsi_1 = nullptr
            
            if (rdi_1 != 0)
                if (result.d == 0)
                    rdi_1 = nullptr
                else
                    rdi_1[1].d = result.d + 1
                    rsi_1 = *(arg1 + 0x398)
            
            void* r14_1 = *(rsi_1 + 0x3a0)
            int64_t* rsi_2 = *(rsi_1 + 0x3a8)
            
            if (rsi_2 != 0)
                rsi_2[1].d += 1
                
                if (rsi_2 != 0)
                    rsi_2[1].d += 1
                    
                    if (rsi_2 != 0)
                        rsi_2[1].d -= 1
                        
                        if (rsi_2[1].d == 1)
                            (**rsi_2)(rsi_2)
                            int32_t temp4_1 = *(rsi_2 + 0xc)
                            *(rsi_2 + 0xc) -= 1
                            
                            if (temp4_1 == 1)
                                (*(*rsi_2 + 8))(rsi_2, 1)
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t temp1_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
            
            result = sub_140d3c6e0(r14_1 + 0x38)
            
            if (result == 0)
            label_140ec229e:
                
                if (rsi_2 != 0)
                    rsi_2[1].d -= 1
                    
                    if (rsi_2[1].d == 1)
                        (**rsi_2)(rsi_2)
                        int32_t temp5_1 = *(rsi_2 + 0xc)
                        *(rsi_2 + 0xc) -= 1
                        
                        if (temp5_1 == 1)
                            (*(*rsi_2 + 8))(rsi_2, 1)
                
                result.b = 1
            else
                int64_t r8_1 = *result
                int64_t var_240
                (*(r8_1 + 0x290))(result, &var_240, r8_1)
                int32_t var_238
                
                if (var_238 s<= 0)
                label_140ec228c:
                    int64_t rcx_28 = var_240
                    
                    if (rcx_28 != 0)
                        sub_140a74f90(rcx_28)
                    
                    goto label_140ec229e
                
                void var_228
                sub_140efecb0(&var_240, &var_228)
                int64_t rdx_3 = rbx_1
                void* rcx_9 = &var_228
                
                if (*(*(arg1 + 0x3a8) + 0x88) == 3)
                    goto label_140ec2192
                
                int64_t var_220
                int32_t var_214
                void var_210
                int64_t var_200
                int64_t var_1e0
                int64_t var_1d0
                int32_t var_1c4
                void var_1c0
                int64_t var_1b0
                int64_t var_190
                void var_180
                int64_t var_140
                int64_t var_130
                void var_120
                
                if (sub_140f010c0(rcx_9, rdx_3) != 2)
                    int32_t var_248
                    sub_140f00e90(&var_228, &var_248, rbx_1)
                    int32_t var_244
                    int32_t rcx_11
                    rcx_11.b = var_244 == 0
                    int64_t rax_13
                    
                    if ((rcx_11.b & sub_140b5b8a0(var_248, 0)) == 0)
                        rax_13 = var_248.q
                    else
                        void var_230
                        rax_13 = *(*(*result + 0x268))(result, &var_230, rbx_1)
                        var_248.q = rax_13
                    
                    int32_t rcx_13
                    rcx_13.b = sub_140b5b8a0(rax_13.d, 0) == 0
                    
                    if ((var_244 != 0 | rcx_13.b) == 0)
                        goto label_140ec21a4
                    
                    rdx_3 = var_248.q
                    rcx_9 = &var_228
                label_140ec2192:
                    
                    if (sub_140f02750(rcx_9, rdx_3) == 2)
                        goto label_140ec22cd
                    
                label_140ec21a4:
                    sub_140e98140(&var_120)
                    
                    if (var_130 != 0)
                        sub_140a74f90(var_130)
                    
                    int32_t var_138_1 = 0
                    
                    if (var_140 != 0)
                        sub_140a74f90(var_140)
                    
                    sub_140597460(&var_180)
                    int32_t var_188_1 = 0
                    
                    if (var_190 != 0)
                        sub_140a74f90(var_190)
                    
                    int32_t var_1c8_1 = 0
                    
                    if (var_1c4 != 0)
                        sub_1405c55e0(&var_1d0, 0)
                    
                    int32_t var_1a0_1 = 0xffffffff
                    int32_t var_19c_1 = 0
                    sub_14059a8e0(&var_1c0, 0)
                    
                    if (var_1b0 != 0)
                        sub_140a74f90(var_1b0)
                    
                    int64_t rcx_22 = var_1d0
                    
                    if (rcx_22 != 0)
                        sub_140a74f90(rcx_22)
                    
                    int32_t var_1d8_1 = 0
                    
                    if (var_1e0 != 0)
                        sub_140a74f90(var_1e0)
                    
                    int32_t var_218_1 = 0
                    
                    if (var_214 != 0)
                        sub_1405c55e0(&var_220, 0)
                    
                    int32_t var_1f0_1 = 0xffffffff
                    int32_t var_1ec_1 = 0
                    sub_14059a8e0(&var_210, 0)
                    
                    if (var_200 != 0)
                        sub_140a74f90(var_200)
                    
                    int64_t rcx_27 = var_220
                    
                    if (rcx_27 != 0)
                        sub_140a74f90(rcx_27)
                    
                    goto label_140ec228c
                
            label_140ec22cd:
                sub_140e98140(&var_120)
                
                if (var_130 != 0)
                    sub_140a74f90(var_130)
                
                int32_t var_138_2 = 0
                
                if (var_140 != 0)
                    sub_140a74f90(var_140)
                
                sub_140597460(&var_180)
                int32_t var_188_2 = 0
                
                if (var_190 != 0)
                    sub_140a74f90(var_190)
                
                int32_t var_1c8_2 = 0
                
                if (var_1c4 != 0)
                    sub_1405c55e0(&var_1d0, 0)
                
                int32_t var_1a0_2 = 0xffffffff
                int32_t var_19c_2 = 0
                sub_14059a8e0(&var_1c0, 0)
                
                if (var_1b0 != 0)
                    sub_140a74f90(var_1b0)
                
                int64_t rcx_39 = var_1d0
                
                if (rcx_39 != 0)
                    sub_140a74f90(rcx_39)
                
                int32_t var_1d8_2 = 0
                
                if (var_1e0 != 0)
                    sub_140a74f90(var_1e0)
                
                int32_t var_218_2 = 0
                
                if (var_214 != 0)
                    sub_1405c55e0(&var_220, 0)
                
                int32_t var_1f0_2 = 0xffffffff
                int32_t var_1ec_2 = 0
                sub_14059a8e0(&var_210, 0)
                
                if (var_200 != 0)
                    sub_140a74f90(var_200)
                
                int64_t rcx_44 = var_220
                
                if (rcx_44 != 0)
                    sub_140a74f90(rcx_44)
                
                int64_t rcx_45 = var_240
                
                if (rcx_45 != 0)
                    sub_140a74f90(rcx_45)
                
                if (rsi_2 != 0)
                    rsi_2[1].d -= 1
                    
                    if (rsi_2[1].d == 1)
                        (**rsi_2)(rsi_2)
                        int32_t temp7_1 = *(rsi_2 + 0xc)
                        *(rsi_2 + 0xc) -= 1
                        
                        if (temp7_1 == 1)
                            (*(*rsi_2 + 8))(rsi_2, 1)
                
                result.b = 0

__security_check_cookie(rax_1 ^ &var_268)
return result
