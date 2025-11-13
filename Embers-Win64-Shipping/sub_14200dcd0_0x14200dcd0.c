// 函数: sub_14200dcd0
// 地址: 0x14200dcd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
uint64_t result = __security_cookie ^ &var_108
uint64_t result_1 = result

if (*(arg1 + 0x48) != 0)
    int64_t* rdi_1 = *(arg1 + 0x40)
    
    if (rdi_1 != 0)
        result = 0
        bool z_1
        
        if (0 == rdi_1[1].d)
            rdi_1[1].d = 0
            z_1 = true
        else
            result = zx.q(rdi_1[1].d)
            z_1 = false
        
        if (not(z_1))
            bool z_3
            
            do
                bool z_2
                
                if (result.d == rdi_1[1].d)
                    rdi_1[1].d = (result + 1).d
                    z_2 = true
                else
                    result = zx.q(rdi_1[1].d)
                    z_2 = false
                
                if (z_2)
                    if (rdi_1 != 0)
                        int64_t* r10_1 = *(arg1 + 0x38)
                        
                        if (r10_1 != 0)
                            int64_t* rbx_1 = *(arg1 + 0x20)
                            int64_t var_b0
                            
                            if (rbx_1 == 0)
                                var_b0 = 0
                            else
                                int32_t rax_1 = 0
                                bool z_4
                                
                                if (0 == rbx_1[1].d)
                                    rbx_1[1].d = 0
                                    z_4 = true
                                else
                                    rax_1 = rbx_1[1].d
                                    z_4 = false
                                
                                if (z_4)
                                label_14200ddb5:
                                    rbx_1 = nullptr
                                    var_b0 = 0
                                else
                                    while (true)
                                        bool z_5
                                        
                                        if (rax_1 == rbx_1[1].d)
                                            rbx_1[1].d = rax_1 + 1
                                            z_5 = true
                                        else
                                            rbx_1[1].d
                                            z_5 = false
                                        
                                        if (z_5)
                                            break
                                        
                                        rax_1 = 0
                                        bool z_6
                                        
                                        if (0 == rbx_1[1].d)
                                            rbx_1[1].d = 0
                                            z_6 = true
                                        else
                                            rax_1 = rbx_1[1].d
                                            z_6 = false
                                        
                                        if (z_6)
                                            goto label_14200ddb5
                                    
                                    if (rbx_1 == 0)
                                        var_b0 = 0
                                    else
                                        int64_t rax_3 = *(arg1 + 0x18)
                                        
                                        if (rax_3 == 0)
                                            var_b0 = 0
                                        else
                                            var_b0 = rax_3 + 8
                            
                            if (rbx_1 != 0)
                                rbx_1[1].d += 1
                            
                            int64_t var_98
                            __builtin_memset(&var_98, 0, 0x2c)
                            int32_t var_64
                            __builtin_memset(&var_64, 0, 0x1c)
                            int64_t* var_c0_1 = &var_b0
                            int64_t var_c8_1 = arg6
                            int64_t var_d0_1 = arg5
                            int32_t var_6c_1 = 0x80
                            int32_t var_68_1 = 0xffffffff
                            int64_t var_d8_1 = arg4
                            int64_t var_e0_1 = arg3
                            int64_t* var_e8_1 = &var_98
                            (*(*r10_1 + 0x28))(r10_1, arg2)
                            int64_t var_50
                            var_50.d = 0
                            int64_t var_58
                            
                            if (var_58 != 0)
                                sub_140a74f90(var_58)
                            
                            sub_140597460(&var_98)
                            
                            if (rbx_1 != 0)
                                rbx_1[1].d -= 1
                                
                                if (rbx_1[1].d == 1)
                                    (**rbx_1)(rbx_1)
                                    int32_t rax_8 = *(rbx_1 + 0xc)
                                    *(rbx_1 + 0xc) -= 1
                                    
                                    if (rax_8 == 1)
                                        (*(*rbx_1 + 8))(rbx_1, 1)
                            
                            if (rbx_1 != 0)
                                rbx_1[1].d -= 1
                                
                                if (rbx_1[1].d == 1)
                                    (**rbx_1)(rbx_1)
                                    int32_t rax_12 = *(rbx_1 + 0xc)
                                    *(rbx_1 + 0xc) -= 1
                                    
                                    if (rax_12 == 1)
                                        (*(*rbx_1 + 8))(rbx_1, 1)
                        
                        result = zx.q(rdi_1[1].d)
                        rdi_1[1].d -= 1
                        
                        if (result.d == 1)
                            result = (**rdi_1)(rdi_1)
                            int32_t r14_1 = *(rdi_1 + 0xc)
                            *(rdi_1 + 0xc) -= 1
                            
                            if (r14_1 == 1)
                                result = (*(*rdi_1 + 8))(rdi_1, zx.q(r14_1))
                    
                    break
                
                result = 0
                
                if (0 == rdi_1[1].d)
                    rdi_1[1].d = 0
                    z_3 = true
                else
                    result = zx.q(rdi_1[1].d)
                    z_3 = false
            while (not(z_3))

__security_check_cookie(result_1 ^ &var_108)
return result
