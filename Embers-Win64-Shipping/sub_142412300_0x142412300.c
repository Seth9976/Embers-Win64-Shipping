// 函数: sub_142412300
// 地址: 0x142412300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* i_1 = nullptr
float arg_8 = 0f
void* r15 = *(arg1 + 0x148)
int128_t zmm1 = data_143dbb1f0:4.d
*arg2 = data_143dbb1f0.d.d
uint32_t rcx = zx.d(*(r15 + 0x30))
arg2[1] = zmm1.d

if (rcx == 0)
    *(arg1 + 0xa0)
    *(arg1 + 0xa4)
    int64_t* rax_21 = sub_140ac6680(arg1 + 0x130)
    int16_t* i
    
    if (rax_21[1].d == 0)
        i = &data_142d40450
    else
        i = *rax_21
    
    int64_t rdi_1 = -1
    
    do
        rdi_1 += 1
    while (i[rdi_1] != 0)
    
    int128_t zmm9 = zx.o(0)
    int128_t zmm7 = zx.o(0)
    
    if (r15 != 0)
        int32_t var_1c8
        int32_t arg_20
        int32_t zmm8_1
        zmm7, zmm8_1, zmm9 = sub_142003d30(r15, 0x30, &arg_20, &var_1c8)
        
        if (not(arg_20 f!= zmm8_1))
            zmm7, zmm9 = sub_142003d30(r15, 0x41, &arg_20, &var_1c8)
        
        if (*i != 0)
            while (i u< &i[sx.q(rdi_1.d)])
                int16_t rdi_2 = *i
                int32_t arg_10
                uint128_t zmm8_2
                float zmm10_1
                int32_t zmm11_1
                zmm7, zmm8_2, zmm9, zmm10_1, zmm11_1 = sub_142003d30(r15, rdi_2, &arg_8, &arg_10)
                int128_t zmm1_1 = arg_10
                
                if (not(zmm1_1.d f!= zmm8_2.d) && rdi_2 == 0xa)
                    zmm1_1 = var_1c8
                    arg_10 = zmm1_1.d
                
                uint128_t zmm6_1 = zmm8_2
                
                if (i_1 != 0)
                    char rax_23
                    rax_23, zmm7, zmm9, zmm10_1, zmm11_1 = sub_142003bb0(r15, *i_1, rdi_2)
                    zmm1_1 = arg_10
                    zmm6_1.d = _mm_cvtepi32_ps(zx.o(sx.d(rax_23))).d f* zmm10_1
                
                wint_t _C = i[1]
                zmm1_1.d = zmm1_1.d f* zmm11_1
                arg_8 = arg_8 * zmm10_1
                arg_10 = zmm1_1.d
                int32_t rax_24 = iswspace(_C)
                float zmm0_2
                
                if (rax_24 != 0 || i[1] == rax_24.w)
                    zmm0_2 = arg_8
                else
                    zmm0_2 = arg_8 f+ zmm6_1.d
                    arg_8 = zmm0_2
                
                zmm1_1 = arg_10
                zmm9.d = zmm9.d f+ zmm0_2
                
                if (not(zmm7.d f>= zmm1_1.d))
                    zmm7 = zmm1_1
                
                bool cond:0_1 = i[1] != 0
                i_1 = i
                i = &i[1]
                
                if (not(cond:0_1))
                    break
    
    *arg2 = zmm9.d
    arg2[1] = zmm7.d
else if (rcx == 1)
    int64_t* var_158
    int128_t* rax_5
    int64_t rcx_1
    int64_t rdx
    char* rbx_1
    int64_t r8_1
    int64_t* r9_1
    int64_t* r10_1
    int32_t* r11_1
    int32_t r15_1
    int128_t zmm0
    
    if (*(arg1 + 0x1a0) == 0)
        zmm0 = data_14399f5e0
        int32_t r8_2 = *(r15 + 0x13c)
        int32_t var_1b0 = 0
        int16_t var_1ac_1 = 0
        int64_t var_1a8_1 = 0
        int128_t var_1a0_1 = zmm0
        int64_t var_e8
        sub_140d93a40(&var_e8, r15, r8_2, r15 + 0x140, &var_1b0)
        rcx_1 = var_e8
        void var_d8
        rax_5 = &var_d8
        int64_t var_e0
        rdx = var_e0
        int64_t var_b8
        r9_1 = &var_b8
        r8_1 = var_b8
        void var_a8
        r10_1 = &var_a8
        void var_a0
        r11_1 = &var_a0
        r15_1 = 2
        void var_9c
        rbx_1 = &var_9c
    else
        int64_t* rax_1 = *(arg1 + 0x188)
        rcx_1 = *(arg1 + 0x150)
        rdx = *(arg1 + 0x158)
        r8_1 = *(arg1 + 0x180)
        int64_t var_190_1 = rcx_1
        int64_t var_188_1 = rdx
        int64_t var_160 = r8_1
        var_158 = rax_1
        zmm1 = *(arg1 + 0x170)
        int128_t var_180 = *(arg1 + 0x160)
        int128_t var_170_1 = zmm1
        
        if (rax_1 != 0)
            rax_1[1].d += 1
        
        r9_1 = &var_160
        int64_t var_150 = *(arg1 + 0x190)
        r10_1 = &var_150
        int32_t var_148
        r11_1 = &var_148
        var_148 = *(arg1 + 0x198)
        char var_144
        rbx_1 = &var_144
        r15_1 = 1
        var_144 = *(arg1 + 0x19c)
        rax_5 = &var_180
    
    int64_t var_138 = rcx_1
    int64_t var_130_1 = rdx
    int64_t var_108_1 = r8_1
    zmm0 = *rax_5
    zmm1 = rax_5[1]
    int64_t* rax_6 = r9_1[1]
    r9_1[1] = 0
    *r9_1 = 0
    int64_t var_f8_1 = *r10_1
    int32_t var_f0_1 = *r11_1
    char var_ec_1 = *rbx_1
    int128_t var_128_1 = zmm0
    int128_t var_118_1 = zmm1
    
    if ((r15_1.b & 2) != 0)
        r15_1 &= 0xfffffffd
        int64_t* var_b0
        
        if (var_b0 != 0)
            var_b0[1].d -= 1
            
            if (var_b0[1].d == 1)
                (**var_b0)(var_b0)
                int32_t temp3_1 = *(var_b0 + 0xc)
                *(var_b0 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*var_b0 + 8))(var_b0, 1)
    
    if ((r15_1.b & 1) != 0 && var_158 != 0)
        var_158[1].d -= 1
        
        if (var_158[1].d == 1)
            (**var_158)(var_158)
            int32_t temp6_1 = *(var_158 + 0xc)
            *(var_158 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*var_158 + 8))(var_158, 1)
    
    int64_t* var_1c0
    sub_140e14af0(*(*(data_143e29f28 + 0x20) + 8), &var_1c0)
    int64_t* rcx_9 = var_1c0
    int128_t* var_1d8
    var_1d8.d = arg3.d
    int128_t* rax_16 = (*(*rcx_9 + 0x10))(rcx_9, &arg_8, arg1 + 0x130, &var_138, var_1d8)
    zmm1.d = (*rax_16).d f* *(arg1 + 0xa0)
    zmm0.d = (*(arg1 + 0xa4)).d f* *(rax_16 + 4)
    *arg2 = zmm1.d
    arg2[1] = zmm0.d
    int64_t* var_1b8
    
    if (var_1b8 != 0)
        var_1b8[1].d -= 1
        
        if (var_1b8[1].d == 1)
            (**var_1b8)(var_1b8)
            int32_t temp5_1 = *(var_1b8 + 0xc)
            *(var_1b8 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*var_1b8 + 8))(var_1b8, 1)
    
    if (rax_6 != 0)
        rax_6[1].d -= 1
        
        if (rax_6[1].d == 1)
            (**rax_6)(rax_6)
            int32_t temp7_1 = *(rax_6 + 0xc)
            *(rax_6 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rax_6 + 8))(rax_6, 1)

return arg2
