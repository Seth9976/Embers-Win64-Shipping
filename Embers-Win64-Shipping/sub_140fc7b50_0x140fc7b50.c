// 函数: sub_140fc7b50
// 地址: 0x140fc7b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_28
(*(*arg1 + 0xd8))(arg1, &var_28)
int32_t i_4
int32_t i_2 = i_4
int64_t* rcx_6

if (i_2 != 0)
    rcx_6 = var_28
    *arg2 = *rcx_6
    void* rax_10 = rcx_6[1]
    arg2[1] = rax_10
    
    if (rax_10 != 0)
        *(rax_10 + 8) += 1
        i_2 = i_4
        rcx_6 = var_28
    
    if (i_2 != 0)
        void* rdi_3 = &rcx_6[1]
        int32_t i
        
        do
            int64_t* rbx_3 = *rdi_3
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    (**rbx_3)(rbx_3)
                    int32_t temp6_1 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        (*(*rbx_3 + 8))(rbx_3, 1)
            
            rdi_3 += 0x10
            i = i_2
            i_2 -= 1
        while (i != 1)
        rcx_6 = var_28
else
    int64_t* var_18
    (*(*arg1 + 0x90))(arg1, &var_18)
    int64_t* rcx_1 = var_18
    (*(*rcx_1 + 0x60))(rcx_1)
    *arg2 = var_18
    int64_t* var_10
    arg2[1] = var_10
    
    if (var_10 != 0)
        var_10[1].d += 1
        
        if (var_10 != 0)
            var_10[1].d -= 1
            
            if (var_10[1].d == 1)
                (**var_10)(var_10)
                int32_t temp1_1 = *(var_10 + 0xc)
                *(var_10 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*var_10 + 8))(var_10, zx.q(i_2 + 1))
    
    int32_t i_3 = i_4
    
    if (i_3 != 0)
        int64_t* rdi_2 = &var_28[1]
        int32_t i_1
        
        do
            int64_t* rbx_2 = *rdi_2
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t temp7_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp7_1 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
            
            rdi_2 = &rdi_2[2]
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    rcx_6 = var_28

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

return arg2
