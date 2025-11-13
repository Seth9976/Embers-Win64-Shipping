// 函数: sub_141be8210
// 地址: 0x141be8210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_518
int64_t result = __security_cookie ^ &var_518
int64_t result_1 = result

if (*(arg1 + 0x221) != 0 && data_143e29f28 != 0 && arg1[0x40] != 0)
    void var_438
    sub_141ba3230(arg1, &var_438)
    void* rcx = arg1[0x40]
    int32_t r8_1 = (int.q(fconvert.t(*(arg1 + 0x214)))).d
    int64_t var_4c8
    __builtin_memset(&var_4c8, 0, 0x18)
    void** var_4a8
    sub_140e51450(&var_4a8, *(rcx + 8), r8_1, &arg1[0x67], &arg1[0x68], &arg1[0x4c], &var_4c8, 0, 
        &arg1[0x4b])
    
    if (sub_140db3500(&var_438) == 0)
        void var_2d8
        sub_140d947e0(&var_2d8)
        sub_140e870e0(data_143e29f28, &var_2d8, &var_4a8, 0)
        void var_178
        sub_140e553b0(&arg1[0x47], sub_140d94220(&var_4c8, sub_140d947e0(&var_178)))
        sub_141b848a0(&var_4c8)
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
        sub_140d94d20(&var_170)
        void var_188
        sub_140596d80(&var_188)
        int64_t* var_190
        
        if (var_190 != 0)
            var_190[1].d -= 1
            
            if (var_190[1].d == 1)
                (**var_190)(var_190)
                int32_t temp4_1 = *(var_190 + 0xc)
                *(var_190 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*var_190 + 8))(var_190, 1)
        
        void var_2d0
        sub_140d94d20(&var_2d0)
    else
        sub_140d94220(&var_4c8, &var_438)
        sub_140e553b0(&arg1[0x47], &var_4c8)
        sub_141b848a0(&var_4c8)
        sub_140e870e0(data_143e29f28, &var_438, &var_4a8, 0)
    
    int64_t* var_460
    
    if (var_460 != 0)
        var_460[1].d -= 1
        
        if (var_460[1].d == 1)
            (**var_460)(var_460)
            int32_t temp6_1 = *(var_460 + 0xc)
            *(var_460 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*var_460 + 8))(var_460, 1)
    
    var_4a8 = &data_142d7f690
    void var_2e8
    sub_140596d80(&var_2e8)
    int64_t* var_2f0
    
    if (var_2f0 != 0)
        var_2f0[1].d -= 1
        
        if (var_2f0[1].d == 1)
            (**var_2f0)(var_2f0)
            int32_t temp7_1 = *(var_2f0 + 0xc)
            *(var_2f0 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*var_2f0 + 8))(var_2f0, 1)
    
    void var_430
    result = sub_140d94d20(&var_430)

__security_check_cookie(result_1 ^ &var_518)
return result
