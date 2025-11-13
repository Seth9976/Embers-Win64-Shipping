// 函数: sub_141812ba0
// 地址: 0x141812ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x18) != 0)
    *(arg3 + 0x6c) = 0

void*** rax = j_sub_140a82f30(0x8e8)
void*** r15_1

if (rax == 0)
    r15_1 = nullptr
else
    int64_t var_108 = 0
    int32_t var_100_1 = 0
    sub_1407473e0(&var_108, arg4)
    int64_t var_118 = 0
    int32_t var_110_1 = 0
    
    if (arg1 + 0x98 != &var_118 && *(arg1 + 0xa0) != 0)
        int64_t* rcx_2 = *(arg1 + 0x98)
        
        if (rcx_2 != 0)
            (*(*rcx_2 + 0x40))(rcx_2, &var_118)
    
    uint128_t zmm0_1 = data_143efa898
    uint128_t var_a8 = zmm0_1
    void* rax_2 = _mm_bsrli_si128(zmm0_1, 8).q
    
    if (rax_2 != 0)
        *(rax_2 + 8) += 1
    
    int64_t var_f8
    __builtin_memset(&var_f8, 0, 0x2c)
    int32_t var_cc_1 = 0x80
    int32_t var_c8_1 = 0xffffffff
    int32_t var_c4_1 = 0
    int64_t var_b8_1 = 0
    int32_t var_b0_1 = 0
    sub_1418234e0(&var_f8, arg1 + 0x40)
    void var_98
    r15_1 = sub_14181e660(rax, sub_14181db00(&var_98, arg3), &var_f8, arg1 + 8, &var_a8, &var_118, 
        &var_108)

int64_t* rax_5 = j_sub_140a82f30(0x18)
int64_t* rbx_1 = rax_5

if (rax_5 == 0)
    rbx_1 = nullptr
else
    rax_5[1].d = 1
    *(rax_5 + 0xc) = 1
    *rbx_1 = &data_142d42ea8
    rbx_1[2] = r15_1

void**** rsi_1 = &r15_1[2]

if (r15_1 == 0)
    rsi_1 = nullptr

if (rsi_1 != 0)
    if (*rsi_1 == 0)
    label_141812d4a:
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        *rsi_1 = r15_1
        int64_t* rcx_7 = rsi_1[1]
        
        if (rbx_1 != rcx_7)
            if (rbx_1 != 0)
                *(rbx_1 + 0xc) += 1
                rcx_7 = rsi_1[1]
            
            if (rcx_7 != 0)
                int32_t rax_7 = *(rcx_7 + 0xc)
                *(rcx_7 + 0xc) -= 1
                
                if (rax_7 == 1)
                    (*(*rcx_7 + 8))(rcx_7, 1)
            
            rsi_1[1] = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t rax_11 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (rax_11 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
    else
        void* rcx_6 = rsi_1[1]
        
        if (rcx_6 == 0)
            goto label_141812d4a
        
        int32_t rax_6 = 0
        
        if (0 == *(rcx_6 + 8))
            *(rcx_6 + 8) = 0
        else
            rax_6 = *(rcx_6 + 8)
        
        if (rax_6 s<= 0)
            goto label_141812d4a

*arg2 = r15_1
arg2[1] = rbx_1

if (rbx_1 != 0)
    rbx_1[1].d += 1
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t r14_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (r14_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, zx.q(r14_1))

sub_1409f6060(arg3)
sub_140745b20(arg4)
return arg2
