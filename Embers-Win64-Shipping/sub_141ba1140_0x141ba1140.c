// 函数: sub_141ba1140
// 地址: 0x141ba1140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
int64_t rax_1 = __security_cookie ^ &var_258
int64_t* rdi = arg2
void* result

if (arg2 == 0)
    result = nullptr
else
    void* rax_2 = sub_141c122a0()
    
    if (rax_2 == 0)
        result = nullptr
    else
        int64_t rax_3 = sx.q(*(rax_2 + 0x38))
        
        if (rax_3.d s> rdi[7].d || *(rdi[6] + (rax_3 << 3)) != rax_2 + 0x30)
            result = nullptr
        else if (arg1 != 0)
            void* rax_48 = sub_141c122a0()
            void* result_1
            
            if (rax_48 == 0)
            label_141ba160a:
                void* rax_60 = sub_141c122a0()
                int64_t rax_61
                
                if (rax_60 != 0)
                    rax_61 = sx.q(*(rax_60 + 0x38))
                
                if (rax_60 == 0 || rax_61.d s> rdi[7].d
                        || *(rdi[6] + (rax_61 << 3)) != rax_60 + 0x30)
                    rdi = nullptr
                
                result_1 = sub_140596910(arg1, rdi, arg3, 8, 0, 0, 0)
            else
                int64_t rax_49 = sx.q(*(rax_48 + 0x38))
                
                if (rax_49.d s> rdi[7].d || *(rdi[6] + (rax_49 << 3)) != rax_48 + 0x30)
                    goto label_141ba160a
                
                void* rax_51 = sub_141c1b420()
                void* rdx_9 = rdi[2]
                int64_t rax_52 = sx.q(*(rax_51 + 0x38))
                
                if (rax_52.d s> *(rdx_9 + 0x38)
                        || *(*(rdx_9 + 0x30) + (rax_52 << 3)) != rax_51 + 0x30
                        || ((rdi[0x66].d).b & 6) != 6)
                    goto label_141ba160a
                
                void* rax_56 = sub_141bb0d50(rdi)
                
                if (rax_56 == 0)
                    goto label_141ba160a
                
                void var_f8
                sub_140bd5c10(&var_f8, 0)
                void* rax_57 = sub_141c122a0()
                int64_t rcx_38
                
                if (rax_57 != 0)
                    rcx_38 = sx.q(*(rax_57 + 0x38))
                
                int64_t* rdx_11
                
                if (rax_57 == 0 || rcx_38.d s> rdi[7].d
                        || *(rdi[6] + (rcx_38 << 3)) != rax_57 + 0x30)
                    rdx_11 = nullptr
                else
                    rdx_11 = rdi
                
                result_1 = sub_140596910(arg1, rdx_11, arg3, 8, rax_56, 0, &var_f8)
                void var_90
                sub_1405ae080(&var_90)
                void var_e0
                sub_1405ae080(&var_e0)
                
                if (result_1 == 0)
                    goto label_141ba160a
            
            void var_180
            
            if (arg5 != 0)
                sub_141be56f0(result_1, sub_1420f36a0(&var_180, arg5, arg4))
            (*(*result_1 + 0x2c0))(result_1)
            result = result_1
        else
            void var_200
            sub_140b58170(&var_200, "PIE", (arg1 + 1).d)
            void* rax_5 = sub_141c122a0()
            int64_t rax_6
            
            if (rax_5 != 0)
                rax_6 = sx.q(*(rax_5 + 0x38))
            
            if (rax_5 == 0 || rax_6.d s> rdi[7].d || *(rdi[6] + (rax_6 << 3)) != rax_5 + 0x30)
                rdi = nullptr
            
            int64_t var_208 = rdi[3]
            void var_148
            int64_t* rax_9 = sub_140aae2b0(&var_148, &var_208)
            void var_1a8
            char* var_190
            char** rax_11 = sub_140a96390(&var_190, 
                _vfprintf_p_l(&var_1a8, Unable to create the widget {0}, no outer provided.", 
                &data_14306d0f0))
            int64_t rcx_6 = *rax_9
            int64_t* rcx_7 = rax_9[1]
            int32_t var_130_1 = 4
            
            if (rcx_7 != 0)
                rcx_7[1].d += 1
            
            int32_t rcx_8 = rax_9[2].d
            char var_108_1 = 1
            int32_t* var_218 = nullptr
            int32_t var_210_1 = 1
            sub_1405a4b40(&var_218, 1, 0)
            int32_t* rcx_10 = var_218
            *rcx_10 = var_130_1
            int64_t var_128
            *(rcx_10 + 8) = var_128
            *(rcx_10 + 8) = var_128
            rcx_10[2] = var_128.d
            *(rcx_10 + 8) = var_128
            rcx_10[0xa].b = 0
            
            if (var_108_1 != 0)
                *(rcx_10 + 0x10) = rcx_6
                *(rcx_10 + 0x18) = rcx_7
                
                if (rcx_7 != 0)
                    rcx_7[1].d += 1
                
                rcx_10[8] = rcx_8
                rcx_10[0xa].b = 1
            
            char* var_1e0 = *rax_11
            void* rax_19 = rax_11[1]
            void* var_1d8_1 = rax_19
            
            if (rax_19 != 0)
                *(rax_19 + 8) += 1
            
            void var_1c0
            int64_t* rax_20 = sub_140aac870(&var_1c0, &var_1e0, &var_218)
            int64_t var_1f8 = *rax_20
            int64_t* rcx_13 = rax_20[1]
            
            if (rcx_13 != 0)
                rcx_13[1].d += 1
            
            int32_t var_1e8_1 = rax_20[2].d
            int64_t* var_1b8
            
            if (var_1b8 != 0)
                var_1b8[1].d -= 1
                
                if (var_1b8[1].d == 1)
                    (**var_1b8)(var_1b8)
                    int32_t rax_24 = *(var_1b8 + 0xc)
                    *(var_1b8 + 0xc) -= 1
                    
                    if (rax_24 == 1)
                        (*(*var_1b8 + 8))(var_1b8, 1)
            
            sub_140596f50(&var_218)
            
            if (var_108_1 != 0)
                char var_108_2 = 0
                
                if (rcx_7 != 0)
                    rcx_7[1].d -= 1
                    
                    if (rcx_7[1].d == 1)
                        (**rcx_7)(rcx_7)
                        int32_t rax_28 = *(rcx_7 + 0xc)
                        *(rcx_7 + 0xc) -= 1
                        
                        if (rax_28 == 1)
                            (*(*rcx_7 + 8))(rcx_7, 1)
            
            int64_t* rdi_3 = rax_11[1]
            
            if (rdi_3 != 0)
                rdi_3[1].d -= 1
                
                if (rdi_3[1].d == 1)
                    (**rdi_3)(rdi_3)
                    int32_t rax_32 = *(rdi_3 + 0xc)
                    *(rdi_3 + 0xc) -= 1
                    
                    if (rax_32 == 1)
                        (*(*rdi_3 + 8))(rdi_3, 1)
            
            int64_t* rdi_4 = rax_9[1]
            
            if (rdi_4 != 0)
                rdi_4[1].d -= 1
                
                if (rdi_4[1].d == 1)
                    (**rdi_4)(rdi_4)
                    int32_t rax_36 = *(rdi_4 + 0xc)
                    *(rdi_4 + 0xc) -= 1
                    
                    if (rax_36 == 1)
                        (*(*rdi_4 + 8))(rdi_4, 1)
            
            void var_1d0
            void var_170
            sub_140ad3d20(sub_140accdf0(&var_170, &var_200), &var_1d0, &var_1f8)
            int64_t* var_1c8
            
            if (var_1c8 != 0)
                var_1c8[1].d -= 1
                
                if (var_1c8[1].d == 1)
                    (**var_1c8)(var_1c8)
                    int32_t temp2_1 = *(var_1c8 + 0xc)
                    *(var_1c8 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        (*(*var_1c8 + 8))(var_1c8, 1)
            
            sub_140acd9c0(&var_170)
            
            if (rcx_13 != 0)
                rcx_13[1].d -= 1
                
                if (rcx_13[1].d == 1)
                    (**rcx_13)(rcx_13)
                    int32_t rax_43 = *(rcx_13 + 0xc)
                    *(rcx_13 + 0xc) -= 1
                    
                    if (rax_43 == 1)
                        (*(*rcx_13 + 8))(rcx_13, 1)
            
            int64_t* var_1a0
            
            if (var_1a0 != 0)
                var_1a0[1].d -= 1
                
                if (var_1a0[1].d == 1)
                    (**var_1a0)(var_1a0)
                    int32_t rbx_1 = *(var_1a0 + 0xc)
                    *(var_1a0 + 0xc) -= 1
                    
                    if (rbx_1 == 1)
                        (*(*var_1a0 + 8))(var_1a0, zx.q(rbx_1))
            
            result = nullptr

__security_check_cookie(rax_1 ^ &var_258)
return result
