// 函数: sub_141794a80
// 地址: 0x141794a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* arg_20 = arg4
float* arg_10 = arg2
int32_t* rbx = *(arg1 + 0x58)
int128_t zmm6
int128_t var_48 = zmm6
void* r12 = arg1
int128_t zmm7
int128_t var_58 = zmm7
int128_t zmm8 = zx.o(0)
int128_t zmm9 = 0x7f7fffff
void* rsi_1 = sx.q(*(arg1 + 0x60)) * 0x1c + rbx
void* var_c8
float var_b8
float var_b4
void* result
float zmm1
float zmm2
float zmm3

if (rbx == rsi_1)
label_141794c24:
    void** var_88 = nullptr
    int64_t var_80_1 = 1
    var_c8 = nullptr
    sub_1405a4d70(&var_88)
    void** r15_1 = var_88
    int32_t i = var_80_1.d
    *r15_1 = var_c8
    
    if (i != 0)
        int32_t* r14_1 = arg_20
        
        do
            int64_t rsi_2 = r15_1[sx.q(i - 1)]
            var_b8.q = rsi_2
            
            if (0 != 0)
                memmove(&r15_1[sx.q(i - 1)], &r15_1[sx.q(i)], 0 << 3)
            
            i -= 1
            
            if (not(var_b4 f> *(arg3 + 0x14)))
                void* rcx_6 = sx.q(rsi_2.d) * 0x3c + *(r12 + 0x28)
                
                if (*(rcx_6 + 0x38) == 0)
                    if (rcx_6 != rcx_6 + 0x30)
                        result = arg3 + 8
                        void* r14_2 = rcx_6 + 0x30
                        void* rdx_5 = arg3 + 0x1c
                        void* rsi_3 = rcx_6 + 0x14
                        
                        do
                            float* rcx_10 = arg_20
                            int32_t r8_5 = 0
                            zmm3 = zmm8.d
                            float zmm5_1 = *rcx_10
                            zmm6 = rcx_10[1]
                            float zmm0_1 = *(rsi_3 - 0x14) - zmm5_1
                            zmm7 = rcx_10[2]
                            zmm1 = *(rsi_3 - 0x10) f- zmm6.d
                            zmm6.d = zmm6.d f+ *(rsi_3 - 4)
                            zmm1 = zmm1 - arg_10[1]
                            zmm5_1 = zmm5_1 f+ *(rsi_3 - 8) - *arg_10
                            zmm6.d = zmm6.d f- arg_10[1]
                            float var_a8 = zmm0_1 - *arg_10
                            zmm0_1 = *(rsi_3 - 0xc) f- zmm7.d
                            float var_a4_1 = zmm1
                            zmm7.d = zmm7.d f+ *rsi_3
                            float var_98 = zmm5_1
                            int32_t var_94_1 = zmm6.d
                            zmm7.d = zmm7.d f- arg_10[2]
                            int64_t rax_7 = 0
                            float var_a0_1 = zmm0_1 - arg_10[2]
                            zmm0_1 = zmm9.d
                            int32_t var_90_1 = zmm7.d
                            
                            while (true)
                                zmm2 = zmm0_1
                                float* rcx_12 = &var_a8 + rax_7
                                float zmm4_1 = zmm3
                                zmm1 = *rcx_12
                                
                                if (*rdx_5 == 0)
                                    zmm0_1 = *(rcx_12 + result - &var_a8)
                                    zmm1 = zmm1 * zmm0_1
                                    zmm0_1 = zmm0_1 f* *(&var_98 + rax_7)
                                else
                                    if (zmm1 f> zmm8.d)
                                        break
                                    
                                    if (zmm8.d f> *(&var_98 + rax_7))
                                        break
                                    
                                    zmm1 = zmm8.d
                                    zmm0_1 = zmm9.d
                                
                                zmm3 = zmm0_1
                                zmm0_1 = _mm_max_ss(zmm0_1, zmm1)
                                zmm3 = _mm_min_ss(zmm3, zmm1)
                                zmm0_1 = _mm_min_ss(zmm0_1, zmm2)
                                zmm3 = _mm_max_ss(zmm3, zmm4_1)
                                
                                if (zmm3 > zmm0_1)
                                    break
                                
                                r8_5 += 1
                                rdx_5 += 1
                                rax_7 += 4
                                
                                if (r8_5 s>= 3)
                                    if (not(zmm3 f> *(arg3 + 0x14)) && not(zmm0_1 f< zmm8.d))
                                        int64_t i_1 = sx.q(i)
                                        var_c8:4.d = zmm3
                                        var_c8.d = *r14_2
                                        i = (i_1 + 1).d
                                        var_80_1.d = i
                                        
                                        if (i s> var_80_1:4.d)
                                            sub_1405a4d70(&var_88)
                                            i = var_80_1.d
                                            r15_1 = var_88
                                        
                                        r15_1[i_1] = var_c8
                                    
                                    break
                            
                            rsi_3 += 0x18
                            rdx_5 = arg3 + 0x1c
                            r14_2 += 4
                            result = arg3 + 8
                        while (rsi_3 - 0x14 != rcx_6 + 0x30)
                        
                        r14_1 = arg_20
                    
                    r12 = arg1
                else
                    r12 = arg1
                    result, zmm8, zmm9 = sub_14179a310(
                        *(r12 + 0x38) + sx.q(*(rcx_6 + 0x30)) * 0x28, arg_10, arg3, r14_1, arg5)
                    
                    if (result.b == 0)
                        if (r15_1 != 0)
                            sub_140a74f90(r15_1)
                        
                        goto label_141794cfc
        while (i != 0)
    
    if (r15_1 != 0)
        sub_140a74f90(r15_1)
    
    result.b = 1
    return result

void* rdi_1 = &rbx[6]

while (true)
    float zmm5 = *arg4
    zmm6 = arg4[1]
    int32_t r8 = 0
    zmm7 = arg4[2]
    zmm3 = zmm8.d
    float zmm0 = *(rdi_1 - 0x14) - zmm5
    zmm1 = *(rdi_1 - 0x10) f- zmm6.d
    zmm6.d = zmm6.d f+ *(rdi_1 - 4)
    int64_t rax_1 = 0
    zmm5 = zmm5 f+ *(rdi_1 - 8) - *arg2
    zmm1 = zmm1 - arg2[1]
    zmm6.d = zmm6.d f- arg2[1]
    var_b8 = zmm0 - *arg2
    zmm0 = *(rdi_1 - 0xc) f- zmm7.d
    var_b4 = zmm1
    zmm7.d = zmm7.d f+ *rdi_1
    var_c8.d = zmm5
    var_c8:4.d = zmm6.d
    zmm7.d = zmm7.d f- arg2[2]
    void* rdx = arg3 + 0x1c
    float var_b0_1 = zmm0 - arg2[2]
    zmm0 = zmm9.d
    int32_t var_c0_1 = zmm7.d
    
    while (true)
        zmm2 = zmm0
        float* rcx = &var_b8 + rax_1
        float zmm4 = zmm3
        zmm1 = *rcx
        
        if (*rdx == 0)
            zmm0 = *(rcx + arg3 + 8 - &var_b8)
            zmm1 = zmm1 * zmm0
            zmm0 = zmm0 f* *(&var_c8 + rax_1)
        else
            if (zmm1 f> zmm8.d)
                goto label_141794c09
            
            if (zmm8.d f> *(&var_c8 + rax_1))
                goto label_141794c09
            
            zmm1 = zmm8.d
            zmm0 = zmm9.d
        
        zmm3 = zmm0
        zmm0 = _mm_max_ss(zmm0, zmm1)
        zmm3 = _mm_min_ss(zmm3, zmm1)
        zmm0 = _mm_min_ss(zmm0, zmm2)
        zmm3 = _mm_max_ss(zmm3, zmm4)
        
        if (zmm3 > zmm0)
            goto label_141794c09
        
        r8 += 1
        rdx += 1
        rax_1 += 4
        
        if (r8 s>= 3)
            if (not(zmm3 f> *(arg3 + 0x14)) && not(zmm0 f< zmm8.d))
                result, zmm8, zmm9 = sub_14179fc20(arg5, *rbx, arg3)
                
                if (result.b == 0)
                label_141794cfc:
                    result.b = 0
                    return result
            
        label_141794c09:
            arg4 = arg_20
            rbx = &rbx[7]
            arg2 = arg_10
            rdi_1 += 0x1c
            
            if (rbx != rsi_1)
                break
            
            goto label_141794c24
