// 函数: sub_140ead1b0
// 地址: 0x140ead1b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi
int64_t* var_10 = rdi
void* var_28
sub_140ebeb20(*(arg1 + 0x3f0), &var_28)
void* r14 = var_28

if (r14 == 0)
    rdi.b = 0
else
    char rax_1 = sub_140f03770(r14)
    char rax_2
    
    if (rax_1 != 3)
        rax_2 = sub_140f03770(r14)
    
    if (rax_1 != 3 && rax_2 != 0)
        rdi.b = 0
    else
        int64_t* rcx_4 = *(arg1 + 0x3f0) + 0x2a8
        
        if ((**rcx_4)(rcx_4) s<= 1)
            rdi.b = 0
        else
            int64_t* var_38
            sub_140ea3f10(*(arg1 + 0x3f0) + 0x2a8, &var_38)
            int32_t i_2
            int32_t i_1 = i_2
            int32_t rbp_1 = 0
            int64_t* r15_1 = var_38
            bool cond:0_1 = i_1 == 0
            
            if (i_1 s<= 0)
            label_140ead2a9:
                
                if (not(cond:0_1))
                    rdi = &r15_1[1]
                    int32_t i
                    
                    do
                        int64_t* rbx_2 = *rdi
                        
                        if (rbx_2 != 0)
                            rbx_2[1].d -= 1
                            
                            if (rbx_2[1].d == 1)
                                (**rbx_2)(rbx_2)
                                int32_t temp5_1 = *(rbx_2 + 0xc)
                                *(rbx_2 + 0xc) -= 1
                                
                                if (temp5_1 == 1)
                                    (*(*rbx_2 + 8))(rbx_2, 1)
                        
                        rdi = &rdi[2]
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
                
                if (r15_1 == 0)
                    rdi.b = 0
                else
                    sub_140a74f90(r15_1)
                    rdi.b = 0
            else
                rdi = r15_1
                
                while (true)
                    int64_t* rbx_1 = rdi[1]
                    void* rcx_7 = *rdi
                    
                    if (rbx_1 != 0)
                        rbx_1[1].d += 1
                    
                    if (r14 != rcx_7 && sub_140eec340(rcx_7, arg2) != 0)
                        if (rbx_1 != 0)
                            rbx_1[1].d -= 1
                            
                            if (rbx_1[1].d == 1)
                                (**rbx_1)(rbx_1)
                                int32_t temp9_1 = *(rbx_1 + 0xc)
                                *(rbx_1 + 0xc) -= 1
                                
                                if (temp9_1 == 1)
                                    (*(*rbx_1 + 8))(rbx_1, 1)
                        
                        sub_140596d80(&var_38)
                        rdi.b = 1
                        break
                    
                    if (rbx_1 != 0)
                        rbx_1[1].d -= 1
                        
                        if (rbx_1[1].d == 1)
                            (**rbx_1)(rbx_1)
                            int32_t temp7_1 = *(rbx_1 + 0xc)
                            *(rbx_1 + 0xc) -= 1
                            
                            if (temp7_1 == 1 && rbx_1 != 0)
                                (*(*rbx_1 + 8))(rbx_1, 1)
                    
                    rbp_1 += 1
                    rdi = &rdi[2]
                    
                    if (rbp_1 s>= i_1)
                        cond:0_1 = i_1 == 0
                        goto label_140ead2a9

int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        (**var_20)(var_20)
        int32_t temp2_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (temp2_1 == 1)
            int64_t r8_2 = *var_20
            (*(r8_2 + 8))(var_20, 1, r8_2)

return zx.q(rdi.b)
