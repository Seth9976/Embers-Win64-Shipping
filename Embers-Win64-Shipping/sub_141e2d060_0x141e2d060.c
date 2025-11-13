// 函数: sub_141e2d060
// 地址: 0x141e2d060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
void* rax_2 = *(arg2 + 0xa8)
int64_t r8
int64_t var_118 = r8

if (rax_2 == 0)
    rax_2 = sub_141ee69e0(arg2)

int32_t result
int512_t zmm3_1
int128_t zmm6
int128_t zmm7_1
result, zmm3_1, zmm6, zmm7_1 = sub_14243ac50(rax_2)

if (result != 1)
    void* i_1 = nullptr
    int32_t var_78_1 = 0
    int32_t var_74_1 = 8
    void var_c0
    int128_t zmm0_1 = sub_141e22a40(arg2, &var_c0)
    (*(*arg1 + 0x2b0))(arg1, arg2)
    void* i = &var_c0
    
    if (i_1 != 0)
        i = i_1
    
    for (void* r15_1 = i + (sx.q(var_78_1) << 3); i != r15_1; i += 8)
        int64_t* rcx_4 = *i
        
        if ((*(rcx_4 + 0x8a) & 1) != 0)
            void* var_d0_1 = nullptr
            int32_t var_c8_1 = 0
            int32_t var_c4_1 = 8
            int32_t var_128
            void var_110
            (*(*rcx_4 + 0x958))(rcx_4, &var_110, arg1, 0, var_128)
            void* rcx_5 = var_d0_1
            void* rbx_1 = &var_110
            int64_t rsi_1 = 0
            
            if (rcx_5 != 0)
                rbx_1 = rcx_5
            
            int64_t rbp_1 = sx.q(var_c8_1) << 3
            uint64_t rbp_2 = rbp_1 u>> 3
            
            if (rbx_1 u> rbx_1 + rbp_1)
                rbp_2 = 0
            
            if (rbp_2 != 0)
                do
                    int64_t* rcx_6 = *rbx_1
                    var_128 = zmm0_1.d
                    (*(*rcx_6 + 0x208))(rcx_6, arg1[7], arg1[8], zx.q(arg1[9].b), var_128)
                    rsi_1 += 1
                    rbx_1 += 8
                while (rsi_1 != rbp_2)
                
                rcx_5 = var_d0_1
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
    
    zmm3_1.o = zmm7_1
    int512_t zmm6_1
    result, zmm6_1 = sub_14246c360(arg1, arg2)
    zmm6_1.o = zmm6
    
    if (i_1 != 0)
        result = sub_140a74f90(i_1)

__security_check_cookie(rax_1 ^ &var_148)
return result
