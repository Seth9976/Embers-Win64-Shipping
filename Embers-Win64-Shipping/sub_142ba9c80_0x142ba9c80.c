// 函数: sub_142ba9c80
// 地址: 0x142ba9c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax_1 = *(*arg1 + 0x410)
uint64_t r8 = zx.q(*rax_1)
int64_t rdi = *(rax_1 + 0x10)
uint64_t rax_4 = zx.q(arg1[4].d - *(arg1 + 0x1c) + 1)

if (r8.d u>= rax_4.d)
    arg1[3].d = 0x82
    return rax_4

if (rdi != 0)
    uint64_t rdx = 0
    
    if (r8.d != 0)
        if (r8.d u>= 8)
            uint64_t rax_5 = zx.q((r8 - 1).d)
            rax_4 = rdi + (rax_5 << 2)
            
            if (arg2 u> rax_4 || arg2 + (rax_5 << 2) u< rdi)
                uint128_t zmm1 = 2
                
                do
                    rax_4 = zx.q((rdx + 4).d)
                    *(arg2 + (rdx << 2)) = _mm_sra_epi32(*(rdi + (rdx << 2)), zmm1)
                    rdx = zx.q(rdx.d + 8)
                    *(arg2 + (rax_4 << 2)) = _mm_sra_epi32(*(rdi + (rax_4 << 2)), zmm1)
                while (rdx.d u< (r8.d & 0xfffffff8))
        
        if (rdx.d u< r8.d)
            void* rax_6 = arg2 + (rdx << 2)
            uint64_t i_1 = zx.q(r8.d - rdx.d)
            uint64_t i
            
            do
                int32_t rcx = *(rdi - arg2 + rax_6)
                rax_6 += 4
                *(rax_6 - 4) = rcx s>> 2
                i = i_1
                i_1 -= 1
            while (i != 1)
            return rax_6
else if (r8.d != 0)
    rax_4 = 0
    __builtin_memset(arg2, 0, r8 << 2)

return rax_4
