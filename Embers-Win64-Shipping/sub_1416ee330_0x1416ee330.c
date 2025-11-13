// 函数: sub_1416ee330
// 地址: 0x1416ee330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = arg1
int64_t* rcx_1 = *arg4
(*(*rcx_1 + 0x20))(rcx_1)
int32_t* rbx = *(r14 + 0x58)
void* rsi_1 = sx.q(*(r14 + 0x60)) * 0x1c + rbx
float* var_c8
float var_c0
float var_a0
float* result
float zmm1
float zmm2
int32_t zmm3

if (rbx == rsi_1)
label_1416ee4c6:
    float** var_b0 = nullptr
    int64_t var_a8_1 = 1
    var_c8 = nullptr
    sub_1405a4d70(&var_b0)
    float** r13_1 = var_b0
    int32_t i = var_a8_1.d
    *r13_1 = var_c8
    
    while (i != 0)
        float* rdi_2 = r13_1[sx.q(i - 1)]
        var_c8 = rdi_2
        
        if (0 != 0)
            memmove(&r13_1[sx.q(i - 1)], &r13_1[sx.q(i)], 0 << 3)
        
        void* r11_1 = arg3
        i -= 1
        
        if (not(var_c8:4.d f> *(r11_1 + 0x14)))
            void* rcx_9 = sx.q(rdi_2.d) * 0x3c + *(r14 + 0x28)
            float zmm0_1
            int32_t zmm4_2
            
            if (*(rcx_9 + 0x38) == 0)
                if (rcx_9 != rcx_9 + 0x30)
                    int32_t* rsi_4 = rcx_9 + 0x30
                    float** r11_2 = var_b0
                    void* rdi_4 = rcx_9 + 0x14
                    
                    do
                        int32_t r8_6 = 0
                        zmm1 = *(rdi_4 - 0x10) - arg2[1]
                        zmm3 = (zx.o(0)).d
                        void* rdx_7 = r11_1 + 0x1c
                        float var_70 = *(rdi_4 - 0x14) - *arg2
                        float var_6c_1 = zmm1
                        float var_68_1 = *(rdi_4 - 0xc) - arg2[2]
                        zmm0_1 = *(rdi_4 - 4) - arg2[1]
                        float var_90 = *(rdi_4 - 8) - *arg2
                        float* rax_15 = &var_90
                        float var_8c_1 = zmm0_1
                        zmm0_1 = 3.40282347e+38f
                        float var_88_1 = *rdi_4 - arg2[2]
                        
                        while (true)
                            void* rcx_13 = r11_1 + 8 - &var_90 + rax_15
                            zmm1 = *(&var_70 - (r11_1 + 8) + rcx_13)
                            zmm2 = zmm0_1
                            zmm4_2 = zmm3
                            
                            if (*rdx_7 == 0)
                                zmm0_1 = *rcx_13
                                zmm1 = zmm1 * zmm0_1
                                zmm0_1 = zmm0_1 * *rax_15
                            else
                                if (zmm1 > 0f)
                                    break
                                
                                if (0f > *rax_15)
                                    break
                                
                                zmm1 = (zx.o(0)).d
                                zmm0_1 = 3.40282347e+38f
                            
                            zmm3 = zmm0_1
                            zmm0_1 = _mm_max_ss(zmm0_1, zmm1)
                            int32_t temp0_11 = _mm_min_ss(zmm3, zmm1)
                            zmm0_1 = _mm_min_ss(zmm0_1, zmm2)
                            zmm3 = _mm_max_ss(temp0_11, zmm4_2)
                            
                            if (zmm3 f> zmm0_1)
                                break
                            
                            r8_6 += 1
                            rdx_7 += 1
                            rax_15 = &rax_15[1]
                            
                            if (r8_6 s>= 3)
                                if (not(zmm3 f> *(arg3 + 0x14)) && not(zmm0_1 < 0f))
                                    int64_t i_1 = sx.q(i)
                                    int32_t var_9c_2 = zmm3
                                    var_a0 = *rsi_4
                                    i = (i_1 + 1).d
                                    var_a8_1.d = i
                                    
                                    if (i s> var_a8_1:4.d)
                                        sub_1405a4d70(&var_b0)
                                        r11_2 = var_b0
                                        i = var_a8_1.d
                                    
                                    r11_2[i_1] = var_a0.q
                                
                                break
                        
                        rdi_4 += 0x18
                        rsi_4 = &rsi_4[1]
                    while (rdi_4 - 0x14 != rcx_9 + 0x30)
                    
                    r13_1 = var_b0
                
            label_1416ee831:
                r14 = arg1
            else
                r14 = arg1
                int64_t rcx_10 = sx.q(*(rcx_9 + 0x30)) * 5
                int64_t rax_9 = *(r14 + 0x38)
                int32_t* rbx_2 = *(rax_9 + (rcx_10 << 3))
                void* rsi_3 = sx.q(*(rax_9 + (rcx_10 << 3) + 8)) * 0x1c + rbx_2
                
                if (rbx_2 != rsi_3)
                    void* r14_2 = r11_1 + 8
                    void* r12_1 = r11_1 + 0x1c
                    void* rdi_3 = &rbx_2[6]
                label_1416ee5c6:
                    int32_t r8_4 = 0
                    zmm1 = *(rdi_3 - 0x10) - arg2[1]
                    zmm3 = (zx.o(0)).d
                    void* rdx_5 = r12_1
                    float var_80 = *(rdi_3 - 0x14) - *arg2
                    float var_7c_1 = zmm1
                    float var_78_1 = *(rdi_3 - 0xc) - arg2[2]
                    zmm0_1 = *(rdi_3 - 4) - arg2[1]
                    var_c0 = *(rdi_3 - 8) - *arg2
                    result = &var_c0
                    float var_bc_2 = zmm0_1
                    zmm0_1 = 3.40282347e+38f
                    float var_b8_2 = *rdi_3 - arg2[2]
                    
                    while (true)
                        void* rcx_11 = r14_2 - &var_c0 + result
                        zmm1 = *(&var_80 - r14_2 + rcx_11)
                        zmm2 = zmm0_1
                        zmm4_2 = zmm3
                        
                        if (*rdx_5 == 0)
                            zmm0_1 = *rcx_11
                            zmm1 = zmm1 * zmm0_1
                            zmm0_1 = zmm0_1 * *result
                        else
                            if (zmm1 > 0f)
                                goto label_1416ee6bc
                            
                            if (0f > *result)
                                goto label_1416ee6bc
                            
                            zmm1 = (zx.o(0)).d
                            zmm0_1 = 3.40282347e+38f
                        
                        zmm3 = zmm0_1
                        zmm0_1 = _mm_max_ss(zmm0_1, zmm1)
                        int32_t temp0_7 = _mm_min_ss(zmm3, zmm1)
                        zmm0_1 = _mm_min_ss(zmm0_1, zmm2)
                        zmm3 = _mm_max_ss(temp0_7, zmm4_2)
                        
                        if (zmm3 f> zmm0_1)
                            goto label_1416ee6bc
                        
                        r8_4 += 1
                        rdx_5 += 1
                        result = &result[1]
                        
                        if (r8_4 s>= 3)
                            if (not(zmm3 f> *(r11_1 + 0x14)) && not(zmm0_1 < 0f))
                                var_c8.d = *rbx_2
                                int64_t* rcx_12 = *arg4
                                
                                if ((*(*rcx_12 + 0x10))(rcx_12, &var_c8, r11_1).b == 0)
                                    if (r13_1 != 0)
                                        sub_140a74f90(r13_1)
                                    
                                    break
                                
                                r11_1 = arg3
                            
                        label_1416ee6bc:
                            rbx_2 = &rbx_2[7]
                            rdi_3 += 0x1c
                            
                            if (rbx_2 != rsi_3)
                                goto label_1416ee5c6
                            
                            goto label_1416ee831
                    
                    goto label_1416ee87f
    
    if (r13_1 != 0)
        sub_140a74f90(r13_1)
    
    result.b = 1
    return result

float* rdi_1 = &rbx[6]

while (true)
    zmm1 = rdi_1[-4] - arg2[1]
    int32_t r8 = 0
    void* rdx = arg3 + 0x1c
    zmm3 = (zx.o(0)).d
    var_a0 = rdi_1[-5] - *arg2
    int64_t rax_2 = 0
    float var_9c_1 = zmm1
    float var_98_1 = rdi_1[-3] - arg2[2]
    float zmm0 = rdi_1[-1] - arg2[1]
    var_c0 = rdi_1[-2] - *arg2
    float var_bc_1 = zmm0
    zmm0 = 3.40282347e+38f
    float var_b8_1 = *rdi_1 - arg2[2]
    
    while (true)
        zmm2 = zmm0
        void* rcx_2 = &var_a0 + rax_2
        int32_t zmm4_1 = zmm3
        zmm1 = *rcx_2
        
        if (*rdx == 0)
            zmm0 = *(rcx_2 + arg3 + 8 - &var_a0)
            zmm1 = zmm1 * zmm0
            zmm0 = zmm0 f* *(&var_c0 + rax_2)
        else
            if (zmm1 > 0f)
                goto label_1416ee4af
            
            if (0f f> *(&var_c0 + rax_2))
                goto label_1416ee4af
            
            zmm1 = (zx.o(0)).d
            zmm0 = 3.40282347e+38f
        
        zmm3 = zmm0
        zmm0 = _mm_max_ss(zmm0, zmm1)
        int32_t temp0_2 = _mm_min_ss(zmm3, zmm1)
        zmm0 = _mm_min_ss(zmm0, zmm2)
        zmm3 = _mm_max_ss(temp0_2, zmm4_1)
        
        if (zmm3 f> zmm0)
            goto label_1416ee4af
        
        r8 += 1
        rdx += 1
        rax_2 += 4
        
        if (r8 s>= 3)
            if (not(zmm3 f> *(arg3 + 0x14)) && not(zmm0 < 0f))
                var_c8.d = *rbx
                int64_t* rcx_3 = *arg4
                
                if ((*(*rcx_3 + 0x10))(rcx_3, &var_c8, arg3).b == 0)
                label_1416ee87f:
                    result.b = 0
                    return result
            
        label_1416ee4af:
            rbx = &rbx[7]
            rdi_1 = &rdi_1[7]
            
            if (rbx != rsi_1)
                break
            
            r14 = arg1
            goto label_1416ee4c6
