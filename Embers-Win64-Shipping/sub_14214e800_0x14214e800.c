// 函数: sub_14214e800
// 地址: 0x14214e800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
int32_t result

if (sub_140d3c6e0(&arg1[8]) == 0)
    result = sub_142152790(arg1)
else
    int32_t result_1 = arg1[4].d
    result = *(arg1 + 0x14) + 1
    
    if (result_1 s<= result)
        result = result_1
    
    *(arg1 + 0x14) = result
    
    if (result s< result_1)
        if (arg1[0xe].d != 0)
            int64_t* rcx_1 = arg1[0xd]
            
            if (rcx_1 != 0 && (*(*rcx_1 + 0x28))(rcx_1) != 0)
                int64_t* rbx_1 = nullptr
                char var_40_1 = 0
                char var_28_1 = 0
                int64_t* rcx_2
                
                if (arg1[0xe].d == 0)
                    rcx_2 = nullptr
                else
                    rcx_2 = arg1[0xd]
                
                void* var_48
                (*(*rcx_2 + 0x48))(rcx_2, arg1, &var_48)
                
                if (var_40_1 != 0)
                    sub_140d3a3a0(&arg1[7], var_48)
                
                if (var_28_1 != 0)
                    int64_t* var_38
                    int32_t i_3
                    int32_t i_4
                    
                    if (&arg1[5] == &var_38)
                        i_3 = i_4
                        rbx_1 = var_38
                    else
                        int64_t* rdi_1 = arg1[5]
                        int32_t i_2 = arg1[6].d
                        
                        if (i_2 != 0)
                            int32_t i
                            
                            do
                                int64_t rcx_4 = *rdi_1
                                
                                if (rcx_4 != 0)
                                    sub_140a74f90(rcx_4)
                                
                                rdi_1 = &rdi_1[2]
                                i = i_2
                                i_2 -= 1
                            while (i != 1)
                            rdi_1 = arg1[5]
                        
                        if (rdi_1 != 0)
                            sub_140a74f90(rdi_1)
                        
                        i_3 = 0
                        arg1[5] = var_38
                        arg1[6].d = i_4
                        int32_t var_2c
                        *(arg1 + 0x34) = var_2c
                        i_4.q = 0
                        var_38 = nullptr
                    
                    if (var_28_1 != 0)
                        char var_28_2 = 0
                        
                        if (i_3 != 0)
                            int32_t i_1
                            
                            do
                                int64_t rcx_6 = *rbx_1
                                
                                if (rcx_6 != 0)
                                    sub_140a74f90(rcx_6)
                                
                                rbx_1 = &rbx_1[2]
                                i_1 = i_3
                                i_3 -= 1
                            while (i_1 != 1)
                            rbx_1 = var_38
                        
                        if (rbx_1 != 0)
                            sub_140a74f90(rbx_1)
        
        result = sub_142155de0(arg1)
        
        if (result.b == 0)
            result = sub_142152790(arg1)

__security_check_cookie(rax_1 ^ &var_68)
return result
