// 函数: sub_1416f0cd0
// 地址: 0x1416f0cd0
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
label_1416f0e90:
    result.b = 1
    return result

void* rax = arg3 + 0x1c
void* rdi_1 = &rbx[6]

while (true)
    float zmm5 = *arg4
    void* rdx = rax
    zmm6 = arg4[1]
    float zmm0 = *(rdi_1 - 0x14) - zmm5
    zmm7 = arg4[2]
    int32_t r8 = 0
    float zmm1 = *(rdi_1 - 0x10) f- zmm6.d
    zmm6.d = zmm6.d f+ *(rdi_1 - 4)
    float zmm3 = (zx.o(0)).d
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
    zmm0 = 3.40282347e+38f
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
            if (zmm1 > 0f)
                goto label_1416f0e76
            
            if (0f f> *(&var_78 + result))
                goto label_1416f0e76
            
            zmm1 = (zx.o(0)).d
            zmm0 = 3.40282347e+38f
        
        float temp0_1 = _mm_max_ss(zmm0, zmm1)
        float temp0_2 = _mm_min_ss(zmm0, zmm1)
        zmm0 = _mm_min_ss(temp0_1, zmm2)
        zmm3 = _mm_max_ss(temp0_2, zmm3)
        
        if (zmm3 > zmm0)
            goto label_1416f0e76
        
        r8 += 1
        rdx += 1
        result += 4
        
        if (r8 s>= 3)
            if (not(zmm3 f> *(arg3 + 0x14)) && not(zmm0 < 0f))
                int64_t* rcx_1 = *arg5
                int32_t arg_8 = *rbx
                
                if ((*(*rcx_1 + 0x18))(rcx_1, &arg_8, arg3).b == 0)
                    result.b = 0
                    return result
            
        label_1416f0e76:
            rbx = &rbx[7]
            rdi_1 += 0x1c
            
            if (rbx == rsi_1)
                goto label_1416f0e90
            
            rax = arg3 + 0x1c
            break
