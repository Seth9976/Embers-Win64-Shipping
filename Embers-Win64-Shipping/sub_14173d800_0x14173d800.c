// 函数: sub_14173d800
// 地址: 0x14173d800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
bool cond:0 = arg5 != 0xffffffff
int64_t* var_190 = arg4
uint64_t result
int32_t arg_30

if (cond:0)
    int32_t var_e4
    int32_t* rax_3 = &var_e4
    int64_t i_8 = 2
    int64_t i
    
    do
        *(rax_3 - 4) = 0
        *(rax_3 + 8) = 0
        rax_3[1] = 0
        rax_3[4] = 0
        rax_3 = &rax_3[6]
        i = i_8
        i_8 -= 1
    while (i != 1)
    void* var_1a0 = nullptr
    int32_t i_16 = 2
    int64_t* var_1c8 = nullptr
    int32_t i_14 = 0
    int64_t* var_1b8 = nullptr
    int32_t i_15 = 0
    sub_1407c3b60(&var_1a0)
    uint64_t rcx_1 = 2
    void* rax_5 = var_1a0 + 0x2c
    int32_t i_1
    
    do
        *(rax_5 - 0xc) = 0
        *(rax_5 - 4) = 0
        rax_5 += 0x38
        i_1 = rcx_1.d
        rcx_1 = zx.q(rcx_1.d - 1)
    while (i_1 != 1)
    int64_t i_21 = sx.q(i_14)
    
    if (i_21.d s< 2)
        i_14 = 2 + 0
        
        if (2 + 0 s> 0)
            sub_1405a4f90(&var_1c8)
        
        memset(&var_1c8[i_21 * 2], 0, sx.q(2 - i_21.d) << 4)
    else if (i_21.d s> 2)
        int32_t i_17 = (i_21 - 2).d
        
        if (i_17 != 0)
            int32_t i_9 = i_17
            void* rbx_2 = &var_1c8[4]
            int32_t i_2
            
            do
                int64_t rcx_6 = *rbx_2
                
                if (rcx_6 != 0)
                    sub_140a74f90(rcx_6)
                
                rbx_2 += 0x10
                i_2 = i_9
                i_9 -= 1
            while (i_2 != 1)
            int32_t i_19 = i_14
            int32_t rcx_8 = i_19 - i_17
            
            if (rcx_8 != 2)
                int64_t* rcx_10 = var_1c8
                memmove(&rcx_10[4], &rcx_10[sx.q(i_17 + 2) * 2], (rcx_8 - 2) << 4)
                i_19 = i_14
            
            i_14 = i_19 - i_17
            sub_1405a5010(&var_1c8)
    
    int64_t i_22 = sx.q(i_15)
    
    if (i_22.d s< 2)
        i_15 = 2 + 0
        
        if (2 + 0 s> 0)
            sub_1405a4f90(&var_1b8)
        
        memset(&var_1b8[i_22 * 2], 0, sx.q(2 - i_22.d) << 4)
    else if (i_22.d s> 2)
        int32_t i_18 = (i_22 - 2).d
        
        if (i_18 != 0)
            int32_t i_10 = i_18
            void* rbx_4 = &var_1b8[4]
            int32_t i_3
            
            do
                int64_t rcx_17 = *rbx_4
                
                if (rcx_17 != 0)
                    sub_140a74f90(rcx_17)
                
                rbx_4 += 0x10
                i_3 = i_10
                i_10 -= 1
            while (i_3 != 1)
            int32_t i_20 = i_15
            int32_t rcx_19 = i_20 - i_18
            
            if (rcx_19 != 2)
                int64_t* rcx_21 = var_1b8
                memmove(&rcx_21[4], &rcx_21[sx.q(i_18 + 2) * 2], (rcx_19 - 2) << 4)
                i_20 = i_15
            
            i_15 = i_20 - i_18
            sub_1405a5010(&var_1b8)
    
    int64_t zmm0_1 = *arg2
    uint128_t zmm1 = zx.o(*arg3)
    int32_t rax_12 = arg2[1].d
    uint128_t zmm6 = zx.o(*arg3)
    uint128_t zmm10 = zx.o(*arg3)
    uint128_t zmm3
    zmm3.d = zmm1.d f- zmm0_1.d
    int64_t* r10_1 = var_190
    int32_t rax_13 = arg3[1].d
    uint64_t var_164_1 = zmm1.q
    uint128_t zmm2 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    zmm1.d = rax_13.d f- rax_12
    int32_t rax_14 = arg2[1].d
    int32_t rax_15 = arg3[1].d
    zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
    int64_t var_170 = zmm0_1
    zmm2.d = zmm2.d f- var_170:4.d
    zmm1.d = zmm1.d f* 0.5f
    zmm3.d = zmm3.d f* 0.5f
    int32_t var_1a8_1 = 0
    zmm1.d = zmm1.d f+ rax_12
    zmm2.d = zmm2.d f* 0.5f
    zmm3.d = zmm3.d f+ zmm0_1.d
    int128_t zmm7
    zmm7.d = rax_15.d f- zmm1.d
    zmm2.d = zmm2.d f+ var_170:4.d
    uint128_t zmm9
    zmm9.d = zmm1.d f- rax_14
    zmm10.d = zmm10.d f- zmm3.d
    uint128_t zmm11
    zmm11.d = zmm3.d f- zmm0_1.d
    int32_t var_180 = zmm3.d
    zmm7.d = zmm7.d f* 0.5f
    zmm6.d = zmm6.d f- zmm2.d
    uint128_t zmm8
    zmm8.d = zmm2.d f- zmm0_1:4.d
    zmm7.d = zmm7.d f+ zmm1.d
    zmm9.d = zmm9.d f* 0.5f
    zmm11.d = zmm11.d f* 0.5f
    zmm9.d = zmm9.d f+ rax_14
    zmm8.d = zmm8.d f* 0.5f
    zmm11.d = zmm11.d f+ zmm0_1.d
    zmm10.d = zmm10.d f* 0.5f
    zmm8.d = zmm8.d f+ zmm0_1:4.d
    zmm6.d = zmm6.d f* 0.5f
    zmm10.d = zmm10.d f+ zmm3.d
    int32_t var_17c_1 = zmm2.d
    int32_t var_178_1 = zmm1.d
    zmm6.d = zmm6.d f+ zmm2.d
    int32_t var_e8
    
    if (r10_1[1].d s> 0)
        int64_t r13_1 = 0
        
        do
            int32_t* r12_1 = *r10_1
            uint64_t rdx_1
            void* const rbx_5
            
            if (*(arg1 + 0x30) == *(arg1 + 0x5c))
            label_14173dc10:
                rbx_5 = nullptr
            else
                rdx_1 = *(arg1 + 0x68)
                void* r8_8 = arg1 + 0x60
                int64_t r9 = sx.q(*(r12_1 + r13_1))
                
                if (rdx_1 != 0)
                    r8_8 = rdx_1
                
                int32_t rax_17 = *(r8_8 + (((sx.q(*(arg1 + 0x70)) - 1) & r9) << 2))
                
                if (rax_17 == 0xffffffff)
                label_14173dc10_1:
                    rbx_5 = nullptr
                else
                    int64_t r8_9 = *(arg1 + 0x28)
                    
                    while (true)
                        rdx_1 = sx.q(rax_17) * 9
                        rbx_5 = r8_9 + (rdx_1 << 2)
                        
                        if (*(r8_9 + (rdx_1 << 2)) == r9.d)
                            break
                        
                        rax_17 = *(rbx_5 + 0x1c)
                        
                        if (rax_17 == 0xffffffff)
                            goto label_14173dc10_2
                    
                    if (rax_17 == 0xffffffff)
                    label_14173dc10_2:
                        rbx_5 = nullptr
            
            int64_t rax_18 = sx.q(arg5)
            rdx_1.b = 0
            char rcx_26 = 0
            char r14_1 = 0
            zmm0_1 = (&var_180)[rax_18]
            
            if (zmm0_1.d f> *(rbx_5 + (rax_18 << 2) + 4))
                rcx_26 = 1
            
            if (zmm0_1.d f<= *(rbx_5 + (rax_18 << 2) + 0x10))
                r14_1 = 1
            
            if (rcx_26 != 0)
                int64_t* rdi_3 = var_1c8
                int64_t rsi_1 = sx.q(rdi_3[1].d)
                int32_t rax_19 = (rsi_1 + 1).d
                rdi_3[1].d = rax_19
                
                if (rax_19 s> *(rdi_3 + 0xc))
                    sub_1405a4cf0(rdi_3)
                    r10_1 = var_190
                
                *(*rdi_3 + (rsi_1 << 2)) = *(r12_1 + r13_1)
                int32_t rax_21
                
                if (zmm11.d f> *(rbx_5 + 0x10) || zmm11.d f> *(rbx_5 + 4))
                    rax_21 = 1
                else
                    rax_21 = 0
                
                var_e8 += rax_21
                int32_t rax_22
                
                if (zmm11.d f< *(rbx_5 + 4) || zmm11.d f< *(rbx_5 + 0x10))
                    rax_22 = 1
                else
                    rax_22 = 0
                
                int32_t var_dc = var_dc + rax_22
                int32_t rax_23
                
                if (zmm8.d f> *(rbx_5 + 0x14) || zmm8.d f> *(rbx_5 + 8))
                    rax_23 = 1
                else
                    rax_23 = 0
                
                var_e4 += rax_23
                int32_t rax_24
                
                if (zmm8.d f< *(rbx_5 + 8) || zmm8.d f< *(rbx_5 + 0x14))
                    rax_24 = 1
                else
                    rax_24 = 0
                
                int32_t var_d8 = var_d8 + rax_24
                int32_t rax_25
                
                if (zmm9.d f> *(rbx_5 + 0x18) || zmm9.d f> *(rbx_5 + 0xc))
                    rax_25 = 1
                else
                    rax_25 = 0
                
                int32_t var_e0 = var_e0 + rax_25
                int32_t rax_26
                
                if (zmm9.d f< *(rbx_5 + 0xc) || zmm9.d f< *(rbx_5 + 0x18))
                    rax_26 = 1
                else
                    rax_26 = 0
                
                int32_t var_d4 = var_d4 + rax_26
            
            if (r14_1 != 0)
                int64_t* rdi_4 = var_1c8
                int32_t* r14_2 = *r10_1
                int64_t rsi_2 = sx.q(rdi_4[3].d)
                int32_t rax_27 = (rsi_2 + 1).d
                rdi_4[3].d = rax_27
                
                if (rax_27 s> *(rdi_4 + 0x1c))
                    sub_1405a4cf0(&rdi_4[2])
                    r10_1 = var_190
                
                *(rdi_4[2] + (rsi_2 << 2)) = *(r14_2 + r13_1)
                int32_t rax_29
                
                if (zmm10.d f> *(rbx_5 + 0x10) || zmm10.d f> *(rbx_5 + 4))
                    rax_29 = 1
                else
                    rax_29 = 0
                
                int32_t var_d0 = var_d0 + rax_29
                int32_t rax_30
                
                if (zmm10.d f< *(rbx_5 + 4) || zmm10.d f< *(rbx_5 + 0x10))
                    rax_30 = 1
                else
                    rax_30 = 0
                
                int32_t var_c4 = var_c4 + rax_30
                int32_t rax_31
                
                if (zmm6.d f> *(rbx_5 + 0x14) || zmm6.d f> *(rbx_5 + 8))
                    rax_31 = 1
                else
                    rax_31 = 0
                
                int32_t var_cc = var_cc + rax_31
                int32_t rax_32
                
                if (zmm6.d f< *(rbx_5 + 8) || zmm6.d f< *(rbx_5 + 0x14))
                    rax_32 = 1
                else
                    rax_32 = 0
                
                int32_t var_c0 = var_c0 + rax_32
                int32_t rax_33
                
                if (zmm7.d f> *(rbx_5 + 0x18) || zmm7.d f> *(rbx_5 + 0xc))
                    rax_33 = 1
                else
                    rax_33 = 0
                
                int32_t var_c8 = var_c8 + rax_33
                int32_t rax_34
                
                if (zmm7.d f< *(rbx_5 + 0xc) || zmm7.d f< *(rbx_5 + 0x18))
                    rax_34 = 1
                else
                    rax_34 = 0
                
                int32_t var_bc = var_bc + rax_34
            
            r13_1 += 4
            rcx_1 = zx.q(var_1a8_1 + 1)
            var_1a8_1 = rcx_1.d
        while (rcx_1.d s< r10_1[1].d)
    
    void* var_110_1 = arg1
    int64_t* var_140 = &var_170
    int64_t* var_108_1 = r10_1
    int32_t* var_138_1 = &arg5
    int32_t* var_130_1 = &var_180
    int64_t* var_128_1 = &var_1a0
    int64_t** var_120_1 = &var_1c8
    int32_t* var_118_1 = &arg_30
    int32_t* var_100_1 = &var_e8
    void arg_38
    void* var_f8_1 = &arg_38
    int64_t* var_f0_1 = &var_1b8
    var_190 = &data_141733e50
    int64_t** var_188_1 = &var_140
    sub_14077b750(2, &var_190, 0)
    EnterCriticalSection(arg1 + 0xb0)
    int64_t* rbx_6 = nullptr
    
    for (int64_t i_4 = 0; i_4 s< 0x70; )
        void* rcx_33 = var_1a0
        
        if (*(i_4 + rcx_33 + 0x28) == 0)
            *(i_4 + rcx_33 + 0x30) = *(arg1 + 0xa8)
            int64_t r13_2 = sx.q(*(arg1 + 0xa8))
            int64_t* rdi_5 = var_1b8
            int32_t rax_36 = (r13_2 + 1).d
            *(arg1 + 0xa8) = rax_36
            
            if (rax_36 s> *(arg1 + 0xac))
                sub_1405a4f90(arg1 + 0xa0)
            
            int64_t* rcx_37 = (r13_2 << 4) + *(arg1 + 0xa0)
            *rcx_37 = 0
            *rcx_37 = *(rbx_6 + rdi_5)
            *(rbx_6 + rdi_5) = 0
            rcx_37[1].d = *(rbx_6 + rdi_5 + 8)
            *(rcx_37 + 0xc) = *(rbx_6 + rdi_5 + 0xc)
            *(rbx_6 + rdi_5 + 8) = 0
        
        i_4 += 0x38
        rbx_6 = &rbx_6[2]
    
    int32_t result_1 = *(arg1 + 0x98)
    sub_14153e9c0(arg1 + 0x90, &var_1a0)
    LeaveCriticalSection(arg1 + 0xb0)
    int32_t i_11 = i_15
    int64_t* rbx_7 = var_1b8
    
    if (i_11 != 0)
        int32_t i_5
        
        do
            int64_t rcx_40 = *rbx_7
            
            if (rcx_40 != 0)
                sub_140a74f90(rcx_40)
            
            rbx_7 = &rbx_7[2]
            i_5 = i_11
            i_11 -= 1
        while (i_5 != 1)
        rbx_7 = var_1b8
    
    if (rbx_7 != 0)
        sub_140a74f90(rbx_7)
    
    int32_t i_12 = i_14
    int64_t* rbx_8 = var_1c8
    
    if (i_12 != 0)
        int32_t i_6
        
        do
            int64_t rcx_42 = *rbx_8
            
            if (rcx_42 != 0)
                sub_140a74f90(rcx_42)
            
            rbx_8 = &rbx_8[2]
            i_6 = i_12
            i_12 -= 1
        while (i_6 != 1)
        rbx_8 = var_1c8
    
    if (rbx_8 != 0)
        sub_140a74f90(rbx_8)
    
    int32_t i_13 = i_16
    
    if (i_13 != 0)
        void* rbx_10 = var_1a0 + 0x20
        int32_t i_7
        
        do
            int64_t rcx_44 = *rbx_10
            
            if (rcx_44 != 0)
                sub_140a74f90(rcx_44)
            
            rbx_10 += 0x38
            i_7 = i_13
            i_13 -= 1
        while (i_7 != 1)
    
    void* rcx_45 = var_1a0
    
    if (rcx_45 != 0)
        sub_140a74f90(rcx_45)
    
    result = zx.q(result_1)
else
    int32_t var_1d8_1 = arg_30
    result = sub_14173d090(arg1, arg2, arg3, arg4)
__security_check_cookie(rax_1 ^ &var_1f8)
return result
