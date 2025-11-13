// 函数: sub_140e58e80
// 地址: 0x140e58e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2b8
uint64_t result = __security_cookie ^ &var_2b8
uint64_t result_1 = result

if (arg1[0x2e].b != 0 && arg1[0x67] != 0)
    int64_t* rbx_1 = arg1[0x68]
    
    if (rbx_1 != 0)
        result = zx.q(rbx_1[1].d)
        
        if (result.d s> 0)
            void* r14_1 = nullptr
            
            if (rbx_1 != 0)
                if (result.d != 0)
                    rbx_1[1].d = result.d + 1
                    result.b = 1
                
                if (result.b == 0)
                    rbx_1 = nullptr
                
                if (rbx_1 != 0)
                    r14_1 = arg1[0x67]
            
            void var_188
            sub_140d947e0(&var_188)
            void* var_288 = r14_1
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            if (sub_140da1990(&arg1[0x30], &var_288, &var_188, data_1439ae521, arg2) != 0)
                sub_140db22a0(&var_188, &var_288)
                void var_260
                int64_t* rcx_4 = *sub_140e152a0(var_288, &var_260)
                (*(*rcx_4 + 0x90))(rcx_4)
                int64_t* var_258
                
                if (var_258 != 0)
                    var_258[1].d -= 1
                    
                    if (var_258[1].d == 1)
                        (**var_258)(var_258)
                        int32_t temp4_1 = *(var_258 + 0xc)
                        *(var_258 + 0xc) -= 1
                        
                        if (temp4_1 == 1)
                            (*(*var_258 + 8))(var_258, 1)
                
                void* rax_6 = var_288
                
                if (rbx_1 != 0)
                    rbx_1[1].d += 1
                
                int32_t var_278 = 0
                void* var_270_1 = rax_6
                
                if (rbx_1 != 0)
                    rbx_1[1].d += 1
                    
                    if (rbx_1 != 0)
                        rbx_1[1].d -= 1
                        
                        if (rbx_1[1].d == 1)
                            (**rbx_1)(rbx_1)
                            int32_t temp8_1 = *(rbx_1 + 0xc)
                            *(rbx_1 + 0xc) -= 1
                            
                            if (temp8_1 == 1)
                                (*(*rbx_1 + 8))(rbx_1, 1)
                
                char var_248
                sub_140f872f0(r14_1, &var_248, &var_278)
                
                if (var_248 != 0)
                    MRECmpImpl::FPushFile(arg1, &var_188, &var_248, nullptr, nullptr, 0)
                
                sub_140597700(&var_248)
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t temp10_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp10_1 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t temp11_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp11_1 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
            
            void var_38
            sub_140596d80(&var_38)
            int64_t* var_40
            
            if (var_40 != 0)
                var_40[1].d -= 1
                
                if (var_40[1].d == 1)
                    (**var_40)(var_40)
                    int32_t temp3_1 = *(var_40 + 0xc)
                    *(var_40 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*var_40 + 8))(var_40, 1)
            
            void var_180
            result = sub_140d94d20(&var_180)
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    result = (**rbx_1)(rbx_1)
                    int32_t temp5_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        result = (*(*rbx_1 + 8))(rbx_1, 1)

__security_check_cookie(result_1 ^ &var_2b8)
return result
