// 函数: sub_142666070
// 地址: 0x142666070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *arg1

if (*(result + 0x50) != 0)
    uint128_t zmm0 = *arg2
    void* rcx = zmm0.q
    
    if (rcx != 0)
        result = zx.q(zmm0.12:8.d)
        
        if (result.d != 0xffffffff && result.d s< *(rcx + 0x388))
            void* rdx = zmm0.q
            uint128_t temp0_1 = _mm_bsrli_si128(zmm0, 8)
            void* rax = *(rdx + 0x380)
            
            if (rax != 0)
                rdx = rax
            
            int32_t r9_1 = 0
            void* rdx_1 = rdx + sx.q(temp0_1.d) * 0x38
            void* rcx_2 = *(rdx_1 + 0x20)
            int32_t r10_1
            
            if (*(rcx_2 + 0x28) == 0 && *(rcx_2 + 0x18) == 0)
                r10_1 = 0
            
            if (*(rcx_2 + 0x28) != 0 || *(rcx_2 + 0x18) != 0 || (*(rcx_2 + 0xc8) & 1) != 0)
                r10_1 = 1
            
            if (*(rcx_2 + 0x90) != 0 || *(rcx_2 + 0xa0) != 0 || *(rcx_2 + 0xb0) != 0
                    || ((*(rcx_2 + 0xc8) u>> 1).b & 1) != 0)
                r9_1 = 2
            
            int32_t rcx_3
            
            if ((arg3 & 1) == 0)
                rcx_3 = (*(rcx_2 + 0xb8) u>> 1 & 1) << 2 | r9_1 | r10_1
                
                if ((arg3 & 2) != 0)
                    rcx_3 = 2
            else
                rcx_3 = 3
            
            uint128_t zmm6 = *rdx_1
            uint128_t zmm2 = *(rdx_1 + 8)
            int128_t zmm5 = *(rdx_1 + 4)
            zmm0.d = zmm2.d f+ *(rdx_1 + 0x14)
            uint128_t zmm8
            zmm8.d = zmm6.d f+ *(rdx_1 + 0xc)
            int128_t zmm7
            zmm7.d = zmm5.d f+ *(rdx_1 + 0x10)
            zmm6.d = zmm6.d f- *(rdx_1 + 0xc)
            zmm5.d = zmm5.d f- *(rdx_1 + 0x10)
            int96_t var_78_1
            var_78_1:8.d = zmm0.d
            zmm2.d = zmm2.d f- *(rdx_1 + 0x14)
            uint64_t var_58_1 = (_mm_unpacklo_ps(zmm6, zmm5.q)).q
            int32_t var_50_1 = zmm2.d
            uint64_t var_4c_1 = (_mm_unpacklo_ps(zmm8, zmm7.q)).q
            int32_t var_44_1 = var_78_1:8.d
            
            if (rcx_3 != 0)
                void* rbx_1 = arg1[1]
                
                if ((*(rbx_1 + 0x18) & 1) != 0)
                    int64_t rdi_1 = sx.q(*(rbx_1 + 0x10))
                    int32_t var_60_1 = 1.d
                    int32_t var_5c_1 = rcx_3
                    int32_t rax_8 = (rdi_1 + 1).d
                    *(rbx_1 + 0x10) = rax_8
                    
                    if (rax_8 s> *(rbx_1 + 0x14))
                        sub_1405c4e40(rbx_1 + 8)
                    
                    int64_t rax_9 = *(rbx_1 + 8)
                    uint128_t* rcx_11 = rdi_1 << 5
                    *(rcx_11 + rax_9) = var_58_1.o
                    *(rcx_11 + rax_9 + 0x10) = var_4c_1.o
            
            return sub_1426662a0(*(*arg1 + 0x50), arg2)

return result
