// 函数: sub_1425e5b90
// 地址: 0x1425e5b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_10 = 0
int32_t result = *(arg2 + 0x64) | *(arg2 + 0x60) | *(arg2 + 0x5c) | *(arg2 + 0x58)

if (result != 0)
    if (arg2[0x88] == 0)
        result = sub_1425e61f0(arg1, &arg2[0x78])
    
    if (arg2[0x88] != 0 || result.b != 0)
        int64_t* rdi_1 = *(arg1 + 0x38)
        
        if (rdi_1 != 0)
            result = 0
            bool z_1
            
            if (0 == rdi_1[1].d)
                rdi_1[1].d = 0
                z_1 = true
            else
                result = rdi_1[1].d
                z_1 = false
            
            if (not(z_1))
                while (true)
                    bool z_2
                    
                    if (result == rdi_1[1].d)
                        rdi_1[1].d = result + 1
                        z_2 = true
                    else
                        result = rdi_1[1].d
                        z_2 = false
                    
                    if (z_2)
                        break
                    
                    result = 0
                    bool z_3
                    
                    if (0 == rdi_1[1].d)
                        rdi_1[1].d = 0
                        z_3 = true
                    else
                        result = rdi_1[1].d
                        z_3 = false
                    
                    if (z_3)
                        return result
                
                if (rdi_1 != 0)
                    int64_t r14_1 = *(arg1 + 0x30)
                    
                    if (r14_1 != 0)
                        void** rax_4 = sub_1425e2eb0(arg1 + 0x70, sub_140a6b260(&arg2[0x58], 0x10), 
                            &arg2[0x58])
                        int64_t* rcx_3 = *rax_4
                        
                        if (rcx_3 == 0)
                            void*** rax_7 = j_sub_140a82f30(0xe8)
                            void*** rsi_1 = rax_7
                            
                            if (rax_7 == 0)
                                rsi_1 = nullptr
                            else
                                rdi_1[1].d += 1
                                void* rcx_6 = &rsi_1[5]
                                __builtin_memset(&rax_7[1], 0, 0x20)
                                *rsi_1 = &data_143449a28
                                *(rcx_6 + 0x1c) = 0x80
                                void* rax_8 = *(rcx_6 + 0x10)
                                
                                if (rax_8 != 0)
                                    rcx_6 = rax_8
                                
                                __builtin_memset(rcx_6, 0, 0x1c)
                                rsi_1[9].d = 0xffffffff
                                *(rsi_1 + 0x4c) = 0
                                rsi_1[0xb] = 0
                                rsi_1[0xc].d = 0
                                rsi_1[0xe] = r14_1
                                rsi_1[0xf] = rdi_1
                                *(rdi_1 + 0xc) += 1
                                arg_10 = 1
                                *(rsi_1 + 0x80) = *(arg2 + 0x58)
                                __builtin_memset(&rsi_1[0x12], 0, 0x20)
                                rsi_1[0x17] = 0
                                rsi_1[0x18] = 0
                                rsi_1[0x19] = 2
                                rsi_1[0x1a] = 0
                                rsi_1[0x1b] = 0
                                rsi_1[0x1c] = 2
                            
                            int64_t* rax_9 = j_sub_140a82f30(0x18)
                            int64_t* rbx_2 = rax_9
                            
                            if (rax_9 == 0)
                                rbx_2 = nullptr
                            else
                                rax_9[1].d = 1
                                *(rax_9 + 0xc) = 1
                                *rbx_2 = &data_14305dc20
                                rbx_2[2] = rsi_1
                            
                            void** r14_2 = &rsi_1[1]
                            
                            if (rsi_1 == 0)
                                r14_2 = nullptr
                            
                            if (r14_2 != 0)
                                void* rax_10
                                
                                if (*r14_2 != 0)
                                    rax_10 = r14_2[1]
                                
                                if (*r14_2 == 0 || rax_10 == 0 || *(rax_10 + 8) s<= 0)
                                    if (rbx_2 != 0)
                                        rbx_2[1].d += 1
                                    
                                    *r14_2 = rsi_1
                                    int64_t* rcx_7 = r14_2[1]
                                    
                                    if (rbx_2 != rcx_7)
                                        if (rbx_2 != 0)
                                            *(rbx_2 + 0xc) += 1
                                            rcx_7 = r14_2[1]
                                        
                                        if (rcx_7 != 0)
                                            int32_t temp7_1 = *(rcx_7 + 0xc)
                                            *(rcx_7 + 0xc) -= 1
                                            
                                            if (temp7_1 == 1)
                                                (*(*rcx_7 + 8))(rcx_7, 1)
                                        
                                        r14_2[1] = rbx_2
                                    
                                    if (rbx_2 != 0)
                                        rbx_2[1].d -= 1
                                        
                                        if (rbx_2[1].d == 1)
                                            (**rbx_2)(rbx_2)
                                            int32_t temp6_1 = *(rbx_2 + 0xc)
                                            *(rbx_2 + 0xc) -= 1
                                            
                                            if (temp6_1 == 1)
                                                (*(*rbx_2 + 8))(rbx_2, 1)
                            
                            void var_48
                            
                            if (rax_4 == &var_48)
                            label_1425e5ea1:
                                
                                if (rbx_2 != 0)
                                    rbx_2[1].d -= 1
                                    
                                    if (rbx_2[1].d == 1)
                                        (**rbx_2)(rbx_2)
                                        int32_t temp2_1 = *(rbx_2 + 0xc)
                                        *(rbx_2 + 0xc) -= 1
                                        
                                        if (temp2_1 == 1)
                                            (*(*rbx_2 + 8))(rbx_2, 1)
                            else
                                *rax_4 = rsi_1
                                int64_t* rsi_2 = rax_4[1]
                                
                                if (rbx_2 == rsi_2)
                                    goto label_1425e5ea1
                                
                                rax_4[1] = rbx_2
                                
                                if (rsi_2 != 0)
                                    rsi_2[1].d -= 1
                                    
                                    if (rsi_2[1].d == 1)
                                        (**rsi_2)(rsi_2)
                                        int32_t temp4_1 = *(rsi_2 + 0xc)
                                        *(rsi_2 + 0xc) -= 1
                                        
                                        if (temp4_1 == 1)
                                            (*(*rsi_2 + 8))(rsi_2, 1)
                            
                            if ((arg_10 & 1) != 0 && rdi_1 != 0)
                                rdi_1[1].d -= 1
                                
                                if (rdi_1[1].d == 1)
                                    (**rdi_1)(rdi_1)
                                    int32_t rax_19 = *(rdi_1 + 0xc)
                                    *(rdi_1 + 0xc) -= 1
                                    
                                    if (rax_19 == 1)
                                        (*(*rdi_1 + 8))(rdi_1, 1)
                            
                            int64_t* rcx_15 = *rax_4
                            int64_t (* var_58)(void* arg1, int64_t* arg2, int64_t arg3, 
                                int64_t arg4) = sub_1425e52b0
                            int32_t var_50_1 = 0
                            uint64_t* rax_22 = (*(*rcx_15 + 0x48))(rcx_15)
                            var_58.o = var_58.o
                            int64_t* var_70
                            int64_t* rax_23 = sub_1425e2b60(&var_70, arg1, &var_58)
                            
                            if (rax_23[1].d != 0 && *rax_23 != 0)
                                sub_140599630(rax_22, 1)
                                
                                if (rax_23[1].d != 0)
                                    int64_t* rcx_18 = *rax_23
                                    void var_78
                                    
                                    if (rcx_18 != 0)
                                        (*(*rcx_18 + 0x30))(rcx_18, &var_78)
                                
                                int64_t r14_3 = sx.q(rax_22[1].d)
                                int32_t rax_25 = (r14_3 + 1).d
                                rax_22[1].d = rax_25
                                
                                if (rax_25 s> *(rax_22 + 0xc))
                                    sub_1405a4f90(rax_22)
                                
                                int64_t rcx_22 = (r14_3 << 4) + *rax_22
                                *rcx_22 = 0
                                *rcx_22 = *rax_23
                                *rax_23 = 0
                                *(rcx_22 + 8) = rax_23[1].d
                                rax_23[1].d = 0
                            
                            int32_t var_68
                            int64_t* rax_29
                            
                            if (var_68 == 0)
                                rax_29 = var_70
                            label_1425e5ff2:
                                
                                if (rax_29 != 0)
                                    sub_140a74f90(rax_29)
                            else
                                int64_t* rcx_23 = var_70
                                
                                if (rcx_23 != 0)
                                    (*(*rcx_23 + 0x38))(rcx_23, 0)
                                    rax_29 = var_70
                                    
                                    if (rax_29 != 0)
                                        rax_29 = sub_140a84c80(rax_29, 0, 0)
                                        var_70 = rax_29
                                    
                                    int32_t var_68_1 = 0
                                    goto label_1425e5ff2
                            sub_1425e8330(*rax_4, arg2, arg3)
                            sub_140599090(arg1 + 0x130)
                        else
                            int64_t rdx_2 = *rcx_3
                            int16_t** rax_5 = (*(rdx_2 + 0x28))(rcx_3, rdx_2)
                            int16_t* const rcx_4 = &data_142d40450
                            int16_t* rdx_3
                            
                            if (*(arg2 + 0x80) == 0)
                                rdx_3 = &data_142d40450
                            else
                                rdx_3 = *(arg2 + 0x78)
                            
                            if (rax_5[1].d != 0)
                                rcx_4 = *rax_5
                            
                            int32_t rax_6 = sub_140a54510(rcx_4, rdx_3)
                            sub_1425e8330(*rax_4, arg2, arg3)
                            
                            if (rax_6 != 0)
                                sub_140599090(arg1 + 0x130)
                    
                    result = rdi_1[1].d
                    rdi_1[1].d -= 1
                    
                    if (result == 1)
                        result = (**rdi_1)(rdi_1)
                        int32_t rbp_1 = *(rdi_1 + 0xc)
                        *(rdi_1 + 0xc) -= 1
                        
                        if (rbp_1 == 1)
                            return (*(*rdi_1 + 8))(rdi_1, zx.q(rbp_1))

return result
