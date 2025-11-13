// 函数: sub_141a10d70
// 地址: 0x141a10d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int32_t var_48 = 1
int32_t* var_60
int64_t* var_78 = &var_60
char var_30 = 0
int32_t r9 = *(arg1 + 0x1c)
int64_t* rcx_1 = data_143f0f180
int128_t var_44 = data_143dbb1e0
int32_t var_34 = (1 << (data_1439c7a34).b) - 1
int128_t var_58
int128_t* var_80 = &var_58
int64_t var_28 = 0
int32_t var_20 = 0
__builtin_memset(&var_60, 0, 0x18)
void var_68
(*(*rcx_1 + 0x488))(rcx_1, &var_68, &data_143f02b98, zx.q(r9 << 4), 1, var_80, var_78)
sub_1405d1600(arg1 + 0x10, &var_68)
sub_1405d1550(&var_68)
int32_t rdx_2 = *(arg1 + 0x24)
int32_t rdi = 0
int32_t* rax_5 = var_60

if (rdx_2 s> 0)
    int32_t rcx_4
    
    do
        int32_t r11_1 = 0
        rcx_4 = rdx_2
        
        if (rdx_2 s> 0)
            int32_t rdx_3 = *(arg1 + 0x20)
            
            do
                int32_t r9_2 = 0
                
                if (rdx_3 s> 0)
                    int32_t r10_1 = rdx_3
                    int32_t r8_1
                    
                    do
                        int32_t rcx_5 = 0
                        r8_1 = r10_1
                        
                        if (r10_1 s> 0)
                            uint128_t zmm1_1 = _mm_cvtepi32_ps(zx.o(r9_2))
                            uint128_t zmm2 = _mm_cvtepi32_ps(zx.o(r11_1))
                            uint128_t zmm3 = _mm_cvtepi32_ps(zx.o(rdi))
                            
                            do
                                uint128_t zmm0_1 = zx.o(rcx_5)
                                rcx_5 += 1
                                rax_5[1] = zmm1_1.d
                                rax_5[2] = zmm2.d
                                rax_5[3] = zmm3.d
                                *rax_5 = _mm_cvtepi32_ps(zmm0_1).d
                                rax_5 = &rax_5[4]
                                rdx_3 = *(arg1 + 0x20)
                            while (rcx_5 s< rdx_3)
                            
                            r8_1 = rdx_3
                        
                        r9_2 += 1
                        r10_1 = r8_1
                    while (r9_2 s< r8_1)
                
                rcx_4 = *(arg1 + 0x24)
                r11_1 += 1
            while (r11_1 s< rcx_4)
        
        rdi += 1
        rdx_2 = rcx_4
    while (rdi s< rcx_4)

int64_t* rcx_6 = data_143f0f180
int64_t result = (*(*rcx_6 + 0x138))(rcx_6, &data_143f02b98, *(arg1 + 0x10))
__security_check_cookie(rax_1 ^ &var_a8)
return result
