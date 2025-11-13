// 函数: sub_140b41ca0
// 地址: 0x140b41ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
uint128_t var_108
sub_140b24bd0(&arg2[2], &var_108, 0x7b, nullptr)
char var_f0

if (var_f0 == 0)
    arg1[3].b = 0
else
    char var_188 = 0
    char* var_150_1 = &var_188
    uint64_t (* var_158)(int64_t arg1, int16_t* arg2) = sub_140b0ee20
    void var_a8
    sub_140b24d50(&arg2[2], &var_a8, &var_158, &var_108)
    char var_10c_1 = 0
    int32_t var_110
    int32_t* var_180 = &var_110
    int32_t** var_140_1 = &var_180
    int64_t (* var_148)(int64_t* arg1, int16_t* arg2) = sub_140b345b0
    void var_88
    sub_140b24d50(&arg2[2], &var_88, &var_148, &var_108)
    
    if (var_10c_1 != 0)
        char var_187 = 0
        char* var_130_1 = &var_187
        uint64_t (* var_138)(int64_t arg1, int16_t* arg2) = sub_140b0ee20
        void var_68
        sub_140b24d50(&arg2[2], &var_68, &var_138, &var_108)
        void var_48
        int32_t var_178
        
        if (*(sub_140b24bd0(&arg2[2], &var_48, 0x7d, &var_108) + 0x18) != 0)
            uint128_t zmm0_1 = var_108
            var_178 = var_110
            int64_t var_f8
            var_180 = var_f8
            sub_140b3e480()
            int128_t zmm0_2 = data_143de7b30.o
            double temp0_5[0x2] = _mm_unpacklo_pd(zmm0_1, var_180)
            int128_t var_e8 = zmm0_2
            void** const var_d8_1 = &data_142e784e8
            double var_c0_1[0x2] = temp0_5
            int128_t var_d0_1 = var_178.o
            sub_140b0e240(arg2, &var_108, &var_e8)
            sub_140b0bbf0(&var_e8)
            arg1[3].b = 0
        else if (arg3 == 0)
            arg1[3].b = 0
        else
            int64_t* rax_10 = sub_140b3c730(&var_178, &var_108)
            *arg1 = *rax_10
            void* rax_12 = rax_10[1]
            arg1[1] = rax_12
            
            if (rax_12 != 0)
                *(rax_12 + 8) += 1
            
            arg1[2].d = rax_10[2].d
            arg1[3].b = 1
            int64_t* var_170
            
            if (var_170 != 0)
                var_170[1].d -= 1
                
                if (var_170[1].d == 1)
                    int64_t rdx_8 = *var_170
                    (*rdx_8)(var_170, rdx_8)
                    int32_t rdi_2 = *(var_170 + 0xc)
                    *(var_170 + 0xc) -= 1
                    
                    if (rdi_2 == 1)
                        int64_t r8_3 = *var_170
                        (*(r8_3 + 8))(var_170, zx.q(rdi_2), r8_3)
    else if (arg3 == 0)
        arg1[3].b = 0
    else
        void var_128
        int64_t* rax_2 = sub_140b3c730(&var_128, &var_108)
        *arg1 = *rax_2
        void* rax_4 = rax_2[1]
        arg1[1] = rax_4
        
        if (rax_4 != 0)
            *(rax_4 + 8) += 1
        
        arg1[2].d = rax_2[2].d
        arg1[3].b = 1
        int64_t* var_120
        
        if (var_120 != 0)
            var_120[1].d -= 1
            
            if (var_120[1].d == 1)
                (**var_120)(var_120)
                int32_t rdi_1 = *(var_120 + 0xc)
                *(var_120 + 0xc) -= 1
                
                if (rdi_1 == 1)
                    (*(*var_120 + 8))(var_120, zx.q(rdi_1))

__security_check_cookie(rax_1 ^ &var_1a8)
return arg1
