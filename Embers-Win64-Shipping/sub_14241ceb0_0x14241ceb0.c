// 函数: sub_14241ceb0
// 地址: 0x14241ceb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* arg_8 = arg1
int64_t r13 = sx.q(arg2[3].d)
int64_t i_4 = sx.q(arg2[1].d)

if (r13.d s>= i_4.d)
    void* const* result
    result.b = 0
    return result

int32_t i_6 = (r13 + 1).d
int32_t i_2 = -1
int16_t* i_7 = nullptr
int64_t r12_1

if (i_6 s< i_4.d)
    r12_1 = *arg2
    int64_t i_8 = sx.q(i_6)
    int16_t* r11_2 = r12_1 - 2 + (i_8 << 1)
    
    while (true)
        uint32_t r10_1 = zx.d(*r11_2)
        arg1.b = r10_1 - 0xa u<= 3
        int32_t rax
        rax.b = r10_1.w == 0x2029
        arg1.b |= rax.b
        char rdx = arg1.b
        
        if (r10_1.w == 0x2028)
            rdx = 1
        
        if ((rdx | r10_1.w == 0x85) != 0)
            if (i_8 s>= i_4)
                arg1 = nullptr
            else
                arg1 = r12_1 + (sx.q(i_6) << 1)
            
            if (r10_1.w != 0xd)
                break
            
            if (arg1 == 0)
                break
            
            if (*arg1 != 0xa)
                break
        
        i_6 += 1
        i_8 += 1
        r11_2 = &r11_2[1]
        
        if (i_8 s>= i_4)
            goto label_14241cfa2
    
    i_2 = i_6
    
    if (i_6 != 0xffffffff)
        goto label_14241cff0
    
    goto label_14241cfa2

label_14241cfa2:
r12_1 = *arg2
uint32_t r8_1 = zx.d(*(r12_1 + (i_4 << 1) - 2))
arg1.b = r8_1 - 0xa u<= 3
int32_t rax_3
rax_3.b = r8_1.w == 0x2029
arg1.b |= rax_3.b
char rdx_1 = arg1.b

if (r8_1.w == 0x2028)
    rdx_1 = 1

if ((rdx_1 | r8_1.w == 0x85) == 0)
    i_4 = zx.q(i_2)

i_2 = i_4.d
int32_t i_5
void* const r12_2
int16_t* r15
uint128_t var_f0
int32_t arg_10
uint128_t zmm1

if (i_4.d == 0xffffffff)
label_14241d220:
    uint128_t* rcx_5 = arg2[2]
    int64_t rax_10 = sx.q(arg2[3].d)
    int32_t r8_7 = arg2[1].d - rax_10.d
    arg_10 = 0xffffffff
    zmm1 = rcx_5[1]
    int32_t r9_3 = int.d(fconvert.t(*(rcx_5 + 8)))
    var_f0 = *rcx_5
    uint128_t var_e0_2 = zmm1
    uint64_t var_d0_2 = rcx_5[2].q
    sub_142417840(&var_f0, *arg2 + (rax_10 << 1), r8_7, r9_3, 1, &arg_10)
    int32_t rbx_2 = arg2[3].d
    int32_t i_3 = -1
    r15 = arg_8
    i_2 = arg_10 + rbx_2
    
    if (i_2 == arg2[1].d)
        i_3 = i_2
    
    bool cond:1_1 = i_3 s> rbx_2
    
    if (i_3 s<= rbx_2)
        int64_t* rcx_8 = *(r15 + 0x10)
        i_3 = (*(*rcx_8 + 0x58))(rcx_8, zx.q(i_2 + 1))
        int32_t rbx_3 = arg2[3].d
        
        if (i_3 s< rbx_2)
            i_3 = -1
        
        cond:1_1 = i_3 s> rbx_3
        
        if (i_3 s<= rbx_3)
            int64_t* rcx_9 = *r15
            i_3 = (*(*rcx_9 + 0x58))(rcx_9, zx.q(i_2 + 1))
            
            if (i_3 s< rbx_3)
                i_3 = -1
            
            cond:1_1 = i_3 s> arg2[3].d
    
    if (cond:1_1)
        i_2 = i_3
    
    i_5 = i_2
else
label_14241cff0:
    int128_t* rax_5 = arg2[2]
    int16_t* i = r12_1 + (r13 << 1)
    zmm1 = rax_5[1]
    uint128_t zmm0 = *rax_5
    int64_t var_e0_1 = zmm1.q
    r12_2 = _mm_bsrli_si128(zmm1, 8).q
    int32_t zmm2 = (zx.o(0)).d
    var_f0 = zmm0
    uint64_t var_d0_1 = rax_5[2].q
    
    if (r12_2 != 0)
        int32_t var_f8
        int32_t arg_20
        uint128_t zmm6_1
        int32_t zmm8_1
        int128_t zmm12_1
        zmm6_1, zmm8_1, zmm12_1 = sub_142003d30(r12_2, 0x30, &arg_20, &var_f8)
        
        if (not(arg_20.d f!= zmm8_1))
            zmm6_1, zmm12_1 = sub_142003d30(r12_2, 0x41, &arg_20, &var_f8)
        
        zmm2 = (zx.o(0)).d
        
        if (*i != 0)
            int128_t var_b8_1 = zmm12_1
            uint128_t var_58_1 = zmm6_1
            
            while (i u< &i[sx.q(i_2 - r13.d)])
                int16_t rsi_2 = *i
                int32_t arg_18
                uint128_t zmm7_2
                int32_t zmm8_2
                int32_t zmm9_1
                int32_t zmm10_2
                int32_t zmm11_1
                zmm7_2, zmm8_2, zmm9_1, zmm10_2, zmm11_1, zmm12_1 =
                    sub_142003d30(r12_2, rsi_2, &arg_10, &arg_18)
                zmm1 = arg_18
                
                if (not(zmm1.d f!= zmm8_2) && rsi_2 == 0xa)
                    zmm1 = var_f8
                    arg_18 = zmm1.d
                
                zmm6_1 = zmm7_2
                
                if (i_7 != 0)
                    char rax_7
                    int32_t zmm7_3
                    rax_7, zmm7_3, zmm9_1, zmm10_2, zmm11_1, zmm12_1 =
                        sub_142003bb0(r12_2, *i_7, rsi_2)
                    zmm1 = arg_18
                    zmm6_1.d = _mm_cvtepi32_ps(zx.o(sx.d(rax_7))).d f* zmm10_2
                    zmm6_1.d = zmm6_1.d f+ zmm7_3
                
                wint_t _C = i[1]
                zmm0.d = arg_10.d f* zmm10_2
                zmm1.d = zmm1.d f* zmm12_1.d
                arg_10 = zmm0.d
                arg_18 = zmm1.d
                int32_t rax_8 = iswspace(_C)
                
                if (rax_8 != 0 || i[1] == rax_8.w)
                    zmm0 = arg_10
                else
                    zmm0.d = arg_10.d f+ zmm6_1.d
                    arg_10 = zmm0.d
                
                zmm0.d = zmm0.d f+ zmm11_1
                zmm2 = zmm0.d
                zmm0.d = var_d0_1:4.d.d f* zmm12_1.d
                zmm0.d = zmm0.d f+ arg_18
                bool cond:5_1 = i[1] != 0
                i_7 = i
                i = &i[1]
                
                if (not(cond:5_1))
                    break
    
    if (zmm2 f> *(arg2[2] + 8))
        goto label_14241d220
    
    r15 = arg_8
    i_5 = i_2 - 1
int64_t i_1 = sx.q(i_5)

if (i_5 s> 0)
    do
        if (sub_140a81220(*(*arg2 + (i_1 << 1) - 2)) == 0)
            break
        
        i_5 -= 1
        i_1 -= 1
    while (i_1 s> 0)

if (arg2[3].d s> i_5)
    r12_2.b = 0
else
    sub_142401a20(r15, arg2, i_5)
    r12_2.b = 1

if (i_2 s< arg2[1].d)
    int64_t rbx_5 = sx.q(i_2) * 2
    
    do
        if (sub_140a81220(*(*arg2 + rbx_5)) == 0)
            break
        
        i_2 += 1
        rbx_5 += 2
    while (i_2 s< arg2[1].d)

int64_t* rbx_6 = arg2[5]

if (rbx_6 != 0)
    int64_t r15_1 = sx.q(rbx_6[1].d)
    int32_t rax_19 = (r15_1 + 1).d
    rbx_6[1].d = rax_19
    
    if (rax_19 s> *(rbx_6 + 0xc))
        sub_1405a4d70(rbx_6)
    
    int64_t rdx_9 = *rbx_6
    *(rdx_9 + (r15_1 << 3)) = arg2[3].d
    *(rdx_9 + (r15_1 << 3) + 4) = i_5

arg2[3].d = i_2
return zx.q(r12_2.b)
