// 函数: sub_14260fe90
// 地址: 0x14260fe90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 != 0)
    char rdi_1 = (*(arg1 + 0xa0)).b
    int32_t r11_1 = 1
    char rsi_1 = (*(arg1 + 0x9c)).b
    int32_t r10_3 = ((1 << rdi_1).d - 1) & arg3.d
    int32_t r8_2 = ((1 << rsi_1).d - 1) & (arg3 u>> rdi_1).d
    
    if (r8_2 u>= *(arg1 + 0x30))
        return 0x80000008
    
    int64_t rdx = *(arg1 + 0x90)
    int32_t* r8_3 = zx.q(r8_2) * 0xb0
    
    if (*(r8_3 + rdx) != ((arg3 u>> (rsi_1 + rdi_1)).d & ((1 << (*(arg1 + 0x98)).b).d - 1)))
        return 0x80000008
    
    void* r9_3 = *(r8_3 + rdx + 8)
    
    if (r9_3 == 0 || r10_3 u>= *(r9_3 + 0x18))
        return 0x80000008
    
    int32_t* rbx_3 = (zx.q(r10_3) << 5) + *(r8_3 + rdx + 0x10)
    uint8_t r10_4 = *(rbx_3 + 0x1f) u>> 6
    
    if (r10_4 != 0)
        uint64_t rax_6 = zx.q(*rbx_3)
        int32_t rdi_2 = 0
        
        if (rax_6.d != 0xffffffff)
            int32_t rcx_4 = *(r9_3 + 0x20)
            
            do
                int64_t* rax_8
                
                if (rax_6.d u>= rcx_4)
                    rax_8 = (sx.q(rax_6.d - rcx_4) << 4) + *(r8_3 + rdx + 0x80)
                else
                    rax_8 = (rax_6 << 4) + *(r8_3 + rdx + 0x20)
                
                if (*(rax_8 + 0xc) == 0)
                    if (*rax_8 != arg2)
                        rdi_2 = 1
                        r11_1 = 0
                    
                    break
                
                rax_6 = zx.q(rax_8[1].d)
            while (rax_6.d != 0xffffffff)
        
        int64_t result
        
        if (r10_4 != 2)
            int64_t r8_4 = *(r8_3 + rdx + 0x18)
            uint64_t rdx_2 = zx.q(*(rbx_3 + (zx.q(rdi_2) << 1) + 4)) * 3
            *arg4 = *(r8_4 + (rdx_2 << 2))
            arg4[1] = *(r8_4 + (rdx_2 << 2) + 4)
            arg4[2] = *(r8_4 + (rdx_2 << 2) + 8)
            uint64_t rdx_3 = zx.q(*(rbx_3 + (zx.q(r11_1) << 1) + 4)) * 3
            *arg5 = *(r8_4 + (rdx_3 << 2))
            arg5[1] = *(r8_4 + (rdx_3 << 2) + 4)
            result = 0x40000000
            arg5[2] = *(r8_4 + (rdx_3 << 2) + 8)
        else
            int64_t r10_5 = *(r8_3 + rdx + 0x18)
            int32_t r11_3 = (r11_1 ^ 1) * 2
            int32_t zmm3 = (zx.o(0)).d
            uint64_t rcx_5 = zx.q(*(rbx_3 + (zx.q(rdi_2 * 2) << 1) + 4)) * 3
            int128_t zmm7 = *(r10_5 + (rcx_5 << 2))
            int128_t zmm8 = *(r10_5 + (rcx_5 << 2) + 8)
            int128_t zmm9 = *(r10_5 + (rcx_5 << 2) + 4)
            uint64_t rax_15 = zx.q(*(rbx_3 + (sx.q(r11_3) << 1) + 6)) * 3
            float zmm4 = *(r10_5 + (rax_15 << 2)) f- zmm7.d
            int128_t zmm6 = *(r10_5 + (rax_15 << 2) + 4)
            float zmm5 = *(r10_5 + (rax_15 << 2) + 8) f- zmm8.d
            float zmm2 = zmm5 * zmm5 + zmm4 * zmm4
            float zmm1 = (arg4[2] f- zmm8.d) * zmm5 + (*arg4 f- zmm7.d) * zmm4
            
            if (not(zmm2 <= 0f))
                zmm1 = zmm1 / zmm2
            
            if (not(zmm1 < 0f))
                zmm3 = __minss_xmmss_memss(zmm1, 0x3f800000)
            
            zmm6.d = zmm6.d f- zmm9.d
            zmm6.d = zmm6.d f* zmm3
            zmm6.d = zmm6.d f+ zmm9.d
            *arg4 = zmm4 f* zmm3 f+ zmm7.d
            arg4[2] = zmm5 f* zmm3 f+ zmm8.d
            arg4[1] = zmm6.d
            void* const rax_17 = 6
            
            if (r11_3 == 0)
                rax_17 = 0xa
            
            uint64_t rdx_1 = zx.q(*(rax_17 + rbx_3)) * 3
            uint64_t rcx_7 = zx.q(rbx_3[(zx.q(rdi_2) ^ 1) + 1].w) * 3
            result = 0x40000000
            *arg5 = (*(r10_5 + (rdx_1 << 2)) f- *(r10_5 + (rcx_7 << 2))) f* zmm3 f+
                *(r10_5 + (rcx_7 << 2))
            arg5[1] = (*(r10_5 + (rdx_1 << 2) + 4) f- *(r10_5 + (rcx_7 << 2) + 4)) f* zmm3 f+
                *(r10_5 + (rcx_7 << 2) + 4)
            arg5[2] = (*(r10_5 + (rdx_1 << 2) + 8) f- *(r10_5 + (rcx_7 << 2) + 8)) f* zmm3 f+
                *(r10_5 + (rcx_7 << 2) + 8)
        
        return result

return 0x80000000
