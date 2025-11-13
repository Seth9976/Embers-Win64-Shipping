// 函数: sub_140f47460
// 地址: 0x140f47460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rbx_1 = *arg3 + 0x1a8
char arg_18

if (*(rbx_1 + 0x10) != 0)
    int64_t* rcx = *(rbx_1 + 8)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(rbx_1 + 0x10) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(rbx_1 + 8)
        
        (*(*rcx_1 + 0x48))(rcx_1, &arg_18)
        *rbx_1 = arg_18

if ((*rbx_1 & data_1439ae51c) == 0)
label_140f47682:
    *arg2 = 0
    arg2[1] = 0
else
    int64_t* rcx_2 = *arg3
    char rax_7 = (*(*rcx_2 + 0x198))(rcx_2)
    int64_t* rcx_3 = *arg3
    
    if (rax_7 == 0)
        int64_t* rax_10 = (*(*rcx_3 + 0x188))(rcx_3)
        int32_t rbp_1 = 0
        int64_t rdx_1 = *rax_10
        
        if ((*rdx_1)(rax_10, rdx_1) s<= 0)
            goto label_140f47682
        
        while (true)
            int64_t r9_1 = *rax_10
            void var_38
            int64_t* rax_12 = (*(r9_1 + 0x10))(rax_10, &var_38, zx.q(rbp_1), r9_1)
            int64_t* rbx_2 = rax_12[1]
            int64_t rsi_1 = *rax_12
            
            if (rbx_2 != 0)
                rbx_2[1].d += 1
            
            int64_t* var_30
            
            if (var_30 != 0)
                var_30[1].d -= 1
                
                if (var_30[1].d == 1)
                    (**var_30)(var_30)
                    int32_t temp3_1 = *(var_30 + 0xc)
                    *(var_30 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*var_30 + 8))(var_30, 1)
            
            int64_t var_48 = rsi_1
            int64_t* var_40_1 = rbx_2
            
            if (rbx_2 != 0)
                rbx_2[1].d += 1
            
            void* const var_58
            sub_140f47460(arg1, &var_58, &var_48)
            void* const rdi_2 = var_58
            int64_t* var_50
            
            if (rdi_2 != 0)
                if (*(rdi_2 + 0x1b8) != 0)
                    int64_t* rcx_9 = *(rdi_2 + 0x1b0)
                    
                    if (rcx_9 != 0 && (*(*rcx_9 + 0x28))(rcx_9) != 0)
                        int64_t* rcx_10
                        
                        if (*(rdi_2 + 0x1b8) == 0)
                            rcx_10 = nullptr
                        else
                            rcx_10 = *(rdi_2 + 0x1b0)
                        
                        (*(*rcx_10 + 0x48))(rcx_10, &arg_18)
                        *(rdi_2 + 0x1a8) = arg_18
                
                if ((data_1439ae51c & *(rdi_2 + 0x1a8)) != 0)
                    *arg2 = var_58
                    arg2[1] = var_50
                    int64_t var_50_1 = 0
                    var_58 = nullptr
                    
                    if (rbx_2 != 0)
                        rbx_2[1].d -= 1
                        
                        if (rbx_2[1].d == 1)
                            (**rbx_2)(rbx_2)
                            int32_t temp9_1 = *(rbx_2 + 0xc)
                            *(rbx_2 + 0xc) -= 1
                            
                            if (temp9_1 == 1)
                                (*(*rbx_2 + 8))(rbx_2, 1)
                    
                    break
            
            if (var_50 != 0)
                var_50[1].d -= 1
                
                if (var_50[1].d == 1)
                    (**var_50)(var_50)
                    int32_t temp6_1 = *(var_50 + 0xc)
                    *(var_50 + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        (*(*var_50 + 8))(var_50, 1)
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t temp7_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp7_1 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
            
            rbp_1 += 1
            
            if (rbp_1 s>= (**rax_10)(rax_10))
                goto label_140f47682
    else
        *arg2 = rcx_3
        arg2[1] = arg3[1]
        arg3[1] = 0
        *arg3 = 0

int64_t* rbx_3 = arg3[1]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp1_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

return arg2
