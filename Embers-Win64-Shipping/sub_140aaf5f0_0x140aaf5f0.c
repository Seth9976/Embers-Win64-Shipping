// 函数: sub_140aaf5f0
// 地址: 0x140aaf5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_140aa4810(arg1)

if (*(arg1 + 0x90) == 2)
    result = sx.q(*(arg1 + 0x70))
    int32_t* rbx_1 = *(arg1 + 0x68)
    void* r13_2 = result * 0x58 + rbx_1
    
    if (rbx_1 != r13_2)
        int32_t r14_1 = 0
        
        do
            sub_140ab2440()
            void* rax_2 = &rbx_1[6]
            
            if (((data_143db9f44 ^ rbx_1[3]) | (data_143db9f3c ^ rbx_1[1])
                    | (data_143db9f40 ^ rbx_1[2]) | (*rbx_1 ^ data_143db9f38)) != 0)
                rax_2 = nullptr
            
            void* arg_8 = rax_2
            
            if (rax_2 == 0)
                sub_140ab23c0()
                result = zx.q(data_143db9f50) ^ zx.q(*rbx_1)
                void* rcx_13 = &rbx_1[6]
                
                if (((data_143db9f5c ^ rbx_1[3]) | (data_143db9f54 ^ rbx_1[1])
                        | (data_143db9f58 ^ rbx_1[2]) | result.d) != 0)
                    rcx_13 = nullptr
                
                if (rcx_13 != 0)
                    int64_t* rcx_14 = *(rcx_13 + 0x10)
                    result = (*(*rcx_14 + 0x18))(rcx_14, arg2)
            else
                result = sub_140a92a30(arg2, &arg_8)
                
                if (result == 0)
                    void* rax_3 = arg_8
                    int64_t rbp_1 = 0
                    int64_t var_38 = 0
                    int32_t rdi_1 = 0
                    int64_t var_30_1 = 0
                    int16_t* r12_1 = *rax_3
                    int32_t r15_1 = *(rax_3 + 8)
                    
                    if (r12_1 != 0 && *r12_1 != 0 && r15_1 s> 0)
                        if (r15_1 + 1 s> 0)
                            sub_1405947f0(&var_38, r15_1 + 1)
                            r14_1 = var_30_1:4.d
                            rdi_1 = var_30_1.d
                            rbp_1 = var_38
                        
                        rdi_1 += r15_1 + 1
                        var_30_1.d = rdi_1
                        
                        if (rdi_1 s> r14_1)
                            sub_140594770(&var_38)
                            r14_1 = var_30_1:4.d
                            rdi_1 = var_30_1.d
                            rbp_1 = var_38
                        
                        UnDecorator::getReferenceType(rbp_1, r12_1, r15_1 * 2)
                        *(rbp_1 + (sx.q(rdi_1) << 1) - 2) = 0
                    
                    int64_t r15_2 = sx.q(arg2[1].d)
                    int32_t rax_5 = (r15_2 + 1).d
                    arg2[1].d = rax_5
                    
                    if (rax_5 s> *(arg2 + 0xc))
                        sub_1405a4f90(arg2)
                    
                    var_38 = 0
                    result = (r15_2 << 4) + *arg2
                    *result = rbp_1
                    *(result + 0xc) = r14_1
                    r14_1 = 0
                    int64_t var_30_2 = 0
                    *(result + 8) = rdi_1
            
            rbx_1 = &rbx_1[0x16]
        while (rbx_1 != r13_2)

return result
