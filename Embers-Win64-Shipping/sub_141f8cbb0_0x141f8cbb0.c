// 函数: sub_141f8cbb0
// 地址: 0x141f8cbb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rsi = arg1
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg1[7].d)
int32_t rdx_1 = temp0 & 3
rsi[0x11].d = 0
int32_t rax_2 = temp1 + rdx_1
uint64_t result_1 = &rsi[8]
uint64_t result = zx.q((rax_2 & 3) - rdx_1)
uint64_t rbp_1 = zx.q(rax_2 s>> 2)
int32_t r14 = result.d
uint32_t r12 = (rbp_1 << 2).d
int32_t rdx_4 = (sbb.d(rdx_1, rdx_1, result.d != 0) & 4) + r12

if (*(result_1 + 0x94) != rdx_4)
    result = sub_141f98fd0(result_1, rdx_4)

float zmm2[0x4]

if (rbp_1.d s> 0)
    int64_t rdi_1 = 0x20
    uint64_t i_1 = zx.q(rbp_1.d)
    uint64_t i
    
    do
        int64_t rbp_2 = sx.q(*(result_1 + 0x90))
        int32_t rax_4 = (rbp_2 + 1).d
        *(result_1 + 0x90) = rax_4
        
        if (rax_4 s> *(result_1 + 0x94))
            sub_141f98f40(result_1, rbp_2.d)
        
        uint64_t result_9 = *(result_1 + 0x80)
        uint64_t result_2 = result_1
        
        if (result_9 != 0)
            result_2 = result_9
        
        int64_t rax_6 = rbp_2 << 4
        int64_t rdx_6 = result_2 + rax_6
        float zmm1[0x4]
        
        if (result_2 != neg.q(rax_6))
            int128_t* rax_7 = rsi[6].q
            int128_t* rcx_4 = rsi
            
            if (rax_7 != 0)
                rcx_4 = rax_7
            
            zmm2 = *(rcx_4 + rdi_1 + 0x10)
            zmm1 = *(rcx_4 + rdi_1)
            int32_t rax_8 = *(rcx_4 + rdi_1 - 0x20)
            *(rdx_6 + 4) = (*(rcx_4 + rdi_1 - 0x10))[0]
            *(rdx_6 + 8) = zmm1[0]
            *(rdx_6 + 0xc) = zmm2[0]
            *rdx_6 = rax_8
        
        int64_t rbp_3 = sx.q(*(result_1 + 0x90))
        int32_t rax_9 = (rbp_3 + 1).d
        *(result_1 + 0x90) = rax_9
        
        if (rax_9 s> *(result_1 + 0x94))
            sub_141f98f40(result_1, rbp_3.d)
        
        uint64_t result_10 = *(result_1 + 0x80)
        uint64_t result_3 = result_1
        
        if (result_10 != 0)
            result_3 = result_10
        
        int64_t rax_11 = rbp_3 << 4
        int64_t rdx_8 = result_3 + rax_11
        
        if (result_3 != neg.q(rax_11))
            int128_t* rax_12 = rsi[6].q
            int128_t* rcx_6 = rsi
            
            if (rax_12 != 0)
                rcx_6 = rax_12
            
            zmm2 = *(rdi_1 + rcx_6 + 0x14)
            zmm1 = *(rcx_6 + rdi_1 + 4)
            int32_t rax_13 = *(rdi_1 + rcx_6 - 0x1c)
            *(rdx_8 + 4) = (*(rdi_1 + rcx_6 - 0xc))[0]
            *(rdx_8 + 8) = zmm1[0]
            *(rdx_8 + 0xc) = zmm2[0]
            *rdx_8 = rax_13
        
        int64_t rbp_4 = sx.q(*(result_1 + 0x90))
        int32_t rax_14 = (rbp_4 + 1).d
        *(result_1 + 0x90) = rax_14
        
        if (rax_14 s> *(result_1 + 0x94))
            sub_141f98f40(result_1, rbp_4.d)
        
        uint64_t result_11 = *(result_1 + 0x80)
        uint64_t result_4 = result_1
        
        if (result_11 != 0)
            result_4 = result_11
        
        int64_t rax_16 = rbp_4 << 4
        int64_t rdx_10 = result_4 + rax_16
        
        if (result_4 != neg.q(rax_16))
            int128_t* rax_17 = rsi[6].q
            int128_t* rcx_8 = rsi
            
            if (rax_17 != 0)
                rcx_8 = rax_17
            
            zmm2 = *(rcx_8 + rdi_1 + 0x18)
            zmm1 = *(rdi_1 + rcx_8 + 8)
            int32_t rax_18 = *(rcx_8 + rdi_1 - 0x18)
            *(rdx_10 + 4) = (*(rcx_8 + rdi_1 - 8))[0]
            *(rdx_10 + 8) = zmm1[0]
            *(rdx_10 + 0xc) = zmm2[0]
            *rdx_10 = rax_18
        
        int64_t rbp_5 = sx.q(*(result_1 + 0x90))
        int32_t rax_19 = (rbp_5 + 1).d
        *(result_1 + 0x90) = rax_19
        
        if (rax_19 s> *(result_1 + 0x94))
            sub_141f98f40(result_1, rbp_5.d)
        
        uint64_t result_12 = *(result_1 + 0x80)
        uint64_t result_5 = result_1
        
        if (result_12 != 0)
            result_5 = result_12
        
        result = rbp_5 << 4
        uint64_t rdx_12 = result_5 + result
        
        if (result_5 != neg.q(result))
            int128_t* rax_21 = rsi[6].q
            int128_t* rcx_10 = rsi
            
            if (rax_21 != 0)
                rcx_10 = rax_21
            
            zmm2 = *(rdi_1 + rcx_10 + 0x1c)
            zmm1 = *(rdi_1 + rcx_10 + 0xc)
            result = zx.q(*(rdi_1 + rcx_10 - 0x14))
            *(rdx_12 + 4) = (*(rdi_1 + rcx_10 - 4))[0]
            *(rdx_12 + 8) = zmm1[0]
            *(rdx_12 + 0xc) = zmm2[0]
            *rdx_12 = result.d
        
        rdi_1 += 0x40
        i = i_1
        i_1 -= 1
    while (i != 1)

if (r14 != 0)
    float var_e8
    float var_e4
    float var_e0
    float var_dc
    float arg_8
    float arg_10
    float zmm6[0x4]
    float zmm7[0x4]
    float zmm8[0x4]
    float zmm9[0x4]
    float zmm10[0x4]
    float zmm11[0x4]
    float zmm12[0x4]
    float zmm13[0x4]
    float zmm14[0x4]
    float zmm15[0x4]
    
    if (r14 == 1)
        int128_t* rax_34 = rsi[6].q
        
        if (rax_34 != 0)
            rsi = rax_34
        
        zmm2 = rsi[sx.q(r12)]
        zmm8 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        zmm7 = zmm2
        zmm9 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
        var_dc = zmm2[0]
        zmm6 = zmm2
        var_e8 = zmm7[0]
        var_e4 = zmm8[0]
        var_e0 = zmm9[0]
    label_141f8d022:
        arg_8 = zmm9[0]
        zmm11 = zmm6
        arg_10 = zmm2[0]
        zmm14 = zmm8
        zmm12 = zmm7
    label_141f8d041:
        zmm10 = zmm7
        zmm13 = zmm8
        zmm15 = zmm9
    else
        if (r14 == 2)
            int128_t* rax_29 = rsi[6].q
            int64_t rcx_12 = sx.q(r12)
            
            if (rax_29 != 0)
                rsi = rax_29
            
            zmm2 = rsi[rcx_12]
            zmm8 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm7 = zmm2
            zmm9 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
            zmm6 = zmm2
            var_e8.o = rsi[rcx_12 + 1]
            goto label_141f8d022
        
        if (r14 == 3)
            int128_t* rax_22 = rsi[6].q
            int64_t rcx_11 = sx.q(r12)
            
            if (rax_22 != 0)
                rsi = rax_22
            
            zmm7 = rsi[rcx_11]
            zmm8 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
            zmm9 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
            var_e8.o = rsi[rcx_11 + 1]
            float zmm0[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xff)
            arg_10 = zmm0[0]
            zmm6 = zmm0
            zmm2 = rsi[rcx_11 + 2]
            int96_t var_d8_2 = zmm2[0].12
            zmm14 = var_d8_2:4.d
            zmm12 = var_d8_2.d
            zmm11 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
            arg_8 = var_d8_2:8.d[0]
            goto label_141f8d041
        
        int96_t var_d8_1 = zx.o(0)[0].12
        zmm9 = var_d8_1:8.d
        zmm10 = zx.o(0)
        zmm8 = var_d8_1:4.d
        zmm13 = zx.o(0)
        zmm7 = var_d8_1.d
        zmm15 = zx.o(0)
        zmm6 = zx.o(0)
        zmm14 = 0
        zmm11 = zx.o(0)
        zmm12 = 0
        __builtin_memset(&var_e8, 0, 0x20)
        arg_8 = 0f
        arg_10 = 0f
    
    int64_t rdi_2 = sx.q(*(result_1 + 0x90))
    int32_t rax_37 = (rdi_2 + 1).d
    *(result_1 + 0x90) = rax_37
    
    if (rax_37 s> *(result_1 + 0x94))
        sub_141f98f40(result_1, rdi_2.d)
    
    uint64_t result_13 = *(result_1 + 0x80)
    uint64_t result_6 = result_1
    
    if (result_13 != 0)
        result_6 = result_13
    
    int64_t rax_39 = rdi_2 << 4
    int64_t rdx_14 = result_6 + rax_39
    
    if (result_6 != neg.q(rax_39))
        *(rdx_14 + 4) = var_e8[0]
        *rdx_14 = zmm7[0]
        *(rdx_14 + 8) = zmm12[0]
        *(rdx_14 + 0xc) = zmm10[0]
    
    int64_t rdi_3 = sx.q(*(result_1 + 0x90))
    int32_t rax_40 = (rdi_3 + 1).d
    *(result_1 + 0x90) = rax_40
    
    if (rax_40 s> *(result_1 + 0x94))
        sub_141f98f40(result_1, rdi_3.d)
    
    uint64_t result_14 = *(result_1 + 0x80)
    uint64_t result_7 = result_1
    
    if (result_14 != 0)
        result_7 = result_14
    
    int64_t rax_42 = rdi_3 << 4
    int64_t rdx_16 = result_7 + rax_42
    
    if (result_7 != neg.q(rax_42))
        *(rdx_16 + 4) = var_e4[0]
        *rdx_16 = zmm8[0]
        *(rdx_16 + 8) = zmm14[0]
        *(rdx_16 + 0xc) = zmm13[0]
    
    int64_t rdi_4 = sx.q(*(result_1 + 0x90))
    int32_t rax_43 = (rdi_4 + 1).d
    *(result_1 + 0x90) = rax_43
    
    if (rax_43 s> *(result_1 + 0x94))
        sub_141f98f40(result_1, rdi_4.d)
    
    uint64_t result_15 = *(result_1 + 0x80)
    uint64_t result_8 = result_1
    
    if (result_15 != 0)
        result_8 = result_15
    
    int64_t rax_45 = rdi_4 << 4
    int64_t rdx_18 = result_8 + rax_45
    
    if (result_8 != neg.q(rax_45))
        *(rdx_18 + 4) = var_e0[0]
        *(rdx_18 + 8) = arg_8[0]
        *rdx_18 = zmm9[0]
        *(rdx_18 + 0xc) = zmm15[0]
    
    int64_t rdi_5 = sx.q(*(result_1 + 0x90))
    int32_t rax_46 = (rdi_5 + 1).d
    *(result_1 + 0x90) = rax_46
    
    if (rax_46 s> *(result_1 + 0x94))
        sub_141f98f40(result_1, rdi_5.d)
    
    result = *(result_1 + 0x80)
    
    if (result != 0)
        result_1 = result
    
    int64_t rcx_18 = rdi_5 << 4
    int64_t rcx_19 = rcx_18 + result_1
    
    if (rcx_18 != neg.q(result_1))
        *(rcx_19 + 4) = var_dc[0]
        *(rcx_19 + 0xc) = arg_10[0]
        *rcx_19 = zmm6[0]
        *(rcx_19 + 8) = zmm11[0]

return result
