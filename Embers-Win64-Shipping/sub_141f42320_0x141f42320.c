// 函数: sub_141f42320
// 地址: 0x141f42320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0xc)
void* const rax_7

if (rax s>= data_143e1d9b4)
    rax_7 = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax)
    uint32_t rdx_1 = zx.d(temp0_1)
    int32_t rax_2 = temp1_1 + rdx_1
    rax_7 = *(data_143e1d9a0 + (sx.q(rax_2 s>> 0x10) << 3)) + sx.q(zx.d(rax_2.w) - rdx_1) * 0x18

uint64_t result
float var_bc[0x4]
float var_ac[0x4]
float var_9c[0x4]
float var_8c[0x4]
float var_7c[0x4]
float var_6c[0x4]
float var_5c[0x4]
float var_4c[0x4]
uint64_t var_3c

if (((*(rax_7 + 8) u>> 0x1d).b & 1) != 0)
label_141f42608:
    
    if (arg4 != 0)
        memset(&var_bc, 0, 0x88)
        int32_t var_b4_2 = 0x3f800000
        *arg4 = var_bc
        arg4[1] = var_ac
        arg4[2] = var_9c
        arg4[3] = var_8c
        arg4[4] = var_7c
        arg4[5] = var_6c
        arg4[6] = var_5c
        arg4[7] = var_4c
        arg4[8].q = var_3c
    
    result.b = 0
else
    if (*(arg1 + 0x14f) != 2 && (arg1[0x11].b & 1) != 0)
        void* rdi_1 = arg1[0x15]
        
        if (rdi_1 != 0)
        label_141f423bb:
            
            if (sub_14243ade0(rdi_1) != 0 && (*(rdi_1 + 0x11b) & 0x40) != 0
                    && sub_141ee76e0(arg1) == 0)
                result = arg1[0x14]
                
                if (result != 0 && (*(result + 0x5b) & 0x20) != 0)
                    goto label_141f42608
        else
            void* rax_9 = sub_141ee69e0(arg1)
            rdi_1 = rax_9
            
            if (rax_9 != 0)
                goto label_141f423bb
    
    float zmm6[0x4]
    float var_18_1[0x4] = zmm6
    
    if (arg4 != 0)
        memset(&var_bc, 0, 0x88)
        int32_t var_b4_1 = 0x3f800000
        *arg4 = var_bc
        arg4[1] = var_ac
        arg4[2] = var_9c
        arg4[3] = var_8c
        arg4[4] = var_7c
        arg4[5] = var_6c
        arg4[6] = var_5c
        arg4[7] = var_4c
        arg4[8].q = var_3c
    
    float zmm7[0x4]
    
    if ((*(arg1 + 0x14c) & 1) == 0)
        zmm7 = sub_1405c6ac0(arg1, 0, 0)
    
    zmm6 = *arg2
    float var_28_1[0x4] = zmm7
    float zmm1[0x4]
    int32_t zmm4
    int32_t zmm5
    
    if (zmm6[0] != 0f)
    label_141f42547:
        zmm4 = *(arg2 + 4)
        zmm5 = *(arg2 + 8)
    label_141f42551:
        float zmm0[0x4] = *(arg1 + 0x1d0)
        zmm6[0] = zmm6[0] + zmm0[0]
        zmm1 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
        zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0xaa)
        zmm1[0] = zmm1[0] f+ zmm4
        zmm0[0] = zmm0[0] f+ zmm5
        float var_d0_1 = zmm0[0]
        int64_t var_d8 = (_mm_unpacklo_ps(zmm6, zmm1[0].q)).q
        int64_t r8_1
        result, r8_1 = sub_141f40400(arg1, &var_d8, arg3, 0, arg5)
        
        if (result.b != 0 && arg1[0x2f].d s<= 0
                && (data_143a2d7b4 != 1 || (*(arg1 + 0x14c) & 2) == 0))
            r8_1.b = 1
            result = (*(*arg1 + 0x468))(arg1, 0, r8_1, 0)
            *(arg1 + 0x14c) &= 0xfd
            result.b &= 1
            result.b *= 2
            *(arg1 + 0x14c) |= result.b
    else
        zmm4 = *(arg2 + 4)
        
        if (zmm4 f!= 0f)
            goto label_141f42547
        
        zmm5 = *(arg2 + 8)
        
        if (zmm5 f!= 0f)
            goto label_141f42547
        
        zmm7 = *arg3
        float zmm2[0x4] = *(arg1 + 0x1c0)
        zmm1 = _mm_sub_ps(zmm7, zmm2)
        float zmm3[0x4] = _mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0)
        
        if (zx.d(_mm_movemask_ps(_mm_cmpeq_ps(zmm3, __andps_xmmxud_memxud(zmm1, data_143f3b3e0), 
                1))) != 0 && zx.d(_mm_movemask_ps(_mm_cmpeq_ps(zmm3, 
                __andps_xmmxud_memxud(_mm_add_ps(zmm2, zmm7), data_143f3b3e0), 1))) != 0)
            goto label_141f42551
    result.b = 1
return result
