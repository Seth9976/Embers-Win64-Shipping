// 函数: sub_14118c620
// 地址: 0x14118c620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = arg1
void* r13 = data_143e6d188
int64_t result = sx.q(data_143e6d190)
void* r9 = arg3
void* r15_1 = result * 0x160 + r13
void* var_f8 = r15_1

if (r13 != r15_1)
    int128_t* rdi_1 = r13 + 0xc0
    int128_t zmm6
    int128_t var_48_1 = zmm6
    int128_t zmm7
    int128_t var_58_1 = zmm7
    int128_t zmm8
    int128_t var_68_1 = zmm8
    
    do
        if (*(rdi_1 - 0xb8) == arg1)
            void var_f0
            sub_14205a1d0(r9, &var_f0, *(rdi_1 - 0xbc))
            int32_t result_1
            result = sx.q(result_1)
            void* var_e8
            
            if (result.d != 0)
                if (arg2 u<= 1)
                    void* rsi_1 = var_e8
                    void* r15_4 = (result << 6) + rsi_1
                    
                    while (rsi_1 != r15_4)
                        uint128_t zmm2 = *(rsi_1 + 0x20)
                        uint128_t zmm3 = *(rsi_1 + 0x30)
                        uint128_t zmm0_1 = *rsi_1
                        uint128_t zmm1_1 = *(rsi_1 + 0x10)
                        zmm6 = rdi_1[-2]
                        zmm7 = rdi_1[-1]
                        zmm8 = *rdi_1
                        int64_t var_a8_1 = zmm0_1.q
                        int64_t var_a0_1 = _mm_bsrli_si128(zmm0_1, 8).q
                        int32_t var_7c_1 = _mm_bsrli_si128(zmm2, 0xc).d
                        int64_t var_98_1 = zmm1_1.q
                        int64_t rax = _mm_bsrli_si128(zmm1_1, 8).q
                        int32_t var_84_1 = _mm_bsrli_si128(zmm2, 4).d
                        int32_t var_8c_1 = rax.d
                        int32_t var_78_1 = zmm3.d
                        int32_t var_74_1 = _mm_bsrli_si128(zmm3, 4).d
                        uint32_t var_90_1 = (rax u>> 0x20).d
                        int32_t var_80_1 = _mm_bsrli_si128(zmm2, 8).d
                        int32_t var_88_1 = zmm2.d
                        int32_t var_70_1 = _mm_bsrli_si128(zmm3, 8).d
                        
                        if (arg2 == 0)
                            int64_t rax_2 = sx.q(rdi_1[9].d)
                            
                            if (rax_2.d s< *(rdi_1 + 0x68))
                                var_a8_1 = *((rax_2 << 5) + rdi_1[6].q + 0x10)
                            else if (*(rdi_1 + 0x58) s> 0)
                                sub_14117bc20(arg4, rdi_1[5].q)
                        
                        int64_t r14_1 = sx.q(arg4[1].d)
                        int32_t rax_4 = (r14_1 + 1).d
                        arg4[1].d = rax_4
                        
                        if (rax_4 s> *(arg4 + 0xc))
                            sub_1405fdd60(arg4)
                        
                        result = *arg4
                        rsi_1 += 0x40
                        int128_t* rcx_7 = r14_1 * 0x70
                        *(rcx_7 + result) = zmm6
                        *(rcx_7 + result + 0x10) = zmm7
                        *(rcx_7 + result + 0x20) = zmm8
                        *(rcx_7 + result + 0x30) = var_a8_1.o
                        *(rcx_7 + result + 0x40) = var_98_1.o
                        *(rcx_7 + result + 0x50) = var_88_1.o
                        *(rcx_7 + result + 0x60) = var_78_1.o
                    
                    r15_1 = var_f8
                
                if (arg2 != 3)
                    if (arg2 == 2 && *(rdi_1 + 0x48) s> 0)
                        result = rdi_1[4].q
                        goto label_14118c841
                else if (*(rdi_1 + 0x58) s> 0)
                    result = rdi_1[5].q
                label_14118c841:
                    
                    if (arg4 != result)
                        int32_t rsi_2 = *(result + 8)
                        int64_t r14_2 = *result
                        arg4[1].d = rsi_2
                        int32_t r8_1 = *(arg4 + 0xc)
                        
                        if (rsi_2 != 0 || r8_1 != 0)
                            sub_140f15120(arg4, rsi_2, r8_1)
                            result = memcpy(*arg4, r14_2, rsi_2 * 0x70)
                        else
                            *(arg4 + 0xc) = r8_1
                
                if (var_e8 != 0)
                    result = sub_140a74f90(var_e8)
            else if (var_e8 != 0)
                result = sub_140a74f90(var_e8)
            r9 = arg3
            arg1 = arg_8
        
        r13 += 0x160
        rdi_1 = &rdi_1[0x16]
    while (r13 != r15_1)

return result
