// 函数: sub_140b42080
// 地址: 0x140b42080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
uint128_t var_108
sub_140b24bd0(&arg2[2], &var_108, 0x7b, nullptr)
char var_f0

if (var_f0 == 0)
    arg1[3].b = 0
else
    char var_1a8 = 0
    char* var_188_1 = &var_1a8
    uint64_t (* var_190)(int64_t arg1, int16_t* arg2) = sub_140b0ee20
    void var_88
    sub_140b24d50(&arg2[2], &var_88, &var_190, &var_108)
    char var_1a7 = 0
    char* var_178_1 = &var_1a7
    int64_t (* var_180)(int64_t arg1, int16_t* arg2) = sub_140b34a80
    uint128_t var_e8
    sub_140b24d50(&arg2[2], &var_e8, &var_180, &var_108)
    char var_d0
    
    if (var_d0 != 0)
        char var_1a6 = 0
        char* var_198_1 = &var_1a6
        uint64_t (* var_1a0)(int64_t arg1, int16_t* arg2) = sub_140b0ee20
        void var_68
        sub_140b24d50(&arg2[2], &var_68, &var_1a0, &var_108)
        void var_48
        
        if (*(sub_140b24bd0(&arg2[2], &var_48, 0x7d, &var_108) + 0x18) != 0)
            uint128_t zmm2 = var_e8
            uint128_t var_158_1 = var_108
            int64_t var_f8
            int64_t var_148_1 = var_f8
            int32_t rcx_15 = ((_mm_bsrli_si128(zmm2, 8).q - zmm2.q) s>> 1).d
            var_1a0.o = zmm2
            sub_140b3e300()
            void** const var_b8_1 = &data_142e78508
            int128_t var_c8 = data_143de7b18.o
            int128_t* rax_16 = j_sub_140a82f30(0x38)
            
            if (rax_16 != 0)
                *rax_16 = var_1a0.o
                int64_t var_d8
                rax_16[1] = var_d8.o
                rax_16[2] = var_158_1
                rax_16[3].q = rcx_15.q
            
            int128_t* var_b0_1 = rax_16
            sub_140b0e240(arg2, &var_108, &var_c8)
            sub_140b0bbf0(&var_c8)
            arg1[3].b = 0
        else if (arg3 == 0)
            arg1[3].b = 0
        else
            void var_120
            int64_t* rax_10 = sub_140b3c730(&var_120, &var_108)
            *arg1 = *rax_10
            void* rax_12 = rax_10[1]
            arg1[1] = rax_12
            
            if (rax_12 != 0)
                *(rax_12 + 8) += 1
            
            arg1[2].d = rax_10[2].d
            arg1[3].b = 1
            int64_t* var_118
            
            if (var_118 != 0)
                var_118[1].d -= 1
                
                if (var_118[1].d == 1)
                    int64_t rdx_8 = *var_118
                    (*rdx_8)(var_118, rdx_8)
                    int32_t rdi_2 = *(var_118 + 0xc)
                    *(var_118 + 0xc) -= 1
                    
                    if (rdi_2 == 1)
                        int64_t r8_3 = *var_118
                        (*(r8_3 + 8))(var_118, zx.q(rdi_2), r8_3)
    else if (arg3 == 0)
        arg1[3].b = 0
    else
        void var_138
        int64_t* rax_2 = sub_140b3c730(&var_138, &var_108)
        *arg1 = *rax_2
        void* rax_4 = rax_2[1]
        arg1[1] = rax_4
        
        if (rax_4 != 0)
            *(rax_4 + 8) += 1
        
        arg1[2].d = rax_2[2].d
        arg1[3].b = 1
        int64_t* var_130
        
        if (var_130 != 0)
            var_130[1].d -= 1
            
            if (var_130[1].d == 1)
                (**var_130)(var_130)
                int32_t rdi_1 = *(var_130 + 0xc)
                *(var_130 + 0xc) -= 1
                
                if (rdi_1 == 1)
                    (*(*var_130 + 8))(var_130, zx.q(rdi_1))

__security_check_cookie(rax_1 ^ &var_1c8)
return arg1
