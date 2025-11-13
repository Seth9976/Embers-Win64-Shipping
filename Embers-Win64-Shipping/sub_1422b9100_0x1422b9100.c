// 函数: sub_1422b9100
// 地址: 0x1422b9100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r12 = arg3

if (*(arg1 + 0x40) != 0 && *(arg1 + 0x50) != 0)
    goto label_1422b9149

if (r12 == 0)
    return 

char rdx = *(arg1 + 0x82)
*(arg1 + 0x78) = 1
sub_1422b8fc0(arg1, rdx)
label_1422b9149:

if (r12 == 0)
    return 

int64_t* rcx = *(arg1 + 0x40)
int32_t r13_1 = *(arg1 + 0x7c)
int32_t arg_20 = r13_1
int32_t rdx_1 = r12 + r13_1
*(arg1 + 0x7c) = rdx_1
(*(*rcx + 8))(rcx, rdx_1, 0)
int64_t* rcx_1 = *(arg1 + 0x50)
(*(*rcx_1 + 8))(rcx_1, zx.q(*(arg1 + 0x7c) * *(arg1 + 0x78)), 0)

if (*(arg1 + 0x7c) u<= 0)
    return 

int64_t* rcx_2 = *(arg1 + 0x40)
int64_t rax_4 = (*(*rcx_2 + 0x30))(rcx_2)
int64_t* rcx_3 = *(arg1 + 0x50)
*(arg1 + 0x60) = rax_4
int32_t r15_1 = 0
*(arg1 + 0x68) = (*(*rcx_3 + 0x30))(rcx_3)

if (r12 == 0)
    return 

int64_t* rsi_1 = arg2 + 0x18
int128_t zmm9 = 0x3f000000
int128_t zmm10 = 0x42fe0000
int128_t zmm11 = 0x46fffe00
int128_t zmm6
int128_t var_48_1 = zmm6
int128_t zmm7
int128_t var_58_1 = zmm7
int128_t zmm8
int128_t var_68_1 = zmm8

do
    uint64_t r14_1 = zx.q(r15_1 + r13_1)
    int32_t rax_6 = *(rsi_1 + 0x14)
    uint64_t var_148_1 = *(rsi_1 + 0xc)
    uint64_t var_158_1 = *(rsi_1 - 0xc)
    float zmm4_1 = var_158_1.d
    uint128_t zmm0 = zx.o(*rsi_1)
    float rax_7 = *(rsi_1 - 4)
    int32_t rax_8 = rsi_1[1].d
    void*** rax
    float zmm1
    float var_118
    float zmm3
    
    if (*(arg1 + 0x81) == 0)
        int64_t rbx_4 = *(arg1 + 0x60)
        zmm1 = zmm4_1 f* zmm10.d
        uint64_t var_128_1 = zmm0.q
        int32_t rcx_20 = int.d(zmm1 + zmm1 f+ zmm9.d) s>> 1
        char rax_15
        
        if (rcx_20 s>= 0xffffff80)
            rax_15 = 0x7f
            
            if (rcx_20 s< 0x7f)
                rax_15 = rcx_20.b
        else
            rax_15 = -0x80
        
        zmm3 = var_158_1:4.d
        *(rbx_4 + (r14_1 << 3)) = rax_15
        zmm1 = zmm3 f* zmm10.d
        int32_t rcx_22 = int.d(zmm1 + zmm1 f+ zmm9.d) s>> 1
        char rax_16
        
        if (rcx_22 s>= 0xffffff80)
            rax_16 = 0x7f
            
            if (rcx_22 s< 0x7f)
                rax_16 = rcx_22.b
        else
            rax_16 = -0x80
        
        *(rbx_4 + (r14_1 << 3) + 1) = rax_16
        zmm1 = rax_7 f* zmm10.d
        int32_t rcx_24 = int.d(zmm1 + zmm1 f+ zmm9.d) s>> 1
        char rax_17
        
        if (rcx_24 s>= 0xffffff80)
            rax_17 = 0x7f
            
            if (rcx_24 s< 0x7f)
                rax_17 = rcx_24.b
        else
            rax_17 = -0x80
        
        int32_t var_108_2 = var_128_1.d.d
        int32_t var_100_2 = rax_8.d
        uint128_t var_e8_2 = data_142d3f660
        var_118 = zmm4_1
        float var_114_2 = zmm3
        float var_110_2 = rax_7
        float var_104_2 = var_128_1:4.d
        int32_t var_f8_2 = var_148_1.d.d
        int32_t var_f4_2 = var_148_1:4.d.d
        int32_t var_f0_2 = rax_6.d
        *(rbx_4 + (r14_1 << 3) + 2) = rax_17
        *(rbx_4 + (r14_1 << 3) + 3) = 0x7f
        int32_t var_10c_2 = 0
        int32_t var_fc_2 = 0
        int32_t var_ec_2 = 0
        int32_t zmm12_2
        float zmm15_1
        zmm0, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12_2, zmm15_1 = sub_14062b8d0(&var_118)
        
        zmm1 = zmm0.d f>= zmm12_2 ? 254.5f : zmm15_1
        
        zmm7.d = zmm7.d f* zmm10.d
        zmm7.d = zmm7.d f+ zmm7.d
        zmm7.d = zmm7.d f+ zmm9.d
        int32_t rcx_27 = int.d(zmm7.d) s>> 1
        char rax_18
        
        if (rcx_27 s>= 0xffffff80)
            rax_18 = 0x7f
            
            if (rcx_27 s< 0x7f)
                rax_18 = rcx_27.b
        else
            rax_18 = -0x80
        
        zmm6.d = zmm6.d f* zmm10.d
        *(rbx_4 + (r14_1 << 3) + 4) = rax_18
        zmm6.d = zmm6.d f+ zmm6.d
        zmm6.d = zmm6.d f+ zmm9.d
        int32_t rcx_29 = int.d(zmm6.d) s>> 1
        char rax_19
        
        if (rcx_29 s>= 0xffffff80)
            rax_19 = 0x7f
            
            if (rcx_29 s< 0x7f)
                rax_19 = rcx_29.b
        else
            rax_19 = -0x80
        
        zmm8.d = zmm8.d f* zmm10.d
        *(rbx_4 + (r14_1 << 3) + 5) = rax_19
        zmm8.d = zmm8.d f+ zmm8.d
        zmm8.d = zmm8.d f+ zmm9.d
        int32_t rcx_31 = int.d(zmm8.d) s>> 1
        char rax_20
        
        if (rcx_31 s>= 0xffffff80)
            rax_20 = 0x7f
            
            if (rcx_31 s< 0x7f)
                rax_20 = rcx_31.b
        else
            rax_20 = -0x80
        
        *(rbx_4 + (r14_1 << 3) + 6) = rax_20
        int32_t rcx_33 = int.d(zmm1) s>> 1
        
        if (rcx_33 s>= 0xffffff80)
            rax = 0x7f
            
            if (rcx_33 s< 0x7f)
                rax = zx.q(rcx_33)
        else
            rax = 0xffffff80
        
        *(rbx_4 + (r14_1 << 3) + 7) = rax.b
    else
        zmm1 = zmm4_1 f* zmm11.d
        int16_t* rbx_3 = (zx.q(r14_1.d) << 4) + *(arg1 + 0x60)
        uint64_t var_138_1 = zmm0.q
        int32_t rcx_5 = int.d(zmm1 + zmm1 f+ zmm9.d) s>> 1
        int16_t rax_9
        
        if (rcx_5 s>= 0xffff8000)
            rax_9 = 0x7fff
            
            if (rcx_5 s< 0x7fff)
                rax_9 = rcx_5.w
        else
            rax_9 = -0x8000
        
        zmm3 = var_158_1:4.d
        *rbx_3 = rax_9
        zmm1 = zmm3 f* zmm11.d
        int32_t rcx_7 = int.d(zmm1 + zmm1 f+ zmm9.d) s>> 1
        int16_t rax_10
        
        if (rcx_7 s>= 0xffff8000)
            rax_10 = 0x7fff
            
            if (rcx_7 s< 0x7fff)
                rax_10 = rcx_7.w
        else
            rax_10 = -0x8000
        
        rbx_3[1] = rax_10
        zmm1 = rax_7 f* zmm11.d
        int32_t rcx_9 = int.d(zmm1 + zmm1 f+ zmm9.d) s>> 1
        int16_t rax_11
        
        if (rcx_9 s>= 0xffff8000)
            rax_11 = 0x7fff
            
            if (rcx_9 s< 0x7fff)
                rax_11 = rcx_9.w
        else
            rax_11 = -0x8000
        
        int32_t var_108_1 = var_138_1.d.d
        int32_t var_100_1 = rax_8.d
        uint128_t var_e8_1 = data_142d3f660
        var_118 = zmm4_1
        float var_114_1 = zmm3
        float var_110_1 = rax_7
        float var_104_1 = var_138_1:4.d
        int32_t var_f8_1 = var_148_1.d.d
        int32_t var_f4_1 = var_148_1:4.d.d
        int32_t var_f0_1 = rax_6.d
        rbx_3[2] = rax_11
        rbx_3[3] = 0x7fff
        int32_t var_10c_1 = 0
        int32_t var_fc_1 = 0
        int32_t var_ec_1 = 0
        int32_t zmm12_1
        float zmm13_1
        float zmm14_1
        zmm0, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12_1, zmm13_1, zmm14_1 =
            sub_14062b8d0(&var_118)
        
        zmm1 = zmm0.d f>= zmm12_1 ? zmm14_1 : zmm13_1
        
        zmm7.d = zmm7.d f* zmm11.d
        zmm7.d = zmm7.d f+ zmm7.d
        zmm7.d = zmm7.d f+ zmm9.d
        int32_t rcx_12 = int.d(zmm7.d) s>> 1
        int16_t rax_12
        
        if (rcx_12 s>= 0xffff8000)
            rax_12 = 0x7fff
            
            if (rcx_12 s< 0x7fff)
                rax_12 = rcx_12.w
        else
            rax_12 = -0x8000
        
        zmm6.d = zmm6.d f* zmm11.d
        rbx_3[4] = rax_12
        zmm6.d = zmm6.d f+ zmm6.d
        zmm6.d = zmm6.d f+ zmm9.d
        int32_t rcx_14 = int.d(zmm6.d) s>> 1
        int16_t rax_13
        
        if (rcx_14 s>= 0xffff8000)
            rax_13 = 0x7fff
            
            if (rcx_14 s< 0x7fff)
                rax_13 = rcx_14.w
        else
            rax_13 = -0x8000
        
        zmm8.d = zmm8.d f* zmm11.d
        rbx_3[5] = rax_13
        zmm8.d = zmm8.d f+ zmm8.d
        zmm8.d = zmm8.d f+ zmm9.d
        int32_t rcx_16 = int.d(zmm8.d) s>> 1
        int16_t rax_14
        
        if (rcx_16 s>= 0xffff8000)
            rax_14 = 0x7fff
            
            if (rcx_16 s< 0x7fff)
                rax_14 = rcx_16.w
        else
            rax_14 = -0x8000
        
        rbx_3[6] = rax_14
        int32_t rcx_18 = int.d(zmm1) s>> 1
        
        if (rcx_18 s>= 0xffff8000)
            rax = 0x7fff
            
            if (rcx_18 s< 0x7fff)
                rax = zx.q(rcx_18)
            
            rbx_3[7] = rax.w
        else
            rbx_3[7] = 0x8000
    int32_t i = *(arg1 + 0x78)
    uint64_t rbx_5 = 0
    
    if (i != 0)
        do
            zmm0 = rsi_1[rbx_5 + 3].d
            zmm1 = *(&rsi_1[rbx_5] + 0x1c)
            int64_t r11_1 = *(arg1 + 0x68)
            void* r9_3 = zx.q(i) * r14_1 + zx.q(rbx_5.d)
            
            if (*(arg1 + 0x80) == 0)
                float arg_8 = zmm0.d
                uint16_t rcx_35 = (arg_8 u>> 0x17).w
                uint16_t rax_22 = (arg_8 u>> 0x1f).w << 0xf
                uint32_t r8 = zx.d(rcx_35.b)
                
                if (r8 u> 0x70)
                    if (r8 u< 0x8f)
                        rax_22 |= ((rcx_35 - 0x10) & 0x1f) << 0xa | ((arg_8 u>> 0xd).w & 0x3ff)
                    else
                        rax_22 |= 0x7bff
                else if (0x70 - r8 + 0xe s<= 0x18)
                    int32_t rdx_6 = (arg_8 & 0x7fffff) | 0x800000
                    uint16_t r8_2 = ((rdx_6 u>> (0x70 - r8 + 0xe).b).w & 0x3ff) | rax_22
                    rax_22 = r8_2
                    
                    if (((rdx_6 u>> ((0x70 - r8).b + 0xd)).b & 1) != 0)
                        rax_22 = r8_2 + 1
                
                *(r11_1 + (r9_3 << 2)) = rax_22
                uint16_t rcx_39 = (zmm1 u>> 0x17).w
                rax.w = (zmm1 u>> 0x1f).w << 0xf
                uint32_t r8_3 = zx.d(rcx_39.b)
                
                if (r8_3 u> 0x70)
                    if (r8_3 u< 0x8f)
                        rax.w |= ((rcx_39 - 0x10) & 0x1f) << 0xa | ((zmm1 u>> 0xd).w & 0x3ff)
                    else
                        rax.w |= 0x7bff
                else if (0x70 - r8_3 + 0xe s<= 0x18)
                    int32_t rdx_11 = (zmm1 & 0x7fffff) | 0x800000
                    uint32_t r8_5
                    r8_5.w = (rdx_11 u>> (0x70 - r8_3 + 0xe).b).w & 0x3ff
                    r8_5.w |= rax.w
                    rax = zx.q(r8_5.w)
                    
                    if (((rdx_11 u>> ((0x70 - r8_3).b + 0xd)).b & 1) != 0)
                        rax = zx.q(r8_5 + 1)
                
                *(r11_1 + (r9_3 << 2) + 2) = rax.w
            else
                *(r11_1 + (r9_3 << 3)) = zmm0.d
                *(r11_1 + (r9_3 << 3) + 4) = zmm1
            
            i = *(arg1 + 0x78)
            rbx_5 = zx.q(rbx_5.d + 1)
        while (rbx_5.d u< i)
        
        r12 = arg3
        r13_1 = arg_20
    
    r15_1 += 1
    rsi_1 += 0x74
while (r15_1 u< r12)
