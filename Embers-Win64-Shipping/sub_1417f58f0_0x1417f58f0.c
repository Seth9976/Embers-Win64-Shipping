// 函数: sub_1417f58f0
// 地址: 0x1417f58f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
uint64_t result = sub_141efce60(arg1, arg2)

if ((*(arg1 + 0x8a) & 1) != 0)
    uint128_t var_88[0x3]
    float zmm1[0x4] = sub_141f3cf60(arg1, &var_88)[1]
    float var_108 = zmm1[0]
    float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    float var_98_1[0x4] = zmm1
    float var_100_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
    float var_104_1 = temp0_1[0]
    uint128_t var_58
    uint128_t var_b8 = *sub_141f3cf60(arg1, &var_58)
    int64_t var_f8
    sub_140adf5d0(&var_b8, &var_f8)
    void* rax_5
    
    if (arg1[0x15] == 0)
        rax_5 = sub_141ee69e0(arg1)
    
    int128_t zmm3_1
    
    if (arg1[0x15] == 0 && rax_5 == 0)
        zmm3_1 = 0x42c80000
    else
        void* rax_6 = arg1[0x15]
        
        if (rax_6 == 0)
            rax_6 = sub_141ee69e0(arg1)
        
        zmm3_1 = *(sub_142437e30(rax_6, 0, 1) + 0x240)
    
    result = sub_1417f2800(arg1, &var_108, &var_f8, zmm3_1)
    char rdi_1 = result.b
    
    if (result.b != 0)
        int32_t var_f0
        int32_t var_d0_1 = var_f0
        int64_t var_d8 = var_f8
        float var_c0_1 = var_100_1
        char var_120_1 = 0
        int64_t var_c8 = var_108.q
        result = sub_141f48a10(arg1, &var_c8, &var_d8, 0, 0, var_120_1)
    
    if (arg1[0x89].b == 0 && rdi_1 != 0 && *(arg1 + 0x41d) != 0)
        result = data_143ef96f0
        
        if (arg1[0x84] != result)
            result = sub_1417f2c80(arg1, 0)
    
    arg1[0x89].b = rdi_1
    
    if (arg1[0x92] == 0 && data_143f5b298 != 0)
        int64_t* var_e8 = arg1
        void*** var_a8
        void**** rax_8 = sub_1417ea9b0(&var_a8, &var_e8)
        int64_t* rcx_12 = rax_8[1]
        void*** rdx_7 = *rax_8
        void*** var_118 = rdx_7
        int64_t* var_110 = rcx_12
        
        if (rcx_12 != 0)
            rcx_12[1].d += 1
            rcx_12 = var_110
        
        result = &var_118
        
        if (&arg1[0x92] != &var_118)
            arg1[0x92] = rdx_7
            var_118 = nullptr
            result = sub_1405aeff0(&arg1[0x93], &var_110)
            rcx_12 = var_110
        
        if (rcx_12 != 0)
            result = zx.q(rcx_12[1].d)
            rcx_12[1].d -= 1
            
            if (result.d == 1)
                int64_t* rbx_1 = var_110
                (**rbx_1)(rbx_1)
                result = zx.q(*(rbx_1 + 0xc))
                *(rbx_1 + 0xc) -= 1
                
                if (result.d == 1)
                    int64_t* rcx_15 = var_110
                    result = (*(*rcx_15 + 8))(rcx_15, 1)
        
        int64_t* var_a0
        
        if (var_a0 != 0)
            result = zx.q(var_a0[1].d)
            var_a0[1].d -= 1
            
            if (result.d == 1)
                result = (**var_a0)(var_a0)
                int32_t rdi_3 = *(var_a0 + 0xc)
                *(var_a0 + 0xc) -= 1
                
                if (rdi_3 == 1)
                    result = (*(*var_a0 + 8))(var_a0, zx.q(rdi_3))

__security_check_cookie(rax_1 ^ &var_148)
return result
