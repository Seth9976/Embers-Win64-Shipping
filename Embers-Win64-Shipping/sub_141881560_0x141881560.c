// 函数: sub_141881560
// 地址: 0x141881560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
void* result = __security_cookie ^ &var_178
void* result_1 = result

if (arg1[3].d == 1)
    int64_t rax_1 = sx.q(*(arg2 + 0x50))
    int128_t* i = *(arg2 + 0x48)
    int64_t var_118
    __builtin_memset(&var_118, 0, 0x2c)
    void* r14_1 = i + rax_1 * 0x18
    int32_t var_ec_1 = 0x80
    int32_t var_e8_1 = 0xffffffff
    int32_t var_e4_1 = 0
    int64_t var_d8_1 = 0
    int32_t var_d0_1 = 0
    int32_t var_158
    char* var_150
    int32_t var_148
    void var_138
    
    for (; i != r14_1; i += 0x18)
        sub_140598750(&var_118, &var_148)
        int128_t* var_140
        *var_140 = *i
        var_140[1].d = 0xffffffff
        int32_t rax_2 = sub_140a6b260(var_140, 0x10)
        var_150 = nullptr
        var_158 = var_148
        sub_14093ebb0(&var_118, &var_138, rax_2, var_140, var_158, var_150)
    
    int64_t var_c8
    int64_t* rax_3 = sub_141842470(&var_118, &var_c8, arg1[2])
    
    if (&var_118 != rax_3)
        sub_140780e10(&var_118, rax_3)
        void var_e0
        
        if (rax_3[8] == 0)
            memmove(&var_e0, &rax_3[7], 4)
        
        if (var_d8_1 != 0)
            sub_140a74f90(var_d8_1)
        
        var_d8_1 = rax_3[8]
        rax_3[8] = 0
        int32_t var_d0_2 = rax_3[9].d
        rax_3[9].d = 0
    
    int32_t var_80_1 = 0
    int64_t var_88
    
    if (var_88 != 0)
        sub_140a74f90(var_88)
    
    int32_t var_c0_1 = 0
    int32_t var_bc
    
    if (var_bc != 0)
        sub_1405a5130(&var_c8, 0)
    
    int32_t var_98_1 = 0xffffffff
    int32_t var_94_1 = 0
    void var_b8
    sub_14059a8e0(&var_b8, 0)
    int64_t var_a8
    
    if (var_a8 != 0)
        sub_140a74f90(var_a8)
    
    int64_t rcx_13 = var_c8
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
    
    int64_t* rcx_14 = *arg1
    int32_t* var_140_1 = &var_118
    void*** var_68_1 = nullptr
    void** const var_58 = &data_142d42ed8
    var_148.q = arg1
    int128_t zmm0_2 = var_148.o
    int32_t* (* var_78)(int64_t* arg1, int64_t* arg2) = sub_14187b010
    int128_t var_50_1 = zmm0_2
    int128_t* var_130
    (*(*rcx_14 + 0x20))(rcx_14, &var_130, 0x7fffffff, &var_78, var_158, var_150, var_148, var_140_1)
    int128_t* rdi_1 = var_130
    int32_t var_128
    void* r14_4 = &rdi_1[sx.q(var_128)]
    
    if (rdi_1 != r14_4)
        do
            int64_t* rcx_15 = arg1[1]
            zmm0_2.q = float.d(zx.q(*((*(*rcx_15 + 0x1e8))(rcx_15, rdi_1) + 0x30)))
            int64_t* rcx_17 = arg1[1]
            zmm0_2.q = zmm0_2.q f/ arg1[7]
            zmm0_2.q = zmm0_2.q f+ arg1[9]
            arg1[9] = zmm0_2.q
            zmm0_2.q = float.d(*((*(*rcx_17 + 0x1e8))(rcx_17, rdi_1) + 0x38))
            zmm0_2.q = zmm0_2.q f/ arg1[7]
            zmm0_2.q = zmm0_2.q f+ arg1[9]
            arg1[9] = zmm0_2.q
            sub_140598750(&arg1[0x14], &var_148)
            *var_140_1 = *rdi_1
            var_140_1[4] = 0xffffffff
            sub_14093ebb0(&arg1[0x14], &var_138, sub_140a6b260(var_140_1, 0x10), var_140_1, 
                var_148, nullptr)
            rdi_1 = &rdi_1[1]
        while (rdi_1 != r14_4)
        
        rdi_1 = var_130
    
    if (rdi_1 != 0)
        sub_140a74f90(rdi_1)
    
    if (var_78 != 0)
        void** const* rcx_23 = &var_58
        
        if (var_68_1 != 0)
            rcx_23 = var_68_1
        
        (*rcx_23)[2](rcx_23)
    
    int32_t var_d0_3 = 0
    
    if (var_d8_1 != 0)
        sub_140a74f90(var_d8_1)
    
    int64_t var_110
    var_110.d = 0
    int32_t var_e8_2 = 0xffffffff
    int32_t var_e4_2 = 0
    int64_t var_108
    result = sub_14059a8e0(&var_108, 0)
    int64_t var_f8
    
    if (var_f8 != 0)
        result = sub_140a74f90(var_f8)
    
    int64_t rcx_28 = var_118
    
    if (rcx_28 != 0)
        result = sub_140a74f90(rcx_28)

__security_check_cookie(result_1 ^ &var_178)
return result
