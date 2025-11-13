// 函数: sub_141f7d530
// 地址: 0x141f7d530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm2 = arg6
int32_t r11 = 0
uint128_t zmm6
uint128_t var_18 = zmm6
int32_t zmm5 = (zx.o(0)).d
int128_t* rcx_1 = sx.q(((arg4 << 1) + 3).d) & 0xfffffffffffffffc
int128_t zmm8 = *(rcx_1 + arg5 + 4)
int128_t zmm7 = *(rcx_1 + arg5)
void* rcx_2 = rcx_1 + arg5
uint128_t zmm4
zmm4.d = _mm_cvtepi32_ps(zx.o(*arg5)).d f* 1.52590219e-05f
zmm4.d = zmm4.d f* zmm8.d
zmm4.d = zmm4.d f+ zmm7.d
uint32_t result
uint128_t zmm0
uint128_t zmm1
uint128_t zmm3

if (zmm2.d f> zmm4.d)
label_141f7d6cc:
    int64_t r8_1 = sx.q(arg4.d)
    zmm3.d = _mm_cvtepi32_ps(zx.o(arg5[r8_1 - 1])).d f* 1.52590219e-05f
    zmm3.d = zmm3.d f* zmm8.d
    zmm3.d = zmm3.d f+ zmm7.d
    
    if (zmm2.d f< zmm3.d)
    label_141f7d83e:
        int32_t i = arg4.d - 2
        int32_t r11_3 = 1
        
        while (i s> 0)
            int32_t temp0_7
            int32_t temp1_1
            temp0_7:temp1_1 = sx.q(i)
            int32_t i_1 = (temp1_1 - temp0_7) s>> 1
            int32_t r10_1 = i_1 + r11_3
            zmm0.d = _mm_cvtepi32_ps(zx.o(arg5[sx.q(r10_1)])).d f* 1.52590219e-05f
            zmm0.d = zmm0.d f* zmm8.d
            zmm0.d = zmm0.d f+ zmm7.d
            
            if (zmm2.d f< zmm0.d)
                i = i_1
            else
                r11_3 = r10_1 + 1
                i += 0xffffffff - i_1
        
        int64_t rdx_5 = sx.q(r11_3)
        zmm3 = *(rcx_2 + (rdx_5 << 2) + 4)
        zmm1.d = float.s(zx.d(arg5[rdx_5 - 1]))
        result = zx.d(arg5[rdx_5])
        zmm0.d = float.s(result)
        zmm1.d = zmm1.d f* 1.52590219e-05f
        zmm0.d = zmm0.d f* 1.52590219e-05f
        zmm1.d = zmm1.d f* zmm8.d
        zmm0.d = zmm0.d f* zmm8.d
        zmm1.d = zmm1.d f+ zmm7.d
        zmm0.d = zmm0.d f+ zmm7.d
        zmm0.d = zmm0.d f- zmm1.d
        
        if (zmm0.d f<= 0f)
            zmm0 = zmm3
        else
            zmm2.d = zmm2.d f- zmm1.d
            zmm2.d = zmm2.d f/ zmm0.d
            zmm0.d = (*(rcx_2 + (rdx_5 << 2) + 8)).d f- zmm3.d
            zmm0.d = zmm0.d f* zmm2.d
            zmm0.d = zmm0.d f+ zmm3.d
        
        zmm0.d = zmm0.d f+ zmm5
    else
        result = arg3 - 3
        
        if (result u> 1)
            zmm1 = zmm2
            zmm6.d = zmm3.d f- zmm4.d
            
            if (not(zmm2.d f<= zmm3.d))
                zmm1.d = zmm3.d f- zmm2.d
                zmm1.d = zmm1.d f/ zmm6.d
                zmm1.d = zmm1.d f+ zmm1.d
                zmm1.d = zmm1.d f- 0.5f
                r11 = int.d(zmm1.d) s>> 1
                zmm1.d = float.s(r11)
                zmm1.d = zmm1.d f* zmm6.d
                zmm1.d = zmm1.d f+ zmm2.d
            else if (not(zmm2.d f>= zmm4.d))
                zmm1.d = zmm2.d f- zmm4.d
                zmm1.d = zmm1.d f/ zmm6.d
                zmm1.d = zmm1.d f+ zmm1.d
                zmm1.d = zmm1.d f- 0.5f
                r11 = int.d(zmm1.d) s>> 1
                zmm0.d = float.s(r11)
                zmm0.d = zmm0.d f* zmm6.d
                zmm1.d = zmm2.d f- zmm0.d
            
            if (not(zmm1.d f!= zmm3.d) && not(zmm2.d f>= zmm4.d))
                zmm1 = zmm4
            label_141f7d7ea:
                
                if (not(zmm2.d f<= zmm3.d))
                    zmm1 = zmm3
            else if (not(zmm1.d f!= zmm4.d))
                goto label_141f7d7ea
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(r11)
            int32_t rax_16 = (temp5_1 ^ temp4_1) - temp4_1
            
            if (arg3 == 1)
                zmm5 =
                    (*(rcx_2 + (r8_1 << 2) + 4) f- *(rcx_2 + 8)) f* _mm_cvtepi32_ps(zx.o(rax_16)).d
            else if (arg3 == 2)
                int32_t rax_17 = rax_16 & 0x80000001
                
                if (rax_17 s< 0)
                    rax_17 = ((rax_17 - 1) | 0xfffffffe) + 1
                
                if (rax_17 == 1)
                    zmm3.d = zmm3.d f- zmm1.d
                    zmm1.d = zmm3.d f+ zmm4.d
            
            zmm2 = zmm1
            goto label_141f7d83e
        
        zmm4 = *(rcx_2 + (r8_1 << 2) + 4)
        
        if (arg3 == 3)
            result = zx.d(arg5[r8_1 - 2])
            zmm1.d = _mm_cvtepi32_ps(zx.o(result)).d f* 1.52590219e-05f
            zmm1.d = zmm1.d f* zmm8.d
            zmm1.d = zmm1.d f+ zmm7.d
            zmm1.d = zmm1.d f- zmm3.d
            
            if (not(__andps_xmmxud_memxud(zmm1, data_142d3f770).d f<= 9.99999994e-09f))
                zmm2.d = zmm2.d f- zmm3.d
                zmm0.d = (*(rcx_2 + (r8_1 << 2))).d f- zmm4.d
                zmm0.d = zmm0.d f/ zmm1.d
                zmm0.d = zmm0.d f* zmm2.d
                zmm0.d = zmm0.d f+ zmm4.d
else
    result = arg2 - 3
    
    if (result u> 1)
        int64_t r8 = sx.q(arg4.d)
        zmm1 = zmm2
        int32_t rax_3 = 0
        zmm3.d = _mm_cvtepi32_ps(zx.o(arg5[r8 - 1])).d f* 1.52590219e-05f
        zmm3.d = zmm3.d f* zmm8.d
        zmm3.d = zmm3.d f+ zmm7.d
        zmm6.d = zmm3.d f- zmm4.d
        
        if (not(zmm2.d f<= zmm3.d))
            zmm1.d = zmm3.d f- zmm2.d
            zmm1.d = zmm1.d f/ zmm6.d
            zmm1.d = zmm1.d f+ zmm1.d
            zmm1.d = zmm1.d f- 0.5f
            rax_3 = int.d(zmm1.d) s>> 1
            zmm1.d = float.s(rax_3)
            zmm1.d = zmm1.d f* zmm6.d
            zmm1.d = zmm1.d f+ zmm2.d
        else if (not(zmm2.d f>= zmm4.d))
            zmm1.d = zmm2.d f- zmm4.d
            zmm1.d = zmm1.d f/ zmm6.d
            zmm1.d = zmm1.d f+ zmm1.d
            zmm1.d = zmm1.d f- 0.5f
            rax_3 = int.d(zmm1.d) s>> 1
            zmm0.d = float.s(rax_3)
            zmm0.d = zmm0.d f* zmm6.d
            zmm1.d = zmm2.d f- zmm0.d
        
        if (not(zmm1.d f!= zmm3.d) && not(zmm2.d f>= zmm4.d))
            zmm1 = zmm4
        label_141f7d679:
            
            if (not(zmm2.d f<= zmm3.d))
                zmm1 = zmm3
        else if (not(zmm1.d f!= zmm4.d))
            goto label_141f7d679
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rax_3)
        int32_t rax_8 = (temp3_1 ^ temp2_1) - temp2_1
        
        if (arg2 == 1)
            zmm5 = (*(rcx_2 + 8) f- *(rcx_2 + (r8 << 2) + 4)) f* _mm_cvtepi32_ps(zx.o(rax_8)).d
        else if (arg2 == 2)
            int32_t rax_9 = rax_8 & 0x80000001
            
            if (rax_9 s< 0)
                rax_9 = ((rax_9 - 1) | 0xfffffffe) + 1
            
            if (rax_9 == 1)
                zmm3.d = zmm3.d f- zmm1.d
                zmm1.d = zmm3.d f+ zmm4.d
        
        zmm2 = zmm1
        goto label_141f7d6cc
    
    zmm3 = *(rcx_2 + 8)
    
    if (arg2 == 3)
        result = zx.d(arg5[1])
        zmm1.d = _mm_cvtepi32_ps(zx.o(result)).d f* 1.52590219e-05f
        zmm1.d = zmm1.d f* zmm8.d
        zmm1.d = zmm1.d f+ zmm7.d
        zmm1.d = zmm1.d f- zmm4.d
        
        if (not(__andps_xmmxud_memxud(zmm1, data_142d3f770).d f<= 9.99999994e-09f))
            zmm2.d = zmm2.d f- zmm4.d
            zmm0.d = (*(rcx_2 + 0xc)).d f- zmm3.d
            zmm0.d = zmm0.d f/ zmm1.d
            zmm0.d = zmm0.d f* zmm2.d
            zmm0.d = zmm0.d f+ zmm3.d
return result
