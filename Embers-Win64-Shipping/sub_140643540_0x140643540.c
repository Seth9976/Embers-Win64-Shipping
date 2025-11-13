// 函数: sub_140643540
// 地址: 0x140643540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = arg1[1]
int32_t rsi = 0

for (int64_t i = 0; i u< 0x20; i += rax)
    int32_t rsi_1 = rsi << (rax + 0xff).b
    int32_t j
    
    do
        int32_t* r10_1 = *arg1
        int32_t k_6 = *r10_1
        
        if (k_6 == 0x270)
            void* rax_1 = &r10_1[2]
            uint64_t k_5 = zx.q(k_6)
            uint64_t k
            
            do
                int32_t r8_2 = *(rax_1 - 4) ^ *rax_1
                rax_1 += 4
                int32_t r8_4 = (r8_2 & 0x7fffffff) ^ *(rax_1 - 8)
                arg2 = (sbb.d(arg2, arg2, (r8_4.b & 1) != 0) & 0x9908b0df) ^ *(rax_1 + 0x62c)
                    ^ r8_4 u>> 1
                *(rax_1 + 0x9b8) = arg2
                k = k_5
                k_5 -= 1
            while (k != 1)
            k_6 = *r10_1
        else if (k_6 u>= 0x4e0)
            void* r11_1 = &r10_1[0x271]
            int64_t k_3 = 0xe3
            int32_t rax_2 = *r11_1
            int64_t k_1
            
            do
                int32_t rdx_6 = ((*(r11_1 + 4) ^ rax_2) & 0x7fffffff) ^ rax_2
                rax_2 = *(r11_1 + 4)
                k_6 = (sbb.d(k_6, k_6, (rdx_6.b & 1) != 0) & 0x9908b0df) ^ *(r11_1 + 0x634)
                    ^ rdx_6 u>> 1
                *(r11_1 - 0x9c0) = k_6
                r11_1 += 4
                k_1 = k_3
                k_3 -= 1
            while (k_1 != 1)
            void* r11_2 = &r10_1[0x354]
            int64_t k_4 = 0x18c
            int32_t rax_4 = *r11_2
            int64_t k_2
            
            do
                int32_t rdx_11 = ((rax_4 ^ *(r11_2 + 4)) & 0x7fffffff) ^ rax_4
                rax_4 = *(r11_2 + 4)
                k_6 = (sbb.d(k_6, k_6, (rdx_11.b & 1) != 0) & 0x9908b0df) ^ *(r11_2 - 0xd4c)
                    ^ rdx_11 u>> 1
                *(r11_2 - 0x9c0) = k_6
                r11_2 += 4
                k_2 = k_4
                k_4 -= 1
            while (k_2 != 1)
            int32_t rdx_16 = ((r10_1[0x4e0] ^ r10_1[1]) & 0x7fffffff) ^ r10_1[0x4e0]
            r10_1[0x270] =
                (sbb.d(k_6, k_6, (rdx_16.b & 1) != 0) & 0x9908b0df) ^ r10_1[0x18d] ^ rdx_16 u>> 1
            k_6 = 0
            *r10_1 = 0
        
        int32_t rdx_18 = r10_1[zx.q(k_6) + 1]
        *r10_1 = k_6 + 1
        int32_t rdx_19 = rdx_18 ^ (r10_1[0x4e1] & rdx_18 u>> 0xb)
        int32_t rdx_20 = rdx_19 ^ (rdx_19 & 0xff3a58ad) << 7
        arg2 = rdx_20 ^ (rdx_20 & 0xffffdf8c) << 0xf
        j = arg2 u>> 0x12 ^ arg2
    while (j u> arg1[2].d)
    
    rax = arg1[1]
    rsi = (rsi_1 * 2) | j

return zx.q(rsi)
