// 函数: sub_141799a30
// 地址: 0x141799a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = *(arg1 + 0x58)
void* r10 = arg3
void* r14 = arg1
int128_t zmm6 = zx.o(0)
int128_t zmm7 = 0x7f7fffff
void* rsi_1 = sx.q(*(arg1 + 0x60)) * 0x1c + rbx
int64_t var_c8
float var_b8
float var_b4
int64_t result
float zmm1
float zmm2
float zmm3

if (rbx == rsi_1)
label_141799bc2:
    int64_t* var_68 = nullptr
    int64_t var_60_1 = 1
    var_c8 = 0
    sub_1405a4d70(&var_68)
    int64_t* r13_1 = var_68
    int32_t i = var_60_1.d
    *r13_1 = var_c8
    
    while (i != 0)
        int64_t rdi_2 = r13_1[sx.q(i - 1)]
        var_b8.q = rdi_2
        
        if (0 != 0)
            memmove(&r13_1[sx.q(i - 1)], &r13_1[sx.q(i)], 0 << 3)
        
        void* r10_1 = arg3
        i -= 1
        
        if (not(var_b4 f> *(r10_1 + 0x14)))
            void* rcx_7 = sx.q(rdi_2.d) * 0x3c + *(r14 + 0x28)
            float zmm0_1
            float zmm4_1
            
            if (*(rcx_7 + 0x38) == 0)
                if (rcx_7 != rcx_7 + 0x30)
                    int64_t* r11_1 = var_68
                    int32_t* rsi_4 = rcx_7 + 0x30
                    void* rdi_4 = rcx_7 + 0x14
                    
                    do
                        int32_t r8_6 = 0
                        zmm1 = *(rdi_4 - 0x10) - arg2[1]
                        zmm3 = zmm6.d
                        void* rdx_7 = r10_1 + 0x1c
                        float var_78 = *(rdi_4 - 0x14) - *arg2
                        float var_74_1 = zmm1
                        float var_70_1 = *(rdi_4 - 0xc) - arg2[2]
                        zmm0_1 = *(rdi_4 - 4) - arg2[1]
                        float var_88 = *(rdi_4 - 8) - *arg2
                        float* rax_8 = &var_88
                        float var_84_1 = zmm0_1
                        zmm0_1 = zmm7.d
                        float var_80_1 = *rdi_4 - arg2[2]
                        
                        while (true)
                            void* rcx_11 = r10_1 + 8 - &var_88 + rax_8
                            zmm2 = zmm0_1
                            zmm4_1 = zmm3
                            zmm0_1 = *(&var_78 - (r10_1 + 8) + rcx_11)
                            
                            if (*rdx_7 == 0)
                                zmm1 = *rcx_11
                                zmm0_1 = zmm0_1 * zmm1
                                zmm1 = zmm1 * *rax_8
                            else
                                if (zmm0_1 f> zmm6.d)
                                    break
                                
                                if (zmm6.d f> *rax_8)
                                    break
                                
                                zmm0_1 = zmm6.d
                                zmm1 = zmm7.d
                            
                            zmm3 = zmm0_1
                            zmm0_1 = _mm_max_ss(zmm0_1, zmm1)
                            zmm3 = _mm_min_ss(zmm3, zmm1)
                            zmm0_1 = _mm_min_ss(zmm0_1, zmm2)
                            zmm3 = _mm_max_ss(zmm3, zmm4_1)
                            
                            if (zmm3 > zmm0_1)
                                break
                            
                            r8_6 += 1
                            rdx_7 += 1
                            rax_8 = &rax_8[1]
                            
                            if (r8_6 s>= 3)
                                if (not(zmm3 f> *(arg3 + 0x14)) && not(zmm0_1 f< zmm6.d))
                                    int64_t i_1 = sx.q(i)
                                    var_c8:4.d = zmm3
                                    var_c8.d = *rsi_4
                                    i = (i_1 + 1).d
                                    var_60_1.d = i
                                    
                                    if (i s> var_60_1:4.d)
                                        sub_1405a4d70(&var_68)
                                        r11_1 = var_68
                                        i = var_60_1.d
                                    
                                    r11_1[i_1] = var_c8
                                
                                break
                        
                        rdi_4 += 0x18
                        rsi_4 = &rsi_4[1]
                    while (rdi_4 - 0x14 != rcx_7 + 0x30)
                    
                    r13_1 = var_68
                
            label_141799f31:
                r14 = arg1
            else
                r14 = arg1
                int64_t rcx_8 = sx.q(*(rcx_7 + 0x30)) * 5
                int64_t rax_5 = *(r14 + 0x38)
                int32_t* rbx_2 = *(rax_5 + (rcx_8 << 3))
                void* rsi_3 = sx.q(*(rax_5 + (rcx_8 << 3) + 8)) * 0x1c + rbx_2
                
                if (rbx_2 != rsi_3)
                    void* r14_3 = r10_1 + 8
                    void* r12_1 = r10_1 + 0x1c
                    void* rdi_3 = &rbx_2[6]
                label_141799cbc:
                    int32_t r8_4 = 0
                    zmm3 = zmm6.d
                    void* rdx_5 = r12_1
                    zmm1 = *(rdi_3 - 0x10) - arg2[1]
                    float var_a8 = *(rdi_3 - 0x14) - *arg2
                    float var_a4_1 = zmm1
                    float var_a0_1 = *(rdi_3 - 0xc) - arg2[2]
                    zmm0_1 = *(rdi_3 - 4) - arg2[1]
                    float var_98 = *(rdi_3 - 8) - *arg2
                    float var_94_1 = zmm0_1
                    zmm0_1 = zmm7.d
                    result = 0
                    float var_90_1 = *rdi_3 - arg2[2]
                    
                    while (true)
                        zmm2 = zmm0_1
                        float* rcx_9 = &var_a8 + result
                        zmm4_1 = zmm3
                        zmm1 = *rcx_9
                        
                        if (*rdx_5 == 0)
                            zmm0_1 = *(rcx_9 + r14_3 - &var_a8)
                            zmm1 = zmm1 * zmm0_1
                            zmm0_1 = zmm0_1 f* *(&var_98 + result)
                        else
                            if (zmm1 f> zmm6.d)
                                goto label_141799db8
                            
                            if (zmm6.d f> *(&var_98 + result))
                                goto label_141799db8
                            
                            zmm1 = zmm6.d
                            zmm0_1 = zmm7.d
                        
                        zmm3 = zmm0_1
                        zmm0_1 = _mm_max_ss(zmm0_1, zmm1)
                        zmm3 = _mm_min_ss(zmm3, zmm1)
                        zmm0_1 = _mm_min_ss(zmm0_1, zmm2)
                        zmm3 = _mm_max_ss(zmm3, zmm4_1)
                        
                        if (zmm3 > zmm0_1)
                            goto label_141799db8
                        
                        r8_4 += 1
                        rdx_5 += 1
                        result += 4
                        
                        if (r8_4 s>= 3)
                            if (not(zmm3 f> *(r10_1 + 0x14)) && not(zmm0_1 f< zmm6.d))
                                result, zmm6, zmm7 = sub_1417a0750(arg4, *rbx_2, r10_1)
                                
                                if (result.b == 0)
                                    if (r13_1 != 0)
                                        sub_140a74f90(r13_1)
                                    
                                    break
                                
                                r10_1 = arg3
                            
                        label_141799db8:
                            rbx_2 = &rbx_2[7]
                            rdi_3 += 0x1c
                            
                            if (rbx_2 != rsi_3)
                                goto label_141799cbc
                            
                            goto label_141799f31
                    
                    goto label_141799f7f
    
    if (r13_1 != 0)
        sub_140a74f90(r13_1)
    
    result.b = 1
    return result

float* rdi_1 = &rbx[6]

while (true)
    zmm1 = rdi_1[-4] - arg2[1]
    int32_t r8 = 0
    zmm3 = zmm6.d
    void* rdx = arg3 + 0x1c
    var_b8 = rdi_1[-5] - *arg2
    int64_t rax_1 = 0
    var_b4 = zmm1
    float var_b0_1 = rdi_1[-3] - arg2[2]
    var_c8.d = rdi_1[-2] - *arg2
    var_c8:4.d = rdi_1[-1] - arg2[1]
    float zmm0 = zmm7.d
    float var_c0_1 = *rdi_1 - arg2[2]
    
    while (true)
        float zmm4 = zmm0
        void* rcx = &var_b8 + rax_1
        float zmm5 = zmm3
        zmm2 = *rcx
        
        if (*rdx == 0)
            zmm0 = *(arg3 + 8 - &var_b8 + rcx)
            zmm1 = zmm0
            zmm0 = zmm0 f* *(&var_c8 + rax_1)
            zmm1 = zmm1 * zmm2
        else
            if (zmm2 f> zmm6.d)
                goto label_141799bab
            
            if (zmm6.d f> *(&var_c8 + rax_1))
                goto label_141799bab
            
            zmm1 = zmm6.d
            zmm0 = zmm7.d
        
        zmm3 = zmm0
        zmm0 = _mm_max_ss(zmm0, zmm1)
        zmm3 = _mm_min_ss(zmm3, zmm1)
        zmm0 = _mm_min_ss(zmm0, zmm4)
        zmm3 = _mm_max_ss(zmm3, zmm5)
        
        if (zmm3 > zmm0)
            goto label_141799bab
        
        r8 += 1
        rdx += 1
        rax_1 += 4
        
        if (r8 s>= 3)
            if (not(zmm3 f> *(r10 + 0x14)) && not(zmm0 f< zmm6.d))
                result, zmm6, zmm7 = sub_1417a0750(arg4, *rbx, r10)
                
                if (result.b == 0)
                label_141799f7f:
                    result.b = 0
                    return result
                
                r10 = arg3
            
        label_141799bab:
            rbx = &rbx[7]
            rdi_1 = &rdi_1[7]
            
            if (rbx != rsi_1)
                break
            
            r14 = arg1
            goto label_141799bc2
