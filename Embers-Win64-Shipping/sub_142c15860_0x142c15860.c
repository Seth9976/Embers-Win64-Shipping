// 函数: sub_142c15860
// 地址: 0x142c15860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
uint32_t rbp_2 = (zx.d(*arg1) << 8) + zx.d(arg1[1])
uint32_t rsi_1 = zx.d(arg1[4]) << 8
uint32_t rax_1 = zx.d(arg1[5])

if (rsi_1 != neg.d(rax_1))
    do
        int128_t* const rax_3
        
        if (i u< (zx.d(arg1[4]) << 8) + zx.d(arg1[5]))
            rax_3 = &arg1[(zx.q(i) + 3) << 1]
        else
            rax_3 = &data_14369a5d0
        
        uint16_t rdx = zx.w(*rax_3)
        uint64_t r8_1 = zx.q(*(rax_3 + 1))
        char* rcx_5
        
        if (0 != rdx * 0x100 + r8_1.w)
            rcx_5 = &arg1[(zx.q(rdx.b) << 8) + r8_1]
        else
            rcx_5 = &data_14369a5d0
        
        void* rax_6 = sub_142c14cc0(rcx_5, arg2, rbp_2)
        int32_t* rcx_9 = *arg2
        uint32_t r8_5 = (zx.d(*rax_6) << 8) + zx.d(*(rax_6 + 1))
        
        if (r8_5 == 1)
            void* r9_2 = rax_6 + 4
            uint32_t rax_7 = zx.d(*(rax_6 + 3))
            void* r8_7 = r9_2
            uint32_t r11_2 = zx.d(*(rax_6 + 2)) << 8
            uint32_t j_6 = r11_2 + rax_7
            
            if (r11_2 != neg.d(rax_7))
                uint64_t j_3 = zx.q(j_6)
                uint64_t j
                
                do
                    uint32_t rax_8 = zx.d(*r8_7)
                    uint32_t rdx_4 = zx.d(*(r8_7 + 1))
                    r8_7 += 2
                    *rcx_9 |= 1 << (((rdx_4 - (rax_8 << 8)) u>> 4 & 0x1f) u% 0x20)
                    j = j_3
                    j_3 -= 1
                while (j != 1)
            
            if (j_6 != 0)
                void* r8_8 = r9_2 + 1
                uint64_t j_4 = zx.q(j_6)
                uint64_t j_1
                
                do
                    uint32_t rdx_8 = zx.d(*r8_8)
                    r8_8 += 2
                    rcx_9[1] |= 1 << ((rdx_8 & 0x1f) u% 0x20)
                    j_1 = j_4
                    j_4 -= 1
                while (j_1 != 1)
                
                if (j_6 != 0)
                    uint64_t j_5 = zx.q(j_6)
                    uint64_t j_2
                    
                    do
                        uint32_t rax_14 = zx.d(*r9_2)
                        uint32_t r8_9 = zx.d(*(r9_2 + 1))
                        r9_2 += 2
                        rcx_9[2] |= 1 << (((r8_9 + (rax_14 << 8)) u>> 9 & 0x1f) u% 0x20)
                        j_2 = j_5
                        j_5 -= 1
                    while (j_2 != 1)
        else if (r8_5 == 2)
            sub_142c13dd0(rax_6, rcx_9)
        
        i += 1
    while (i u< rsi_1 + rax_1)

return &data_14369a5d0
