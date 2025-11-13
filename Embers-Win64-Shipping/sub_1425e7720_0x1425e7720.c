// 函数: sub_1425e7720
// 地址: 0x1425e7720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx
void* var_10 = rbx
int64_t* rdi = *(arg1 + 0x48)

if (rdi == 0)
    rbx.b = 0
else
    int32_t rax_1 = 0
    bool z_1
    
    if (0 == rdi[1].d)
        rdi[1].d = 0
        z_1 = true
    else
        rax_1 = rdi[1].d
        z_1 = false
    
    if (z_1)
    label_1425e7774:
        rdi = nullptr
        rbx.b = 0
    else
        while (true)
            bool z_2
            
            if (rax_1 == rdi[1].d)
                rdi[1].d = rax_1 + 1
                z_2 = true
            else
                rdi[1].d
                z_2 = false
            
            if (z_2)
                break
            
            rax_1 = 0
            bool z_3
            
            if (0 == rdi[1].d)
                rdi[1].d = 0
                z_3 = true
            else
                rax_1 = rdi[1].d
                z_3 = false
            
            if (z_3)
                goto label_1425e7774
        
        if (rdi == 0)
            rbx.b = 0
        else
            rbx = *(arg1 + 0x40)
            
            if (rbx == 0)
                rbx.b = 0
            else
                int64_t (* var_58_1)(void* arg1, int64_t* arg2, int64_t* arg3) = sub_1425e5b80
                uint64_t (* var_68_1)(void* arg1, int64_t arg2, int64_t* arg3) = sub_1425e59f0
                int32_t var_50_1 = 0
                int64_t (* var_78_1)(void* arg1, int64_t arg2, int64_t* arg3) = sub_1425e5950
                int32_t var_60_1 = 0
                int32_t var_70_1 = 0
                int64_t var_8c
                sub_140b58170(&var_8c, "FSessionService", 1)
                rdi[1].d += 1
                void* var_d8 = rbx
                *(rdi + 0xc) += 1
                int64_t var_9c_1 = var_8c
                char var_c8_1 = 0
                int64_t var_c0 = 0
                int32_t var_b8_1 = 0
                void**** var_b0 = nullptr
                int32_t var_a4_1 = 0
                char var_a0_1 = 0
                int64_t* rax_7 = sub_140a242a0()
                int64_t r8_3 = *rax_7
                int32_t var_94_1 = (*(r8_3 + 0x10))(rax_7, 0, r8_3)
                void*** rax_9 = j_sub_140a82f30(0x20)
                void*** rbx_2 = rax_9
                
                if (rax_9 == 0)
                    rbx_2 = nullptr
                else
                    rbx_2[1] = arg1 - 0x10
                    *rbx_2 = &data_143449c78
                    *(rbx_2 + 0x10) = var_78_1.o
                
                void*** rax_10 = j_sub_140a82f30(0x18)
                
                if (rax_10 == 0)
                    rax_10 = nullptr
                else
                    rax_10[1].d = 1
                    *rax_10 = &data_142d42e98
                    *(rax_10 + 0xc) = 1
                    rax_10[2] = rbx_2
                
                int32_t var_a8_1 = 1
                sub_1405a4f90(&var_b0)
                void**** r12_1 = var_b0
                *r12_1 = rbx_2
                r12_1[1] = rax_10
                int64_t var_100_2 = 0
                int64_t var_108_2 = 0
                void*** rax_13 = j_sub_140a82f30(0x20)
                void*** rbx_3 = rax_13
                
                if (rax_13 == 0)
                    rbx_3 = nullptr
                else
                    rbx_3[1] = arg1 - 0x10
                    *rbx_3 = &data_143449c88
                    *(rbx_3 + 0x10) = var_68_1.o
                
                void*** rax_14 = j_sub_140a82f30(0x18)
                
                if (rax_14 == 0)
                    rax_14 = nullptr
                else
                    rax_14[1].d = 1
                    *rax_14 = &data_142d42e98
                    *(rax_14 + 0xc) = 1
                    rax_14[2] = rbx_3
                
                int64_t rbx_4 = sx.q(var_a8_1)
                int32_t r13_1 = var_a4_1
                int32_t r15_1 = (rbx_4 + 1).d
                
                if (r15_1 s> r13_1)
                    sub_1405a4f90(&var_b0)
                    r13_1 = var_a4_1
                    r12_1 = var_b0
                
                int64_t rdx_7 = rbx_4 * 2
                r12_1[rdx_7] = rbx_3
                r12_1[rdx_7 + 1] = rax_14
                int64_t var_f0_2 = 0
                int64_t var_f8_2 = 0
                void*** rax_17 = j_sub_140a82f30(0x20)
                void*** rbx_5 = rax_17
                
                if (rax_17 == 0)
                    rbx_5 = nullptr
                else
                    rbx_5[1] = arg1 - 0x10
                    *rbx_5 = &data_143449c98
                    *(rbx_5 + 0x10) = var_58_1.o
                
                void*** rax_18 = j_sub_140a82f30(0x18)
                
                if (rax_18 != 0)
                    rax_18[1].d = 1
                    *rax_18 = &data_142d42e98
                    *(rax_18 + 0xc) = 1
                    rax_18[2] = rbx_5
                
                int32_t var_a8_3 = r15_1 + 1
                
                if (r15_1 + 1 s> r13_1)
                    sub_1405a4f90(&var_b0)
                    r12_1 = var_b0
                
                int64_t rcx_9 = sx.q(r15_1) * 2
                r12_1[rcx_9] = rbx_5
                r12_1[rcx_9 + 1] = rax_18
                int64_t var_e0_2 = 0
                int64_t var_e8_2 = 0
                int64_t var_118
                sub_141ffcd60(&var_d8, &var_118)
                int64_t* var_110
                
                if (arg1 + 0x50 != &var_118)
                    *(arg1 + 0x50) = var_118
                    var_118 = 0
                    sub_1405aeff0(arg1 + 0x58, &var_110)
                
                int64_t* rcx_12 = var_110
                
                if (rcx_12 != 0)
                    rcx_12[1].d -= 1
                    
                    if (rcx_12[1].d == 1)
                        int64_t* rbx_6 = var_110
                        (**rbx_6)(rbx_6)
                        int32_t rax_25 = *(rbx_6 + 0xc)
                        *(rbx_6 + 0xc) -= 1
                        
                        if (rax_25 == 1)
                            int64_t* rcx_14 = var_110
                            (*(*rcx_14 + 8))(rcx_14, 1)
                
                sub_140596e10(&var_b0)
                sub_140745b20(&var_c0)
                
                if (rdi != 0)
                    int32_t rax_27 = *(rdi + 0xc)
                    *(rdi + 0xc) -= 1
                    
                    if (rax_27 == 1)
                        (*(*rdi + 8))(rdi, 1)
                
                rdi[1].d -= 1
                
                if (rdi[1].d == 1)
                    (**rdi)(rdi)
                    int32_t rax_32 = *(rdi + 0xc)
                    *(rdi + 0xc) -= 1
                    
                    if (rax_32 == 1)
                        (*(*rdi + 8))(rdi, 1)
                
                rbx = *(arg1 + 0x50)
                
                if (rbx == 0)
                    rbx.b = 0
                else
                    int16_t arg_10 = 1
                    int16_t arg_20 = 1
                    int16_t arg_18 = 2
                    int16_t arg_22 = 2
                    int64_t var_84 = *(sub_1425e1d00() + 0x18)
                    sub_142010ae0(rbx, &var_84, &arg_20)
                    sub_140b19e60()
                    sub_140b0e310(&data_1439a8bd0, arg1 - 0x10)
                    rbx.b = 1

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rsi_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rsi_1 == 1)
            int64_t r8_2 = *rdi
            (*(r8_2 + 8))(rdi, zx.q(rsi_1), r8_2)

return zx.q(rbx.b)
