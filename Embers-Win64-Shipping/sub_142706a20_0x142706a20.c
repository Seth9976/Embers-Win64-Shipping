// 函数: sub_142706a20
// 地址: 0x142706a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(*(arg1 + 0x120))
char* rdi = *(arg1 + 0x118)
void* r15 = &rdi[result * 0x14]

if (rdi != r15)
    TEB* gsbase
    void* r12_1 = gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)
    int128_t zmm6
    int128_t var_38_1 = zmm6
    
    do
        result = sub_140d3c6e0(&rdi[0xc])
        int64_t result_1 = result
        int64_t result_2 = result
        
        if (result != 0 && (*(result + 0x5c) & 8) == 0)
            int32_t rax_1 = *(result + 0xc)
            void* const rax_7
            
            if (rax_1 s>= data_143e1d9b4)
                rax_7 = nullptr
            else
                int16_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(rax_1)
                uint32_t rdx_2 = zx.d(temp0_1)
                int32_t rax_3 = temp1_1 + rdx_2
                rax_7 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3))
                    + sx.q(zx.d(rax_3.w) - rdx_2) * 0x18
            
            result = zx.q(*(rax_7 + 8) u>> 0x1d)
            
            if ((result.b & 1) == 0)
                result = zx.q(*rdi)
                int64_t* rcx_7 = *(*(arg1 + 0x88) + (result << 3))
                
                if (rcx_7 != 0)
                    (*(*rcx_7 + 0x260))(rcx_7, result_2)
                    zmm6 = *(arg1 + 0x9c)
                    
                    if (data_143f38e90 s> *(0x14 + *r12_1))
                        _Init_thread_header(&data_143f38e90)
                        
                        if (data_143f38e90 == 0xffffffff)
                            zmm6 = sub_140b58170(&data_143f38e88, "OnEndPlay", 1)
                            _Init_thread_footer(&data_143f38e90)
                    
                    int64_t rdx_5 = data_143f38e88
                    int128_t var_48 = zmm6
                    char rax_12 = sub_140d18770(result_2, rdx_5, &var_48)
                    *(result_2 + 0x18f) |= rax_12
                    uint32_t rcx_10 = (result_2 u>> 4).d
                    int32_t rdx_7 = (0x9e3779b9 - rcx_10) ^ rcx_10 << 8
                    int32_t r10_3 = neg.d(rdx_7 + rcx_10) ^ rdx_7 u>> 0xd
                    int32_t rcx_13 = (rcx_10 - rdx_7 - r10_3) ^ r10_3 u>> 0xc
                    int32_t rdx_10 = (rdx_7 - rcx_13 - r10_3) ^ rcx_13 << 0x10
                    int32_t r10_6 = (r10_3 - rdx_10 - rcx_13) ^ rdx_10 u>> 5
                    int32_t rcx_16 = (rcx_13 - rdx_10 - r10_6) ^ r10_6 u>> 3
                    int32_t rdx_13 = (rdx_10 - rcx_16 - r10_6) ^ rcx_16 << 0xa
                    int32_t r10_9 = (r10_6 - rdx_13 - rcx_16) ^ rdx_13 u>> 0xf
                    void* rsi_1
                    
                    if (*(arg1 + 0xb8) == *(arg1 + 0xe4))
                    label_142706c26:
                        void* rax_30 = sub_1426f0bc0(arg1 + 0xb0, r10_9, &result_1)
                        result_2 = result_1
                        rsi_1 = rax_30
                    else
                        void* rcx_17 = *(arg1 + 0xf0)
                        void* r8_3 = arg1 + 0xe8
                        
                        if (rcx_17 != 0)
                            r8_3 = rcx_17
                        
                        int32_t rax_29 = *(r8_3 + (((sx.q(*(arg1 + 0xf8)) - 1) & sx.q(r10_9)) << 2))
                        
                        if (rax_29 == 0xffffffff)
                            goto label_142706c26
                        
                        int64_t* rcx_20
                        
                        while (true)
                            rcx_20 = (sx.q(rax_29) << 5) + *(arg1 + 0xb0)
                            
                            if (*rcx_20 == result_2)
                                break
                            
                            rax_29 = rcx_20[3].d
                            
                            if (rax_29 == 0xffffffff)
                                goto label_142706c26
                        
                        if (rax_29 == 0xffffffff || rcx_20 == 0)
                            goto label_142706c26
                        
                        rsi_1 = &rcx_20[1]
                    
                    result = sub_140d3a3a0(rsi_1, result_2)
                    *(rsi_1 + 8) |= 1 << (zx.d(*rdi) u% 0x20)
        
        rdi = &rdi[0x14]
    while (rdi != r15)

*(arg1 + 0x120) = 0

if (*(arg1 + 0x124) s> 0xffffffff)
    return result

return sub_1405c55e0(arg1 + 0x118, 0) __tailcall
