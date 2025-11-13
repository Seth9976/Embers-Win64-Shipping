// 函数: sub_140da2300
// 地址: 0x140da2300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = arg2
int32_t rbp = 0

if (arg2[1].d s<= 0)
label_140da2497:
    *arg1 = 0
    arg1[1] = 0
else
    int64_t* r15_1 = nullptr
    
    while (true)
        int64_t rax_1 = *rax
        int64_t* rdi_1 = *(r15_1 + rax_1 + 8)
        void* r14_1 = *(r15_1 + rax_1)
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
        
        void var_48
        int64_t* rax_2 = sub_140e152a0(r14_1, &var_48)
        int64_t* rbx_1 = rax_2[1]
        int64_t r12_1 = *rax_2
        rax_2[1] = 0
        *rax_2 = 0
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp3_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
        
        int64_t* var_40
        
        if (var_40 != 0)
            var_40[1].d -= 1
            
            if (var_40[1].d == 1)
                (**var_40)(var_40)
                int32_t temp2_1 = *(var_40 + 0xc)
                *(var_40 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*var_40 + 8))(var_40, 1)
        
        if (r12_1 == *arg3)
            *arg1 = r14_1
            arg1[1] = rdi_1
            
            if (rdi_1 != 0)
                rdi_1[1].d += 1
        else
            int64_t var_58
            sub_140da2300(&var_58, sub_140e12730(r14_1), arg3)
            int64_t rax_8 = var_58
            int64_t* var_50
            
            if (rax_8 != 0)
                *arg1 = rax_8
                arg1[1] = var_50
                int64_t var_50_1 = 0
                var_58 = 0
            else
                if (var_50 != 0)
                    var_50[1].d -= 1
                    
                    if (var_50[1].d == 1)
                        (**var_50)(var_50)
                        int32_t temp9_1 = *(var_50 + 0xc)
                        *(var_50 + 0xc) -= 1
                        
                        if (temp9_1 == 1)
                            (*(*var_50 + 8))(var_50, 1)
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t temp12_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp12_1 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
                
                if (rdi_1 != 0)
                    rdi_1[1].d -= 1
                    
                    if (rdi_1[1].d == 1)
                        (**rdi_1)(rdi_1)
                        int32_t temp13_1 = *(rdi_1 + 0xc)
                        *(rdi_1 + 0xc) -= 1
                        
                        if (temp13_1 == 1)
                            (*(*rdi_1 + 8))(rdi_1, 1)
                
                rax = arg2
                rbp += 1
                r15_1 = &r15_1[2]
                
                if (rbp s>= rax[1].d)
                    goto label_140da2497
                
                continue
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp7_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        if (rdi_1 == 0)
            break
        
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp10_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp10_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
        
        break

return arg1
