// 函数: sub_1419af100
// 地址: 0x1419af100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
uint64_t result = __security_cookie ^ &var_88
uint64_t result_1 = result

if (data_143f138f4 != 0)
    int64_t* var_60
    int64_t** rax_1 = sub_140a228d0(&var_60)
    
    if (&data_143f10438 != rax_1)
        int64_t* rcx_2 = data_143f10438
        data_143f10438 = *rax_1
        *rax_1 = nullptr
        
        if (rcx_2 != 0)
            rcx_2[9].d -= 1
            
            if (rcx_2[9].d == 1)
                sub_140a2f6e0(rcx_2)
    
    int64_t* rcx_3 = var_60
    
    if (rcx_3 != 0)
        rcx_3[9].d -= 1
        
        if (rcx_3[9].d == 1)
            sub_140a2f6e0(rcx_3)
    
    void* rax_4 = data_143f10438
    void** var_20_1 = nullptr
    int32_t var_14_1 = 4
    int32_t i_2 = 1
    void* var_40 = rax_4
    
    if (rax_4 != 0)
        *(rax_4 + 0x48) += 1
    
    int32_t rbx_1 = data_14399e5dc
    void var_58
    int64_t* rax_5 = sub_140a22cb0(&var_58, &var_40, 2)
    *(*rax_5 + 0x10) = rbx_1
    void* rcx_6 = *rax_5
    int32_t r8_1 = rax_5[2].d
    int64_t* rdx_3 = rax_5[1]
    void* rbx_2 = *(rcx_6 + 0x18)
    
    if (rbx_2 != 0)
        *(rbx_2 + 0x48) += 1
    
    result = sub_1408c3b70(rcx_6, rdx_3, r8_1, 1)
    int64_t* rcx_7 = data_143f10338
    data_143f10338 = rbx_2
    
    if (rcx_7 != 0)
        result = zx.q(rcx_7[9].d)
        rcx_7[9].d -= 1
        
        if (result.d == 1)
            result = sub_140a2f6e0(rcx_7)
    
    void** rcx_9 = var_20_1
    void** rbx_3 = &var_40
    int32_t i_1 = i_2
    data_143f1afdc = 1
    
    if (rcx_9 != 0)
        rbx_3 = rcx_9
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t* rcx_8 = *rbx_3
            
            if (rcx_8 != 0)
                result = zx.q(rcx_8[9].d)
                rcx_8[9].d -= 1
                
                if (result.d == 1)
                    result = sub_140a2f6e0(rcx_8)
            
            rbx_3 = &rbx_3[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
        rcx_9 = var_20_1
    
    if (rcx_9 != 0)
        result = sub_140a74f90(rcx_9)

__security_check_cookie(result_1 ^ &var_88)
return result
