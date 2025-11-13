// 函数: sub_140fc7eb0
// 地址: 0x140fc7eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x90))()
*arg4 = 0

if ((*(*arg1 + 0xe8))(arg1, arg2) == 0)
    *arg4 = 1
    int64_t* var_28 = nullptr
    int32_t i_2 = 0
    
    if ((*(*arg1 + 0xc8))(arg1, &var_28) != 0)
        int64_t* rcx_4 = *var_28
        void var_18
        int64_t* rax_8 = (*(*rcx_4 + 0x98))(rcx_4, &var_18)
        int64_t rdx_3 = *arg2
        *arg2 = *rax_8
        *rax_8 = rdx_3
        int64_t rdx_4 = arg2[1]
        arg2[1] = rax_8[1]
        rax_8[1] = rdx_4
        int64_t* var_10
        
        if (var_10 != 0)
            var_10[1].d -= 1
            
            if (var_10[1].d == 1)
                (**var_10)(var_10)
                int32_t temp1_1 = *(var_10 + 0xc)
                *(var_10 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*var_10 + 8))(var_10, 1)
    else
        sub_140b1f640(arg3, u"Could not fetch the local adapter addresses")
        int64_t* rcx_3 = *arg2
        (*(*rcx_3 + 0x60))(rcx_3)
    
    int32_t i_1 = i_2
    
    if (i_1 != 0)
        int64_t* rdi_2 = &var_28[1]
        int32_t i
        
        do
            int64_t* rbx_2 = *rdi_2
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t temp4_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
            
            rdi_2 = &rdi_2[2]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int64_t* rcx_11 = var_28
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)

return arg2
