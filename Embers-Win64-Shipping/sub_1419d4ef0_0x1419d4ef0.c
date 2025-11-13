// 函数: sub_1419d4ef0
// 地址: 0x1419d4ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t var_28 = __security_cookie ^ &var_98
int64_t result

if (data_143f1d988 == 0)
    result.b = 0
else
    sub_140aeb3d0(&data_1439c95c0, arg1, arg2)
    int64_t* rdi_1 = data_143f1d988
    AcquireSRWLockShared(&rdi_1[4])
    ReleaseSRWLockShared(&rdi_1[4])
    int64_t* rbx_1 = *rdi_1
    void* rdi_2 = &rbx_1[sx.q(rdi_1[1].d)]
    
    if (rbx_1 == rdi_2)
    label_1419d4f90:
        result.b = 0
    else
        while (true)
            int64_t* rcx_2 = **rbx_1
            
            if ((*(*rcx_2 + 0x38))(rcx_2, arg1).d != 0xffffffff)
                break
            
            rbx_1 = &rbx_1[1]
            
            if (rbx_1 == rdi_2)
                goto label_1419d4f90_1
        
        int64_t* rbx_2 = *rbx_1
        
        if (rbx_2 == 0)
        label_1419d4f90_1:
            result.b = 0
        else
            int64_t* rcx_3 = *rbx_2
            int64_t* result_1
            (*(*rcx_3 + 0x40))(rcx_3, &result_1)
            
            if (arg2 == 0)
            label_1419d502b:
                int64_t* result_3 = result_1
                
                if (result_3 != 0)
                    result_3[9].d -= 1
                    
                    if (result_3[9].d == 1)
                        sub_140a2f6e0(result_3)
            else
                result = result_1
                
                if (result != 0)
                    *(result + 0x48) += 1
                    int64_t result_2 = result
                    void*** var_58_1 = nullptr
                    void** const var_48 = &data_143010160
                    int64_t* var_40_1 = rbx_2
                    int64_t (* var_68)(int64_t* arg1, int64_t* arg2) = sub_1419c8910
                    (*(*arg2 + 0x1f8))(arg2, &var_68)
                    
                    if (var_68 != 0)
                        void** const* rcx_5 = &var_48
                        
                        if (var_58_1 != 0)
                            rcx_5 = var_58_1
                        
                        (*rcx_5)[2](rcx_5)
                    
                    goto label_1419d502b
            
            result.b = 1

__security_check_cookie(var_28 ^ &var_98)
return result
