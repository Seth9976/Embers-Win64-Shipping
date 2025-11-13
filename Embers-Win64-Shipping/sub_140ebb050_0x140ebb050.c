// 函数: sub_140ebb050
// 地址: 0x140ebb050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *arg3
void arg_18
int64_t rbx = *sub_140b58260(&arg_18, u"STextBlock", 1)
void arg_20
int64_t* rax_1 = sub_140e179b0(rdi, &arg_20)
int64_t* rcx_2 = *arg3

if (*rax_1 != rbx)
    int64_t* rax_7 = (*(*rcx_2 + 0x188))(rcx_2)
    int64_t rdx_1 = *rax_7
    int32_t rax_8 = (*rdx_1)(rax_7, rdx_1)
    int32_t rdi_1 = 0
    
    if (rax_8 s<= 0)
    label_140ebb18d:
        *arg2 = data_143e244b0
        void* rax_14 = data_143e244b8
        arg2[1] = rax_14
        
        if (rax_14 != 0)
            *(rax_14 + 8) += 1
    else
        while (true)
            int64_t r9_1 = *rax_7
            int64_t var_48
            void var_38
            sub_140ebb050(arg1, &var_48, (*(r9_1 + 0x10))(rax_7, &var_38, zx.q(rdi_1), r9_1))
            int64_t rax_10 = var_48
            int64_t* var_40
            
            if (rax_10 != data_143e244b0)
                *arg2 = rax_10
                arg2[1] = var_40
                
                if (var_40 != 0)
                    var_40[1].d += 1
                    
                    if (var_40 != 0)
                        var_40[1].d -= 1
                        
                        if (var_40[1].d == 1)
                            (**var_40)(var_40)
                            int32_t temp7_1 = *(var_40 + 0xc)
                            *(var_40 + 0xc) -= 1
                            
                            if (temp7_1 == 1)
                                (*(*var_40 + 8))(var_40, 1)
                
                break
            
            if (var_40 != 0)
                var_40[1].d -= 1
                
                if (var_40[1].d == 1)
                    (**var_40)(var_40)
                    int32_t temp6_1 = *(var_40 + 0xc)
                    *(var_40 + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        (*(*var_40 + 8))(var_40, 1)
            
            rdi_1 += 1
            
            if (rdi_1 s>= rax_8)
                goto label_140ebb18d
    
    int64_t* rbx_3 = arg3[1]
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp3_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)
else
    *arg2 = rcx_2
    void* rax_2 = arg3[1]
    arg2[1] = rax_2
    
    if (rax_2 != 0)
        *(rax_2 + 8) += 1
    
    int64_t* rbx_1 = arg3[1]
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

return arg2
