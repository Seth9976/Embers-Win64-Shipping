// 函数: sub_142c36480
// 地址: 0x142c36480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
void* rdi = *(arg2 + 8)
uint64_t result = zx.q(*(arg3 + 3))
int32_t rdx_2 = (zx.d(*(arg3 + 2)) << 8) + result.d

if (test_bit(rdx_2, 0xf))
    result = zx.q(*(rdi + 0x5c))
    *(arg1 + 4) = result.d

if (test_bit(rdx_2, 0xd))
    result = zx.q(*(rdi + 0x60))
    int32_t result_1 = *(rdi + 0x5c) + 1
    
    if (result_1 u< result.d)
        result = zx.q(result_1)
    
    *(arg1 + 8) = result.d

if ((rdx_2.b & 0xf) != 0)
    int32_t rcx_1 = *(arg1 + 4)
    int32_t r8 = *(arg1 + 8)
    
    if (rcx_1 u< r8)
        int32_t var_58 = 0x11011000
        int32_t var_54_1 = 0x3023020
        int32_t var_50_1 = 0x31211312
        int32_t var_4c
        __builtin_strncpy(&var_4c, "\"2#3", 4)
        uint32_t rsi_1 = zx.d(*(&var_58 + (zx.q(rdx_2) & 0xf)))
        uint32_t r15_2 = rsi_1 u>> 4
        uint64_t r12_1 = zx.q(r15_2)
        
        if (r15_2 u> 2)
            r12_1 = 2
        
        int32_t rsi_2 = rsi_1 & 0xf
        uint64_t r13_1 = zx.q(rsi_2)
        
        if (rsi_2 u> 2)
            r13_1 = 2
        
        result = zx.q((r12_1 + r13_1).d)
        
        if (r8 - rcx_1 u>= result.d)
            int32_t r8_2 = *(rdi + 0x60)
            int32_t rax_5 = *(rdi + 0x5c) + 1
            
            if (rax_5 u< r8_2)
                r8_2 = rax_5
            
            if (r8_2 - rcx_1 u>= 2)
                sub_142bf5140(rdi, rcx_1, r8_2)
            
            int32_t r8_3 = *(arg1 + 8)
            int32_t rdx_4 = *(arg1 + 4)
            
            if (r8_3 - rdx_4 u>= 2)
                sub_142bf5140(rdi, rdx_4, r8_3)
            
            int64_t rdi_1 = *(rdi + 0x70)
            uint64_t rcx_5 = r12_1 * 0x14
            var_58.q = rcx_5
            void var_a8
            memcpy(&var_a8, rdi_1 + zx.q(*(arg1 + 4)) * 0x14, rcx_5.d)
            int32_t r14_1 = *(arg1 + 8)
            uint32_t count = (r13_1 * 0x14).d
            void var_80
            memcpy(&var_80, rdi_1 + (zx.q(r14_1) - zx.q(r13_1.d)) * 0x14, count)
            uint64_t r14_5
            
            if (r12_1.d == r13_1.d)
                r14_5 = zx.q(r12_1.d)
            else
                uint64_t r9_1 = zx.q(*(arg1 + 4))
                r14_5 = zx.q(r12_1.d)
                memmove(rdi_1 + (zx.q(r13_1.d) + r9_1) * 0x14, rdi_1 + (r9_1 + r12_1) * 0x14, 
                    (r14_1 - r9_1.d - r13_1.d - r12_1.d) * 0x14)
            
            memcpy(rdi_1 + zx.q(*(arg1 + 4)) * 0x14, &var_80, count)
            result = memcpy(rdi_1 + (zx.q(*(arg1 + 8)) - r14_5) * 0x14, &var_a8, (var_58.q).d)
            int128_t zmm1
            
            if (r15_2 == 3)
                int32_t rdx_11 = *(arg1 + 8)
                uint64_t rax_24 = zx.q(rdx_11 - 1) * 5
                zmm1 = *(rdi_1 + (rax_24 << 2))
                int32_t r9_2 = *(rdi_1 + (rax_24 << 2) + 0x10)
                int128_t* r8_10 = rdi_1 + (rax_24 << 2)
                uint64_t rax_26 = zx.q(rdx_11 - 2) * 5
                *r8_10 = *(rdi_1 + (rax_26 << 2))
                r8_10[1].d = *(rdi_1 + (rax_26 << 2) + 0x10)
                result = zx.q(*(arg1 + 8) - 2)
                uint64_t rcx_16 = result * 5
                *(rdi_1 + (rcx_16 << 2)) = zmm1
                *(rdi_1 + (rcx_16 << 2) + 0x10) = r9_2
            
            if (rsi_2 == 3)
                uint64_t rcx_17 = zx.q(*(arg1 + 4))
                uint64_t rax_29 = rcx_17 * 5
                zmm1 = *(rdi_1 + (rax_29 << 2))
                int32_t r8_11 = *(rdi_1 + (rax_29 << 2) + 0x10)
                int128_t* rdx_12 = rdi_1 + (rax_29 << 2)
                uint64_t rax_31 = zx.q((rcx_17 + 1).d) * 5
                *rdx_12 = *(rdi_1 + (rax_31 << 2))
                rdx_12[1].d = *(rdi_1 + (rax_31 << 2) + 0x10)
                result = zx.q(*(arg1 + 4) + 1)
                uint64_t rcx_18 = result * 5
                *(rdi_1 + (rcx_18 << 2)) = zmm1
                *(rdi_1 + (rcx_18 << 2) + 0x10) = r8_11

__security_check_cookie(rax_1 ^ &var_d8)
return result
