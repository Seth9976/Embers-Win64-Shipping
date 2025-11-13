// 函数: sub_141c3beb0
// 地址: 0x141c3beb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(*(arg2 + 8))
int32_t rdi = 0
int64_t r12 = sx.q(arg5)
int32_t rbx_1 = rbp.d * r12.d
int32_t rcx = *(arg4 + 0xc)
int64_t* rsi = arg4
arg4[1].d = 0
int32_t rdx = 0

if (rbx_1 s> rcx)
    sub_140775b10(arg4, rbx_1)
    rdx = rsi[1].d
    rcx = *(rsi + 0xc)

int32_t rax = rdx + rbx_1
rsi[1].d = rax

if (rax s> rcx)
    sub_140775270(rsi)

uint64_t result = memset(*rsi, 0, sx.q(rbx_1) << 2)

if (r12.d != 2)
    int64_t rcx_7 = r12
    
    if (r12.d s< 5 || *(arg1 + 0x34) == 0)
        int32_t* r15_4 = *rsi
        int64_t rsi_3 = 0
        int64_t r10_5 = *(arg1 + 0x578)
        void* r14_3 = *(arg1 + 0x588)
        
        if (rbp s>= 4)
            int64_t r9_4 = r12 << 2
            int64_t i_8 = ((rbp - 4) u>> 2) + 1
            void* rdx_15 = r14_3 + 4
            void* r8_9 = r10_5 - r14_3
            int32_t* rcx_16 = r15_4
            rsi_3 = i_8 << 2
            rdi = (i_8.d * r12.d) << 2
            int64_t i
            
            do
                int32_t rax_23 = *(rdx_15 + r8_9 - 4)
                rdx_15 += 0x10
                *rcx_16 = rax_23
                rcx_16[1] = *(rdx_15 - 0x14)
                void* rcx_17 = &rcx_16[r12]
                *rcx_17 = *(rdx_15 + r8_9 - 0x10)
                *(rcx_17 + 4) = *(rdx_15 - 0x10)
                void* rcx_18 = rcx_17 + r9_4
                *rcx_18 = *(rdx_15 + r8_9 - 0xc)
                *(rcx_18 + 4) = *(rdx_15 - 0xc)
                void* rcx_19 = rcx_18 + r9_4
                *rcx_19 = *(rdx_15 + r8_9 - 8)
                result = zx.q(*(rdx_15 - 8))
                *(rcx_19 + 4) = result.d
                rcx_16 = rcx_19 + r9_4
                i = i_8
                i_8 -= 1
            while (i != 1)
            rcx_7 = r12
        
        if (rsi_3 s< rbp)
            void* rdx_16 = r14_3 + (rsi_3 << 2)
            int64_t i_6 = rbp - rsi_3
            int32_t* rcx_20 = &r15_4[sx.q(rdi)]
            int64_t i_1
            
            do
                int32_t rax_31 = *(rdx_16 + r10_5 - r14_3)
                rdx_16 += 4
                *rcx_20 = rax_31
                result = zx.q(*(rdx_16 - 4))
                rcx_20[1] = result.d
                rcx_20 = &rcx_20[rcx_7]
                i_1 = i_6
                i_6 -= 1
            while (i_1 != 1)
    else
        *(arg1 + 0x5a0) = 0
        
        if (rbp.d s> *(arg1 + 0x5a4))
            sub_140775b10(arg1 + 0x598, rbp.d)
        
        *(arg1 + 0x5b0) = 0
        
        if (rbp.d s> *(arg1 + 0x5b4))
            sub_140775b10(arg1 + 0x5a8, rbp.d)
        
        int32_t rax_2 = *(arg1 + 0x5a0) + rbp.d
        *(arg1 + 0x5a0) = rax_2
        
        if (rax_2 s> *(arg1 + 0x5a4))
            sub_140775270(arg1 + 0x598)
        
        int32_t rax_3 = *(arg1 + 0x5b0) + rbp.d
        *(arg1 + 0x5b0) = rax_3
        
        if (rax_3 s> *(arg1 + 0x5b4))
            sub_140775270(arg1 + 0x5a8)
        
        result = sub_141c34c50(arg1 + 0x588, sub_141c34c50(arg1 + 0x578, 0x3f000000, arg1 + 0x598), 
            arg1 + 0x5a8)
        uint64_t r8_6 = *(arg1 + 0x598)
        int64_t rbp_1 = 0
        uint64_t r14_2 = *(arg1 + 0x5a8)
        int32_t* r13_1 = *rsi
        
        if (rbp s>= 4)
            int64_t r9_2 = r12 << 2
            int64_t i_9 = ((rbp - 4) u>> 2) + 1
            void* r10_1 = &r13_1[5]
            void* r11_1 = &r13_1[4]
            void* rcx_14 = r14_2 + 4
            uint64_t rsi_2 = r8_6 - r14_2
            int32_t* rdx_9 = r13_1
            rbp_1 = i_9 << 2
            rdi = (i_9.d * r12.d) << 2
            int64_t i_2
            
            do
                int32_t rax_4 = *(rsi_2 + rcx_14 - 4)
                rcx_14 += 0x10
                *rdx_9 = rax_4
                rdx_9[1] = *(rcx_14 - 0x14)
                void* rdx_10 = &rdx_9[r12]
                *r11_1 = *(rsi_2 + rcx_14 - 0x14)
                void* r11_2 = r11_1 + r9_2
                *r10_1 = *(rcx_14 - 0x14)
                void* r10_2 = r10_1 + r9_2
                *rdx_10 = *(rsi_2 + rcx_14 - 0x10)
                *(rdx_10 + 4) = *(rcx_14 - 0x10)
                void* rdx_11 = rdx_10 + r9_2
                *r11_2 = *(rsi_2 + rcx_14 - 0x10)
                void* r11_3 = r11_2 + r9_2
                *r10_2 = *(rcx_14 - 0x10)
                void* r10_3 = r10_2 + r9_2
                *rdx_11 = *(rsi_2 + rcx_14 - 0xc)
                *(rdx_11 + 4) = *(rcx_14 - 0xc)
                void* rdx_12 = rdx_11 + r9_2
                *r11_3 = *(rsi_2 + rcx_14 - 0xc)
                void* r11_4 = r11_3 + r9_2
                *r10_3 = *(rcx_14 - 0xc)
                int32_t* r10_4 = r10_3 + r9_2
                *rdx_12 = *(rsi_2 + rcx_14 - 8)
                *(rdx_12 + 4) = *(rcx_14 - 8)
                rdx_9 = rdx_12 + r9_2
                *r11_4 = *(rsi_2 + rcx_14 - 8)
                r11_1 = r11_4 + r9_2
                result = zx.q(*(rcx_14 - 8))
                *r10_4 = result.d
                r10_1 = &r10_4[r12]
                i_2 = i_9
                i_9 -= 1
            while (i_2 != 1)
        
        if (rbp_1 s< rbp)
            uint64_t r8_7 = r8_6 - r14_2
            int64_t rcx_15 = r14_2 + (rbp_1 << 2)
            int64_t i_5 = rbp - rbp_1
            void* rdx_14 = &r13_1[4 + sx.q(rdi)]
            int64_t i_3
            
            do
                int32_t rax_20 = *(rcx_15 + r8_7)
                rcx_15 += 4
                *(rdx_14 - 0x10) = rax_20
                *(rdx_14 - 0xc) = *(rcx_15 - 4)
                *rdx_14 = *(rcx_15 + r8_7 - 4)
                result = zx.q(*(rcx_15 - 4))
                *(rdx_14 + 4) = result.d
                rdx_14 += r12 << 2
                i_3 = i_5
                i_5 -= 1
            while (i_3 != 1)
else
    int32_t r14 = *(arg1 + 0x580)
    int32_t rdx_2 = 0
    rsi[1].d = 0
    int32_t rbx_2 = r14 * 2
    
    if (rbx_2 s> *(rsi + 0xc))
        sub_140775b10(rsi, rbx_2)
        rdx_2 = rsi[1].d
    
    result = zx.q(rbx_2 + rdx_2)
    rsi[1].d = result.d
    
    if (result.d s> *(rsi + 0xc))
        result = sub_140775270(rsi)
    
    int64_t rdx_4 = *rsi
    int128_t* rcx_6 = *(arg1 + 0x588)
    
    if (r14 s> 0)
        int128_t* r9_1 = *(arg1 + 0x578) - rcx_6
        uint64_t i_7 = zx.q(((r14 - 1) u>> 2) + 1)
        uint64_t i_4
        
        do
            float zmm2[0x4] = *(r9_1 + rcx_6)
            float zmm1[0x4] = *rcx_6
            rcx_6 = &rcx_6[1]
            float zmm0_1[0x4] = _mm_shuffle_ps(zmm2, zmm1, 0x44)
            zmm0_1 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xd8)
            zmm2 = _mm_shuffle_ps(zmm2, zmm1, 0xee)
            *(rdx_4 + (sx.q(rdi) << 2)) = zmm0_1
            result = sx.q(rdi + 4)
            rdi += 8
            *(rdx_4 + (result << 2)) = _mm_shuffle_ps(zmm2, zmm2, 0xd8)
            i_4 = i_7
            i_7 -= 1
        while (i_4 != 1)

return result
