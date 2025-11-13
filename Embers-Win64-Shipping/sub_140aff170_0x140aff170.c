// 函数: sub_140aff170
// 地址: 0x140aff170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_218
int64_t rax_1 = __security_cookie ^ &var_218
int32_t rsi = arg1[0x36].d
int64_t r12
r12.b = 1
arg1[0x36].d = 0x1000000

if (arg1[0x41].b == 0)
    arg1[0x36].d = rsi
else
    uint64_t i_1 = 0
    void* var_1e8 = nullptr
    int32_t i_3 = 0
    sub_140af6370(arg1, &var_1e8)
    int32_t i_2 = i_3
    
    if (i_2 s> 0)
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        int64_t rbx_1 = data_143ddb418
        void* var_118
        __builtin_memset(&var_118, 0, 0x2c)
        int32_t var_e8_1 = 0xffffffff
        int32_t var_ec_1 = 0x80
        int32_t var_e4_1 = 0
        int64_t var_d8_1 = 0
        int32_t var_d0_1 = 0
        void var_150
        int64_t* rax_2 = sub_140a96170(&var_150)
        void var_c8
        int128_t zmm6_1 = sub_140b2f260(&var_c8, _mm_cvtepi32_ps(zx.o(i_2)), rax_2, 1, rbx_1)
        sub_140b40000(&var_c8)
        int64_t* var_148
        
        if (var_148 != 0)
            var_148[1].d -= 1
            
            if (var_148[1].d == 1)
                (**var_148)(var_148)
                int32_t rax_5 = *(var_148 + 0xc)
                *(var_148 + 0xc) -= 1
                
                if (rax_5 == 1)
                    (*(*var_148 + 8))(var_148, 1)
            
            i_2 = i_3
        
        sub_140af2ae0()
        data_143de5b29 = 0
        
        if (i_2 s> 0)
            int128_t var_38_1 = zmm6_1
            int32_t* rsi_2 = var_1e8 + 0x78
            zmm6_1 = 0x3f800000
            int128_t zmm7 = zx.o(0)
            i_1 = zx.q(i_2)
            uint64_t i
            
            do
                void var_138
                zmm6_1 = sub_140b389c0(&var_c8, zmm6_1, sub_140a96170(&var_138))
                int64_t* var_130
                
                if (var_130 != 0)
                    var_130[1].d -= 1
                    
                    if (var_130[1].d == 1)
                        (**var_130)(var_130)
                        int32_t rax_10 = *(var_130 + 0xc)
                        *(var_130 + 0xc) -= 1
                        
                        if (rax_10 == 1)
                            (*(*var_130 + 8))(var_130, 1)
                
                if ((*rsi_2 & 0x1000000) != 0)
                    int64_t var_1d0 = 0
                    int32_t rbx_4 = rsi_2[-0x14]
                    int64_t rdi_1 = *(rsi_2 - 0x58)
                    int32_t var_1c8_1 = rbx_4
                    
                    if (rbx_4 != 0)
                        sub_1405a4c70(&var_1d0, rbx_4, 0)
                        memcpy(var_1d0, rdi_1, rbx_4 * 2)
                    else
                        int32_t var_1c4_1 = 0
                    
                    int64_t* var_1b8_1 = nullptr
                    int64_t var_1a0
                    __builtin_memset(&var_1a0, 0, 0x24)
                    int64_t var_1a8_1 = zmm7.q
                    int64_t* var_170 = &var_1d0
                    char var_1c0 = 0
                    char* var_168_1 = &var_1c0
                    int32_t j_4 = 0
                    int32_t var_1d8
                    sub_140ae4df0(&var_118, &var_1d8, &var_170, nullptr)
                    char* rax_15 = var_118 + 0x10 + sx.q(var_1d8) * 0x60
                    sub_140aeb550(&var_1c0)
                    int32_t j_5
                    int32_t j_2 = j_5
                    int64_t* var_188
                    int64_t* rbx_5 = var_188
                    
                    if (j_2 != 0)
                        int32_t j
                        
                        do
                            int64_t rcx_16 = *rbx_5
                            
                            if (rcx_16 != 0)
                                sub_140a74f90(rcx_16)
                            
                            rbx_5 = &rbx_5[2]
                            j = j_2
                            j_2 -= 1
                        while (j != 1)
                        rbx_5 = var_188
                    
                    if (rbx_5 != 0)
                        sub_140a74f90(rbx_5)
                    
                    sub_140ae6da0(&var_1a0)
                    int32_t j_3 = j_4
                    int64_t* rbx_6 = var_1b8_1
                    
                    if (j_3 != 0)
                        int32_t j_1
                        
                        do
                            int64_t rcx_19 = *rbx_6
                            
                            if (rcx_19 != 0)
                                sub_140a74f90(rcx_19)
                            
                            rbx_6 = &rbx_6[2]
                            j_1 = j_3
                            j_3 -= 1
                        while (j_1 != 1)
                        rbx_6 = var_1b8_1
                    
                    if (rbx_6 != 0)
                        sub_140a74f90(rbx_6)
                    
                    sub_140b01af0(arg1, &var_1d0, 0)
                    char rax_16
                    rax_16, zmm7 = sub_140af8180(arg1, rax_15)
                    data_143de548d = 0
                    sub_140b19e60()
                    zmm6_1 = sub_140b25ff0(&data_1439a8bd0, &arg1[0x14])
                    sub_140599090(&arg1[3])
                    
                    if (r12.b == 0 || rax_16 == 0)
                        r12.b = 0
                    else
                        r12.b = 1
                    
                    int64_t rcx_24 = var_1d0
                    
                    if (rcx_24 != 0)
                        sub_140a74f90(rcx_24)
                
                rsi_2 = &rsi_2[0x22]
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        sub_140af2ae0()
        data_143de5b29 = 1
        int64_t performanceCount_1
        QueryPerformanceCounter(&performanceCount_1)
        sub_140aedcd0(arg1, &var_118)
        sub_140b365b0(&var_c8)
        char var_7c_1 = 0
        int64_t* var_a8
        
        if (var_a8 != 0)
            var_a8[1].d -= 1
            
            if (var_a8[1].d == 1)
                (**var_a8)(var_a8)
                int32_t rax_20 = *(var_a8 + 0xc)
                *(var_a8 + 0xc) -= 1
                
                if (rax_20 == 1)
                    (*(*var_a8 + 8))(var_a8, 1)
        
        int64_t* var_c0
        
        if (var_c0 != 0)
            var_c0[1].d -= 1
            
            if (var_c0[1].d == 1)
                (**var_c0)(var_c0)
                int32_t r14_1 = *(var_c0 + 0xc)
                *(var_c0 + 0xc) -= 1
                
                if (r14_1 == 1)
                    (*(*var_c0 + 8))(var_c0, zx.q(r14_1))
        
        int32_t var_d0_2 = i_1.d
        
        if (var_d8_1 != 0)
            sub_140a74f90(var_d8_1)
        
        sub_140ae6f20(&var_118)
    
    sub_140ae6e20(&var_1e8)
    arg1[0x36].d = rsi

__security_check_cookie(rax_1 ^ &var_218)
return zx.q(r12.b)
