// 函数: sub_141f7d1c0
// 地址: 0x141f7d1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm2 = arg6
int32_t rbx = 0
uint128_t zmm6
uint128_t var_18 = zmm6
uint128_t zmm3 = *arg5
int32_t zmm5 = (zx.o(0)).d
void* rcx_1 = sx.q((arg4 << 2).d) + arg5
uint64_t result
uint128_t zmm0
uint128_t zmm1
uint128_t zmm4

if (zmm2.d f> zmm3.d)
label_141f7d2fe:
    int64_t r8_1 = sx.q(arg4.d)
    zmm4 = *(arg5 + (r8_1 << 2) - 4)
    
    if (zmm2.d f< zmm4.d)
    label_141f7d437:
        int32_t i = arg4.d - 2
        int32_t result_1 = 1
        
        while (i s> 0)
            int32_t temp0_4
            int32_t temp1_1
            temp0_4:temp1_1 = sx.q(i)
            int32_t i_1 = (temp1_1 - temp0_4) s>> 1
            int32_t r8_2 = i_1 + result_1
            
            if (zmm2.d f< *(arg5 + (sx.q(r8_2) << 2)))
                i = i_1
            else
                result_1 = r8_2 + 1
                i += 0xffffffff - i_1
        
        result = sx.q(result_1)
        zmm3 = *(arg5 + (result << 2) - 4)
        zmm1 = *(rcx_1 + (result << 2) - 4)
        zmm0.d = (*(arg5 + (result << 2))).d f- zmm3.d
        
        if (zmm0.d f<= 0f)
            zmm0 = zmm1
        else
            zmm2.d = zmm2.d f- zmm3.d
            zmm2.d = zmm2.d f/ zmm0.d
            zmm0.d = (*(rcx_1 + (result << 2))).d f- zmm1.d
            zmm0.d = zmm0.d f* zmm2.d
            zmm0.d = zmm0.d f+ zmm1.d
        
        zmm0.d = zmm0.d f+ zmm5
    else
        result = zx.q(arg3 - 3)
        
        if (result.d u> 1)
            zmm1 = zmm2
            zmm6.d = zmm4.d f- zmm3.d
            
            if (not(zmm2.d f<= zmm4.d))
                zmm1.d = zmm4.d f- zmm2.d
                zmm1.d = zmm1.d f/ zmm6.d
                zmm1.d = zmm1.d f+ zmm1.d
                zmm1.d = zmm1.d f- 0.5f
                rbx = int.d(zmm1.d) s>> 1
                zmm1.d = float.s(rbx)
                zmm1.d = zmm1.d f* zmm6.d
                zmm1.d = zmm1.d f+ zmm2.d
            else if (not(zmm2.d f>= zmm3.d))
                zmm1.d = zmm2.d f- zmm3.d
                zmm1.d = zmm1.d f/ zmm6.d
                zmm1.d = zmm1.d f+ zmm1.d
                zmm1.d = zmm1.d f- 0.5f
                rbx = int.d(zmm1.d) s>> 1
                zmm0.d = float.s(rbx)
                zmm0.d = zmm0.d f* zmm6.d
                zmm1.d = zmm2.d f- zmm0.d
            
            if (not(zmm1.d f!= zmm4.d) && not(zmm2.d f>= zmm3.d))
                zmm1 = zmm3
            label_141f7d3e5:
                
                if (not(zmm2.d f<= zmm4.d))
                    zmm1 = zmm4
            else if (not(zmm1.d f!= zmm3.d))
                goto label_141f7d3e5
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(rbx)
            int32_t rax_13 = (temp5_1 ^ temp4_1) - temp4_1
            
            if (arg3 == 1)
                zmm5 = (*(rcx_1 + (r8_1 << 2) - 4) f- *rcx_1) f* _mm_cvtepi32_ps(zx.o(rax_13)).d
            else if (arg3 == 2)
                int32_t rax_14 = rax_13 & 0x80000001
                
                if (rax_14 s< 0)
                    rax_14 = ((rax_14 - 1) | 0xfffffffe) + 1
                
                if (rax_14 == 1)
                    zmm4.d = zmm4.d f- zmm1.d
                    zmm1.d = zmm4.d f+ zmm3.d
            
            zmm2 = zmm1
            goto label_141f7d437
        
        zmm1 = *(rcx_1 + (r8_1 << 2) - 4)
        
        if (arg3 == 3)
            zmm3.d = (*(arg5 + (r8_1 << 2) - 8)).d f- zmm4.d
            
            if (not(__andps_xmmxud_memxud(zmm3, data_142d3f770).d f<= 9.99999994e-09f))
                zmm2.d = zmm2.d f- zmm4.d
                zmm0.d = (*(rcx_1 + (r8_1 << 2) - 8)).d f- zmm1.d
                zmm0.d = zmm0.d f/ zmm3.d
                zmm0.d = zmm0.d f* zmm2.d
                zmm0.d = zmm0.d f+ zmm1.d
else
    result = zx.q(arg2 - 3)
    
    if (result.d u> 1)
        int64_t r8 = sx.q(arg4.d)
        zmm1 = zmm2
        int32_t rax_1 = 0
        zmm4 = *(arg5 + (r8 << 2) - 4)
        zmm6.d = zmm4.d f- zmm3.d
        
        if (not(zmm2.d f<= zmm4.d))
            zmm1.d = zmm4.d f- zmm2.d
            zmm1.d = zmm1.d f/ zmm6.d
            zmm1.d = zmm1.d f+ zmm1.d
            zmm1.d = zmm1.d f- 0.5f
            rax_1 = int.d(zmm1.d) s>> 1
            zmm1.d = float.s(rax_1)
            zmm1.d = zmm1.d f* zmm6.d
            zmm1.d = zmm1.d f+ zmm2.d
        else if (not(zmm2.d f>= zmm3.d))
            zmm1.d = zmm2.d f- zmm3.d
            zmm1.d = zmm1.d f/ zmm6.d
            zmm1.d = zmm1.d f+ zmm1.d
            zmm1.d = zmm1.d f- 0.5f
            rax_1 = int.d(zmm1.d) s>> 1
            zmm0.d = float.s(rax_1)
            zmm0.d = zmm0.d f* zmm6.d
            zmm1.d = zmm2.d f- zmm0.d
        
        if (not(zmm1.d f!= zmm4.d) && not(zmm2.d f>= zmm3.d))
            zmm1 = zmm3
        label_141f7d2ac:
            
            if (not(zmm2.d f<= zmm4.d))
                zmm1 = zmm4
        else if (not(zmm1.d f!= zmm3.d))
            goto label_141f7d2ac
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rax_1)
        int32_t rax_6 = (temp3_1 ^ temp2_1) - temp2_1
        
        if (arg2 == 1)
            zmm5 = (*rcx_1 f- *(rcx_1 + (r8 << 2) - 4)) f* _mm_cvtepi32_ps(zx.o(rax_6)).d
        else if (arg2 == 2)
            int32_t rax_7 = rax_6 & 0x80000001
            
            if (rax_7 s< 0)
                rax_7 = ((rax_7 - 1) | 0xfffffffe) + 1
            
            if (rax_7 == 1)
                zmm4.d = zmm4.d f- zmm1.d
                zmm1.d = zmm4.d f+ zmm3.d
        
        zmm2 = zmm1
        goto label_141f7d2fe
    
    zmm1 = *rcx_1
    
    if (arg2 == 3)
        zmm4.d = (*(arg5 + 4)).d f- zmm3.d
        
        if (not(__andps_xmmxud_memxud(zmm4, data_142d3f770).d f<= 9.99999994e-09f))
            zmm2.d = zmm2.d f- zmm3.d
            zmm0.d = (*(rcx_1 + 4)).d f- zmm1.d
            zmm0.d = zmm0.d f/ zmm4.d
            zmm0.d = zmm0.d f* zmm2.d
            zmm0.d = zmm0.d f+ zmm1.d
return result
