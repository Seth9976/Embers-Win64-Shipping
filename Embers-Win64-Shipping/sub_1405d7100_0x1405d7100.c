// 函数: sub_1405d7100
// 地址: 0x1405d7100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405db200(arg1, 0)

if ((*(*arg1 + 0x270))(arg1) != 0)
    arg1[0x1a].b = *arg3
    *(arg1 + 0xd4) = *(arg3 + 4)
    arg1[0x1b].d = *(arg3 + 8)
    *(arg1 + 0xdc) = arg3[0xc]
    *(arg1 + 0xdd) = arg3[0xd]
    int32_t rdx_1 = sub_1405d6ab0(arg1, 1)
    void arg_8
    
    if (arg1[0x1f].b != 0)
        int64_t* rcx_3 = *arg2 + 0xd0
        int32_t* rax_8
        rax_8, rdx_1 = (*(*rcx_3 + 0x10))(rcx_3, &arg_8)
        arg1[0x17].d = *rax_8
        *(arg1 + 0xbc) = rax_8[1]
    else if (*(arg1 + 0xdc) != 0)
        int64_t var_18 = *arg2
        void* rax_11 = arg2[1]
        void* var_10_1 = rax_11
        
        if (rax_11 != 0)
            *(rax_11 + 8) += 1
        
        rdx_1 = sub_1405dae60(arg1, &var_18)
    
    sub_1405d6d90(arg1, rdx_1)
    char var_28_1 = 0
    
    if (sub_1405db9f0(arg2, &arg1[0x1a], &arg1[0x17], arg1[0x18].d) != 0)
        sub_1405daf00(arg1, 2)
        bool result_1 = (*(*arg1 + 0x278))(arg1, arg2)
        bool result = result_1
        
        if (result_1 != 0)
            sub_1405d98f0(arg1, *(arg1[0xa] + 0x28))
            result = (*(*arg1 + 0x260))(arg1) != 4
        
        int64_t* rcx_15 = *arg2
        
        if (result != 0)
            arg1[0x10] = rcx_15
            void* rdi_2 = arg2[1]
            int64_t* rcx_16 = arg1[0x11]
            
            if (rdi_2 != rcx_16)
                if (rdi_2 != 0)
                    *(rdi_2 + 0xc) += 1
                    rcx_16 = arg1[0x11]
                
                if (rcx_16 != 0)
                    int32_t temp3_1 = *(rcx_16 + 0xc)
                    *(rcx_16 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rcx_16 + 8))(rcx_16, 1)
                
                arg1[0x11] = rdi_2
            
            arg1[0xd].d = 0
            sub_1405d4d00(&data_14399fd90, &arg_8, arg1, sub_1405d9c20)
            return result
        
        int64_t* rdi_3 = arg2[1]
        
        if (rdi_3 != 0)
            rdi_3[1].d += 1
        
        if (*(arg1 + 0xf9) != 0 && rcx_15 != 0)
            sub_1423465b0(rcx_15, 0, 0)
            *(arg1 + 0xf9) = 0
        
        if (rdi_3 != 0)
            rdi_3[1].d -= 1
            
            if (rdi_3[1].d == 1)
                (**rdi_3)(rdi_3)
                int32_t temp4_1 = *(rdi_3 + 0xc)
                *(rdi_3 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rdi_3 + 8))(rdi_3, 1)
        
        sub_1405daf00(arg1, 4)
        return result
    
    int64_t* rcx_8 = *arg2
    int64_t* rdi_1 = arg2[1]
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    if (*(arg1 + 0xf9) != 0 && rcx_8 != 0)
        sub_1423465b0(rcx_8, 0, 0)
        *(arg1 + 0xf9) = 0
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp1_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

return false
