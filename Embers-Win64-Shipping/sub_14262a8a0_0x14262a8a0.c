// 函数: sub_14262a8a0
// 地址: 0x14262a8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int64_t* rdi = arg6
int128_t* r14 = arg2
int32_t* rsi = arg1
int64_t var_120 = 0
int32_t var_118 = 0
int64_t* r15 = arg4
int64_t* var_130 = arg4
int64_t* var_110 = rdi
int128_t zmm7
int128_t zmm8
int128_t zmm9
int128_t zmm11
int128_t zmm12
int128_t zmm13
zmm7, zmm8, zmm9, zmm11, zmm12, zmm13 =
    sub_14260d860(rdi, arg1, &arg1[3], *(arg1 + 0x48), arg1[0x14], &var_120, 0)
int32_t r13 = arg5

if (var_118 s< arg5)
    r13 = var_118

int32_t var_138 = r13
sub_1426066c0(&var_120, r15, arg5)
sub_142606570(&var_120, arg3, arg5)
sub_1426065b0(&var_120, r14, arg5)
float zmm0_1
float zmm1_1

if (r13 != 0)
    while ((*arg3 & 4) == 0)
        zmm0_1 = rsi[2] f- *(r14 + 8)
        zmm1_1 = *rsi f- *r14
        
        if (zmm0_1 * zmm0_1 + zmm1_1 * zmm1_1 > 9.99999975e-05f)
            break
        
        int32_t temp0_1 = r13
        r13 -= 1
        
        if (temp0_1 == 1)
            break
        
        int64_t rbx_1 = sx.q(r13)
        memmove(arg3, &arg3[1], rbx_1.d)
        memmove(r15, &r15[1], (rbx_1 << 3).d)
        memmove(r14, r14 + 0xc, (rbx_1 * 0xc).d)
    
    var_138 = r13

int32_t rcx_7 = 0

if (r13 s> 0)
    char* i = nullptr
    
    do
        rcx_7 += 1
        
        if ((*(i + arg3) & 4) != 0)
            r13 = rcx_7
            var_138 = rcx_7
            break
        
        i = &i[1]
    while (i s< sx.q(r13))

int32_t r9_1 = rsi[0x10]
int128_t zmm10 = arg7
int128_t zmm3_1
float zmm6_1

if ((r9_1.b & 1) != 0)
    int32_t rdx_8 = 0
    int64_t r8_8 = sx.q(r13)
    uint64_t r15_1 = 0xffffffff
    float zmm2_1
    
    if (r13 s> 0)
        void* rax_3 = r14 + 8
        int64_t rcx_8 = 0
        zmm3_1.d = zmm10.d f* zmm10.d
        
        do
            zmm1_1 = *(rax_3 - 8) f- rsi[9]
            zmm2_1 = *(rax_3 - 4) f- rsi[0xa]
            zmm0_1 = *rax_3 f- rsi[0xb]
            
            if (zmm2_1 * zmm2_1 + zmm1_1 * zmm1_1 + zmm0_1 * zmm0_1 f<= zmm3_1.d)
                r15_1 = zx.q(rdx_8)
                break
            
            rdx_8 += 1
            rcx_8 += 1
            rax_3 += 0xc
        while (rcx_8 s< r8_8)
    
    bool cond:3_1
    
    if ((r9_1.b & 6) != 6)
    label_14262ab66:
        cond:3_1 = r15_1.d s<= 0
    label_14262ab69:
        
        if (not(cond:3_1))
            r13 -= r15_1.d
            int64_t rbx_2 = sx.q(r15_1.d)
            int64_t rdi_1 = sx.q(r13)
            var_138 = r13
            memmove(arg3, &arg3[rbx_2], rdi_1.d)
            int64_t* rcx_11 = var_130
            memmove(rcx_11, &rcx_11[rbx_2], (rdi_1 << 3).d)
            memmove(r14, r14 + (sx.q((r15_1 * 3).d) << 2), (rdi_1 * 0xc).d)
            rdi = var_110
    else
        int32_t temp1_1 = r15_1.d
        cond:3_1 = temp1_1 s<= 0
        
        if (temp1_1 != 0)
            goto label_14262ab69
        
        int32_t rdx_9 = 1
        rsi[0x10] = r9_1 & 0xfffffffd
        float zmm4_1 = rsi[0xc]
        rsi[9] = zmm4_1
        float zmm5_1 = rsi[0xd]
        r15_1 = 0xffffffff
        rsi[0xa] = zmm5_1
        zmm6_1 = rsi[0xe]
        rsi[0xb] = zmm6_1
        
        if (r13 s> 1)
            void* rax_6 = r14 + 0x14
            zmm3_1.d = zmm10.d f* zmm10.d
            int64_t rcx_9 = 1
            
            while (true)
                zmm1_1 = *(rax_6 - 8) - zmm4_1
                zmm2_1 = *(rax_6 - 4) - zmm5_1
                zmm0_1 = *rax_6 - zmm6_1
                
                if (zmm2_1 * zmm2_1 + zmm1_1 * zmm1_1 + zmm0_1 * zmm0_1 f<= zmm3_1.d)
                    r15_1 = zx.q(rdx_9)
                    break
                
                rdx_9 += 1
                rcx_9 += 1
                rax_6 += 0xc
                
                if (rcx_9 s>= r8_8)
                    goto label_14262abcb
            
            goto label_14262ab66
label_14262abcb:
    int32_t r15_4 = not.d(r15_1.d) u>> 0x1f | (rsi[0x10] & 0xfffffffe)
    rsi[0x10] = r15_4
    
    if ((r15_4.b & 1) == 0 && (r15_4.b & 2) != 0)
        rsi[0x10] = r15_4 & 0xfffffffd
        rsi[9] = rsi[0xc]
        rsi[0xa] = rsi[0xd]
        rsi[0xb] = rsi[0xe]
    
    r15 = var_130

int128_t var_68 = zmm7
int128_t var_78 = zmm8
int128_t var_88 = zmm9
void* var_128 = *rdi
int128_t var_a8 = zmm11
int128_t var_b8 = zmm12

if (r13 - 1 s> 0)
    float* rdi_2 = r14 + 8
    void* r14_1 = var_128
    uint64_t r13_1 = zx.q(data_14401b1a0)
    uint64_t i_2 = zx.q(r13 - 1)
    uint64_t i_1
    
    do
        int64_t* r10_1 = *(rsi + 0x48)
        int64_t j = 0
        int64_t rcx_14 = *r15
        
        if (*r10_1 != rcx_14)
            int64_t* rax_15 = r10_1
            
            while (j s< sx.q(rsi[0x14]))
                rax_15 = &rax_15[1]
                j += 1
                
                if (*rax_15 == rcx_14)
                    break
        
        if (r10_1[j] == rcx_14 && j != 0)
            var_128 = nullptr
            var_130 = nullptr
            int64_t var_108 = 0
            int64_t var_100 = 0
            sub_142610e10(r14_1, r10_1[j - 1], &var_128, &var_108)
            sub_142610e10(r14_1, *(*(rsi + 0x48) + (j << 3)), &var_130, &var_100)
            
            if (var_128 == var_130)
                int64_t rdx_17 = *(rsi + 0x48)
                int32_t var_148
                void var_134
                var_148.q = &var_134
                int32_t var_158
                float var_f0
                var_158.q = &var_f0
                uint8_t var_133
                float var_e0
                sub_142610700(var_110, *(rdx_17 + (j << 3) - 8), *(rdx_17 + (j << 3)), &var_e0, 
                    var_158, &var_133, var_148)
                float var_ec
                float var_dc
                float zmm0_2 = var_ec - var_dc
                float zmm2_2 = var_f0 - var_e0
                float var_e8
                float var_d8
                float zmm1_2 = var_e8 - var_d8
                float zmm0_3 = sub_142609970(zmm0_2 * zmm0_2 + zmm2_2 * zmm2_2 + zmm1_2 * zmm1_2)
                
                if (not(zmm0_3 <= 0.00100000005f))
                    TEB* gsbase
                    int64_t rax_18 = *(gsbase->ThreadLocalStoragePointer + (r13_1 << 3))
                    zmm6_1 = _mm_min_ss(zmm0_3 * 0.75f, zmm10.d) / zmm0_3
                    
                    if (data_143f712a0 s> *(0x14 + rax_18))
                        _Init_thread_header(&data_143f712a0)
                        
                        if (data_143f712a0 == 0xffffffff)
                            data_143f7129c = 0x31800000
                            _Init_thread_footer(&data_143f712a0)
                    
                    zmm3_1 = var_e0
                    zmm7 = rdi_2[-2]
                    zmm8 = rdi_2[-1]
                    zmm2_2 = zmm3_1.d f- zmm7.d
                    zmm1_2 = var_dc f- zmm8.d
                    zmm9 = *rdi_2
                    zmm0_3 = var_d8 f- zmm9.d
                    
                    if (zmm1_2 * zmm1_2 + zmm2_2 * zmm2_2 + zmm0_3 * zmm0_3 f>= data_143f7129c)
                        zmm3_1.d = zmm3_1.d f- var_f0
                        zmm3_1.d = zmm3_1.d f* zmm6_1
                        zmm3_1.d = zmm3_1.d f+ zmm7.d
                        rdi_2[-2] = zmm3_1.d
                        rdi_2[-1] = (var_dc - var_ec) * zmm6_1 f+ zmm8.d
                        *rdi_2 = (var_d8 - var_e8) * zmm6_1 f+ zmm9.d
                    else
                        rdi_2[-2] = (var_f0 f- zmm3_1.d) * zmm6_1 f+ zmm7.d
                        rdi_2[-1] = (var_ec - var_dc) * zmm6_1 f+ zmm8.d
                        *rdi_2 = (var_e8 - var_d8) * zmm6_1 f+ zmm9.d
        
        r15 = &r15[1]
        rdi_2 = &rdi_2[3]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    r14 = arg2
    r13 = var_138

if ((rsi[0x10].b & 8) != 0)
    int128_t var_c8_1 = zmm13
    char rax_19 = sub_142609980(&rsi[6], r14)
    rsi[6] = *r14
    rsi[7] = *(r14 + 4)
    rsi[8] = *(r14 + 8)
    rsi[0x10] &= 0xfffffffb
    int128_t zmm0_4
    int128_t zmm1_3
    int128_t zmm2_3
    
    if (rax_19 == 0 && r13 s> 1)
        zmm2_3 = *r14
        zmm0_4 = *(r14 + 4)
        zmm1_3 = *(r14 + 8)
        zmm3_1.d = zmm0_4.d f- rsi[1]
        zmm12.d = zmm2_3.d f- *rsi
        zmm11.d = zmm1_3.d f- rsi[2]
        zmm9.d = (*(r14 + 0x14)).d f- zmm1_3.d
        zmm10.d = (*(r14 + 0xc)).d f- zmm2_3.d
        zmm3_1.d = zmm3_1.d f* zmm3_1.d
        zmm8.d = r14[1].d.d f- zmm0_4.d
        zmm1_3.d = zmm12.d f* zmm12.d
        zmm2_3.d = zmm11.d f* zmm11.d
        zmm3_1.d = zmm3_1.d f+ zmm1_3.d
        zmm3_1.d = zmm3_1.d f+ zmm2_3.d
        zmm8.d = zmm8.d f* zmm8.d
        zmm1_3.d = zmm10.d f* zmm10.d
        zmm2_3.d = zmm9.d f* zmm9.d
        zmm8.d = zmm8.d f+ zmm1_3.d
        zmm6_1 = 1f / sub_142609970(zmm3_1.d)
        zmm8.d = zmm8.d f+ zmm2_3.d
        zmm7.d = 1f f/ sub_142609970(zmm8.d).d
        zmm11.d = zmm11.d f* zmm6_1
        zmm9.d = zmm9.d f* zmm7.d
        zmm10.d = zmm10.d f* zmm7.d
        zmm12.d = zmm12.d f* zmm6_1
        zmm11.d = zmm11.d f* zmm9.d
        zmm12.d = zmm12.d f* zmm10.d
        zmm11.d = zmm11.d f+ zmm12.d
        rsi[0xf] = zmm11.d
        
        if (not(zmm11.d f<= 0.800000012f))
            int32_t rax_23 = *(r14 + 0xc)
            
            if ((rsi[0x10].b & 1) == 0)
                rsi[9] = rax_23
                rsi[0xa] = r14[1].d
                rsi[0xb] = *(r14 + 0x14)
            else
                rsi[0xc] = rax_23
                rsi[0xd] = r14[1].d
                rsi[0xe] = *(r14 + 0x14)
                rsi[0x10] |= 2
    
    if (not(0.800000012f f>= rsi[0xf]) && arg9 != 0)
        zmm0_4.d = (*(r14 + 8)).d f- rsi[2]
        zmm2_3.d = (*(r14 + 4)).d f- rsi[1]
        zmm1_3.d = (*r14).d f- *rsi
        zmm0_4.d = zmm0_4.d f* zmm0_4.d
        zmm2_3.d = zmm2_3.d f* zmm2_3.d
        zmm1_3.d = zmm1_3.d f* zmm1_3.d
        zmm2_3.d = zmm2_3.d f+ zmm1_3.d
        zmm2_3.d = zmm2_3.d f+ zmm0_4.d
        zmm0_4 = arg8
        zmm0_4.d = zmm0_4.d f* zmm0_4.d
        
        if (not(zmm2_3.d f>= zmm0_4.d))
            rsi[0x10] |= 5

sub_142609160(var_120)
__security_check_cookie(rax_1 ^ &var_178)
return zx.q(r13)
