// 函数: sub_140e8cde0
// 地址: 0x140e8cde0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t result = __security_cookie ^ &var_1b8
int64_t result_1 = result
int64_t* rcx = *(arg1 + 0x20)

if (rcx != 0)
    (*(*rcx + 0x48))(rcx, 0)
    void var_198
    void var_178
    sub_140e553b0(arg1 + 0x240, sub_140d94220(&var_198, sub_140d947e0(&var_178)))
    int64_t* var_180
    
    if (var_180 != 0)
        int32_t temp0_1 = *(var_180 + 0xc)
        *(var_180 + 0xc) -= 1
        
        if (temp0_1 == 1)
            (*(*var_180 + 8))(var_180, 1)
    
    sub_140d94cb0(&var_198)
    void var_28
    sub_140596d80(&var_28)
    int64_t* var_30
    
    if (var_30 != 0)
        var_30[1].d -= 1
        
        if (var_30[1].d == 1)
            (**var_30)(var_30)
            int32_t temp2_1 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*var_30 + 8))(var_30, 1)
    
    void var_170
    result = sub_140d94d20(&var_170)

__security_check_cookie(result_1 ^ &var_1b8)
return result
