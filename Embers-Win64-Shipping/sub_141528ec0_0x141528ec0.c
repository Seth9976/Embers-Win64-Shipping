// 函数: sub_141528ec0
// 地址: 0x141528ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r11 = arg2
double zmm0 = (*arg3 f- *(arg1 + 0x70)) f* *(arg1 + 0x30)
int32_t rax = int.d(zmm0)
int32_t rcx = rax - 1

if (zmm0 >= 0.0)
    rcx = rax

*arg2 = rcx

if (arg1[0x28].b != 0)
    int32_t r8 = *arg1
    int32_t r8_1
    
    if (rcx s< 0)
        r8_1 = r8 - mods.dp.d(sx.q(r8 - rcx - 1), r8) - 1
    else
        r8_1 = mods.dp.d(sx.q(rcx), r8)
    
    *arg3 = _mm_cvtepi32_pd(zx.q(r8_1 - rcx)).q f* *(arg1 + 0x18) f+ *arg3
    *r11 = r8_1
    goto label_141528f56

if (rcx s>= 0 && rcx s< *arg1)
label_141528f56:
    double zmm1 = *arg4
    zmm0 = (zmm1 f- *(arg1 + 0x80)) f* *(arg1 + 0x38)
    rax = int.d(zmm0)
    int32_t rcx_1 = rax - 1
    
    if (zmm0 >= 0.0)
        rcx_1 = rax
    
    int32_t r9_1
    
    if (*(arg1 + 0xa1) != 0)
        int32_t r9 = arg1[1]
        
        if (rcx_1 s< 0)
            r9_1 = r9 - mods.dp.d(sx.q(r9 - rcx_1 - 1), r9) - 1
        else
            r9_1 = mods.dp.d(sx.q(rcx_1), r9)
        
        *arg4 = _mm_cvtepi32_pd(zx.q(r9_1 - rcx_1)).q f* *(arg1 + 0x20) + zmm1
        goto label_141528fe0
    
    if (rcx_1 s>= 0)
        r9_1 = rcx_1
        
        if (rcx_1 s< arg1[1])
        label_141528fe0:
            zmm1 = *arg5
            zmm0 = (zmm1 f- *(arg1 + 0x90)) f* *(arg1 + 0x40)
            rax = int.d(zmm0)
            int32_t rcx_2 = rax - 1
            
            if (zmm0 >= 0.0)
                rcx_2 = rax
            
            int32_t r8_4
            
            if (*(arg1 + 0xa2) != 0)
                int32_t r8_3 = arg1[2]
                
                if (rcx_2 s< 0)
                    r8_4 = r8_3 - mods.dp.d(sx.q(r8_3 - rcx_2 - 1), r8_3) - 1
                else
                    r8_4 = mods.dp.d(sx.q(rcx_2), r8_3)
                
                *arg5 = _mm_cvtepi32_pd(zx.q(r8_4 - rcx_2)).q f* *(arg1 + 0x28) + zmm1
                goto label_14152906d
            
            if (rcx_2 s>= 0)
                r8_4 = rcx_2
                
                if (rcx_2 s< arg1[2])
                label_14152906d:
                    int32_t rax_32
                    rax_32.b = 1
                    *r11 += arg1[3] * r8_4 + *arg1 * r9_1
                    return rax_32

rax.b = 0
return rax
