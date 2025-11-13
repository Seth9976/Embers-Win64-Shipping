// 函数: sub_140f0d4a0
// 地址: 0x140f0d4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138

if (sub_140e19840(arg1, arg5) != 0)
label_140f0d890:
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
else
    int64_t* rbx_1 = *(arg4 + 0x48)
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    int64_t r15
    r15.b = *(arg4 + 0x38) == data_143e1e008
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    int64_t var_118
    char var_f8
    int32_t var_44
    
    if (r15.b == 0)
        int64_t* rbx_3 = *(arg4 + 0x48)
        
        if (rbx_3 != 0)
            rbx_3[1].d += 1
        
        r15.b = *(arg4 + 0x38) == data_143e1e038
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t temp3_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
        
        if (r15.b == 0)
            int64_t* rbx_5 = *(arg4 + 0x48)
            
            if (rbx_5 != 0)
                rbx_5[1].d += 1
            
            void* rdi
            rdi.b = *(arg4 + 0x38) == data_143e1e020
            
            if (rbx_5 != 0)
                rbx_5[1].d -= 1
                
                if (rbx_5[1].d == 1)
                    (**rbx_5)(rbx_5)
                    int32_t temp9_1 = *(rbx_5 + 0xc)
                    *(rbx_5 + 0xc) -= 1
                    
                    if (temp9_1 == 1)
                        (*(*rbx_5 + 8))(rbx_5, 1)
            
            if (rdi.b == 0)
                goto label_140f0d890
            
            sub_140ee7440(arg1, 0)
            sub_140f19db0(arg2)
        else
            int64_t* rbx_4 = *(arg1 + 0x10)
            int64_t r15_2 = 0
            
            if (rbx_4 != 0)
                int32_t rax_22 = rbx_4[1].d
                
                if (rax_22 != 0)
                    rbx_4[1].d = rax_22 + 1
                    rax_22.b = 1
                
                if (rax_22.b == 0)
                    rbx_4 = nullptr
                
                if (rbx_4 != 0)
                    int32_t rax_23 = rbx_4[1].d
                    r15_2 = *(arg1 + 8)
                    rbx_4[1].d = rax_23
                    
                    if (rax_23 == 0)
                        (**rbx_4)(rbx_4)
                        int32_t temp15_1 = *(rbx_4 + 0xc)
                        *(rbx_4 + 0xc) -= 1
                        
                        if (temp15_1 == 1)
                            (*(*rbx_4 + 8))(rbx_4, 1)
            
            var_118 = r15_2
            int64_t* var_110_2 = rbx_4
            
            if (rbx_4 != 0)
                rbx_4[1].d += 1
            
            int32_t var_44_2 = var_44 & 0xffffff00
            var_f8 = 1
            int64_t var_f0_2 = 0
            int64_t var_e8_2 = 0
            char var_d8_2 = 0
            int64_t var_d0_1
            __builtin_memset(&var_d0_1, 0, 0x88)
            int32_t var_48_2 = 0x20702
            sub_140596b00(arg2, sub_140eae530(&var_f8, &var_118))
            sub_140597700(&var_f8)
            
            if (rbx_4 != 0)
                rbx_4[1].d -= 1
                
                if (rbx_4[1].d == 1)
                    int64_t rdx_4 = *rbx_4
                    (*rdx_4)(rbx_4, rdx_4)
                    int32_t temp13_1 = *(rbx_4 + 0xc)
                    *(rbx_4 + 0xc) -= 1
                    
                    if (temp13_1 == 1)
                        int64_t r8 = *rbx_4
                        (*(r8 + 8))(rbx_4, 1, r8)
    else
        data_143e2a204 = 0
        sub_140ee7440(arg1, 0)
        int64_t* rbx_2 = *(arg1 + 0x10)
        int64_t r15_1 = 0
        
        if (rbx_2 != 0)
            int32_t rax_6 = rbx_2[1].d
            
            if (rax_6 != 0)
                rbx_2[1].d = rax_6 + 1
                rax_6.b = 1
            
            if (rax_6.b == 0)
                rbx_2 = nullptr
            
            if (rbx_2 != 0)
                int32_t rax_7 = rbx_2[1].d
                r15_1 = *(arg1 + 8)
                rbx_2[1].d = rax_7
                
                if (rax_7 == 0)
                    (**rbx_2)(rbx_2)
                    int32_t temp8_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp8_1 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
                
                rbx_2[1].d += 1
        
        var_118 = data_143e1e008
        int64_t var_110_1 = data_143e1e010
        int64_t* rax_12 = data_143e1e018
        
        if (rax_12 != 0)
            rax_12[1].d += 1
        
        int32_t var_44_1 = var_44 & 0xffffff00
        var_f8 = 1
        int64_t var_f0_1 = 0
        int64_t var_e8_1 = 0
        char var_d8_1 = 0
        int64_t var_d0
        __builtin_memset(&var_d0, 0, 0x40)
        int128_t var_88
        __builtin_memset(&var_88, 0, 0x40)
        int32_t var_48_1 = 0x20702
        int64_t var_90_1 = r15_1
        
        if (rbx_2 != 0)
            *(rbx_2 + 0xc) += 1
            var_88.q = rbx_2
        
        int64_t var_70
        sub_140627710(&var_70, &var_118)
        
        if (rax_12 != 0)
            rax_12[1].d -= 1
            
            if (rax_12[1].d == 1)
                (**rax_12)(rax_12)
                int32_t temp7_1 = *(rax_12 + 0xc)
                *(rax_12 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*rax_12 + 8))(rax_12, 1)
        
        sub_140596b00(arg2, &var_f8)
        sub_140597700(&var_f8)
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp12_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp12_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
            
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp14_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp14_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)

__security_check_cookie(rax_1 ^ &var_138)
return arg2
