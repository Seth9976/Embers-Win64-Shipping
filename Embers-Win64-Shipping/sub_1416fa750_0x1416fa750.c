// 函数: sub_1416fa750
// 地址: 0x1416fa750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_248
int64_t rax_1 = __security_cookie ^ &var_248
int64_t rsi = sx.q(arg3[3])
int64_t r11 = sx.q(arg3[2])
uint32_t zmm6[0x4] = zx.o(0)
int64_t r10 = sx.q(arg3[1])
int64_t r15 = rsi * 3
uint32_t zmm1[0x4] = *(arg2 + (r15 << 2) + 8)
int64_t r14 = r11 * 3
uint32_t zmm2[0x4] = *(arg2 + (r14 << 2) + 8)
int64_t r8 = r10 * 3
zmm2[0] = zmm2[0] f- *(arg2 + (r8 << 2) + 8)
zmm1[0] = zmm1[0] f- *(arg2 + (r8 << 2) + 8)
uint32_t zmm10[0x4] = *(arg2 + (r8 << 2) + 4)
uint32_t zmm8[0x4] = *(arg2 + (r8 << 2))
uint32_t zmm15[0x4] = *(arg2 + (r15 << 2) + 4)
uint32_t zmm13[0x4] = *(arg2 + (r14 << 2) + 4)
uint32_t zmm14[0x4] = *(arg2 + (r15 << 2))
zmm15[0] = zmm15[0] f- zmm10[0]
uint32_t zmm12[0x4] = *(arg2 + (r14 << 2))
uint32_t zmm7[0x4] = zmm1
zmm14[0] = zmm14[0] f- zmm8[0]
zmm13[0] = zmm13[0] f- zmm10[0]
zmm15[0] = zmm15[0] f* zmm2[0]
zmm12[0] = zmm12[0] f- zmm8[0]
zmm7[0] = zmm7[0] f* zmm13[0]
zmm7[0] = zmm7[0] f- zmm15[0]
zmm1[0] = zmm1[0] f* zmm12[0]
zmm15[0] = zmm15[0] f* zmm12[0]
zmm14[0] = zmm14[0] f* zmm2[0]
zmm14[0] = zmm14[0] f* zmm13[0]
zmm14[0] = zmm14[0] f- zmm1[0]
zmm10[0] = zmm10[0] f* zmm10[0]
zmm15[0] = zmm15[0] f- zmm14[0]
uint32_t zmm3[0x4] = *(arg2 + (r8 << 2) + 8)
uint32_t i_2 = zmm14[0]
zmm14[0] = zmm14[0] f* zmm14[0]
zmm7[0] = zmm7[0] f* zmm7[0]
zmm15[0] = zmm15[0] f* zmm15[0]
zmm14[0] = zmm14[0] f+ zmm7[0]
zmm8[0] = zmm8[0] f* zmm8[0]
zmm14[0] = zmm14[0] f+ zmm15[0]
zmm10[0] = zmm10[0] f+ zmm8[0]
zmm3[0] = zmm3[0] f* zmm3[0]
zmm10[0] = zmm10[0] f+ zmm3[0]
zmm10[0] = zmm10[0] f* 0f
uint64_t* result

if (zmm10[0] f< zmm14[0])
    uint32_t i_5[0x4] = i_2
    uint32_t zmm9[0x4] = 0x3f800000
    zmm1 = 0x3f800000
    zmm1[0] = 1f f/ zmm14[0]
    zmm1[0] = zmm1[0] f* zmm7[0]
    zmm1[0] = zmm1[0] f* i_5[0]
    zmm1[0] = zmm1[0] f* zmm8[0]
    zmm1[0] = zmm1[0] f* zmm10[0]
    zmm1[0] = zmm1[0] f* zmm15[0]
    zmm1[0] = zmm1[0] f+ zmm1[0]
    zmm1[0] = zmm1[0] f* zmm3[0]
    zmm1[0] = zmm1[0] f+ zmm1[0]
    zmm3[0] = zmm3[0] f* zmm15[0]
    zmm7[0] = zmm7[0] f* zmm1[0]
    i_5[0] = i_5[0] f* zmm1[0]
    zmm15[0] = zmm15[0] f* zmm1[0]
    zmm2 = *(arg2 + (r14 << 2) + 8)
    i_2 = zmm7[0]
    zmm2[0] = zmm2[0] f* zmm15[0]
    zmm7 = zmm13
    zmm7[0] = zmm7[0] f* *(arg2 + (r15 << 2) + 8)
    zmm7[0] = zmm7[0] f- zmm2[0]
    zmm10[0] = zmm10[0] f* *(arg2 + (r15 << 2) + 8)
    zmm7[0] = zmm7[0] f+ zmm3[0]
    zmm10[0] = zmm10[0] f* zmm2[0]
    zmm14[0] = zmm14[0] f* *(arg2 + (r14 << 2) + 8)
    zmm7[0] = zmm7[0] f- zmm10[0]
    zmm3[0] = zmm3[0] f* zmm13[0]
    zmm7[0] = zmm7[0] f+ zmm10[0]
    zmm8[0] = zmm8[0] f* *(arg2 + (r15 << 2) + 8)
    zmm7[0] = zmm7[0] f- zmm3[0]
    zmm12[0] = zmm12[0] f* *(arg2 + (r15 << 2) + 8)
    zmm14[0] = zmm14[0] f- zmm12[0]
    uint32_t temp0_1[0x4] = __andps_xmmxud_memxud(zmm7, data_142d3f770)
    zmm14[0] = zmm14[0] f* zmm3[0]
    zmm14[0] = zmm14[0] f+ zmm8[0]
    zmm12[0] = zmm12[0] f* zmm3[0]
    zmm14[0] = zmm14[0] f- zmm14[0]
    zmm8[0] = zmm8[0] f* *(arg2 + (r14 << 2) + 8)
    zmm14[0] = zmm14[0] f+ zmm12[0]
    zmm14[0] = zmm14[0] f- zmm8[0]
    uint32_t temp0_2[0x4] = __andps_xmmxud_memxud(zmm14, data_142d3f770)
    
    if (not(temp0_2[0] f<= temp0_1[0]))
        zmm7 = zmm14
    
    int32_t i = 0
    zmm12[0] = zmm12[0] f* zmm15[0]
    int64_t rcx = 0
    zmm14[0] = zmm14[0] f* zmm13[0]
    zmm14[0] = zmm14[0] f* zmm10[0]
    zmm12[0] = zmm12[0] f- zmm14[0]
    bool cond:0_1 = temp0_2[0] f> temp0_1[0]
    zmm12[0] = zmm12[0] f+ zmm14[0]
    zmm8[0] = zmm8[0] f* zmm15[0]
    int32_t rax_3
    rax_3.b = cond:0_1
    zmm8[0] = zmm8[0] f* zmm13[0]
    uint64_t rax_4 = zx.q(rax_3 + 1)
    zmm12[0] = zmm12[0] f- zmm8[0]
    bool cond:1_1 = temp0_2[0] f<= temp0_1[0]
    zmm12[0] = zmm12[0] f* zmm10[0]
    zmm3 = _mm_max_ss(temp0_2[0], temp0_1[0])
    zmm12[0] = zmm12[0] f+ zmm8[0]
    
    if (cond:1_1)
        rcx = 2
    
    zmm12[0] = zmm12[0] f- zmm12[0]
    
    if (not(__andps_xmmxud_memxud(zmm12, data_142d3f770)[0] f<= zmm3[0]))
        zmm7 = zmm12
        rax_4 = 0
        rcx = 1
    
    uint32_t i_4[0x4] = i_2
    zmm10[0] = zmm10[0] f- i_5[0]
    zmm1 = *(arg2 + (r8 << 2) + 8)
    zmm12[0] = zmm12[0] f- i_4[0]
    zmm8[0] = zmm8[0] f- i_4[0]
    int32_t var_190 = 2
    zmm1[0] = zmm1[0] f- zmm15[0]
    int64_t var_184 = 0
    zmm14[0] = zmm14[0] f- i_4[0]
    int32_t var_17c_1 = 2
    i_4 = *(arg2 + (r15 << 2) + 8)
    zmm13[0] = zmm13[0] f- i_5[0]
    i_2 = zmm12[0]
    i_4[0] = i_4[0] f- zmm15[0]
    uint32_t var_1fc_1 = zmm10[0]
    zmm15[0] = zmm15[0] f- i_5[0]
    uint32_t var_1f8_1 = zmm1[0]
    void var_150
    void* rbx_1 = &var_150
    zmm1 = *(arg2 + (r14 << 2) + 8)
    uint32_t var_1a0
    uint32_t* r15_1 = &var_1a0
    uint32_t var_20c_1 = zmm13[0]
    zmm1[0] = zmm1[0] f- zmm15[0]
    uint32_t var_198_1 = i_4[0]
    void var_1c8
    void* r14_1 = &var_1c8
    var_1a0 = zmm14[0]
    int32_t var_128[0xc]
    int32_t (* r13_1)[0xc] = &var_128
    uint32_t var_19c_1 = zmm15[0]
    zmm3 = (&var_1a0)[rcx]
    uint32_t var_208_1 = zmm1[0]
    i_5 = (&i_2)[rax_4]
    uint32_t zmm4[0x4] = (&i_2)[rcx]
    zmm1 = (&var_1a0)[rax_4]
    int32_t var_20c_2 = rsi.d
    i_2 = r11.d
    zmm1[0] = zmm1[0] f* zmm4[0]
    int64_t var_170_1 = 0
    uint32_t var_200 = zmm8[0]
    zmm10 = (&var_200)[rax_4]
    int64_t rax_5 = i_2.q
    zmm2 = (&var_200)[rcx]
    int32_t var_20c_3 = rsi.d
    zmm12 = zmm2
    i_2 = r10.d
    int64_t var_18c
    int64_t* rsi_1 = &var_18c
    var_18c = rax_5
    int64_t rax_6 = i_2.q
    i_2 = r10.d
    i_5[0] = i_5[0] f* zmm3[0]
    int64_t var_178_1 = rax_6
    zmm12[0] = zmm12[0] f* zmm1[0]
    int32_t var_20c_4 = r11.d
    uint64_t i_1 = i_2.q
    i_5[0] = i_5[0] f- zmm1[0]
    zmm2[0] = zmm2[0] f* i_5[0]
    int32_t var_168_1 = 2
    zmm10[0] = zmm10[0] f* zmm3[0]
    uint64_t i_3 = i_1
    zmm10[0] = zmm10[0] f* zmm4[0]
    int64_t var_15c_1 = 0
    zmm12[0] = zmm12[0] f- zmm10[0]
    var_1a0 = i_5[0]
    i_2 = 0xffffffff
    zmm10[0] = zmm10[0] f- zmm2[0]
    char var_218_1 = 1
    uint32_t var_19c_2 = zmm12[0]
    uint32_t var_198_2 = zmm10[0]
    
    do
        zmm7[0] f- zmm6[0]
        bool cond:2_1 = zmm7[0] f>= zmm6[0]
        i_4 = *r15_1
        
        if (zmm7[0] f<= zmm6[0])
            goto label_1416fac28
        
        if (i_4[0] f> zmm6[0])
            i_1.b = 1
        else
            cond:2_1 = zmm7[0] f>= zmm6[0]
        label_1416fac28:
            
            if (cond:2_1 || i_4[0] f>= zmm6[0])
                i_1.b = 0
            else
                i_1.b = 1
        
        if (i_1.b != 0)
            i_1 = zx.q(i_2)
        else
            var_218_1 = i_1.b
            uint64_t* rax_7
            uint32_t zmm8_1
            rax_7, zmm6, zmm7, zmm8_1, zmm9 = sub_1416e69d0(&var_200, arg2, rsi_1, rsi_1 - 4, r13_1)
            int32_t rax_8 = rax_7[1].d
            *rbx_1 = *rax_7
            *(rbx_1 + 8) = rax_8
            zmm2 = *(rbx_1 + 4)
            i_4 = *rbx_1
            zmm1 = *(rbx_1 + 8)
            i_1 = zx.q(i_2)
            zmm2[0] = zmm2[0] f* zmm2[0]
            i_4[0] = i_4[0] f* i_4[0]
            zmm1[0] = zmm1[0] f* zmm1[0]
            zmm2[0] = zmm2[0] f+ i_4[0]
            zmm2[0] = zmm2[0] f+ zmm1[0]
            
            if (i_1.d == 0xffffffff || not(zmm2[0] f>= zmm8_1))
                i_1 = zx.q(i)
                zmm2[0]
                i_2 = i_1.d
        
        i += 1
        r13_1 = &(*r13_1)[4]
        rsi_1 += 0x14
        r15_1 = &r15_1[1]
        r14_1 += 1
        rbx_1 += 0xc
    while (i s< 3)
    
    uint32_t rax_11
    
    if (var_218_1 == 0)
        int64_t rdx_3 = sx.q(i_1.d)
        int64_t rcx_3 = rdx_3 * 5
        *arg3 = (&var_190)[rcx_3]
        arg3[1] = *(&var_18c + (rcx_3 << 2))
        arg3[2] = *(&var_18c:4 + (rcx_3 << 2))
        arg3[3] = *(&var_184 + (rcx_3 << 2))
        arg3[4] = *(&var_184:4 + (rcx_3 << 2))
        *(arg4 + (r10 << 2)) = var_128[r10 + (rdx_3 << 2)]
        *(arg4 + (r11 << 2)) = var_128[r11 + (rdx_3 << 2)]
        int64_t rax_20 = rdx_3 * 3
        i_4 = zx.o(*(&var_150 + (rax_20 << 2)))
        int32_t var_148[0x8]
        rax_11 = var_148[rax_20]
        *(arg4 + (rsi << 2)) = var_128[rsi + (rdx_3 << 2)]
    else
        zmm9[0] = zmm9[0] f/ zmm7[0]
        zmm9[0] = zmm9[0] f* i_5[0]
        zmm9[0] = zmm9[0] f* zmm12[0]
        zmm9[0] = zmm9[0] f* zmm10[0]
        zmm9[0] = zmm9[0] f* *(arg2 + (r8 << 2))
        zmm9[0] = zmm9[0] f* *(arg2 + (r14 << 2))
        zmm9[0] = zmm9[0] f* *(arg2 + (r14 << 2) + 4)
        zmm9[0] = zmm9[0] f* *(arg2 + (r15 << 2))
        zmm9[0] = zmm9[0] f+ zmm9[0]
        zmm9[0] = zmm9[0] f* *(arg2 + (r8 << 2) + 4)
        zmm9[0] = zmm9[0] f* *(arg2 + (r14 << 2) + 8)
        zmm9[0] = zmm9[0] f+ zmm9[0]
        zmm9[0] = zmm9[0] f+ zmm9[0]
        zmm9[0] = zmm9[0] f* *(arg2 + (r15 << 2) + 4)
        zmm9[0] = zmm9[0] f* *(arg2 + (r8 << 2) + 8)
        zmm9[0] = zmm9[0] f+ zmm9[0]
        zmm9[0] = zmm9[0] f* *(arg2 + (r15 << 2) + 8)
        *(arg4 + (r10 << 2)) = zmm9[0]
        zmm9[0] = zmm9[0] f+ zmm9[0]
        i_4 = _mm_unpacklo_ps(zmm9, zmm9[0].q)
        *(arg4 + (r11 << 2)) = zmm9[0]
        zmm9[0] = zmm9[0] f+ zmm9[0]
        *(arg4 + (rsi << 2)) = zmm9[0]
        rax_11 = zmm9[0]
    
    *arg1 = i_4.q
    arg1[1].d = rax_11
    result = arg1
else
    *arg3 = 2
    sub_1416e69d0(arg1, arg2, &arg3[1], arg3, arg4)
    result = arg1

__security_check_cookie(rax_1 ^ &var_248)
return result
