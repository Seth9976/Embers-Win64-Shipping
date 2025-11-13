// 函数: sub_1409802d0
// 地址: 0x1409802d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
int32_t* result = data_143ced0c8

if (*result != 0 && *(arg1 + 0x1a78) != 0)
    int64_t* rax_2 = sub_140a242a0()
    void* rcx = *(arg1 + 0x1a78)
    void** var_20_1 = nullptr
    int32_t var_14_1 = 4
    int32_t i_2 = 1
    void* var_40 = rcx
    
    if (rcx != 0)
        *(rcx + 0x48) += 1
    
    int64_t r9_1 = *rax_2
    result = (*(r9_1 + 0x48))(rax_2, &var_40, 2, r9_1)
    void** rcx_2 = var_20_1
    void** rbx_1 = &var_40
    int32_t i_1 = i_2
    
    if (rcx_2 != 0)
        rbx_1 = rcx_2
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t* rcx_3 = *rbx_1
            
            if (rcx_3 != 0)
                result = zx.q(rcx_3[9].d)
                rcx_3[9].d -= 1
                
                if (result.d == 1)
                    result = sub_140a2f6e0(rcx_3)
            
            rbx_1 = &rbx_1[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
        rcx_2 = var_20_1
    
    if (rcx_2 != 0)
        result = sub_140a74f90(rcx_2)

__security_check_cookie(rax_1 ^ &var_68)
return result
