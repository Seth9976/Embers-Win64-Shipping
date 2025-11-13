// 函数: sub_140eba380
// 地址: 0x140eba380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0
int32_t i = 0
int32_t rax = arg3[1].d
int64_t var_48 = *arg3
int32_t var_40 = rax
int32_t var_3c = 3
char var_38 = 1
void var_58
int64_t* var_50

if (arg1[0x12].d s> 0)
    int64_t r14_1 = 0
    
    do
        int64_t* rcx = arg1[0x11]
        int64_t* rbx_1 = *(rcx + r14_1 + 8)
        int64_t var_68 = *(rcx + r14_1)
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        void* var_78
        sub_140ebae10(&var_78, &var_48, &var_68)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp4_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        int64_t* var_70
        
        if (var_78 != 0)
            if (var_70 != 0)
                var_70[1].d -= 1
                
                if (var_70[1].d == 1)
                    (**var_70)(var_70)
                    int32_t temp8_1 = *(var_70 + 0xc)
                    *(var_70 + 0xc) -= 1
                    
                    if (temp8_1 == 1)
                        (*(*var_70 + 8))(var_70, 1)
            
            if (i != 0xffffffff)
                int64_t rbx_3 = arg1[0x11]
                int64_t* rax_8
                int128_t zmm1_1
                rax_8, zmm1_1 = sub_140ebf4f0(arg1[0x1b], &var_68)
                sub_140ed6260(arg1, &var_78, (sx.q(i) << 4) + rbx_3, rax_8, zmm1_1, 0, 0)
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t temp11_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp11_1 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
                
                sub_140dbae50(&arg1[0x11], i, 1, 1)
                void* rcx_13 = var_78
                
                if (rcx_13 != 0)
                    int64_t* rbx_5 = *(rcx_13 + 0x10)
                    int64_t rdx_4 = 0
                    
                    if (rbx_5 != 0)
                        int32_t rax_11 = rbx_5[1].d
                        
                        if (rax_11 != 0)
                            rbx_5[1].d = rax_11 + 1
                            rax_11.b = 1
                        
                        if (rax_11.b == 0)
                            rbx_5 = nullptr
                        
                        if (rbx_5 != 0)
                            rdx_4 = *(rcx_13 + 8)
                    
                    var_68 = rdx_4
                    int64_t* var_60_2 = rbx_5
                    
                    if (rbx_5 != 0)
                        rbx_5[1].d += 1
                    
                    int64_t* rax_12 = sub_140eba730(&var_58, &var_48, &var_68)
                    
                    if (arg2 != rax_12)
                        *arg2 = *rax_12
                        *rax_12 = 0
                        int64_t rcx_16 = rax_12[1]
                        int64_t* rdi = arg2[1]
                        
                        if (rcx_16 != rdi)
                            rax_12[1] = 0
                            arg2[1] = rcx_16
                            
                            if (rdi != 0)
                                rdi[1].d -= 1
                                
                                if (rdi[1].d == 1)
                                    (**rdi)(rdi)
                                    int32_t temp20_1 = *(rdi + 0xc)
                                    *(rdi + 0xc) -= 1
                                    
                                    if (temp20_1 == 1)
                                        (*(*rdi + 8))(rdi, 1)
                    
                    if (var_50 != 0)
                        var_50[1].d -= 1
                        
                        if (var_50[1].d == 1)
                            (**var_50)(var_50)
                            int32_t temp16_1 = *(var_50 + 0xc)
                            *(var_50 + 0xc) -= 1
                            
                            if (temp16_1 == 1)
                                (*(*var_50 + 8))(var_50, 1)
                    
                    if (rbx_5 != 0)
                        rbx_5[1].d -= 1
                        
                        if (rbx_5[1].d == 1)
                            (**rbx_5)(rbx_5)
                            int32_t temp19_1 = *(rbx_5 + 0xc)
                            *(rbx_5 + 0xc) -= 1
                            
                            if (temp19_1 == 1)
                                (*(*rbx_5 + 8))(rbx_5, 1)
                        
                        rbx_5[1].d -= 1
                        
                        if (rbx_5[1].d == 1)
                            (**rbx_5)(rbx_5)
                            int32_t temp21_1 = *(rbx_5 + 0xc)
                            *(rbx_5 + 0xc) -= 1
                            
                            if (temp21_1 == 1)
                                (*(*rbx_5 + 8))(rbx_5, 1)
                
                if (var_70 != 0)
                    var_70[1].d -= 1
                    
                    if (var_70[1].d == 1)
                        (**var_70)(var_70)
                        int32_t temp13_1 = *(var_70 + 0xc)
                        *(var_70 + 0xc) -= 1
                        
                        if (temp13_1 == 1)
                            (*(*var_70 + 8))(var_70, 1)
            
            break
        
        if (var_70 != 0)
            var_70[1].d -= 1
            
            if (var_70[1].d == 1)
                (**var_70)(var_70)
                int32_t temp9_1 = *(var_70 + 0xc)
                *(var_70 + 0xc) -= 1
                
                if (temp9_1 == 1)
                    (*(*var_70 + 8))(var_70, 1)
        
        i += 1
        r14_1 += 0x10
    while (i s< arg1[0x12].d)

if (*arg2 == 0)
    int64_t* rax_23 = sub_140eba8e0(arg1, &var_58, &var_48)
    
    if (arg2 != rax_23)
        *arg2 = *rax_23
        *rax_23 = 0
        int64_t rcx_29 = rax_23[1]
        int64_t* rbx_7 = arg2[1]
        
        if (rcx_29 != rbx_7)
            rax_23[1] = 0
            arg2[1] = rcx_29
            
            if (rbx_7 != 0)
                rbx_7[1].d -= 1
                
                if (rbx_7[1].d == 1)
                    (**rbx_7)(rbx_7)
                    int32_t temp5_1 = *(rbx_7 + 0xc)
                    *(rbx_7 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        (*(*rbx_7 + 8))(rbx_7, 1)
    
    if (var_50 != 0)
        var_50[1].d -= 1
        
        if (var_50[1].d == 1)
            (**var_50)(var_50)
            int32_t temp2_1 = *(var_50 + 0xc)
            *(var_50 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*var_50 + 8))(var_50, 1)

return arg2
