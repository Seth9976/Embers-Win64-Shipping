// 函数: sub_141cdcec0
// 地址: 0x141cdcec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4] = data_143dbb200
double zmm7[0x2] = data_143dbb1fc
float zmm8[0x4] = data_143dbb1f8
float zmm9[0x4] = zmm8
double zmm10[0x2] = zmm7
float zmm11[0x4] = zmm6
void* arg_8
sub_14090aa40(arg1 + 0x150, &arg_8, data_143f35cc8)
int32_t r11 = *(arg1 + 0x28)
int32_t rsi = 0
int32_t var_114 = 1
void* var_110 = arg1 + 0x10
int32_t rcx_1 = 0
int32_t var_118 = 0
int32_t var_108 = 0xffffffff
int32_t r8_1 = 0
int32_t var_104 = 0

if (r11 != 0)
    void* rax_1 = *(arg1 + 0x20)
    void* r9_1 = arg1 + 0x10
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_141cdcfc8:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_114_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_104 = r8_1 - rax_9 + 0x1f
        
        if (r8_1 - rax_9 + 0x1f s> r11)
            var_104 = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_1)
            r8_1 += 0x20
            rcx_1 += 1
            var_104 = r8_1
            var_118 = rcx_1
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            int32_t var_108_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_141cdcfc8
        
        var_104 = r11

int32_t r12 = *(arg1 + 0x28)
float var_b8[0x4] = var_118.o
int32_t r8_4 = r12 s>> 5
int32_t r9_3 = r12 & 0xffffffe0
int128_t var_a8 = 0xffffffff
int64_t var_d8 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
float var_f8[0x4] = arg1.o

if (r12 != r11)
    void* rax_11 = *(arg1 + 0x20)
    void* r10_1 = arg1 + 0x10
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_8 = *(r10_1 + (sx.q(r8_4) << 2)) & 0xffffffff << (r12.b & 0x1f)
    
    if (rdx_8 != 0)
    label_141cdd09b:
        int32_t rax_18 = neg.d(rdx_8) & rdx_8
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rax_19
        
        if (rax_18 == 0)
            rax_19 = 0x20
        else
            rax_19 = 0x1f - temp0_4
        
        r12 = r9_3 - rax_19 + 0x1f
        
        if (r12 s> r11)
            r12 = r11
    else
        while (true)
            int64_t rcx_6 = sx.q(r8_4)
            r9_3 += 0x20
            r8_4 += 1
            
            if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_8 = *(r10_1 + (rcx_6 << 2) + 4)
            
            if (rdx_8 != 0)
                goto label_141cdd09b
        
        r12 = r11

void* rbx_1 = arg_8
char r15 = 0

while (true)
    float rcx_8 = var_b8[3]
    int64_t rdx_9 = var_b8[0].q
    float zmm0[0x4]
    float zmm1[0x4]
    double zmm2[0x2]
    
    if (rcx_8 == r12 && rdx_9 == arg1 + 0x10 && var_f8[0].q == arg1)
        zmm8[0] = zmm8[0] - zmm9[0]
        zmm7[0].d = zmm7[0].d f- zmm10[0].d
        zmm6[0] = zmm6[0] - zmm11[0]
        int32_t var_118_1 = 0
        int32_t var_114_2 = 1
        int32_t rcx_12 = 0
        void* var_110_1 = arg1 + 0x10
        zmm8[0] = zmm8[0] * 0.5f
        int32_t var_108_2 = 0xffffffff
        zmm6[0] = zmm6[0] * 0.5f
        var_104 = 0
        zmm7[0].d = zmm7[0].d f* 0.5f
        var_104 = 0
        float var_c8 = zmm6[0]
        *(arg2 + 0xc) = (_mm_unpacklo_ps(zmm8, zmm7[0])).q
        arg2[5] = var_c8
        zmm9[0] = zmm9[0] f+ arg2[3]
        zmm10[0].d = zmm10[0].d f+ arg2[4]
        zmm11[0] = zmm11[0] f+ arg2[5]
        arg2[6] = 0
        *arg2 = (_mm_unpacklo_ps(zmm9, zmm10[0])).q
        arg2[2] = zmm11[0]
        int32_t r11_1 = *(arg1 + 0x28)
        
        if (r11_1 != 0)
            void* rax_32 = *(arg1 + 0x20)
            void* r8_6 = arg1 + 0x10
            
            if (rax_32 != 0)
                r8_6 = rax_32
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(r11_1 - 1)
            int32_t rdx_13 = *r8_6
            
            if (rdx_13 != 0)
            label_141cdd2d6:
                int32_t rax_39 = neg.d(rdx_13) & rdx_13
                uint64_t rflags_3
                int32_t temp0_7
                temp0_7, rflags_3 = _bit_scan_reverse(rax_39)
                int32_t var_114_3 = rax_39
                int32_t rax_40
                
                if (rax_39 == 0)
                    rax_40 = 0x20
                else
                    rax_40 = 0x1f - temp0_7
                
                var_104 = rcx_12 - rax_40 + 0x1f
                
                if (rcx_12 - rax_40 + 0x1f s> r11_1)
                    var_104 = r11_1
            else
                while (true)
                    int64_t rdx_14 = sx.q(rsi)
                    rcx_12 += 0x20
                    rsi += 1
                    var_104 = rcx_12
                    var_118_1 = rsi
                    
                    if (rdx_14.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_13 = *(r8_6 + (rdx_14 << 2) + 4)
                    int32_t var_108_3 = 0xffffffff
                    
                    if (rdx_13 != 0)
                        goto label_141cdd2d6
                
                var_104 = r11_1
        
        int32_t rsi_1 = *(arg1 + 0x28)
        float var_b8_1[0x4] = var_118_1.o
        int32_t r9_7 = rsi_1 & 0xffffffe0
        int32_t r8_8 = rsi_1 s>> 5
        int32_t* arg_10
        arg_10.d = 0xffffffff << (rsi_1.b & 0x1f)
        int128_t var_a8_1 = 0xffffffff
        int64_t var_d8_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
        var_f8 = arg1.o
        
        if (rsi_1 != r11_1)
            void* rax_42 = *(arg1 + 0x20)
            void* r10_4 = arg1 + 0x10
            
            if (rax_42 != 0)
                r10_4 = rax_42
            
            int32_t temp6_1
            int32_t temp7_1
            temp6_1:temp7_1 = sx.q(r11_1 - 1)
            int32_t rdx_19 = *(r10_4 + (sx.q(r8_8) << 2)) & arg_10.d
            
            if (rdx_19 != 0)
            label_141cdd39b:
                int32_t rax_49 = neg.d(rdx_19) & rdx_19
                uint64_t rflags_4
                int32_t temp0_9
                temp0_9, rflags_4 = _bit_scan_reverse(rax_49)
                int32_t rax_50
                
                if (rax_49 == 0)
                    rax_50 = 0x20
                else
                    rax_50 = 0x1f - temp0_9
                
                rsi_1 = r9_7 - rax_50 + 0x1f
                
                if (rsi_1 s> r11_1)
                    rsi_1 = r11_1
            else
                while (true)
                    int64_t rcx_17 = sx.q(r8_8)
                    r9_7 += 0x20
                    r8_8 += 1
                    
                    if (rcx_17.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_19 = *(r10_4 + (rcx_17 << 2) + 4)
                    
                    if (rdx_19 != 0)
                        goto label_141cdd39b
                
                rsi_1 = r11_1
        
        while (true)
            float rcx_19 = var_b8_1[3]
            int64_t rdx_20 = var_b8_1[0].q
            
            if (rcx_19 == rsi_1 && rdx_20 == arg1 + 0x10 && var_f8[0].q == arg1)
                return arg2
            
            float rax_51 = data_143a1c6b4
            
            if (rcx_19 s< *(rdx_20 + 0x18))
                rax_51 = rcx_19
            
            int64_t r10_5 = sx.q(rax_51)
            int64_t* rax_54 = (r10_5 << 5) + *arg1
            
            for (int32_t* i = *rax_54; i != &i[sx.q(rax_54[1].d)]; i = &i[1])
                if (*(*(arg1 + 0x38) + sx.q(*i) * 0x18 + 0x10) s> 0)
                    int64_t rdx_21 = r10_5 * 3
                    int64_t rcx_21 = **(rbx_1 + 0x18)
                    zmm0 = *(rcx_21 + (rdx_21 << 2) + 8)
                    zmm0[0] = zmm0[0] f- arg2[2]
                    zmm1 = *(rcx_21 + (rdx_21 << 2))
                    zmm2 = *(rcx_21 + (rdx_21 << 2) + 4)
                    zmm2[0].d = zmm2[0].d f- arg2[1]
                    zmm1[0] = zmm1[0] f- *arg2
                    zmm0[0] = zmm0[0] * zmm0[0]
                    zmm2[0].d = zmm2[0].d f* zmm2[0].d
                    zmm1[0] = zmm1[0] * zmm1[0]
                    zmm2[0].d = zmm2[0].d f+ zmm1[0]
                    zmm2[0].d = zmm2[0].d f+ zmm0[0]
                    arg2[6] = __maxss_xmmss_memss(_mm_sqrt_ss(0, zmm2[0].d)[0], arg2[6])[0]
                    break
            
            var_b8_1[2] &= not.d(var_f8[3])
            sub_14059bdd0(&var_f8[2])
    
    float rax_20 = data_143a1c6b4
    
    if (rcx_8 s< *(rdx_9 + 0x18))
        rax_20 = rcx_8
    
    int64_t r10_2 = sx.q(rax_20)
    int64_t* rax_23 = (r10_2 << 5) + *arg1
    
    for (int32_t* i_1 = *rax_23; i_1 != &i_1[sx.q(rax_23[1].d)]; i_1 = &i_1[1])
        if (*(*(arg1 + 0x38) + sx.q(*i_1) * 0x18 + 0x10) s> 0)
            int64_t rcx_10 = r10_2 * 3
            int64_t rdx_10 = **(rbx_1 + 0x18)
            
            if (r15 == 0)
                zmm0 = zx.o(*(rdx_10 + (rcx_10 << 2)))
                r15 = 1
                zmm8 = zmm0
                var_110 = zmm0.q
                zmm9 = zmm8
                zmm7 = 0xffffffff
                zmm10 = 0xffffffff
                zmm6 = *(rdx_10 + (rcx_10 << 2) + 8)
                zmm11 = zmm6
            else
                zmm0 = *(rdx_10 + (rcx_10 << 2))
                
                if (not(zmm9[0] <= zmm0[0]))
                    zmm9 = zmm0
                
                zmm2 = *(rdx_10 + (rcx_10 << 2) + 4)
                
                if (not(zmm10[0].d f<= zmm2[0].d))
                    zmm10 = zmm2
                
                zmm1 = *(rdx_10 + (rcx_10 << 2) + 8)
                
                if (not(zmm11[0] <= zmm1[0]))
                    zmm11 = zmm1
                
                if (not(zmm8[0] >= zmm0[0]))
                    zmm8 = zmm0
                
                if (not(zmm7[0].d f>= zmm2[0].d))
                    zmm7 = zmm2
                
                if (not(zmm6[0] >= zmm1[0]))
                    zmm6 = zmm1
            
            break
    
    var_b8[2] &= not.d(var_f8[3])
    sub_14059bdd0(&var_f8[2])
