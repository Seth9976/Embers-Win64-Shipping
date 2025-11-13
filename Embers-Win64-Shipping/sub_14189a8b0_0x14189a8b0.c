// 函数: sub_14189a8b0
// 地址: 0x14189a8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int32_t var_158
char* var_150
int32_t var_148
int128_t* var_140
void var_138
int32_t i

for (i = arg1[0x1f].d; i s> 0; i = arg1[0x1f].d)
    int64_t* r15_1 = arg1[0x1e]
    
    if (arg1[9] f< *r15_1)
        break
    
    sub_140598750(&arg1[0xa], &var_148)
    *var_140 = *(r15_1 + 8)
    var_140[1].d = 0xffffffff
    int32_t rax_2 = sub_140a6b260(var_140, 0x10)
    var_150 = nullptr
    var_158 = var_148
    sub_14093ebb0(&arg1[0xa], &var_138, rax_2, var_140, var_158, var_150)
    int32_t rax_3 = arg1[0x1f].d
    
    if (rax_3 != 1)
        int64_t rcx_3 = arg1[0x1e]
        memmove(rcx_3, rcx_3 + 0x18, (rax_3 - 1) * 0x18)
        rax_3 = arg1[0x1f].d
    
    arg1[0x1f].d = rax_3 - 1
    sub_1405fde90(&arg1[0x1e])

if (i s< 0x32)
    uint128_t zmm6
    uint128_t var_38_1 = zmm6
    void* i_1 = arg1[0x1e]
    int64_t rax_6 = sx.q(arg1[0x1f].d)
    int64_t var_118
    __builtin_memset(&var_118, 0, 0x2c)
    void* r15_2 = i_1 + rax_6 * 0x18
    int32_t var_ec_1 = 0x80
    int32_t var_e8_1 = 0xffffffff
    int32_t var_e4_1 = 0
    int64_t var_d8_1 = 0
    int32_t var_d0_1 = 0
    int64_t* var_130
    
    for (; i_1 != r15_2; i_1 += 0x18)
        zmm6 = *(i_1 + 8)
        sub_140598750(&var_118, &var_130)
        int32_t* var_128
        *var_128 = zmm6
        var_128[4] = 0xffffffff
        int32_t rax_7 = sub_140a6b260(var_128, 0x10)
        var_150 = nullptr
        var_158 = var_130.d
        sub_14093ebb0(&var_118, &var_138, rax_7, var_128, var_158, var_150)
    
    int64_t* rcx_10 = *arg1
    void** const var_68 = &data_142da2668
    void*** var_78_1 = nullptr
    int32_t* (* var_88)(int64_t* arg1, int64_t* arg2) = sub_14187b110
    int64_t* var_60_1 = arg1
    (*(*rcx_10 + 0x28))(rcx_10, &var_148, 0x64, &var_88, var_158, var_150)
    int64_t* var_128_1 = arg1
    var_130 = &var_118
    uint128_t zmm0 = var_130.o
    void*** var_b8_1 = nullptr
    void** const var_a8 = &data_142d42ed8
    int32_t* (* var_c8)(int64_t* arg1, int64_t* arg2) = sub_14187ade0
    uint128_t var_a0_1 = zmm0
    sub_14185e8a0(&var_148, &var_c8)
    uint128_t zmm0_2
    
    if (arg1[0x1f].d s<= 0)
        zmm0_2 = zx.o(0)
    else
        zmm0_2 = zx.o(*(arg1[0x1e] + sx.q(arg1[0x1f].d) * 0x18 - 0x18))
    
    uint128_t* rbx_3 = var_148.q
    zmm6 = _mm_max_sd(arg1[9], zmm0_2.q)
    void* r15_5 = &rbx_3[sx.q(var_140.d)]
    
    if (rbx_3 != r15_5)
        do
            int64_t* rcx_13 = arg1[1]
            void* rax_12 = (*(*rcx_13 + 0x1e8))(rcx_13, rbx_3)
            int64_t r14_2 = sx.q(arg1[0x1f].d)
            zmm0_2.q = float.d(*(rax_12 + 0x38))
            int32_t rax_13 = (r14_2 + 1).d
            zmm0_2.q = zmm0_2.q f/ arg1[4]
            arg1[0x1f].d = rax_13
            zmm6.q = zmm6.q f+ zmm0_2.q
            
            if (rax_13 s> *(arg1 + 0xfc))
                sub_1405a4df0(&arg1[0x1e])
            
            int64_t rax_14 = arg1[0x1e]
            int64_t rcx_15 = r14_2 * 3
            *(rax_14 + (rcx_15 << 3)) = zmm6.q
            zmm0_2 = *rbx_3
            rbx_3 = &rbx_3[1]
            *(rax_14 + (rcx_15 << 3) + 8) = zmm0_2
        while (rbx_3 != r15_5)
        
        rbx_3 = var_148.q
    
    if (var_c8 != 0)
        void** const* rcx_16 = &var_a8
        
        if (var_b8_1 != 0)
            rcx_16 = var_b8_1
        
        (*rcx_16)[2](rcx_16)
        rbx_3 = var_148.q
    
    if (rbx_3 != 0)
        sub_140a74f90(rbx_3)
    
    if (var_88 != 0)
        void** const* rcx_18 = &var_68
        
        if (var_78_1 != 0)
            rcx_18 = var_78_1
        
        (*rcx_18)[2](rcx_18)
    
    int32_t var_d0_2 = 0
    
    if (var_d8_1 != 0)
        sub_140a74f90(var_d8_1)
    
    int64_t var_110
    var_110.d = 0
    int32_t var_e8_2 = 0xffffffff
    int32_t var_e4_2 = 0
    int64_t var_108
    i = sub_14059a8e0(&var_108, 0)
    int64_t var_f8
    
    if (var_f8 != 0)
        i = sub_140a74f90(var_f8)
    
    int64_t rcx_23 = var_118
    
    if (rcx_23 != 0)
        i = sub_140a74f90(rcx_23)

__security_check_cookie(rax_1 ^ &var_178)
return i
