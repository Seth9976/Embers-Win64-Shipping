// 函数: sub_142684ab0
// 地址: 0x142684ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int64_t* rbp = arg5
char r11 = arg4.b
int64_t* r12 = arg6
char rsi = arg3
int64_t* var_108 = rbp
uint64_t r13 = arg2
int64_t* var_c8 = r12
char var_136 = arg4.b
uint64_t var_d0 = arg2

if (arg3 == 0 || arg4.b != 0)
    arg2.b = 0
else
    arg2.b = 1

void* result = *(r13 + 8)
int32_t i = 0
char var_137 = arg2.b
int32_t i_1 = 0

if (*(result + 0x18) s> 0)
    void* rbx_1 = nullptr
    void* r8 = nullptr
    int128_t zmm6
    int128_t var_38_1 = zmm6
    float zmm7[0x4]
    float var_48_1[0x4] = zmm7
    float zmm8[0x4]
    float var_58_1[0x4] = zmm8
    int128_t zmm9 = data_143b515dc
    void* var_f8_1 = nullptr
    void* var_100_1 = nullptr
    
    do
        int64_t rax_2 = *(r13 + 0x10)
        int32_t* r14_1 = r8 + rax_2
        int32_t* var_110_1 = r14_1
        
        if (*(r8 + rax_2 + 0x1f) u< 0x40)
            uint32_t r15_1 = zx.d(*(r14_1 + 0x1e))
            int32_t r10_1 = 0
            int64_t rdi_1 = *(r13 + 0x28)
            int64_t var_d8_1 = rdi_1
            uint32_t var_11c_1 = r15_1
            int32_t var_124_1 = 0
            
            if (r15_1 != 0)
                void* rcx = &r14_1[4]
                void* var_130_1 = rcx
                
                do
                    int16_t rax_3
                    
                    if (arg2.b == 0)
                        rax_3 = *rcx
                    
                    if (arg2.b == 0 && (rax_3 == 0 || rax_3 s< 0))
                        arg4.b = 1
                    else
                        arg4.b = 0
                    
                    char r8_1 = arg4.b ^ 1
                    
                    if ((*(r14_1 + 0x1f) & 0x3f) == 0)
                        int16_t rax_4 = *rcx
                        
                        if (rax_4 == 0)
                            arg4.b = 1
                            r8_1 = 0
                        else if (rax_4 s>= 0)
                            uint64_t rcx_1 = zx.q(rax_4)
                            
                            if (rcx_1.d s> *(*(r13 + 8) + 0x3c))
                                rcx = var_130_1
                            else
                                rcx = var_130_1
                                
                                if ((*((rcx_1 << 5) + *(r13 + 0x10) - 1) & 0x3f) != 0)
                                    arg4.b = 1
                                    r8_1 = 0
                    else if (arg4.b != 0)
                        int32_t j = *r14_1
                        
                        if (j != 0xffffffff)
                            int32_t rdx = *(*(r13 + 8) + 0x20)
                            
                            do
                                void* rax_10
                                
                                if (j u>= rdx)
                                    rax_10 = (sx.q(j - rdx) << 4) + *(r13 + 0x80)
                                else
                                    rax_10 = (zx.q(j) << 4) + *(r13 + 0x20)
                                
                                j = *(rax_10 + 8)
                                
                                if (zx.d(*(rax_10 + 0xc)) == r10_1)
                                    r8_1 = 1
                                    break
                            while (j != 0xffffffff)
                        
                        rcx = var_130_1
                    
                    int64_t* rsi_1
                    
                    if (rsi != 0 && r8_1 != 0)
                        rsi_1 = rbp
                    label_142684cdb:
                        
                        if (rsi_1 != 0)
                            int64_t r11_1 = *(r13 + 0x18)
                            int64_t var_e0_1 = r11_1
                            uint64_t rbp_1 = zx.q(*(rcx - 0xc)) * 3
                            uint64_t var_118_1 = rbp_1
                            uint64_t rax_18 =
                                zx.q(*(r14_1 + (sx.q(mods.dp.d(sx.q(r10_1 + 1), r15_1)) << 1) + 4))
                                * 3
                            int32_t j_1 = 0
                            int32_t j_2 = 0
                            
                            if (*(rbx_1 + rdi_1 + 9) u> 0)
                                do
                                    int64_t r10_2 = *(r13 + 0x38)
                                    uint32_t r8_2 = zx.d(*(r14_1 + 0x1e))
                                    uint64_t rax_21 = zx.q((*(rbx_1 + rdi_1 + 4) + j_1) << 2)
                                    uint64_t r12_1 = zx.q(rax_21.d)
                                    int64_t var_e8_1 = r10_2
                                    char rax_22 = *(rax_21 + r10_2)
                                    int64_t rcx_6
                                    
                                    if (rax_22 u>= r8_2.b)
                                        rcx_6 = *(r13 + 0x30) + (
                                            zx.q((zx.d(rax_22) - r8_2 + *(rbx_1 + rdi_1)) * 3) << 2)
                                    else
                                        rcx_6 = *(r13 + 0x18)
                                            + zx.q(*(r14_1 + (zx.q(rax_22) << 1) + 4)) * 0xc
                                    
                                    char rax_29 = *(r12_1 + r10_2 + 1)
                                    int64_t var_a8 = rcx_6
                                    int64_t rcx_9
                                    
                                    if (rax_29 u>= r8_2.b)
                                        rcx_9 = *(r13 + 0x30) + (
                                            zx.q((zx.d(rax_29) - r8_2 + *(rbx_1 + rdi_1)) * 3) << 2)
                                    else
                                        rcx_9 = *(r13 + 0x18)
                                            + zx.q(*(r14_1 + (zx.q(rax_29) << 1) + 4)) * 0xc
                                    
                                    char rax_36 = *(r12_1 + r10_2 + 2)
                                    int64_t var_a0_1 = rcx_9
                                    int64_t rcx_12
                                    
                                    if (rax_36 u>= r8_2.b)
                                        rcx_12 = *(r13 + 0x30) + (
                                            zx.q((zx.d(rax_36) - r8_2 + *(rbx_1 + rdi_1)) * 3) << 2)
                                    else
                                        rcx_12 = *(r13 + 0x18)
                                            + zx.q(*(r14_1 + (zx.q(rax_36) << 1) + 4)) * 0xc
                                    
                                    int64_t* r14_2 = &var_a8
                                    int64_t var_98_1 = rcx_12
                                    int32_t k_1 = 2
                                    
                                    for (int32_t k = 0; k s< 3; k += 1)
                                        if ((*(r12_1 + r10_2 + 3) u>> (k_1.b * 2) & 3) != 0)
                                            int32_t zmm5 = *(r11_1 + (rbp_1 << 2))
                                            float zmm3[0x4] = *(r11_1 + (rax_18 << 2))
                                            zmm6 = *(r11_1 + (rbp_1 << 2) + 8)
                                            zmm3[0] = zmm3[0] f- zmm5
                                            float zmm4[0x4] = *(r11_1 + (rax_18 << 2) + 8)
                                            zmm4[0] = zmm4[0] f- zmm6.d
                                            int128_t* r15_2 = (&var_a8)[sx.q(k_1)]
                                            zmm3[0] = zmm3[0] * zmm3[0]
                                            zmm4[0] = zmm4[0] * zmm4[0]
                                            zmm7 = *(r15_2 + 8)
                                            zmm8 = *r15_2
                                            zmm3[0] = zmm3[0] + zmm4[0]
                                            zmm7[0] = zmm7[0] f- zmm6.d
                                            zmm8[0] = zmm8[0] f- zmm5
                                            bool cond:4_1 = zmm3[0] == 0f
                                            zmm8[0] = zmm8[0] * zmm3[0]
                                            zmm7[0] = zmm7[0] * zmm4[0]
                                            zmm7[0] = zmm7[0] + zmm8[0]
                                            
                                            if (not(cond:4_1))
                                                zmm7[0] = zmm7[0] / zmm3[0]
                                            
                                            zmm7[0] = zmm7[0] * zmm4[0]
                                            zmm7[0] = zmm7[0] * zmm3[0]
                                            zmm7[0] = zmm7[0] f+ zmm6.d
                                            zmm7[0] = zmm7[0] f+ zmm5
                                            zmm7[0] = zmm7[0] - zmm7[0]
                                            zmm7[0] = zmm7[0] - zmm8[0]
                                            zmm7[0] = zmm7[0] * zmm7[0]
                                            zmm7[0] = zmm7[0] * zmm7[0]
                                            zmm7[0] = zmm7[0] + zmm7[0]
                                            
                                            if (not(zmm7[0] f>= zmm9.d))
                                                bool cond:5_1 = zmm3[0] == 0f
                                                int128_t* rbp_2 = *r14_2
                                                zmm7 = *(rbp_2 + 8)
                                                zmm8 = *rbp_2
                                                zmm7[0] = zmm7[0] f- zmm6.d
                                                zmm8[0] = zmm8[0] f- zmm5
                                                zmm7[0] = zmm7[0] * zmm4[0]
                                                zmm8[0] = zmm8[0] * zmm3[0]
                                                zmm7[0] = zmm7[0] + zmm8[0]
                                                
                                                if (not(cond:5_1))
                                                    zmm7[0] = zmm7[0] / zmm3[0]
                                                
                                                zmm7[0] = zmm7[0] * zmm4[0]
                                                zmm7[0] = zmm7[0] * zmm3[0]
                                                zmm7[0] = zmm7[0] f+ zmm6.d
                                                zmm7[0] = zmm7[0] f+ zmm5
                                                zmm7[0] = zmm7[0] - zmm7[0]
                                                zmm7[0] = zmm7[0] - zmm8[0]
                                                zmm7[0] = zmm7[0] * zmm7[0]
                                                zmm7[0] = zmm7[0] * zmm7[0]
                                                zmm7[0] = zmm7[0] + zmm7[0]
                                                
                                                if (not(zmm7[0] f>= zmm9.d))
                                                    int64_t rbx_2 = sx.q(rsi_1[1].d)
                                                    int32_t rax_45 = (rbx_2 + 2).d
                                                    rsi_1[1].d = rax_45
                                                    
                                                    if (rax_45 s> *(rsi_1 + 0xc))
                                                        sub_140638a00(rsi_1)
                                                        r10_2 = var_e8_1
                                                        r11_1 = var_e0_1
                                                        zmm9 = data_143b515dc
                                                    
                                                    int64_t rax_46 = *rsi_1
                                                    int64_t rdx_7 = rbx_2 * 3
                                                    *(rax_46 + (rdx_7 << 2)) = 0
                                                    *(rax_46 + (rdx_7 << 2) + 8) = 0
                                                    *(rax_46 + (rdx_7 << 2) + 0x10) = 0
                                                    int64_t rcx_16 = *rsi_1
                                                    float var_b8_1 = (*(r15_2 + 4))[0]
                                                    *(rcx_16 + (rdx_7 << 2)) = (_mm_unpacklo_ps(
                                                        *r15_2 ^ 0x80000000, 
                                                        (*(r15_2 + 8) ^ 0x80000000)[0].q)).q
                                                    *(rcx_16 + (rdx_7 << 2) + 8) = var_b8_1
                                                    int64_t rdx_8 = (rbx_2 + 1) * 3
                                                    int64_t rcx_17 = *rsi_1
                                                    float var_ac_1 = (*(rbp_2 + 4))[0]
                                                    *(rcx_17 + (rdx_8 << 2)) = (_mm_unpacklo_ps(
                                                        *rbp_2 ^ 0x80000000, 
                                                        (*(rbp_2 + 8) ^ 0x80000000)[0].q)).q
                                                    *(rcx_17 + (rdx_8 << 2) + 8) = var_ac_1
                                                
                                                rbp_1 = var_118_1
                                        
                                        k_1 = k
                                        r14_2 = &r14_2[1]
                                    
                                    rbx_1 = var_f8_1
                                    j_1 = j_2 + 1
                                    rdi_1 = var_d8_1
                                    r13 = var_d0
                                    r14_1 = var_110_1
                                    j_2 = j_1
                                while (j_1 s< zx.d(*(rbx_1 + rdi_1 + 9)))
                                
                                r10_1 = var_124_1
                                r15_1 = var_11c_1
                                r12 = var_c8
                            
                            rbp = var_108
                            r11 = var_136
                            rcx = var_130_1
                        
                        rsi = arg3
                    else if (r11 != 0 && arg4.b != 0 && r8_1 == 0)
                        rsi_1 = r12
                        goto label_142684cdb
                    arg2 = zx.q(var_137)
                    r10_1 += 1
                    rcx += 2
                    var_124_1 = r10_1
                    var_130_1 = rcx
                while (r10_1 s< r15_1)
                
                i = i_1
                r8 = var_100_1
        
        result = *(r13 + 8)
        i += 1
        arg2 = zx.q(var_137)
        r8 += 0x20
        rbx_1 += 0xc
        i_1 = i
        var_100_1 = r8
        var_f8_1 = rbx_1
    while (i s< *(result + 0x18))

__security_check_cookie(rax_1 ^ &var_158)
return result
