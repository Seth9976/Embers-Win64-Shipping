// 函数: sub_1416f0ed0
// 地址: 0x1416f0ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float (* rbx)[0x4] = *(arg1 + 0x18)
int128_t zmm6
int128_t var_38 = zmm6
int128_t zmm7
int128_t var_48 = zmm7
void* rsi_2 = &rbx[sx.q(*(arg1 + 0x20)) * 4]
int128_t zmm8
int128_t var_58 = zmm8
int128_t zmm9
int128_t var_68 = zmm9
void* const* result

if (rbx == rsi_2)
label_1416f10a4:
    result.b = 1
    return result

void* rax = arg3 + 0x1c
void* rdi_1 = &(*rbx)[0xf]

while (true)
    float zmm5 = *arg4
    float zmm0[0x4] = *(rdi_1 - 0x14)
    void* rdx = rax
    zmm6 = arg4[1]
    zmm0[0] = zmm0[0] - zmm5
    zmm7 = arg4[2]
    int32_t r8 = 0
    zmm5 = zmm5 f+ *(rdi_1 - 8)
    int128_t zmm1
    zmm1.d = (*(rdi_1 - 0x10)).d f- zmm6.d
    zmm0[0] = zmm0[0] f- *arg2
    zmm6.d = zmm6.d f+ *(rdi_1 - 4)
    int32_t zmm3 = (zx.o(0)).d
    result = nullptr
    zmm5 = zmm5 f- *arg2
    zmm1.d = zmm1.d f- arg2[1]
    float var_b8 = zmm0[0]
    zmm0 = *(rdi_1 - 0xc)
    zmm6.d = zmm6.d f- arg2[1]
    zmm0[0] = zmm0[0] f- zmm7.d
    float var_a8 = zmm5
    zmm7.d = zmm7.d f+ *rdi_1
    int32_t var_b4_1 = zmm1.d
    int32_t var_a4_1 = zmm6.d
    zmm0[0] = zmm0[0] f- arg2[2]
    zmm7.d = zmm7.d f- arg2[2]
    float var_b0_1 = zmm0[0]
    zmm0 = 0x7f7fffff
    int32_t var_a0_1 = zmm7.d
    
    while (true)
        float zmm2 = zmm0[0]
        int128_t* rcx = &var_b8 + result
        int32_t zmm4 = zmm3
        zmm1 = *rcx
        
        if (*rdx == 0)
            zmm0 = *(rcx + arg3 + 8 - &var_b8)
            zmm1.d = zmm1.d f* zmm0[0]
            zmm0[0] = zmm0[0] f* *(&var_a8 + result)
        else
            if (zmm1.d f> 0f)
                goto label_1416f108a
            
            if (0f f> *(&var_a8 + result))
                goto label_1416f108a
            
            zmm1 = zx.o(0)
            zmm0 = 0x7f7fffff
        
        zmm3 = zmm0[0]
        float temp0_1[0x4] = _mm_max_ss(zmm0[0], zmm1.d)
        int32_t temp0_2 = _mm_min_ss(zmm3, zmm1.d)
        zmm0 = _mm_min_ss(temp0_1[0], zmm2)
        zmm3 = _mm_max_ss(temp0_2, zmm4)
        
        if (zmm3 f> zmm0[0])
            goto label_1416f108a
        
        r8 += 1
        rdx += 1
        result += 4
        
        if (r8 s>= 3)
            if (not(zmm3 f> *(arg3 + 0x14)) && not(zmm0[0] < 0f))
                int64_t* rcx_1 = *arg5
                zmm1 = rbx[1]
                float var_98[0x4] = *rbx
                int64_t var_78_1 = rbx[2][0].q
                int128_t var_88_1 = zmm1
                
                if ((*(*rcx_1 + 0x18))(rcx_1, &var_98, arg3).b == 0)
                    result.b = 0
                    return result
            
        label_1416f108a:
            rbx = &rbx[4]
            rdi_1 += 0x40
            
            if (rbx == rsi_2)
                goto label_1416f10a4
            
            rax = arg3 + 0x1c
            break
