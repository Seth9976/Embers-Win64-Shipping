// 函数: sub_1423ecd00
// 地址: 0x1423ecd00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = arg6
int32_t r12 = rsi
int64_t* var_c8
sub_142006f80(&var_c8, arg2)
int32_t r14 = arg5
int128_t zmm7 =
    sub_142409910(arg4, _mm_cvtepi32_ps(zx.o(r14)), _mm_cvtepi32_ps(zx.o(rsi)), Levels", 
    *(data_143f5b298 + 0x50), &data_14399f5c0, &data_14399f5e0)
int32_t rsi_1 = rsi + 0xc
int16_t* var_e8
int16_t* var_d8
int32_t var_d0
int32_t var_c0
int16_t* var_b8

if (var_c0 != 0)
    sub_140b63b70(var_c8, &var_e8)
    void* rax_2
    int128_t zmm6_1
    rax_2, zmm6_1 = sub_140d2f0c0(sub_140cddea0(), 0, *var_c8, 0, 0, 0)
    int16_t* const r8_1 = &data_142d40450
    int64_t* rcx_5 = &var_d8
    int64_t* rax_3 = var_c8
    _mm_cvtps_pd(*(rax_2 + 0x2c))
    int32_t var_e0
    int32_t rbx_4
    int16_t* const rdi_1
    
    if (*(rax_3 + 0x11) == 0)
        if (var_e0 != 0)
            r8_1 = var_e8
        
        sub_140a2e390(rcx_5, u"    %s - %4.1f sec", r8_1)
        rdi_1 = &data_142d40450
        
        if (var_d0 != 0)
            rdi_1 = var_d8
        
        if (var_e8 != rdi_1)
            if (rdi_1 != 0 && *rdi_1 != 0)
                int64_t rbx_5 = -1
                
                do
                    rbx_5 += 1
                while (rdi_1[rbx_5] != 0)
                
                rbx_4 = rbx_5.d + 1
                goto label_1423ecea7
            
        label_1423ecea4:
            rbx_4 = 0
        label_1423ecea7:
            int32_t var_dc
            int32_t rcx_7 = var_dc
            int32_t rdx_1 = 0
            int32_t var_e0_1 = 0
            
            if (rcx_7 != rbx_4)
                sub_1405947f0(&var_e8, rbx_4)
                rcx_7 = var_dc
                rdx_1 = var_e0_1
            
            int32_t rax_4 = rdx_1 + rbx_4
            var_e0 = rax_4
            
            if (rax_4 s> rcx_7)
                sub_140594770(&var_e8)
            
            if (rbx_4 != 0)
                memcpy(var_e8, rdi_1, rbx_4 * 2)
    else
        if (var_e0 != 0)
            r8_1 = var_e8
        
        sub_140a2e390(rcx_5, u"->  %s - %4.1f sec", r8_1)
        rdi_1 = &data_142d40450
        
        if (var_d0 != 0)
            rdi_1 = var_d8
        
        if (var_e8 != rdi_1)
            if (rdi_1 == 0 || *rdi_1 == 0)
                goto label_1423ecea4
            
            int64_t rbx_3 = -1
            
            do
                rbx_3 += 1
            while (rdi_1[rbx_3] != 0)
            
            rbx_4 = rbx_3.d + 1
            goto label_1423ecea7
    int16_t* rcx_10 = var_d8
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    arg6 = 0xff7f7f7f
    sub_140acc920(&var_b8, &arg6)
    int16_t* r9_1 = &data_142d40450
    
    if (var_e0 != 0)
        r9_1 = var_e8
    
    zmm7 = sub_142409910(arg4, zmm6_1, _mm_cvtepi32_ps(zx.o(rsi_1)), r9_1, 
        *(data_143f5b298 + 0x50), &var_b8, &data_14399f5e0)
    int16_t* rcx_14 = var_e8
    rsi_1 += 0xc
    
    if (rcx_14 != 0)
        sub_140a74f90(rcx_14)

int32_t r15_1 = 1
int32_t rbx_6 = rsi_1
arg5 = rbx_6

if (var_c0 s> 1)
    int128_t var_48_1 = zmm7
    int32_t r13_1 = r14 + 4
    int64_t r14_1 = 0x14
    zmm7 = zx.o(0)
    
    do
        void* rdi_3 = var_c8 + r14_1
        int64_t* rcx_16 = *(arg4 + 0x58)
        
        if (rsi_1 s> *((*(*rcx_16 + 0x18))(rcx_16, &var_e8) + 4) - 0x1e)
            if (r12 s>= rsi_1)
                rsi_1 = r12
            
            r13_1 += 0x15e
            r12 = rsi_1
            rsi_1 = rbx_6
        
        int64_t rcx_19 = sx.q(*(rdi_3 + 8))
        arg6 = data_14399f630
        
        if (rcx_19.d u<= 6)
            int32_t rax_9
            
            switch (rcx_19)
                case 0
                    rax_9 = data_14399f638
                case 1
                    rax_9 = data_14399f640
                case 2, 6
                    rax_9 = data_14399f64c
                case 3
                    rax_9 = data_14399f644
                case 4
                    rax_9 = data_14399f848
                case 5
                    rax_9 = data_14399f63c
            
            arg6 = rax_9
        
        sub_140b63b70(rdi_3, &var_d8)
        int32_t r8_4 = *(rdi_3 + 0xc)
        
        if (r8_4 != 0xffffffff)
            int64_t var_a0
            sub_140a2e390(&var_a0, u" [LOD%d]", zx.q(r8_4 + 1))
            int32_t var_98
            int32_t r8_7
            
            if (var_98 == 0)
                r8_7 = 0
            else
                r8_7 = var_98 - 1
            
            sub_140a20ba0(&var_d8, var_a0, r8_7)
            int64_t rcx_25 = var_a0
            
            if (rcx_25 != 0)
                sub_140a74f90(rcx_25)
        
        void* rax_11 = sub_140d2f0c0(sub_140cddea0(), 0, *rdi_3, 0, 0, 0)
        float zmm0_2[0x2]
        
        if (rax_11 != 0)
            zmm0_2 = *(rax_11 + 0x2c)
        
        int64_t rcx_29
        
        if (rax_11 != 0 && not(zmm0_2[0] f<= zmm7.d) && *(rdi_3 + 8) != 0)
            int64_t var_90
            sub_140a2e390(&var_90, u" - %4.1f sec", _mm_cvtps_pd(zmm0_2)[0])
            int32_t var_88
            int32_t r8_11
            
            if (var_88 == 0)
                r8_11 = 0
            else
                r8_11 = var_88 - 1
            
            sub_140a20ba0(&var_d8, var_90, r8_11)
            rcx_29 = var_90
            goto label_1423ed185
        
        int64_t var_70
        int64_t* rax_12 = sub_140b63b70(rdi_3, &var_70)
        int16_t* rdx_10
        
        if (rax_12[1].d == 0)
            rdx_10 = &data_142d40450
        else
            rdx_10 = *rax_12
        
        void var_a8
        sub_140b58260(&var_a8, rdx_10, 1)
        int32_t zmm0_3 = sub_140bc7da0(&var_a8)
        int64_t rcx_33 = var_70
        
        if (rcx_33 != 0)
            sub_140a74f90(rcx_33)
        
        if (not(zmm0_3 f< zmm7.d))
            int64_t var_80
            sub_140a2e390(&var_80, u" - %3i %%", zx.q(int.d(zmm0_3)))
            int32_t var_78
            int32_t r8_14
            
            if (var_78 == 0)
                r8_14 = 0
            else
                r8_14 = var_78 - 1
            
            sub_140a20ba0(&var_d8, var_80, r8_14)
            rcx_29 = var_80
        label_1423ed185:
            
            if (rcx_29 != 0)
                sub_140a74f90(rcx_29)
        
        int16_t* rax_13 = &data_142d40450
        
        if (var_d0 != 0)
            rax_13 = var_d8
        
        void* const r8_15 = &data_142e61d38
        int16_t* var_108_1 = rax_13
        *(rdi_3 + 0x10)
        
        if (*(rdi_3 + 0x11) != 0)
            r8_15 = &data_142e84ca0
        
        sub_140a2e390(&var_b8, u"%s %s %s", r8_15)
        int16_t* const rdi_4 = &data_142d40450
        int32_t var_b0
        
        if (var_b0 != 0)
            rdi_4 = var_b8
        
        if (var_d8 != rdi_4)
            int32_t rbx_9
            
            if (rdi_4 == 0 || *rdi_4 == 0)
                rbx_9 = 0
            else
                int64_t rbx_8 = -1
                
                do
                    rbx_8 += 1
                while (rdi_4[rbx_8] != 0)
                
                rbx_9 = rbx_8.d + 1
            
            int32_t var_cc
            int32_t rcx_37 = var_cc
            int32_t rdx_12 = 0
            int32_t var_d0_1 = 0
            
            if (rcx_37 != rbx_9)
                sub_1405947f0(&var_d8, rbx_9)
                rcx_37 = var_cc
                rdx_12 = var_d0_1
            
            int32_t rax_14 = rbx_9 + rdx_12
            var_d0 = rax_14
            
            if (rax_14 s> rcx_37)
                sub_140594770(&var_d8)
            
            if (rbx_9 != 0)
                memcpy(var_d8, rdi_4, rbx_9 * 2)
        
        int16_t* rcx_41 = var_b8
        
        if (rcx_41 != 0)
            sub_140a74f90(rcx_41)
        
        void var_60
        sub_140acc920(&var_60, &arg6)
        int16_t* r9_4 = &data_142d40450
        
        if (var_d0 != 0)
            r9_4 = var_d8
        
        void* rcx_43 = *(data_143f5b298 + 0x50)
        double zmm2_2[0x2] = _mm_cvtepi32_ps(zx.o(rsi_1))
        zmm7 = sub_142409910(arg4, _mm_cvtepi32_ps(zx.o(r13_1)), zmm2_2, r9_4, rcx_43, &var_60, 
            &data_14399f5e0)
        int16_t* rcx_45 = var_d8
        rsi_1 += 0xc
        
        if (rcx_45 != 0)
            sub_140a74f90(rcx_45)
        
        rbx_6 = arg5
        r15_1 += 1
        r14_1 += 0x14
    while (r15_1 s< var_c0)

int64_t* rcx_46 = var_c8

if (r12 s>= rsi_1)
    rsi_1 = r12

if (rcx_46 != 0)
    sub_140a74f90(rcx_46)

return zx.q(rsi_1)
