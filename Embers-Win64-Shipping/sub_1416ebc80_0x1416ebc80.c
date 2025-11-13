// 函数: sub_1416ebc80
// 地址: 0x1416ebc80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_48 = zmm6
int32_t* r12 = arg4
int128_t zmm7
int128_t var_58 = zmm7
int64_t* rcx_1 = *arg5
(*(*rcx_1 + 0x20))(rcx_1)
int32_t* rbx = *(arg1 + 0x58)
int128_t zmm8 = zx.o(0)
int128_t zmm9 = 0x7f7fffff
void* rsi_1 = sx.q(*(arg1 + 0x60)) * 0x1c + rbx
int64_t var_c8
float var_c0
float var_bc
float var_b0
int64_t result
float zmm1
float zmm2
int32_t zmm3

if (rbx == rsi_1)
label_1416ebe47:
    int64_t* var_90 = nullptr
    int64_t var_88_1 = 1
    var_c8 = 0
    sub_1405a4d70(&var_90)
    int64_t* r15_1 = var_90
    int32_t i = var_88_1.d
    *r15_1 = var_c8
    
    if (i != 0)
        int32_t* r14_1 = arg4
        
        do
            int64_t rsi_2 = r15_1[sx.q(i - 1)]
            var_c0.q = rsi_2
            
            if (0 != 0)
                memmove(&r15_1[sx.q(i - 1)], &r15_1[sx.q(i)], 0 << 3)
            
            i -= 1
            
            if (not(var_bc f> *(arg3 + 0x14)))
                void* rcx_8 = sx.q(rsi_2.d) * 0x3c + *(arg1 + 0x28)
                
                if (*(rcx_8 + 0x38) != 0)
                    result, zmm8, zmm9 = sub_1416f0cd0(
                        *(arg1 + 0x38) + sx.q(*(rcx_8 + 0x30)) * 0x28, arg2, arg3, r14_1, arg5)
                    
                    if (result.b == 0)
                        if (r15_1 != 0)
                            sub_140a74f90(r15_1)
                        
                        goto label_1416ebf2a
                else if (rcx_8 != rcx_8 + 0x30)
                    result = arg3 + 8
                    int32_t* r14_2 = rcx_8 + 0x30
                    void* rdx_6 = arg3 + 0x1c
                    void* rsi_3 = rcx_8 + 0x14
                    
                    do
                        int32_t r8_5 = 0
                        zmm3 = zmm8.d
                        float zmm5_2 = *arg4
                        zmm6 = arg4[1]
                        float zmm0_1 = *(rsi_3 - 0x14) - zmm5_2
                        zmm7 = arg4[2]
                        zmm1 = *(rsi_3 - 0x10) f- zmm6.d
                        zmm6.d = zmm6.d f+ *(rsi_3 - 4)
                        zmm1 = zmm1 - arg2[1]
                        zmm5_2 = zmm5_2 f+ *(rsi_3 - 8) - *arg2
                        zmm6.d = zmm6.d f- arg2[1]
                        var_b0 = zmm0_1 - *arg2
                        zmm0_1 = *(rsi_3 - 0xc) f- zmm7.d
                        float var_ac_2 = zmm1
                        zmm7.d = zmm7.d f+ *rsi_3
                        float var_a0 = zmm5_2
                        int32_t var_9c_1 = zmm6.d
                        zmm7.d = zmm7.d f- arg2[2]
                        int64_t rax_12 = 0
                        float var_a8_2 = zmm0_1 - arg2[2]
                        zmm0_1 = zmm9.d
                        int32_t var_98_1 = zmm7.d
                        
                        while (true)
                            zmm2 = zmm0_1
                            int32_t* rcx_14 = &var_b0 + rax_12
                            int32_t zmm4_2 = zmm3
                            zmm1 = *rcx_14
                            
                            if (*rdx_6 == 0)
                                zmm0_1 = *(rcx_14 + result - &var_b0)
                                zmm1 = zmm1 * zmm0_1
                                zmm0_1 = zmm0_1 f* *(&var_a0 + rax_12)
                            else
                                if (zmm1 f> zmm8.d)
                                    break
                                
                                if (zmm8.d f> *(&var_a0 + rax_12))
                                    break
                                
                                zmm1 = zmm8.d
                                zmm0_1 = zmm9.d
                            
                            zmm3 = zmm0_1
                            zmm0_1 = _mm_max_ss(zmm0_1, zmm1)
                            int32_t temp0_7 = _mm_min_ss(zmm3, zmm1)
                            zmm0_1 = _mm_min_ss(zmm0_1, zmm2)
                            zmm3 = _mm_max_ss(temp0_7, zmm4_2)
                            
                            if (zmm3 f> zmm0_1)
                                break
                            
                            r8_5 += 1
                            rdx_6 += 1
                            rax_12 += 4
                            
                            if (r8_5 s>= 3)
                                if (not(zmm3 f> *(arg3 + 0x14)) && not(zmm0_1 f< zmm8.d))
                                    int64_t i_1 = sx.q(i)
                                    var_c8:4.d = zmm3
                                    var_c8.d = *r14_2
                                    i = (i_1 + 1).d
                                    var_88_1.d = i
                                    
                                    if (i s> var_88_1:4.d)
                                        sub_1405a4d70(&var_90)
                                        i = var_88_1.d
                                        r15_1 = var_90
                                    
                                    r15_1[i_1] = var_c8
                                
                                break
                        
                        rsi_3 += 0x18
                        rdx_6 = arg3 + 0x1c
                        r14_2 = &r14_2[1]
                        result = arg3 + 8
                    while (rsi_3 - 0x14 != rcx_8 + 0x30)
                    
                    r14_1 = arg4
        while (i != 0)
    
    if (r15_1 != 0)
        sub_140a74f90(r15_1)
    
    result.b = 1
    return result

void* rdi_1 = &rbx[6]

while (true)
    float zmm5_1 = *r12
    void* rdx = arg3 + 0x1c
    int32_t r8 = 0
    zmm6 = r12[1]
    float zmm0 = *(rdi_1 - 0x14) - zmm5_1
    zmm7 = r12[2]
    zmm3 = (zx.o(0)).d
    zmm1 = *(rdi_1 - 0x10) f- zmm6.d
    zmm6.d = zmm6.d f+ *(rdi_1 - 4)
    zmm5_1 = zmm5_1 f+ *(rdi_1 - 8) - *arg2
    zmm1 = zmm1 - arg2[1]
    var_c0 = zmm0 - *arg2
    zmm6.d = zmm6.d f- arg2[1]
    zmm0 = *(rdi_1 - 0xc) f- zmm7.d
    var_b0 = zmm5_1
    zmm7.d = zmm7.d f+ *rdi_1
    var_bc = zmm1
    int32_t var_ac_1 = zmm6.d
    zmm7.d = zmm7.d f- arg2[2]
    int64_t rax_3 = 0
    float var_b8_1 = zmm0 - arg2[2]
    zmm0 = 3.40282347e+38f
    int32_t var_a8_1 = zmm7.d
    
    while (true)
        zmm2 = zmm0
        void* rcx_2 = &var_c0 + rax_3
        int32_t zmm4_1 = zmm3
        zmm1 = *rcx_2
        
        if (*rdx == 0)
            zmm0 = *(rcx_2 + arg3 + 8 - &var_c0)
            zmm1 = zmm1 * zmm0
            zmm0 = zmm0 f* *(&var_b0 + rax_3)
        else
            if (zmm1 > 0f)
                goto label_1416ebe34
            
            if (0f f> *(&var_b0 + rax_3))
                goto label_1416ebe34
            
            zmm1 = (zx.o(0)).d
            zmm0 = 3.40282347e+38f
        
        zmm3 = zmm0
        zmm0 = _mm_max_ss(zmm0, zmm1)
        int32_t temp0_2 = _mm_min_ss(zmm3, zmm1)
        zmm0 = _mm_min_ss(zmm0, zmm2)
        zmm3 = _mm_max_ss(temp0_2, zmm4_1)
        
        if (zmm3 f> zmm0)
            goto label_1416ebe34
        
        r8 += 1
        rdx += 1
        rax_3 += 4
        
        if (r8 s>= 3)
            if (not(zmm3 f> *(arg3 + 0x14)) && not(zmm0 < 0f))
                var_c8.d = *rbx
                int64_t* rcx_3 = *arg5
                
                if ((*(*rcx_3 + 0x18))(rcx_3, &var_c8, arg3).b == 0)
                label_1416ebf2a:
                    result.b = 0
                    return result
            
        label_1416ebe34:
            rbx = &rbx[7]
            rdi_1 += 0x1c
            
            if (rbx != rsi_1)
                break
            
            goto label_1416ebe47
