// 函数: sub_141da7070
// 地址: 0x141da7070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** result

if ((*(*arg1 + 0x1a8))() == 0)
    int64_t* rcx_11 = *arg2
    (*(*rcx_11 + 0x58))(rcx_11, arg3)
label_141da718c:
    int64_t* rbx_2 = arg2[1]
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp1_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    result.b = 1
else
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    void** var_b8
    sub_140b4c2a0(&var_b8)
    var_b8 = &data_143239ba8
    int64_t var_28
    __builtin_memset(&var_28, 0, 0x15)
    
    if ((*(*arg1 + 0x1b0))(arg1, arg3, &var_b8) != 0)
        QueryPerformanceCounter(&performanceCount)
        int64_t* rcx_8 = *arg2
        (*(*rcx_8 + 0x58))(rcx_8, &var_28)
        int64_t rcx_9 = var_28
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        sub_140b4cb40(&var_b8)
        goto label_141da718c
    
    int64_t rcx_3 = var_28
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    sub_140b4cb40(&var_b8)
    int64_t* rbx_1 = arg2[1]
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp3_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    result.b = 0

return result
