// 函数: sub_141f7e000
// 地址: 0x141f7e000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm4 = arg6
int32_t r10 = 0
uint128_t zmm6
uint128_t var_18 = zmm6
uint128_t zmm2 = *arg5
int32_t zmm5 = (zx.o(0)).d
void* rcx_1 = sx.q((arg4 << 2).d) + arg5
uint32_t result
uint128_t zmm0
uint128_t zmm1
uint128_t zmm3

if (zmm4.d f> zmm2.d)
label_141f7e147:
    int64_t r8_2 = sx.q(arg4.d)
    zmm3 = *(arg5 + (r8_2 << 2) - 4)
    
    if (zmm4.d f< zmm3.d)
    label_141f7e290:
        int32_t i = arg4.d - 2
        uint64_t r10_3 = 1
        
        while (i s> 0)
            int32_t temp0_4
            int32_t temp1_1
            temp0_4:temp1_1 = sx.q(i)
            int32_t i_1 = (temp1_1 - temp0_4) s>> 1
            int32_t r8_5 = i_1 + r10_3.d
            
            if (zmm4.d f< *(arg5 + (sx.q(r8_5) << 2)))
                i = i_1
            else
                r10_3 = zx.q(r8_5 + 1)
                i += 0xffffffff - i_1
        
        int64_t rax_22 = sx.q(r10_3.d)
        zmm0 = *(arg5 + (rax_22 << 2) - 4)
        result = (r10_3 * 3).d
        zmm1.d = (*(arg5 + (rax_22 << 2))).d f- zmm0.d
        int64_t result_1 = sx.q(result)
        zmm2 = *(rcx_1 + (result_1 << 2) - 0xc)
        
        if (zmm1.d f<= 0f)
            zmm6 = zmm2
        else
            zmm6 = *(rcx_1 + (result_1 << 2))
            zmm4.d = zmm4.d f- zmm0.d
            zmm4.d = zmm4.d f/ zmm1.d
            zmm1.d = zmm1.d f* 0.333333343f
            zmm0 = zmm1
            zmm1.d = zmm1.d f* *(rcx_1 + (result_1 << 2) - 4)
            zmm0.d = zmm0.d f* *(rcx_1 + (result_1 << 2) + 4)
            zmm1.d = zmm1.d f+ zmm2.d
            zmm3.d = zmm6.d f- zmm0.d
            zmm0.d = zmm1.d f- zmm2.d
            zmm6.d = zmm6.d f- zmm3.d
            zmm0.d = zmm0.d f* zmm4.d
            zmm6.d = zmm6.d f* zmm4.d
            zmm0.d = zmm0.d f+ zmm2.d
            zmm2.d = zmm3.d f- zmm1.d
            zmm6.d = zmm6.d f+ zmm3.d
            zmm2.d = zmm2.d f* zmm4.d
            zmm2.d = zmm2.d f+ zmm1.d
            zmm6.d = zmm6.d f- zmm2.d
            zmm1.d = zmm2.d f- zmm0.d
            zmm6.d = zmm6.d f* zmm4.d
            zmm1.d = zmm1.d f* zmm4.d
            zmm6.d = zmm6.d f+ zmm2.d
            zmm1.d = zmm1.d f+ zmm0.d
            zmm6.d = zmm6.d f- zmm1.d
            zmm6.d = zmm6.d f* zmm4.d
            zmm6.d = zmm6.d f+ zmm1.d
        
        zmm6.d = zmm6.d f+ zmm5
    else
        if (arg3 - 3 u> 1)
            zmm1 = zmm4
            zmm6.d = zmm3.d f- zmm2.d
            
            if (not(zmm4.d f<= zmm3.d))
                zmm1.d = zmm3.d f- zmm4.d
                zmm1.d = zmm1.d f/ zmm6.d
                zmm1.d = zmm1.d f+ zmm1.d
                zmm1.d = zmm1.d f- 0.5f
                r10 = int.d(zmm1.d) s>> 1
                zmm1.d = float.s(r10)
                zmm1.d = zmm1.d f* zmm6.d
                zmm1.d = zmm1.d f+ zmm4.d
            else if (not(zmm4.d f>= zmm2.d))
                zmm1.d = zmm4.d f- zmm2.d
                zmm1.d = zmm1.d f/ zmm6.d
                zmm1.d = zmm1.d f+ zmm1.d
                zmm1.d = zmm1.d f- 0.5f
                r10 = int.d(zmm1.d) s>> 1
                zmm0.d = float.s(r10)
                zmm0.d = zmm0.d f* zmm6.d
                zmm1.d = zmm4.d f- zmm0.d
            
            if (not(zmm1.d f!= zmm3.d) && not(zmm4.d f>= zmm2.d))
                zmm1 = zmm2
            label_141f7e237:
                
                if (not(zmm4.d f<= zmm3.d))
                    zmm1 = zmm3
            else if (not(zmm1.d f!= zmm2.d))
                goto label_141f7e237
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(r10)
            int32_t rax_15 = (temp5_1 ^ temp4_1) - temp4_1
            
            if (arg3 == 1)
                zmm0 = _mm_cvtepi32_ps(zx.o(rax_15))
                zmm5 = (*(rcx_1 + (sx.q((arg4 - 1).d * 3) << 2)) f- *rcx_1) f* zmm0.d
            else if (arg3 == 2)
                int32_t rax_16 = rax_15 & 0x80000001
                
                if (rax_16 s< 0)
                    rax_16 = ((rax_16 - 1) | 0xfffffffe) + 1
                
                if (rax_16 == 1)
                    zmm3.d = zmm3.d f- zmm1.d
                    zmm1.d = zmm3.d f+ zmm2.d
            
            zmm4 = zmm1
            goto label_141f7e290
        
        result = (arg4 * 3).d
        zmm1 = *(rcx_1 + (sx.q(result) << 2) - 0xc)
        
        if (arg3 == 3)
            zmm2.d = (*(arg5 + (r8_2 << 2) - 8)).d f- zmm3.d
            
            if (not(__andps_xmmxud_memxud(zmm2, data_142d3f770).d f<= 9.99999994e-09f))
                zmm4.d = zmm4.d f- zmm3.d
                result = (arg4.d - 2) * 3
                zmm0.d = (*(rcx_1 + (sx.q(result) << 2))).d f- zmm1.d
                zmm0.d = zmm0.d f/ zmm2.d
                zmm0.d = zmm0.d f* zmm4.d
                zmm0.d = zmm0.d f+ zmm1.d
else
    result = arg2 - 3
    
    if (result u> 1)
        zmm1 = zmm4
        zmm3 = *(arg5 + (sx.q(arg4.d) << 2) - 4)
        int32_t rax_2 = 0
        zmm6.d = zmm3.d f- zmm2.d
        
        if (not(zmm4.d f<= zmm3.d))
            zmm1.d = zmm3.d f- zmm4.d
            zmm1.d = zmm1.d f/ zmm6.d
            zmm1.d = zmm1.d f+ zmm1.d
            zmm1.d = zmm1.d f- 0.5f
            rax_2 = int.d(zmm1.d) s>> 1
            zmm1.d = float.s(rax_2)
            zmm1.d = zmm1.d f* zmm6.d
            zmm1.d = zmm1.d f+ zmm4.d
        else if (not(zmm4.d f>= zmm2.d))
            zmm1.d = zmm4.d f- zmm2.d
            zmm1.d = zmm1.d f/ zmm6.d
            zmm1.d = zmm1.d f+ zmm1.d
            zmm1.d = zmm1.d f- 0.5f
            rax_2 = int.d(zmm1.d) s>> 1
            zmm0.d = float.s(rax_2)
            zmm0.d = zmm0.d f* zmm6.d
            zmm1.d = zmm4.d f- zmm0.d
        
        if (not(zmm1.d f!= zmm3.d) && not(zmm4.d f>= zmm2.d))
            zmm1 = zmm2
        label_141f7e0f1:
            
            if (not(zmm4.d f<= zmm3.d))
                zmm1 = zmm3
        else if (not(zmm1.d f!= zmm2.d))
            goto label_141f7e0f1
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rax_2)
        int32_t rax_7 = (temp3_1 ^ temp2_1) - temp2_1
        
        if (arg2 == 1)
            zmm5 = *rcx_1
            zmm0 = _mm_cvtepi32_ps(zx.o(rax_7))
            zmm5 = (zmm5 f- *(rcx_1 + (sx.q((arg4 - 1).d * 3) << 2))) f* zmm0.d
        else if (arg2 == 2)
            int32_t rax_8 = rax_7 & 0x80000001
            
            if (rax_8 s< 0)
                rax_8 = ((rax_8 - 1) | 0xfffffffe) + 1
            
            if (rax_8 == 1)
                zmm3.d = zmm3.d f- zmm1.d
                zmm1.d = zmm3.d f+ zmm2.d
        
        zmm4 = zmm1
        goto label_141f7e147
    
    zmm1 = *rcx_1
    
    if (arg2 == 3)
        zmm3.d = (*(arg5 + 4)).d f- zmm2.d
        
        if (not(__andps_xmmxud_memxud(zmm3, data_142d3f770).d f<= 9.99999994e-09f))
            zmm4.d = zmm4.d f- zmm2.d
            zmm0.d = (*(rcx_1 + 0xc)).d f- zmm1.d
            zmm0.d = zmm0.d f/ zmm3.d
            zmm0.d = zmm0.d f* zmm4.d
            zmm0.d = zmm0.d f+ zmm1.d
return result
