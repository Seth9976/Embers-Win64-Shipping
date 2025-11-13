// 函数: sub_140972930
// 地址: 0x140972930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_1409612a0(arg1, &arg2[0x44])

if (result == 0)
    (*(*arg2 + 0x440))(arg2, arg1)
    int64_t* rax_1 = sub_14096ade0(arg1, &arg2[0x44])
    void*** rax_2 = sub_140a84c80(0, 0x30, 0)
    
    if (rax_2 != 0)
        *rax_2 = &data_142e346a8
        sub_140d3a3a0(&rax_2[1], arg2)
        rax_2[2] = sub_14094eacc
        rax_2[4] = sub_140a387b0()
    
    void var_18
    
    if (&var_18 != rax_1)
        if (rax_2 != 0)
            (*rax_2)[8](rax_2, rax_1)
        else if (rax_1[1].d != 0)
            int64_t* rcx_4 = *rax_1
            
            if (rcx_4 != 0)
                (*(*rcx_4 + 0x38))(rcx_4, 0)
                int64_t rcx_5 = *rax_1
                
                if (rcx_5 != 0)
                    *rax_1 = sub_140a84c80(rcx_5, 0, 0)
                
                rax_1[1].d = 0
    
    if (rax_2 != 0)
        (*rax_2)[7](rax_2, 0)
        int64_t rax_8 = sub_140a84c80(rax_2, 0, 0)
        
        if (rax_8 != 0)
            sub_140a74f90(rax_8)
    
    void** rax_9 = sub_14096acd0(arg1, &arg2[0x44])
    int64_t* rax_10 = sub_140a84c80(0, 0x30, 0)
    
    if (rax_10 != 0)
        *rax_10 = &data_142e33878
        sub_140d3a3a0(&rax_10[1], arg2)
        rax_10[2] = sub_14094eae4
        rax_10[4] = sub_140a387b0()
        *rax_10 = &data_142e338d0
    
    result = &var_18
    
    if (&var_18 != rax_9)
        if (rax_10 != 0)
            result = (*(*rax_10 + 0x40))(rax_10, rax_9)
        else if (rax_9[1].d != 0)
            void* rcx_12 = *rax_9
            
            if (rcx_12 != 0)
                result = (*(*rcx_12 + 0x38))(rcx_12, 0)
                void* rcx_13 = *rax_9
                
                if (rcx_13 != 0)
                    result = sub_140a84c80(rcx_13, 0, 0)
                    *rax_9 = result
                
                rax_9[1].d = 0
    
    if (rax_10 != 0)
        (*(*rax_10 + 0x38))(rax_10, 0)
        result = sub_140a84c80(rax_10, 0, 0)
        
        if (result != 0)
            return sub_140a74f90(result)

return result
