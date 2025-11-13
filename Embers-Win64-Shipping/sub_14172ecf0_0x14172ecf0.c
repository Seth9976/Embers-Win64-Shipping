// 函数: sub_14172ecf0
// 地址: 0x14172ecf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* arg_10 = arg2
uint128_t zmm6
uint128_t var_38 = zmm6
void* r13 = arg1
arg1.b = 0
uint128_t zmm7
uint128_t var_48 = zmm7
uint128_t zmm8
uint128_t var_58 = zmm8

if (arg5 == 0)
    goto label_14172ed81

zmm8 = *(arg4 + 0xc)
int64_t zmm5 = arg4[1].d
zmm7 = *arg4
int64_t zmm3 = *(arg4 + 4)
int64_t zmm0
zmm0.d = zmm8.q.d f- zmm7.d
zmm6 = *(arg4 + 0x14)
float zmm2 = zmm5.d f- zmm3.d
int64_t zmm4 = *(arg4 + 8)
int64_t zmm1
zmm1.d = zmm6.q.d f- zmm4.d

if (zmm0.d f<= zmm2 || not(zmm0.d f> zmm1.d))
    zmm0 = _mm_max_ss(zmm1.d, zmm2)

int32_t result
uint64_t var_100

if (zmm0.d f<= *(r13 + 0x90))
    char rcx = *(r13 + 0x94)
    uint64_t var_118
    int32_t r12_1
    uint128_t zmm9
    
    if (rcx != 0)
        int32_t result_1
        result = result_1
        zmm9 = zx.o(var_100)
        int32_t var_110
        r12_1 = var_110
        zmm8 = zx.o(var_118)
        arg5.d = result
    else
        zmm7.d = zmm7.d f- *(r13 + 0x20)
        zmm3.d = zmm3.d f- *(r13 + 0x24)
        zmm4.d = zmm4.d f- *(r13 + 0x28)
        int128_t zmm10
        zmm10.d = 1f f/ *(r13 + 0x44)
        zmm0.d = zmm7.q.d f* zmm10.d
        int128_t zmm11
        zmm11.d = 1f f/ *(r13 + 0x48)
        zmm2 = 1f f/ *(r13 + 0x4c)
        int32_t r11_1 = int.d(zmm0.d)
        zmm0.d = zmm3.d f* zmm11.d
        var_100.d = r11_1
        int32_t r10_1 = int.d(zmm0.d)
        zmm0.d = zmm4.d f* zmm2
        var_100:4.d = r10_1
        result = int.d(zmm0.d)
        arg5.d = result
        
        if (not(zmm7.d f>= 0f))
            r11_1 -= 1
            var_100.d = r11_1
        
        if (not(zmm3.d f>= 0f))
            r10_1 -= 1
            var_100:4.d = r10_1
        
        if (not(zmm4.d f>= 0f))
            result -= 1
            arg5.d = result
        
        zmm8.d = zmm8.d f- *(r13 + 0x20)
        zmm5.d = zmm5.d f- *(r13 + 0x24)
        zmm6.d = zmm6.d f- *(r13 + 0x28)
        zmm9 = zx.o(var_100)
        var_100 = zmm9.q
        zmm0.d = zmm8.q.d f* zmm10.d
        int32_t r9 = int.d(zmm0.d)
        zmm0.d = zmm5.d f* zmm11.d
        var_118.d = r9
        int32_t rdx = int.d(zmm0.d)
        zmm0.d = zmm6.q.d f* zmm2
        var_118:4.d = rdx
        r12_1 = int.d(zmm0.d)
        
        if (not(zmm8.d f>= 0f))
            r9 -= 1
            var_118.d = r9
        
        if (not(zmm5.d f>= 0f))
            rdx -= 1
            var_118:4.d = rdx
        
        if (not(zmm6.d f>= 0f))
            r12_1 -= 1
        
        zmm8 = zx.o(var_118)
        var_118 = zmm8.q
        
        if (r11_1 s< 0 || r9 s>= *(r13 + 0x38))
            rcx = 1
        
        if (r10_1 s< 0 || rdx s>= *(r13 + 0x3c))
            rcx = 1
        
        if (result s< 0 || r12_1 s>= *(r13 + 0x40))
            rcx = 1
        
        arg2 = arg_10
    
    *arg3 = 0xffffffff
    
    if (rcx != 0)
        arg3[1] = *(r13 + 0x78)
        int64_t rbx_5 = sx.q(*(r13 + 0x78))
        zmm6 = zx.o(*arg4)
        int32_t rdi_1 = *(arg4 + 8)
        zmm7 = zx.o(*(arg4 + 0xc))
        int32_t rsi_3 = *(arg4 + 0x14)
        int32_t rax_16 = (rbx_5 + 1).d
        int32_t r14_1 = *arg2
        *(r13 + 0x78) = rax_16
        
        if (rax_16 s> *(r13 + 0x7c))
            sub_1407756d0(r13 + 0x70)
        
        int64_t* rcx_7 = rbx_5 * 0x34 + *(r13 + 0x70)
        *rcx_7 = zmm6.q
        *(rcx_7 + 0xc) = zmm7.q
        rcx_7[1].d = rdi_1
        *(rcx_7 + 0x14) = rsi_3
        int64_t var_a8
        *(rcx_7 + 0x1c) = var_a8
        int32_t var_a0
        *(rcx_7 + 0x24) = var_a0
        int32_t result_2
        result = result_2
        int64_t var_9c
        rcx_7[5] = var_9c
        rcx_7[6].d = result
        rcx_7[3].d = r14_1
    else
        int32_t rcx_1 = var_100.d
        int32_t r10_2 = var_118.d
        int32_t r11_2 = var_100:4.d
        int32_t r9_1 = var_118:4.d
        arg3[1] = 0xffffffff
        arg3[2] = rcx_1
        arg3[3] = r11_2
        arg3[4] = result
        arg3[5] = r10_2
        arg3[6] = r9_1
        arg3[7] = r12_1
        int32_t var_108_1 = rcx_1
        
        while (rcx_1 s<= r10_2)
            int32_t r15_1 = r11_2
            
            if (r11_2 s<= r9_1)
                do
                    int32_t result_3 = result
                    
                    if (result s<= r12_1)
                        do
                            int32_t rax_3 = *(arg4 + 8)
                            zmm6 = zx.o(*arg4)
                            zmm7 = zx.o(*(arg4 + 0xc))
                            int32_t rax_4 = *(arg4 + 0x14)
                            int32_t rax_5 = *arg2
                            int64_t* rbx_4 = (
                                sx.q((*(r13 + 0x54) * rcx_1 + r15_1) * *(r13 + 0x58) + result_3)
                                << 4) + *(r13 + 0x60)
                            int64_t rsi_2 = sx.q(rbx_4[1].d)
                            int32_t rax_11 = (rsi_2 + 1).d
                            rbx_4[1].d = rax_11
                            
                            if (rax_11 s> *(rbx_4 + 0xc))
                                sub_1407756d0(rbx_4)
                                arg2 = arg_10
                            
                            result_3 += 1
                            uint64_t* rcx_4 = rsi_2 * 0x34 + *rbx_4
                            *rcx_4 = zmm6.q
                            rcx_4[1].d = rax_3
                            *(rcx_4 + 0xc) = zmm7.q
                            *(rcx_4 + 0x14) = rax_4
                            rcx_4[3].d = rax_5
                            result = arg5.d
                            *(rcx_4 + 0x1c) = zmm9.q
                            rcx_4[5] = zmm8.q
                            *(rcx_4 + 0x24) = result
                            rcx_4[6].d = r12_1
                            rcx_1 = var_108_1
                        while (result_3 s<= r12_1)
                        
                        r9_1 = var_118:4.d
                    
                    r15_1 += 1
                while (r15_1 s<= r9_1)
                
                r10_2 = var_118.d
                r11_2 = var_100:4.d
            
            rcx_1 += 1
            var_108_1 = rcx_1
else
    arg1.b = 1
label_14172ed81:
    *arg3 = *(r13 + 0x18)
    arg3[1] = 0xffffffff
    int32_t rsi_1 = *arg2
    int64_t* rbx_1
    
    if (arg1.b == 0)
        int64_t var_dc
        rbx_1 = &var_dc
        var_dc = _mm_unpacklo_ps(0xff7fffff, 0xff7fffff)
        int32_t var_f8_1 = 0xff7fffff
        int32_t var_110_1 = 0x7f7fffff
        int32_t var_d4_1 = 0xff7fffff
        int64_t var_d0_1 = _mm_unpacklo_ps(0x7f7fffff, 0x7f7fffff)
        int32_t var_c8_1 = 0x7f7fffff
    else
        rbx_1 = &var_100
        int32_t rax_1 = *(arg4 + 8)
        var_100 = *arg4
        int32_t var_f8 = rax_1
        int64_t var_f4_1 = *(arg4 + 0xc)
        int32_t var_ec_1 = *(arg4 + 0x14)
    
    int64_t rdi_2 = sx.q(*(r13 + 0x18))
    int32_t rax_18 = (rdi_2 + 1).d
    *(r13 + 0x18) = rax_18
    
    if (rax_18 s> *(r13 + 0x1c))
        sub_1405c50f0(r13 + 0x10)
    
    zmm0 = *rbx_1
    int32_t rax_19 = rbx_1[1].d
    int32_t* rcx_10 = rdi_2 * 0x1c + *(r13 + 0x10)
    *rcx_10 = rsi_1
    *(rcx_10 + 4) = zmm0
    zmm0 = *(rbx_1 + 0xc)
    rcx_10[3] = rax_19
    result = *(rbx_1 + 0x14)
    *(rcx_10 + 0x10) = zmm0
    rcx_10[6] = result
return result
