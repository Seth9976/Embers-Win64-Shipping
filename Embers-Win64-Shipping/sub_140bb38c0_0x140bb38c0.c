// 函数: sub_140bb38c0
// 地址: 0x140bb38c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int32_t rdi = arg2[1].d
uint64_t var_d8 = *arg2
int64_t result
result.b = var_d8:4.d != 0

if ((sub_140b5b8a0(var_d8.d, 0).b == 0 | result.b) != 0 && rdi != 0)
    result = zx.q(*(arg1 + 0x1c0))
    
    if (result.d != *(arg1 + 0x1ec))
        int32_t rax_3 = sub_140b5ead0(var_d8.d) + var_d8:4.d
        void* r8_1 = arg1 + 0x1f0
        void* rcx_2 = *(r8_1 + 8)
        
        if (rcx_2 != 0)
            r8_1 = rcx_2
        
        result = zx.q(*(r8_1 + (((sx.q(*(arg1 + 0x200)) - 1) & sx.q(rax_3)) << 2)))
        
        if (result.d != 0xffffffff)
            int64_t r9_1 = *(arg1 + 0x1b8)
            
            do
                int64_t r8_2 = sx.q(result.d)
                int64_t rdx_4 = r8_2 * 3
                
                if (*(r9_1 + (rdx_4 << 3)) == var_d8)
                    if (result.d != 0xffffffff)
                        result = r9_1 + r8_2 * 0x18
                        
                        if (result != 0)
                            result = *(result + 8)
                            
                            if (result != 0)
                                int32_t rdx_5 = *(result + 0x23c)
                                
                                if (rdx_5 == rdi)
                                    int32_t rdi_1 = *(result + 0x44)
                                    
                                    if (data_143e1a350 != 0)
                                        rdx_5 = sub_140baa830(0x7fffffff)
                                    
                                    uint128_t zmm1 = zx.o(*arg2)
                                    int32_t var_d0_1 = arg2[1].d
                                    void** const var_98 = &data_142e345d8
                                    int32_t rax_9 = *(arg1 + 0x328) + 1
                                    int64_t (* var_68_1)(int64_t* arg1, int64_t* arg2) =
                                        j_sub_140b98920
                                    uint128_t zmm0
                                    zmm0.q = zmm1.q
                                    *(arg1 + 0x328) = rax_9
                                    int32_t var_6c_1 = rax_9
                                    zmm1 = zmm0
                                    zmm0 = var_98.o
                                    int32_t var_74_1 = rdx_5
                                    zmm1 = _mm_unpacklo_pd(zmm1, arg1)
                                    int32_t var_78 = rdi_1
                                    int32_t r8
                                    int32_t var_70_1 = r8
                                    uint128_t* var_58_1 = nullptr
                                    void*** var_a8_1 = nullptr
                                    uint128_t var_48 = zmm0
                                    uint128_t var_90_1 = zmm1
                                    uint128_t var_38_1 = zmm1
                                    result = sub_140b93350(arg1 + 0x330, &var_78)
                                    
                                    if (var_68_1 != 0)
                                        uint128_t* rcx_6 = &var_48
                                        
                                        if (var_58_1 != 0)
                                            rcx_6 = var_58_1
                                        
                                        result = (*(*rcx_6 + 0x10))(rcx_6)
                                    
                                    if (nullptr != 0)
                                        void** const* rcx_7 = &var_98
                                        
                                        if (var_a8_1 != 0)
                                            rcx_7 = var_a8_1
                                        
                                        result = (*rcx_7)[2](rcx_7)
                    
                    break
                
                result = zx.q(*(r9_1 + (rdx_4 << 3) + 0x10))
            while (result.d != 0xffffffff)

__security_check_cookie(rax_1 ^ &var_108)
return result
