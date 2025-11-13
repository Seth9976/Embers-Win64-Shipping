// 函数: sub_14179bb00
// 地址: 0x14179bb00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = *arg1
int128_t zmm6
int128_t var_38 = zmm6
int128_t zmm7
int128_t var_48 = zmm7
int128_t zmm8
int128_t var_58 = zmm8
int128_t zmm9
int128_t var_68 = zmm9
void* rsi_1 = sx.q(arg1[1].d) * 0x1c + rbx
int64_t result

if (rbx == rsi_1)
label_14179bcbf:
    result.b = 1
    return result

void* rax = arg3 + 0x1c
zmm9 = 0x7f7fffff
void* rdi_1 = &rbx[6]
zmm8 = zx.o(0)

while (true)
    float zmm5 = *arg4
    void* rdx = rax
    zmm6 = arg4[1]
    float zmm0 = *(rdi_1 - 0x14) - zmm5
    zmm7 = arg4[2]
    int32_t r8 = 0
    float zmm1 = *(rdi_1 - 0x10) f- zmm6.d
    zmm6.d = zmm6.d f+ *(rdi_1 - 4)
    float zmm3 = zmm8.d
    result = 0
    zmm5 = zmm5 f+ *(rdi_1 - 8) - *arg2
    zmm1 = zmm1 - arg2[1]
    float var_88 = zmm0 - *arg2
    zmm6.d = zmm6.d f- arg2[1]
    zmm0 = *(rdi_1 - 0xc) f- zmm7.d
    float var_78 = zmm5
    zmm7.d = zmm7.d f+ *rdi_1
    float var_84_1 = zmm1
    int32_t var_74_1 = zmm6.d
    zmm7.d = zmm7.d f- arg2[2]
    float var_80_1 = zmm0 - arg2[2]
    zmm0 = zmm9.d
    int32_t var_70_1 = zmm7.d
    
    while (true)
        float zmm2 = zmm0
        void* rcx = &var_88 + result
        zmm1 = *rcx
        
        if (*rdx == 0)
            zmm0 = *(rcx + arg3 + 8 - &var_88)
            zmm1 = zmm1 * zmm0
            zmm0 = zmm0 f* *(&var_78 + result)
        else
            if (zmm1 f> zmm8.d)
                goto label_14179bca5
            
            if (zmm8.d f> *(&var_78 + result))
                goto label_14179bca5
            
            zmm1 = zmm8.d
            zmm0 = zmm9.d
        
        float temp0_1 = _mm_max_ss(zmm0, zmm1)
        float temp0_2 = _mm_min_ss(zmm0, zmm1)
        zmm0 = _mm_min_ss(temp0_1, zmm2)
        zmm3 = _mm_max_ss(temp0_2, zmm3)
        
        if (zmm3 > zmm0)
            goto label_14179bca5
        
        r8 += 1
        rdx += 1
        result += 4
        
        if (r8 s>= 3)
            if (not(zmm3 f> *(arg3 + 0x14)) && not(zmm0 f< zmm8.d))
                int32_t arg_8 = *rbx
                result, zmm8, zmm9 = sub_1417bc1d0(arg5, &arg_8, arg3)
                
                if (result.b == 0)
                    result.b = 0
                    return result
            
        label_14179bca5:
            rbx = &rbx[7]
            rdi_1 += 0x1c
            
            if (rbx == rsi_1)
                goto label_14179bcbf
            
            rax = arg3 + 0x1c
            break
