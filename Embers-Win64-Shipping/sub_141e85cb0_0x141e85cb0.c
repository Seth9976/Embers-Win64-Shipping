// 函数: sub_141e85cb0
// 地址: 0x141e85cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
int64_t* result

if (data_143f39be1 == 0)
    void* rax_14 = arg1[2]
    void* rcx_12 = &arg1[4]
    
    if (rax_14 != 0)
        rcx_12 = rax_14
    
    result = (*arg1)((*(*rcx_12 + 8))(rcx_12))
else
    int64_t rcx = *arg1
    
    if (data_143f39ba0 != 1)
        int64_t rax_12 = arg1[2]
        arg1[2] = 0
        int64_t var_f8 = rcx
        int64_t var_e8_1 = rax_12
        int128_t var_d8_1 = *(arg1 + 0x20)
        int128_t var_c8_1 = *(arg1 + 0x30)
        
        if (rcx != 0)
            *arg1 = 0
        
        int64_t* result_2
        sub_141e78090(&result_2, &var_f8, zx.q(arg2), sub_141e7c800(&data_143a2d4e8), 1)
        result = result_2
        
        if (result != 0)
            result[9].d -= 1
            
            if (result[9].d == 1)
                result = sub_140a2f6e0(result_2)
    else
        int128_t* var_68 = nullptr
        
        if (rcx != 0)
            void* rax_2 = arg1[2]
            void* rcx_1 = &arg1[4]
            
            if (rax_2 != 0)
                rcx_1 = rax_2
            
            (**rcx_1)(rcx_1, &var_68)
        
        void*** r8_1 = sub_140a82f30(0x60, 0x10)
        *r8_1 = &data_142d577c0
        r8_1[2] = rcx
        r8_1[4] = var_68
        int128_t var_58
        int128_t zmm0_1 = var_58
        var_68 = nullptr
        *(r8_1 + 0x30) = zmm0_1
        int128_t var_48
        *(r8_1 + 0x40) = var_48
        int64_t rax_5 = rcx
        
        if (r8_1[2] != 0)
            rax_5 = 0
        
        *r8_1 = &data_1432519a8
        int64_t (* var_b8)(void* arg1)
        int64_t (* rax_6)(void* arg1) = var_b8
        
        if (r8_1 != -0x10)
            rax_6 = j_sub_141e722e0
        
        if (rax_5 != 0)
            int128_t* rax_7 = var_68
            int128_t* rcx_4 = &var_58
            
            if (rax_7 != 0)
                rcx_4 = rax_7
            
            (*(*rcx_4 + 0x10))(rcx_4)
        
        int128_t var_98
        zmm0_1 = var_98
        int64_t (* var_138)(void* arg1) = rax_6
        
        if (rax_6 != 0)
            rax_6 = nullptr
        
        void*** var_128_1 = r8_1
        int128_t* var_a8_2 = nullptr
        int128_t var_118_1 = zmm0_1
        int128_t var_88
        int128_t var_108_1 = var_88
        int64_t* result_1
        sub_141e78090(&result_1, &var_138, zx.q(arg2), sub_141e7c800(&data_143a2d4e8), 1)
        result = result_1
        
        if (result != 0)
            result[9].d -= 1
            
            if (result[9].d == 1)
                result = sub_140a2f6e0(result_1)
        
        if (rax_6 != 0)
            int128_t* rcx_8 = &var_98
            
            if (var_a8_2 != 0)
                rcx_8 = var_a8_2
            
            result = (*(*rcx_8 + 0x10))(rcx_8)

if (*arg1 != 0)
    void* rax_17 = arg1[2]
    void* rcx_14 = &arg1[4]
    
    if (rax_17 != 0)
        rcx_14 = rax_17
    
    result = (*(*rcx_14 + 0x10))(rcx_14)

__security_check_cookie(rax_1 ^ &var_188)
return result
