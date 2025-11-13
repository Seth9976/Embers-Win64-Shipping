// 函数: sub_1427965f0
// 地址: 0x1427965f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)
int32_t* rdx_2

if (*(arg1 + 0x98) == *(arg1 + 0xc4))
label_14279666d:
    rdx_2 = nullptr
else
    void* r11_1 = arg1 + 0xc8
    void* r9_1 = *(r11_1 + 8)
    
    if (r9_1 != 0)
        r11_1 = r9_1
    
    int32_t rax_1 = *(r11_1 + (((sx.q(*(arg1 + 0xd8)) - 1) & rdi) << 2))
    
    if (rax_1 == 0xffffffff)
    label_14279666d_1:
        rdx_2 = nullptr
    else
        while (true)
            rdx_2 = (sx.q(rax_1) << 4) + *(arg1 + 0x90)
            
            if (*rdx_2 == rdi.d)
                break
            
            rax_1 = rdx_2[2]
            
            if (rax_1 == 0xffffffff)
                goto label_14279666d_2
        
        if (rax_1 == 0xffffffff)
        label_14279666d_2:
            rdx_2 = nullptr

uint32_t zmm0[0x4] = arg3[1]
int64_t r8_1 = sx.q(rdx_2[1])
uint32_t zmm6[0x4]
uint32_t var_18[0x4] = zmm6
int128_t* rcx_2 = r8_1 * 0x30 + *(arg1 + 0x130)
int96_t var_28 = zmm0[0].12
uint32_t zmm1[0x4] = rcx_2[1]
int96_t var_38 = zmm1[0].12
zmm1[0] = zmm1[0] f- zmm0[0]
char* result
float zmm4[0x4]

if (_mm_and_ps(zmm1, 0x7fffffff)[0] f> 9.99999994e-09f)
label_14279677f:
    zmm4 = *arg3
label_142796782:
    *rcx_2 = zmm4
    rcx_2[1] = arg3[1]
    rcx_2[2] = arg3[2]
    result = *(arg1 + 0x160)
    result[r8_1] |= 1
else
    zmm0 = var_38:4.d
    zmm0[0] = zmm0[0] f- var_28:4.d
    
    if (_mm_and_ps(zmm0, 0x7fffffff)[0] f> 9.99999994e-09f)
        goto label_14279677f
    
    zmm0 = var_38:8.d
    zmm0[0] = zmm0[0] f- var_28:8.d
    
    if (_mm_and_ps(zmm0, 0x7fffffff)[0] f> 9.99999994e-09f)
        goto label_14279677f
    
    zmm6 = *rcx_2
    zmm4 = *arg3
    zmm1 = _mm_sub_ps(zmm6, zmm4)
    float temp0_4[0x4] = _mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0)
    result =
        zx.q(_mm_movemask_ps(_mm_cmpeq_ps(temp0_4, __andps_xmmxud_memxud(zmm1, data_143f88580), 1)))
    
    if (result.d != 0)
        result = zx.q(_mm_movemask_ps(_mm_cmpeq_ps(temp0_4, 
            __andps_xmmxud_memxud(_mm_add_ps(zmm4, zmm6), data_143f88580), 1)))
        
        if (result.d != 0)
            goto label_142796782
    
    zmm1 = rcx_2[2]
    zmm0 = arg3[2]
    int96_t var_28_1 = zmm1[0].12
    zmm1[0] = zmm1[0] f- zmm0[0]
    int96_t var_38_1 = zmm0[0].12
    
    if (_mm_and_ps(zmm1, 0x7fffffff)[0] f> 9.99999994e-09f)
        goto label_142796782
    
    zmm0 = var_28_1:4.d
    zmm0[0] = zmm0[0] f- var_38_1:4.d
    
    if (_mm_and_ps(zmm0, 0x7fffffff)[0] f> 9.99999994e-09f)
        goto label_142796782
    
    zmm0 = var_28_1:8.d
    zmm0[0] = zmm0[0] f- var_38_1:8.d
    
    if (not(_mm_and_ps(zmm0, 0x7fffffff)[0] f<= 9.99999994e-09f))
        goto label_142796782
return result
