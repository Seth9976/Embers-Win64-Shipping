// 函数: sub_140aa4650
// 地址: 0x140aa4650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_140a80c80()

if (result.b != 0)
    int64_t* rcx = data_143db7a40
    
    if (rcx != 0)
        result = (*(*rcx + 8))(rcx)
    
    if (rcx == 0 || result.b != 0)
        result = EnterCriticalSection(&arg1[9])
        
        if (arg1[6].b == 0)
            int64_t rdi_1 = arg1[3]
            int64_t arg_18 = rdi_1
            arg1[6].b = 1
            
            if (arg1 != -0x48)
                LeaveCriticalSection(&arg1[9])
            
            int64_t* rbx_2 = arg1[1]
            int64_t rdx_2 = 0
            
            if (rbx_2 != 0)
                int32_t rax_2 = 0
                bool z_1
                
                if (0 == rbx_2[1].d)
                    rbx_2[1].d = 0
                    z_1 = true
                else
                    rax_2 = rbx_2[1].d
                    z_1 = false
                
                if (z_1)
                label_140aa4717:
                    rbx_2 = nullptr
                    rdi_1 = arg_18
                else
                    while (true)
                        bool z_2
                        
                        if (rax_2 == rbx_2[1].d)
                            rbx_2[1].d = rax_2 + 1
                            z_2 = true
                        else
                            rbx_2[1].d
                            z_2 = false
                        
                        if (z_2)
                            break
                        
                        rax_2 = 0
                        bool z_3
                        
                        if (0 == rbx_2[1].d)
                            rbx_2[1].d = 0
                            z_3 = true
                        else
                            rax_2 = rbx_2[1].d
                            z_3 = false
                        
                        if (z_3)
                            goto label_140aa4717
                    
                    rdi_1 = arg_18
                    
                    if (rbx_2 != 0)
                        rdx_2 = *arg1
                        *(rbx_2 + 0xc) += 1
                        rdi_1 = arg_18
            
            bool cond:0_1 = data_143db7a40 == 0
            void** const var_78 = &data_142e66868
            void** const* rcx_6 = &var_78
            void*** var_88_1 = nullptr
            int64_t (* var_98_1)(int64_t* arg1, int64_t* arg2, int64_t* arg3) = sub_140aa3c70
            int64_t var_70_1 = rdx_2
            int64_t* var_68_1 = rbx_2
            
            if (cond:0_1)
                int64_t arg_20 = rdi_1
                int64_t var_a8 = rdi_1
                result = var_98_1(sub_14059bf50(rcx_6), &var_a8, &arg_20)
            else
                int64_t (* var_58)(int64_t* arg1, int64_t* arg2, int64_t* arg3) = sub_140aa3c70
                int64_t var_48 = 0
                sub_140aa3c90(rcx_6, &var_48)
                int64_t* rcx_7 = data_143db7a40
                result = (*(*rcx_7 + 0x10))(rcx_7, rdi_1, &var_58)
            
            if (var_98_1 != 0)
                void** const* rcx_9 = &var_78
                
                if (var_88_1 != 0)
                    rcx_9 = var_88_1
                
                result = (*rcx_9)[2](rcx_9)
            
            if (rbx_2 != 0)
                result = rbx_2[1].d
                rbx_2[1].d -= 1
                
                if (result == 1)
                    result = (**rbx_2)(rbx_2)
                    int32_t rdi_2 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (rdi_2 == 1)
                        return (*(*rbx_2 + 8))(rbx_2, zx.q(rdi_2))
        else if (arg1 != -0x48)
            return LeaveCriticalSection(&arg1[9]) __tailcall

return result
