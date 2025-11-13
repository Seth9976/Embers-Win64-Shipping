// 函数: sub_141888b90
// 地址: 0x141888b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
uint64_t result = __security_cookie ^ &var_188
uint64_t result_1 = result
void* rcx = *(arg1 + 0x148)

if (rcx != 0)
    result = 0
    bool z_1
    
    if (0 == *(rcx + 0x78))
        *(rcx + 0x78) = 0
        z_1 = true
    else
        result.b = *(rcx + 0x78)
        z_1 = false
    
    if (not(z_1))
        void* rcx_1 = *(arg1 + 0x158)
        
        if (rcx_1 != 0)
            result = 0
            bool z_2
            
            if (0 == *(rcx_1 + 0x78))
                *(rcx_1 + 0x78) = 0
                z_2 = true
            else
                result.b = *(rcx_1 + 0x78)
                z_2 = false
            
            if (not(z_2) && *(arg1 + 0x100) == 0)
                void* rbx_1 = *(arg1 + 0x148)
                *(arg1 + 0x100) = 1
                
                while (true)
                    bool z_3
                    
                    if (0 == *(rbx_1 + 0x78))
                        *(rbx_1 + 0x78) = 0
                        z_3 = true
                    else
                        int64_t rax_1
                        rax_1.b = *(rbx_1 + 0x78)
                        z_3 = false
                    
                    if (not(z_3))
                        break
                    
                    int64_t* rcx_2 = *(rbx_1 + 0x70)
                    (*(*rcx_2 + 0x20))(rcx_2, 0xffffffff, 0)
                
                int64_t* rcx_3 = *(rbx_1 + 0x88)
                void* rax_3 = *(rbx_1 + 0x80)
                void* const var_160 = rax_3
                int64_t* var_158 = rcx_3
                
                if (rcx_3 != 0)
                    rcx_3[1].d += 1
                    rcx_3 = var_158
                
                if (arg1 + 0x168 != &var_160)
                    *(arg1 + 0x168) = rax_3
                    var_160 = nullptr
                    sub_1405aeff0(arg1 + 0x170, &var_158)
                    rcx_3 = var_158
                
                if (rcx_3 != 0)
                    rcx_3[1].d -= 1
                    
                    if (rcx_3[1].d == 1)
                        int64_t* rbx_2 = var_158
                        (**rbx_2)(rbx_2)
                        int32_t rax_6 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (rax_6 == 1)
                            int64_t* rcx_6 = var_158
                            (*(*rcx_6 + 8))(rcx_6, 1)
                
                void* rbx_3 = *(arg1 + 0x158)
                
                while (true)
                    bool z_4
                    
                    if (0 == *(rbx_3 + 0x78))
                        *(rbx_3 + 0x78) = 0
                        z_4 = true
                    else
                        int64_t rax_8
                        rax_8.b = *(rbx_3 + 0x78)
                        z_4 = false
                    
                    if (not(z_4))
                        break
                    
                    int64_t* rcx_7 = *(rbx_3 + 0x70)
                    (*(*rcx_7 + 0x20))(rcx_7, 0xffffffff, 0)
                
                int64_t* rcx_8 = *(rbx_3 + 0x88)
                int64_t rax_10 = *(rbx_3 + 0x80)
                int64_t var_150 = rax_10
                int64_t* var_148 = rcx_8
                
                if (rcx_8 != 0)
                    rcx_8[1].d += 1
                    rcx_8 = var_148
                
                if (arg1 + 0x178 != &var_150)
                    *(arg1 + 0x178) = rax_10
                    var_150 = 0
                    sub_1405aeff0(arg1 + 0x180, &var_148)
                    rcx_8 = var_148
                
                if (rcx_8 != 0)
                    rcx_8[1].d -= 1
                    
                    if (rcx_8[1].d == 1)
                        int64_t* rbx_4 = var_148
                        (**rbx_4)(rbx_4)
                        int32_t rax_13 = *(rbx_4 + 0xc)
                        *(rbx_4 + 0xc) -= 1
                        
                        if (rax_13 == 1)
                            int64_t* rcx_11 = var_148
                            (*(*rcx_11 + 8))(rcx_11, 1)
                
                if (*(arg1 + 0x168) == 0)
                    *(arg1 + 0x108)
                    *(arg1 + 0x108) = 0
                    *(arg1 + 0x104)
                    *(arg1 + 0x104) = 0
                
                if (*(arg1 + 0x28) s> 1 && *(arg1 + 0x178) == 0)
                    *(arg1 + 0x108)
                    *(arg1 + 0x108) = 0
                    *(arg1 + 0x104)
                    *(arg1 + 0x104) = 0
                
                result = 0
                bool z_5
                
                if (0 == *(arg1 + 0x108))
                    *(arg1 + 0x108) = 0
                    z_5 = true
                else
                    result = zx.q(*(arg1 + 0x108))
                    z_5 = false
                
                if (not(z_5))
                    void* var_130 = *(arg1 + 0x168)
                    void* rax_18 = *(arg1 + 0x170)
                    void* var_128_1 = rax_18
                    
                    if (rax_18 != 0)
                        *(rax_18 + 8) += 1
                    
                    uint128_t var_110
                    sub_14189da60(&var_110, &var_130)
                    int64_t* rax_20 = *(arg1 + 0x180)
                    
                    if (rax_20 != 0)
                        rax_20[1].d += 1
                    
                    uint128_t zmm1 = var_110
                    uint128_t zmm0 = (*(arg1 + 0x178)).o
                    int64_t var_140_1
                    var_140_1.o = zmm1
                    void* rcx_15 = _mm_bsrli_si128(zmm1, 8).q
                    uint128_t var_48_1 = zmm0
                    var_110 = zmm0
                    
                    if (rcx_15 != 0)
                        int32_t rax_21 = *(rcx_15 + 8)
                        *(rcx_15 + 8) -= 1
                        
                        if (rax_21 == 1)
                            (**rax_20)(rax_20)
                            int32_t rsi_1 = *(rax_20 + 0xc)
                            *(rax_20 + 0xc) -= 1
                            
                            if (rsi_1 == 1)
                                (*(*rax_20 + 8))(rax_20, zx.q(rsi_1))
                    
                    int32_t rax_24 = 2
                    
                    if (*(arg1 + 8) s>= 0x11)
                        rax_24 = 0
                    
                    int32_t var_e0_1 = rax_24
                    int64_t var_120
                    sub_140b1a780(&var_120, arg1 + 0x10)
                    int32_t i_2
                    int32_t i_1 = i_2
                    uint64_t var_f0
                    uint64_t rbx_6 = var_f0
                    
                    if (i_1 != 0)
                        int32_t i
                        
                        do
                            int64_t rcx_19 = *rbx_6
                            
                            if (rcx_19 != 0)
                                sub_140a74f90(rcx_19)
                            
                            rbx_6 += 0x10
                            i = i_1
                            i_1 -= 1
                        while (i != 1)
                    
                    int32_t var_e8 = 1
                    int32_t var_e4
                    sub_1405a4be0(&var_f0, 1, var_e4)
                    uint64_t rbx_7 = var_f0
                    *rbx_7 = 0
                    int64_t r14_2 = var_120
                    int32_t var_118
                    *(rbx_7 + 8) = var_118
                    
                    if (var_118 != 0)
                        sub_1405a4c70(rbx_7, var_118, 0)
                        memcpy(*rbx_7, r14_2, var_118 * 2)
                    else
                        *(rbx_7 + 0xc) = 0
                    
                    int64_t rcx_23 = var_120
                    
                    if (rcx_23 != 0)
                        sub_140a74f90(rcx_23)
                    
                    int64_t var_d8
                    sub_14189db00(&var_d8)
                    var_d8 = *(arg1 + 0x200)
                    int128_t var_a8
                    int128_t zmm3 = var_a8
                    int64_t (* var_128_2)(int64_t* arg1, void* arg2) = sub_141889040
                    void** const var_68 = &data_142d42ed8
                    int64_t (* var_88_1)(int64_t* arg1, int64_t* arg2) = j_sub_14186a8f0
                    var_130 = arg1
                    int128_t* var_b8_1 = nullptr.o.q
                    int128_t var_60_1 = var_130.o
                    int128_t zmm0_1 = var_88_1.o
                    int128_t var_c8
                    var_88_1.o = var_c8
                    int64_t var_c8_1 = zmm0_1.q
                    var_a8 = var_68.o
                    int128_t var_98_1 = var_60_1
                    int128_t var_b8
                    void*** var_78_1
                    var_78_1.o = var_b8
                    var_68.o = zmm3
                    int128_t var_98
                    var_60_1 = var_98
                    
                    if (var_c8.q != 0)
                        void** const* rcx_25 = &var_68
                        
                        if (var_78_1 != 0)
                            rcx_25 = var_78_1
                        
                        (*rcx_25)[2](rcx_25)
                    
                    void*** rax_29 = sub_1418a1300(&var_110, &var_d8)
                    int64_t* rcx_27 = *(arg1 + 0x218)
                    
                    if (rcx_27 != rax_29)
                        *(arg1 + 0x218) = rax_29
                        
                        if (rcx_27 != 0)
                            (**rcx_27)(rcx_27, 1)
                    
                    if (var_c8_1 != 0)
                        int128_t* rcx_28 = &var_a8
                        
                        if (var_b8_1 != 0)
                            rcx_28 = var_b8_1
                        
                        (*(*rcx_28 + 0x10))(rcx_28)
                    
                    result = sub_141868870(&var_110)

__security_check_cookie(result_1 ^ &var_188)
return result
