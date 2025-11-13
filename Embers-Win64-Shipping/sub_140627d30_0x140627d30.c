// 函数: sub_140627d30
// 地址: 0x140627d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r15 = arg2
int32_t i = arg2 - 1
int32_t rsi_1
int32_t rbp_1

do
    rsi_1 = 0
    rbp_1 = 0
    
    if (i != 0)
        char r8_1 = (arg1[1]).b
        
        do
            int32_t rsi_2 = rsi_1 << (r8_1 - 1)
            int32_t rax_19
            
            do
                int32_t* r10_1 = *arg1
                int32_t j_6 = *r10_1
                
                if (j_6 == 0x270)
                    void* rax_1 = &r10_1[2]
                    uint64_t j_5 = zx.q(j_6)
                    uint64_t j
                    
                    do
                        int32_t r8_3 = *(rax_1 - 4) ^ *rax_1
                        rax_1 += 4
                        int32_t r8_5 = (r8_3 & 0x7fffffff) ^ *(rax_1 - 8)
                        arg2 = (sbb.d(arg2, arg2, (r8_5.b & 1) != 0) & 0x9908b0df)
                            ^ *(rax_1 + 0x62c) ^ r8_5 u>> 1
                        *(rax_1 + 0x9b8) = arg2
                        j = j_5
                        j_5 -= 1
                    while (j != 1)
                    j_6 = *r10_1
                else if (j_6 u>= 0x4e0)
                    void* r11_1 = &r10_1[0x271]
                    int64_t j_3 = 0xe3
                    int32_t rax_2 = *r11_1
                    int64_t j_1
                    
                    do
                        int32_t rdx_6 = ((*(r11_1 + 4) ^ rax_2) & 0x7fffffff) ^ rax_2
                        rax_2 = *(r11_1 + 4)
                        j_6 = (sbb.d(j_6, j_6, (rdx_6.b & 1) != 0) & 0x9908b0df) ^ *(r11_1 + 0x634)
                            ^ rdx_6 u>> 1
                        *(r11_1 - 0x9c0) = j_6
                        r11_1 += 4
                        j_1 = j_3
                        j_3 -= 1
                    while (j_1 != 1)
                    void* r11_2 = &r10_1[0x354]
                    int64_t j_4 = 0x18c
                    int32_t rax_4 = *r11_2
                    int64_t j_2
                    
                    do
                        int32_t rdx_11 = ((rax_4 ^ *(r11_2 + 4)) & 0x7fffffff) ^ rax_4
                        rax_4 = *(r11_2 + 4)
                        j_6 = (sbb.d(j_6, j_6, (rdx_11.b & 1) != 0) & 0x9908b0df) ^ *(r11_2 - 0xd4c)
                            ^ rdx_11 u>> 1
                        *(r11_2 - 0x9c0) = j_6
                        r11_2 += 4
                        j_2 = j_4
                        j_4 -= 1
                    while (j_2 != 1)
                    int32_t rdx_16 = ((r10_1[0x4e0] ^ r10_1[1]) & 0x7fffffff) ^ r10_1[0x4e0]
                    r10_1[0x270] = (sbb.d(j_6, j_6, (rdx_16.b & 1) != 0) & 0x9908b0df)
                        ^ r10_1[0x18d] ^ rdx_16 u>> 1
                    j_6 = 0
                    *r10_1 = 0
                
                int32_t rdx_18 = r10_1[zx.q(j_6) + 1]
                *r10_1 = j_6 + 1
                int32_t rdx_19 = rdx_18 ^ (r10_1[0x4e1] & rdx_18 u>> 0xb)
                int32_t rdx_20 = rdx_19 ^ (rdx_19 & 0xff3a58ad) << 7
                int32_t rdx_21 = rdx_20 ^ (rdx_20 & 0xffffdf8c) << 0xf
                rax_19 = rdx_21 u>> 0x12 ^ rdx_21
                arg2 = arg1[2].d
            while (rax_19 u> arg2)
            
            r8_1 = (arg1[1]).b
            rsi_1 = (rsi_2 * 2) | rax_19
            rbp_1 = ((rbp_1 << (r8_1 - 1)) * 2) | arg2
        while (rbp_1 u< i)
    
    arg2 = modu.dp.d(0:rsi_1, r15)
    
    if (divu.dp.d(0:rsi_1, r15) u< divu.dp.d(0:rbp_1, r15))
        break
while (modu.dp.d(0:rbp_1, r15) != i)
return zx.q(modu.dp.d(0:rsi_1, r15))
