// 函数: sub_140ed8460
// 地址: 0x140ed8460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *arg2
int32_t i = 0

if (*(result + 0x30) s> 0)
    int64_t rsi_1 = 0
    
    do
        int64_t* rcx = *(result + 0x28)
        int64_t var_58 = *(rcx + rsi_1)
        int64_t* rax_1 = *(rcx + rsi_1 + 8)
        
        if (rax_1 != 0)
            rax_1[1].d += 1
        
        void* var_38
        arg5 = sub_140ed6440(arg1, &var_38, &var_58, arg4, arg5, 0, 0)
        void* rcx_2 = var_38
        
        if (rcx_2 != 0)
            int64_t* rbx_1 = *(rcx_2 + 0x10)
            int64_t rdx_1 = 0
            
            if (rbx_1 != 0)
                int32_t rax_2 = rbx_1[1].d
                
                if (rax_2 == 0)
                    rbx_1 = nullptr
                else
                    rbx_1[1].d = rax_2 + 1
                    
                    if (rbx_1 != 0)
                        rdx_1 = *(rcx_2 + 8)
            
            int64_t var_48 = rdx_1
            int64_t* var_40_1 = rbx_1
            
            if (rbx_1 != 0)
                int32_t rax_4 = rbx_1[1].d
                rbx_1[1].d = rax_4
                
                if (rax_4 == 0)
                    (**rbx_1)(rbx_1)
                    int32_t temp5_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            arg5 = sub_140ea15b0(*arg3, &var_48, 0xffffffff)
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp6_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
        
        int64_t* var_30
        
        if (var_30 != 0)
            var_30[1].d -= 1
            
            if (var_30[1].d == 1)
                (**var_30)(var_30)
                int32_t temp2_1 = *(var_30 + 0xc)
                *(var_30 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*var_30 + 8))(var_30, 1)
        
        if (rax_1 != 0)
            rax_1[1].d -= 1
            
            if (rax_1[1].d == 1)
                (**rax_1)(rax_1)
                int32_t temp3_1 = *(rax_1 + 0xc)
                *(rax_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rax_1 + 8))(rax_1, 1)
        
        result = *arg2
        i += 1
        rsi_1 += 0x10
    while (i s< *(result + 0x30))

return result
