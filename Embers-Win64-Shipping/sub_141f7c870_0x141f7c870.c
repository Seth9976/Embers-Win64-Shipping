// 函数: sub_141f7c870
// 地址: 0x141f7c870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm4 = arg6
int32_t r10 = 0
int128_t zmm6 = zx.o(0)
int128_t* rcx_1 = sx.q(((arg4 << 1) + 3).d) & 0xfffffffffffffffc
uint128_t zmm9
uint128_t var_48 = zmm9
int128_t zmm7 = *(rcx_1 + arg5 + 4)
uint128_t zmm5 = *(rcx_1 + arg5)
void* rcx_2 = rcx_1 + arg5
uint128_t zmm3
zmm3.d = _mm_cvtepi32_ps(zx.o(*arg5)).d f* 1.52590219e-05f
zmm3.d = zmm3.d f* zmm7.d
zmm3.d = zmm3.d f+ zmm5.d
uint32_t result
uint128_t zmm0
uint128_t zmm1
uint128_t zmm2

if (zmm4.d f> zmm3.d)
label_141f7ca19:
    int64_t r8_2 = sx.q(arg4.d)
    zmm2.d = _mm_cvtepi32_ps(zx.o(arg5[r8_2 - 1])).d f* 1.52590219e-05f
    zmm2.d = zmm2.d f* zmm7.d
    zmm2.d = zmm2.d f+ zmm5.d
    
    if (zmm4.d f< zmm2.d)
    label_141f7cb9a:
        int32_t i = arg4.d - 2
        uint64_t r11_1 = 1
        
        while (i s> 0)
            int32_t temp0_7
            int32_t temp1_1
            temp0_7:temp1_1 = sx.q(i)
            int32_t i_1 = (temp1_1 - temp0_7) s>> 1
            int32_t r10_3 = i_1 + r11_1.d
            zmm0.d = _mm_cvtepi32_ps(zx.o(arg5[sx.q(r10_3)])).d f* 1.52590219e-05f
            zmm0.d = zmm0.d f* zmm7.d
            zmm0.d = zmm0.d f+ zmm5.d
            
            if (zmm4.d f< zmm0.d)
                i = i_1
            else
                r11_1 = zx.q(r10_3 + 1)
                i += 0xffffffff - i_1
        
        int64_t rdx_10 = sx.q(r11_1.d)
        zmm0.d = float.s(zx.d(arg5[rdx_10 - 1]))
        zmm1.d = float.s(zx.d(arg5[rdx_10]))
        result = (r11_1 * 3).d
        int64_t result_1 = sx.q(result)
        zmm0.d = zmm0.d f* 1.52590219e-05f
        zmm2 = *(rcx_2 + (result_1 << 2) - 4)
        zmm1.d = zmm1.d f* 1.52590219e-05f
        zmm0.d = zmm0.d f* zmm7.d
        zmm1.d = zmm1.d f* zmm7.d
        zmm0.d = zmm0.d f+ zmm5.d
        zmm1.d = zmm1.d f+ zmm5.d
        zmm1.d = zmm1.d f- zmm0.d
        
        if (zmm1.d f<= 0f)
            zmm5 = zmm2
        else
            zmm5 = *(rcx_2 + (result_1 << 2) + 8)
            zmm4.d = zmm4.d f- zmm0.d
            zmm4.d = zmm4.d f/ zmm1.d
            zmm1.d = zmm1.d f* 0.333333343f
            zmm0 = zmm1
            zmm1.d = zmm1.d f* *(rcx_2 + (result_1 << 2) + 4)
            zmm0.d = zmm0.d f* *(rcx_2 + (result_1 << 2) + 0xc)
            zmm1.d = zmm1.d f+ zmm2.d
            zmm3.d = zmm5.d f- zmm0.d
            zmm0.d = zmm1.d f- zmm2.d
            zmm5.d = zmm5.d f- zmm3.d
            zmm0.d = zmm0.d f* zmm4.d
            zmm5.d = zmm5.d f* zmm4.d
            zmm0.d = zmm0.d f+ zmm2.d
            zmm2.d = zmm3.d f- zmm1.d
            zmm5.d = zmm5.d f+ zmm3.d
            zmm2.d = zmm2.d f* zmm4.d
            zmm2.d = zmm2.d f+ zmm1.d
            zmm5.d = zmm5.d f- zmm2.d
            zmm1.d = zmm2.d f- zmm0.d
            zmm5.d = zmm5.d f* zmm4.d
            zmm1.d = zmm1.d f* zmm4.d
            zmm5.d = zmm5.d f+ zmm2.d
            zmm1.d = zmm1.d f+ zmm0.d
            zmm5.d = zmm5.d f- zmm1.d
            zmm5.d = zmm5.d f* zmm4.d
            zmm5.d = zmm5.d f+ zmm1.d
        
        zmm5.d = zmm5.d f+ zmm6.d
    else
        if (arg3 - 3 u> 1)
            zmm1 = zmm4
            zmm9.d = zmm2.d f- zmm3.d
            
            if (not(zmm4.d f<= zmm2.d))
                zmm1.d = zmm2.d f- zmm4.d
                zmm1.d = zmm1.d f/ zmm9.d
                zmm1.d = zmm1.d f+ zmm1.d
                zmm1.d = zmm1.d f- 0.5f
                r10 = int.d(zmm1.d) s>> 1
                zmm1.d = float.s(r10)
                zmm1.d = zmm1.d f* zmm9.d
                zmm1.d = zmm1.d f+ zmm4.d
            else if (not(zmm4.d f>= zmm3.d))
                zmm1.d = zmm4.d f- zmm3.d
                zmm1.d = zmm1.d f/ zmm9.d
                zmm1.d = zmm1.d f+ zmm1.d
                zmm1.d = zmm1.d f- 0.5f
                r10 = int.d(zmm1.d) s>> 1
                zmm0.d = float.s(r10)
                zmm0.d = zmm0.d f* zmm9.d
                zmm1.d = zmm4.d f- zmm0.d
            
            if (not(zmm1.d f!= zmm2.d) && not(zmm4.d f>= zmm3.d))
                zmm1 = zmm3
            label_141f7cb3f:
                
                if (not(zmm4.d f<= zmm2.d))
                    zmm1 = zmm2
            else if (not(zmm1.d f!= zmm3.d))
                goto label_141f7cb3f
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(r10)
            int32_t rax_17 = (temp5_1 ^ temp4_1) - temp4_1
            
            if (arg3 == 1)
                zmm0 = _mm_cvtepi32_ps(zx.o(rax_17))
                zmm6.d = (*(rcx_2 + (sx.q((arg4 - 1).d * 3) << 2) + 8)).d f- *(rcx_2 + 8)
                zmm6.d = zmm6.d f* zmm0.d
            else if (arg3 == 2)
                int32_t rax_18 = rax_17 & 0x80000001
                
                if (rax_18 s< 0)
                    rax_18 = ((rax_18 - 1) | 0xfffffffe) + 1
                
                if (rax_18 == 1)
                    zmm2.d = zmm2.d f- zmm1.d
                    zmm1.d = zmm2.d f+ zmm3.d
            
            zmm4 = zmm1
            goto label_141f7cb9a
        
        result = (arg4 * 3).d
        zmm3 = *(rcx_2 + (sx.q(result) << 2) - 4)
        
        if (arg3 == 3)
            result = zx.d(arg5[r8_2 - 2])
            zmm1.d = _mm_cvtepi32_ps(zx.o(result)).d f* 1.52590219e-05f
            zmm1.d = zmm1.d f* zmm7.d
            zmm1.d = zmm1.d f+ zmm5.d
            zmm1.d = zmm1.d f- zmm2.d
            
            if (not(__andps_xmmxud_memxud(zmm1, data_142d3f770).d f<= 9.99999994e-09f))
                zmm4.d = zmm4.d f- zmm2.d
                result = (arg4.d - 2) * 3
                zmm0.d = (*(rcx_2 + (sx.q(result) << 2) + 8)).d f- zmm3.d
                zmm0.d = zmm0.d f/ zmm1.d
                zmm0.d = zmm0.d f* zmm4.d
                zmm0.d = zmm0.d f+ zmm3.d
else
    result = arg2 - 3
    
    if (result u> 1)
        zmm1 = zmm4
        int32_t rax_3 = 0
        zmm2.d = _mm_cvtepi32_ps(zx.o(arg5[sx.q(arg4.d) - 1])).d f* 1.52590219e-05f
        zmm2.d = zmm2.d f* zmm7.d
        zmm2.d = zmm2.d f+ zmm5.d
        zmm9.d = zmm2.d f- zmm3.d
        
        if (not(zmm4.d f<= zmm2.d))
            zmm1.d = zmm2.d f- zmm4.d
            zmm1.d = zmm1.d f/ zmm9.d
            zmm1.d = zmm1.d f+ zmm1.d
            zmm1.d = zmm1.d f- 0.5f
            rax_3 = int.d(zmm1.d) s>> 1
            zmm1.d = float.s(rax_3)
            zmm1.d = zmm1.d f* zmm9.d
            zmm1.d = zmm1.d f+ zmm4.d
        else if (not(zmm4.d f>= zmm3.d))
            zmm1.d = zmm4.d f- zmm3.d
            zmm1.d = zmm1.d f/ zmm9.d
            zmm1.d = zmm1.d f+ zmm1.d
            zmm1.d = zmm1.d f- 0.5f
            rax_3 = int.d(zmm1.d) s>> 1
            zmm0.d = float.s(rax_3)
            zmm0.d = zmm0.d f* zmm9.d
            zmm1.d = zmm4.d f- zmm0.d
        
        if (not(zmm1.d f!= zmm2.d) && not(zmm4.d f>= zmm3.d))
            zmm1 = zmm3
        label_141f7c9bf:
            
            if (not(zmm4.d f<= zmm2.d))
                zmm1 = zmm2
        else if (not(zmm1.d f!= zmm3.d))
            goto label_141f7c9bf
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rax_3)
        int32_t rax_8 = (temp3_1 ^ temp2_1) - temp2_1
        
        if (arg2 == 1)
            zmm6 = *(rcx_2 + 8)
            zmm0 = _mm_cvtepi32_ps(zx.o(rax_8))
            zmm6.d = zmm6.d f- *(rcx_2 + (sx.q((arg4 - 1).d * 3) << 2) + 8)
            zmm6.d = zmm6.d f* zmm0.d
        else if (arg2 == 2)
            int32_t rax_9 = rax_8 & 0x80000001
            
            if (rax_9 s< 0)
                rax_9 = ((rax_9 - 1) | 0xfffffffe) + 1
            
            if (rax_9 == 1)
                zmm2.d = zmm2.d f- zmm1.d
                zmm1.d = zmm2.d f+ zmm3.d
        
        zmm4 = zmm1
        goto label_141f7ca19
    
    zmm2 = *(rcx_2 + 8)
    
    if (arg2 == 3)
        result = zx.d(arg5[1])
        zmm1.d = _mm_cvtepi32_ps(zx.o(result)).d f* 1.52590219e-05f
        zmm1.d = zmm1.d f* zmm7.d
        zmm1.d = zmm1.d f+ zmm5.d
        zmm1.d = zmm1.d f- zmm3.d
        
        if (not(__andps_xmmxud_memxud(zmm1, data_142d3f770).d f<= 9.99999994e-09f))
            zmm4.d = zmm4.d f- zmm3.d
            zmm0.d = (*(rcx_2 + 0x14)).d f- zmm2.d
            zmm0.d = zmm0.d f/ zmm1.d
            zmm0.d = zmm0.d f* zmm4.d
            zmm0.d = zmm0.d f+ zmm2.d
return result
