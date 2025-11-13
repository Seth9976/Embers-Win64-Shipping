// 函数: sub_140923670
// 地址: 0x140923670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
char r13 = 0
int32_t result_1 = -1
int64_t rax_1
int64_t r8
rax_1, r8 = (*(*arg1 + 0x20))(arg1, arg3)
int32_t result

if (rax_1 != 0)
label_140923bef:
    r8.b = result_1 == 0
    (*(*arg1 + 0x68))(arg1, arg3, r8)
    
    if (result_1 == 0)
        result.b = 1
    else
        result.b = 0
else
    void* rax_3 = (*(*arg1 + 8))(arg1, arg3, arg4)
    *(rax_3 + 0xe0) = 1
    *(rax_3 + 0xa8) = *(arg4 + 0xc)
    *(rax_3 + 0xac) = *(arg4 + 8)
    *(rax_3 + 0xb8) = arg2
    int64_t* rcx_3 = arg1[0x3d]
    int64_t r8_2 = *rcx_3
    int64_t* var_80
    (*(r8_2 + 0x80))(rcx_3, &var_80, r8_2)
    int64_t* rcx_4 = var_80
    
    if (rcx_4 != 0)
        void var_70
        int64_t* rax_5 = (*(*rcx_4 + 0xf0))(rcx_4, &var_70, zx.q(arg2))
        
        if (rax_3 + 8 != rax_5)
            *(rax_3 + 8) = *rax_5
            *rax_5 = 0
            int64_t rcx_6 = rax_5[1]
            int64_t* rbx_1 = *(rax_3 + 0x10)
            
            if (rcx_6 != rbx_1)
                rax_5[1] = 0
                *(rax_3 + 0x10) = rcx_6
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t temp4_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp4_1 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
        
        int64_t* var_68
        
        if (var_68 != 0)
            var_68[1].d -= 1
            
            if (var_68[1].d == 1)
                (**var_68)(var_68)
                int32_t temp2_1 = *(var_68 + 0xc)
                *(var_68 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*var_68 + 8))(var_68, 1)
        
        int64_t* rcx_11 = var_80
        int64_t var_60
        int64_t* rax_11 = (*(*rcx_11 + 0x128))(rcx_11, &var_60, zx.q(arg2))
        
        if (rax_3 + 0x18 != rax_11)
            int64_t rcx_12 = *(rax_3 + 0x18)
            
            if (rcx_12 != 0)
                sub_140a74f90(rcx_12)
            
            *(rax_3 + 0x18) = *rax_11
            *rax_11 = 0
            *(rax_3 + 0x20) = rax_11[1].d
            *(rax_3 + 0x24) = *(rax_11 + 0xc)
            rax_11[1] = 0
        
        int64_t rcx_14 = var_60
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
    
    if (*(rax_3 + 8) == 0)
        void*** rax_14 = j_sub_140a82f30(0x30)
        void*** rdi_1 = rax_14
        int64_t var_90
        
        if (rax_14 == 0)
            rdi_1 = nullptr
        else
            sub_140a2e390(&var_90, u"%d", zx.q(arg2))
            void var_b8
            int64_t rbx_4 = *sub_140b58260(&var_b8, u"NULL", 1)
            rdi_1[1] = 0
            rdi_1[2] = 0
            *rdi_1 = &data_142e1f860
            rdi_1[3] = 0
            arg_8.q = var_90
            int32_t var_88
            rdi_1[4].d = var_88
            
            if (var_88 != 0)
                sub_1405a4c70(&rdi_1[3], var_88, 0)
                memcpy(rdi_1[3], arg_8.q, var_88 * 2)
            else
                *(rdi_1 + 0x24) = 0
            
            rdi_1[5] = rbx_4
            *rdi_1 = &data_142e1f860
            r13 = 1
        
        int64_t* rax_17 = j_sub_140a82f30(0x18)
        int64_t* rbx_5 = rax_17
        
        if (rax_17 == 0)
            rbx_5 = nullptr
        else
            rax_17[1].d = 1
            *(rax_17 + 0xc) = 1
            *rbx_5 = &data_142d42e98
            rbx_5[2] = rdi_1
        
        void** rsi_1 = &rdi_1[1]
        
        if (rdi_1 == 0)
            rsi_1 = nullptr
        
        if (rsi_1 != 0)
            void* rax_18
            
            if (*rsi_1 != 0)
                rax_18 = rsi_1[1]
            
            if (*rsi_1 == 0 || rax_18 == 0 || *(rax_18 + 8) s<= 0)
                if (rbx_5 != 0)
                    rbx_5[1].d += 1
                
                *rsi_1 = rdi_1
                int64_t* rcx_19 = rsi_1[1]
                
                if (rbx_5 != rcx_19)
                    if (rbx_5 != 0)
                        *(rbx_5 + 0xc) += 1
                        rcx_19 = rsi_1[1]
                    
                    if (rcx_19 != 0)
                        int32_t temp16_1 = *(rcx_19 + 0xc)
                        *(rcx_19 + 0xc) -= 1
                        
                        if (temp16_1 == 1)
                            (*(*rcx_19 + 8))(rcx_19, 1)
                    
                    rsi_1[1] = rbx_5
                
                if (rbx_5 != 0)
                    rbx_5[1].d -= 1
                    
                    if (rbx_5[1].d == 1)
                        (**rbx_5)(rbx_5)
                        int32_t temp15_1 = *(rbx_5 + 0xc)
                        *(rbx_5 + 0xc) -= 1
                        
                        if (temp15_1 == 1)
                            (*(*rbx_5 + 8))(rbx_5, 1)
        
        void var_50
        
        if (rax_3 + 8 == &var_50)
        label_1409239a8:
            
            if (rbx_5 != 0)
                rbx_5[1].d -= 1
                
                if (rbx_5[1].d == 1)
                    (**rbx_5)(rbx_5)
                    int32_t temp11_1 = *(rbx_5 + 0xc)
                    *(rbx_5 + 0xc) -= 1
                    
                    if (temp11_1 == 1)
                        (*(*rbx_5 + 8))(rbx_5, 1)
        else
            *(rax_3 + 8) = rdi_1
            int64_t* rdi_2 = *(rax_3 + 0x10)
            
            if (rbx_5 == rdi_2)
                goto label_1409239a8
            
            *(rax_3 + 0x10) = rbx_5
            
            if (rdi_2 != 0)
                rdi_2[1].d -= 1
                
                if (rdi_2[1].d == 1)
                    (**rdi_2)(rdi_2)
                    int32_t temp13_1 = *(rdi_2 + 0xc)
                    *(rdi_2 + 0xc) -= 1
                    
                    if (temp13_1 == 1)
                        (*(*rdi_2 + 8))(rdi_2, 1)
        
        if ((r13 & 1) != 0)
            int64_t rcx_25 = var_90
            
            if (rcx_25 != 0)
                sub_140a74f90(rcx_25)
        
        int64_t var_b0 = 0
        int64_t var_a8_1 = 0
        sub_1405947f0(&var_b0, 9)
        int32_t r12_2 = var_a8_1:4.d
        int32_t rsi_2 = var_a8_1.d + 9
        var_a8_1.d = rsi_2
        
        if (rsi_2 s> r12_2)
            sub_140594770(&var_b0)
            r12_2 = var_a8_1:4.d
            rsi_2 = var_a8_1.d
        
        int64_t rdi_3 = var_b0
        UnDecorator::getReferenceType(rdi_3, u"NullUser", 0x12)
        
        if (rax_3 + 0x18 != &var_b0)
            int64_t rcx_29 = *(rax_3 + 0x18)
            
            if (rcx_29 != 0)
                sub_140a74f90(rcx_29)
            
            *(rax_3 + 0x18) = rdi_3
            *(rax_3 + 0x20) = rsi_2
            *(rax_3 + 0x24) = r12_2
        else if (rdi_3 != 0)
            sub_140a74f90(rdi_3)
    
    *(rax_3 + 0x44) = sub_14093f970()
    void*** rax_26 = j_sub_140a82f30(0x48)
    void*** rdi_4
    
    if (rax_26 == 0)
        rdi_4 = nullptr
    else
        rdi_4 = sub_140919570(rax_26)
    
    sub_140929e40(rdi_4, arg1[0x3d])
    void*** rax_28 = j_sub_140a82f30(0x18)
    void*** rbx_7 = rax_28
    
    if (rax_28 == 0)
        rbx_7 = nullptr
    else
        rax_28[1].d = 1
        *(rax_28 + 0xc) = 1
        *rbx_7 = &data_142d42e98
        rbx_7[2] = rdi_4
    
    void*** var_a0 = rdi_4
    void*** var_98_1 = rbx_7
    
    if (rax_3 + 0x98 == &var_a0)
    label_140923b3d:
        
        if (rbx_7 != 0)
            rbx_7[1].d -= 1
            
            if (rbx_7[1].d == 1)
                (**rbx_7)(rbx_7)
                int32_t temp6_1 = *(rbx_7 + 0xc)
                *(rbx_7 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*rbx_7)[1](rbx_7, 1)
    else
        *(rax_3 + 0x98) = rdi_4
        int64_t* rdi_5 = *(rax_3 + 0xa0)
        var_a0 = nullptr
        
        if (rbx_7 == rdi_5)
            goto label_140923b3d
        
        void*** var_98_2 = nullptr
        *(rax_3 + 0xa0) = rbx_7
        
        if (rdi_5 != 0)
            rdi_5[1].d -= 1
            
            if (rdi_5[1].d == 1)
                (**rdi_5)(rdi_5)
                int32_t temp9_1 = *(rdi_5 + 0xc)
                *(rdi_5 + 0xc) -= 1
                
                if (temp9_1 == 1)
                    (*(*rdi_5 + 8))(rdi_5, 1)
            
            rbx_7 = var_98_2
            goto label_140923b3d
    
    int512_t zmm0_1
    result, r8, zmm0_1 = sub_1409389a0(arg1)
    result_1 = result
    
    if (result != 0x3e5)
        *(rax_3 + 0xe0) = 2
        
        if (result == 0)
            result, r8 = sub_14092e650(arg1, zmm0_1)
        else
            int64_t r8_8 = *arg1
            result, r8 = (*(r8_8 + 0x28))(arg1, arg3, r8_8)
    
    int64_t* var_78
    
    if (var_78 != 0)
        var_78[1].d -= 1
        
        if (var_78[1].d == 1)
            result, r8 = (**var_78)(var_78)
            int32_t rsi_4 = *(var_78 + 0xc)
            *(var_78 + 0xc) -= 1
            
            if (rsi_4 == 1)
                result, r8 = (*(*var_78 + 8))(var_78, zx.q(rsi_4))
    
    if (result_1 != 0x3e5)
        goto label_140923bef
    
    result.b = 1

return result
