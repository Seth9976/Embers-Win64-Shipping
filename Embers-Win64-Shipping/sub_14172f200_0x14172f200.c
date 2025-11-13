// 函数: sub_14172f200
// 地址: 0x14172f200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* arg_10 = arg2
uint128_t zmm6
uint128_t var_38 = zmm6
void* r12 = arg1
arg1.b = 0
uint128_t zmm7
uint128_t var_48 = zmm7
int64_t* r15 = arg4
uint128_t zmm8
uint128_t var_58 = zmm8

if (arg5 == 0)
    goto label_14172f292

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
uint64_t var_130

if (zmm0.d f<= *(r12 + 0x90))
    char rcx = *(r12 + 0x94)
    int128_t zmm9
    int128_t var_68_1 = zmm9
    uint128_t zmm10
    uint128_t var_78_1 = zmm10
    uint64_t var_148
    int32_t r13_1
    uint128_t zmm11
    uint128_t zmm14
    
    if (rcx != 0)
        int32_t result_1
        result = result_1
        zmm14 = zx.o(var_130)
        int32_t var_140
        r13_1 = var_140
        zmm11 = zx.o(var_148)
        arg5.d = result
    else
        zmm11 = *(r12 + 0x20)
        zmm9.d = 1f f/ *(r12 + 0x44)
        zmm3.d = zmm3.d f- *(r12 + 0x24)
        zmm4.d = zmm4.d f- *(r12 + 0x28)
        zmm7.d = zmm7.d f- zmm11.d
        zmm10.d = 1f f/ *(r12 + 0x48)
        zmm2 = 1f f/ *(r12 + 0x4c)
        zmm0.d = zmm7.q.d f* zmm9.d
        int32_t rbx_2 = int.d(zmm0.d)
        zmm0.d = zmm3.d f* zmm10.d
        var_130.d = rbx_2
        int32_t r11_1 = int.d(zmm0.d)
        zmm0.d = zmm4.d f* zmm2
        var_130:4.d = r11_1
        result = int.d(zmm0.d)
        arg5.d = result
        
        if (not(zmm7.d f>= 0f))
            rbx_2 -= 1
            var_130.d = rbx_2
        
        if (not(zmm3.d f>= 0f))
            r11_1 -= 1
            var_130:4.d = r11_1
        
        if (not(zmm4.d f>= 0f))
            result -= 1
            arg5.d = result
        
        zmm5.d = zmm5.d f- *(r12 + 0x24)
        zmm6.d = zmm6.d f- *(r12 + 0x28)
        zmm14 = zx.o(var_130)
        zmm8.d = zmm8.d f- zmm11.d
        var_130 = zmm14.q
        zmm0.d = zmm8.q.d f* zmm9.d
        int32_t r10_1 = int.d(zmm0.d)
        zmm0.d = zmm5.d f* zmm10.d
        var_148.d = r10_1
        int32_t r9 = int.d(zmm0.d)
        zmm0.d = zmm6.q.d f* zmm2
        var_148:4.d = r9
        r13_1 = int.d(zmm0.d)
        
        if (not(zmm8.d f>= 0f))
            r10_1 -= 1
            var_148.d = r10_1
        
        if (not(zmm5.d f>= 0f))
            r9 -= 1
            var_148:4.d = r9
        
        if (not(zmm6.d f>= 0f))
            r13_1 -= 1
        
        zmm11 = zx.o(var_148)
        var_148 = zmm11.q
        
        if (rbx_2 s< 0 || r10_1 s>= *(r12 + 0x38))
            rcx = 1
        
        if (r11_1 s< 0 || r9 s>= *(r12 + 0x3c))
            rcx = 1
        
        if (result s< 0 || r13_1 s>= *(r12 + 0x40))
            rcx = 1
    
    *arg3 = 0xffffffff
    
    if (rcx != 0)
        arg3[1] = *(r12 + 0x78)
        int64_t rbx_6 = sx.q(*(r12 + 0x78))
        zmm6 = zx.o(*r15)
        int32_t rdi_2 = r15[1].d
        zmm7 = zx.o(*(r15 + 0xc))
        int32_t rsi_1 = *(r15 + 0x14)
        int32_t rax_14 = (rbx_6 + 1).d
        zmm8 = *arg2
        zmm9 = arg2[1]
        zmm10 = zx.o(arg2[2].q)
        *(r12 + 0x78) = rax_14
        
        if (rax_14 s> *(r12 + 0x7c))
            sub_1407755b0(r12 + 0x70)
        
        int64_t* rcx_7 = rbx_6 * 0x58 + *(r12 + 0x70)
        *rcx_7 = zmm6.q
        *(rcx_7 + 0xc) = zmm7.q
        rcx_7[1].d = rdi_2
        *(rcx_7 + 0x14) = rsi_1
        *(rcx_7 + 0x18) = zmm8
        int64_t var_b8
        rcx_7[8] = var_b8
        int32_t var_b0
        rcx_7[9].d = var_b0
        int32_t result_2
        result = result_2
        *(rcx_7 + 0x28) = zmm9
        int64_t var_ac
        *(rcx_7 + 0x4c) = var_ac
        *(rcx_7 + 0x54) = result
        rcx_7[7] = zmm10.q
    else
        int32_t rcx_1 = var_130.d
        int32_t r10_2 = var_148.d
        int32_t r11_2 = var_130:4.d
        int32_t r9_1 = var_148:4.d
        arg3[1] = 0xffffffff
        arg3[2] = rcx_1
        arg3[3] = r11_2
        arg3[4] = result
        arg3[5] = r10_2
        arg3[6] = r9_1
        arg3[7] = r13_1
        int32_t var_138_1 = rcx_1
        
        while (rcx_1 s<= r10_2)
            int32_t r14_1 = r11_2
            
            if (r11_2 s<= r9_1)
                do
                    int32_t result_3 = result
                    
                    if (result s<= r13_1)
                        do
                            int32_t rax_3 = r15[1].d
                            zmm6 = zx.o(*r15)
                            zmm7 = zx.o(*(r15 + 0xc))
                            zmm8 = *arg2
                            int32_t rax_4 = *(r15 + 0x14)
                            zmm9 = arg2[1]
                            zmm10 = zx.o(arg2[2].q)
                            int64_t* rbx_5 = (
                                sx.q((*(r12 + 0x54) * rcx_1 + r14_1) * *(r12 + 0x58) + result_3)
                                << 4) + *(r12 + 0x60)
                            int64_t rdi_1 = sx.q(rbx_5[1].d)
                            int32_t rax_10 = (rdi_1 + 1).d
                            rbx_5[1].d = rax_10
                            
                            if (rax_10 s> *(rbx_5 + 0xc))
                                sub_1407755b0(rbx_5)
                                arg2 = arg_10
                            
                            result_3 += 1
                            int64_t* rcx_4 = rdi_1 * 0x58 + *rbx_5
                            *rcx_4 = zmm6.q
                            rcx_4[1].d = rax_3
                            *(rcx_4 + 0xc) = zmm7.q
                            *(rcx_4 + 0x14) = rax_4
                            result = arg5.d
                            rcx_4[8] = zmm14.q
                            *(rcx_4 + 0x4c) = zmm11.q
                            rcx_4[9].d = result
                            *(rcx_4 + 0x54) = r13_1
                            *(rcx_4 + 0x18) = zmm8
                            *(rcx_4 + 0x28) = zmm9
                            rcx_4[7] = zmm10.q
                            rcx_1 = var_138_1
                        while (result_3 s<= r13_1)
                        
                        r9_1 = var_148:4.d
                    
                    r14_1 += 1
                while (r14_1 s<= r9_1)
                
                r10_2 = var_148.d
                r11_2 = var_130:4.d
            
            rcx_1 += 1
            var_138_1 = rcx_1
else
    arg1.b = 1
label_14172f292:
    *arg3 = *(r12 + 0x18)
    arg3[1] = 0xffffffff
    zmm8 = zx.o(arg2[2].q)
    zmm6 = *arg2
    zmm7 = arg2[1]
    int64_t* rbx_1
    
    if (arg1.b == 0)
        int64_t var_110
        rbx_1 = &var_110
        var_110 = _mm_unpacklo_ps(0xff7fffff, 0xff7fffff)
        int32_t var_128_1 = 0xff7fffff
        int32_t var_140_1 = 0x7f7fffff
        int32_t var_108_1 = 0xff7fffff
        int64_t var_104_1 = _mm_unpacklo_ps(0x7f7fffff, 0x7f7fffff)
        int32_t var_fc_1 = 0x7f7fffff
    else
        rbx_1 = &var_130
        int32_t rax_1 = *(arg4 + 8)
        var_130 = *arg4
        int32_t var_128 = rax_1
        int64_t var_124_1 = *(arg4 + 0xc)
        int32_t var_11c_1 = *(arg4 + 0x14)
    
    int64_t rdi_3 = sx.q(*(r12 + 0x18))
    int32_t rax_16 = (rdi_3 + 1).d
    *(r12 + 0x18) = rax_16
    
    if (rax_16 s> *(r12 + 0x1c))
        sub_1405c4fe0(r12 + 0x10)
    
    zmm0 = *rbx_1
    int32_t rax_17 = rbx_1[1].d
    int128_t* rcx_11 = (rdi_3 << 6) + *(r12 + 0x10)
    *rcx_11 = zmm6
    rcx_11[1] = zmm7
    rcx_11[2].q = zmm8.q
    *(rcx_11 + 0x28) = zmm0
    rcx_11[3].d = rax_17
    result = *(rbx_1 + 0x14)
    *(rcx_11 + 0x34) = *(rbx_1 + 0xc)
    *(rcx_11 + 0x3c) = result
return result
