// 函数: sub_140daa2e0
// 地址: 0x140daa2e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x80) == 0)
    int64_t var_38
    pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_38)
    int32_t var_30
    
    if (var_30 s> 0)
        int64_t var_48
        int64_t* rax_1 = sub_140b13bc0(&var_48)
        void* rsi_1 = nullptr
        int32_t rdx = rax_1[1].d
        int32_t rdx_1 = neg.d(rdx)
        int16_t* var_68 = *rax_1
        *rax_1 = 0
        int32_t rcx_3 = rax_1[1].d
        int32_t rcx_4 = *(rax_1 + 0xc)
        rax_1[1] = 0
        int32_t rdx_4 = sbb.d(rdx_1, rdx_1, rdx != 0) + 0x17 + rcx_3
        
        if (rdx_4 s> rcx_4)
            sub_1405947f0(&var_68, rdx_4)
        
        sub_140a2cf70(&var_68, u"DefaultSystemFont.ttf", 0x15)
        int64_t rcx_7 = var_48
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        int16_t* const rbx_1 = &data_142d40450
        var_48 = var_38
        
        if (rcx_3 != 0)
            rbx_1 = var_68
        
        int32_t var_40_1 = var_30
        var_48.o = var_48.o
        sub_140a464c0()
        
        if (sub_140b27070(&var_48, rbx_1, &data_14399ea08, 0) != 0)
            void*** rax_5 = j_sub_140a82f30(0x58)
            void*** rbx_2 = rax_5
            
            if (rax_5 == 0)
                rbx_2 = nullptr
            else
                rax_5[1].d = 1
                *(rax_5 + 0xc) = 1
                *rbx_2 = &data_142ec7ab8
                int16_t* r13_1 = var_68
                int64_t arg_8 = 0
                var_48 = 0
                int32_t var_40_2 = rcx_3
                
                if (rcx_3 != 0)
                    sub_1405a4c70(&var_48, rcx_3, 0)
                    memcpy(var_48, r13_1, rcx_3 * 2)
                else
                    int32_t var_3c_1 = 0
                
                sub_140d94140(&rbx_2[2], &arg_8, &var_48, 0, 0)
            
            if (rbx_2 != -0x10)
                rsi_1 = &rbx_2[4]
            
            void*** rbx_3 = rbx_2
            void*** rdi_2 = rbx_3
            
            if (rbx_3 != 0)
                rbx_3[1].d += 1
                rbx_3 = rbx_2
            
            if (arg1 + 0x80 == &var_48)
            label_140daa4f1:
                
                if (rdi_2 != 0)
                    rdi_2[1].d -= 1
                    
                    if (rdi_2[1].d != 1)
                        rbx_3 = rbx_2
                    else
                        (**rdi_2)(rdi_2)
                        int32_t temp3_1 = *(rdi_2 + 0xc)
                        *(rdi_2 + 0xc) -= 1
                        
                        if (temp3_1 != 1)
                            rbx_3 = rbx_2
                        else
                            (*rdi_2)[1](rdi_2, 1)
                            rbx_3 = rbx_2
            else
                *(arg1 + 0x80) = rsi_1
                void*** rsi_2 = *(arg1 + 0x88)
                
                if (rdi_2 == rsi_2)
                    goto label_140daa4f1
                
                *(arg1 + 0x88) = rdi_2
                
                if (rsi_2 != 0)
                    rsi_2[1].d -= 1
                    
                    if (rsi_2[1].d != 1)
                        rbx_3 = rbx_2
                    else
                        (**rsi_2)(rsi_2)
                        int32_t temp6_1 = *(rsi_2 + 0xc)
                        *(rsi_2 + 0xc) -= 1
                        
                        if (temp6_1 != 1)
                            rbx_3 = rbx_2
                        else
                            (*rsi_2)[1](rsi_2, 1)
                            rbx_3 = rbx_2
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    (**rbx_3)(rbx_3)
                    int32_t temp5_1 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        (*rbx_3)[1](rbx_3, 1)
        
        int16_t* rcx_17 = var_68
        
        if (rcx_17 != 0)
            sub_140a74f90(rcx_17)
    
    int64_t rcx_18 = var_38
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)

*arg2 = *(arg1 + 0x80)
void* rax_13 = *(arg1 + 0x88)
arg2[1] = rax_13

if (rax_13 != 0)
    *(rax_13 + 8) += 1

return arg2
