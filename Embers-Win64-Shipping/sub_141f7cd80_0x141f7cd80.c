// 函数: sub_141f7cd80
// 地址: 0x141f7cd80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm4 = arg6
int32_t rax_1 = (arg4 + 3).d & 0xfffffffc
int32_t r8 = 0
int128_t* r10_1 = sx.q(rax_1) + arg5
int128_t* r11_1 = sx.q(rax_1 + (arg4 << 2).d) + arg5
uint128_t zmm2 = *r10_1
int128_t zmm6 = zx.o(0)
uint32_t result
uint128_t zmm0
uint128_t zmm1
uint128_t zmm3
uint128_t zmm5

if (zmm4.d f> zmm2.d)
label_141f7ced3:
    int64_t rdx_2 = sx.q(arg4.d)
    zmm3 = *(r10_1 + (rdx_2 << 2) - 4)
    
    if (zmm4.d f< zmm3.d)
    label_141f7d01c:
        int32_t i = arg4.d - 2
        uint64_t r8_3 = 1
        
        while (i s> 0)
            int32_t temp0_4
            int32_t temp1_1
            temp0_4:temp1_1 = sx.q(i)
            int32_t i_1 = (temp1_1 - temp0_4) s>> 1
            int32_t rdx_6 = i_1 + r8_3.d
            
            if (zmm4.d f< *(r10_1 + (sx.q(rdx_6) << 2)))
                i = i_1
            else
                r8_3 = zx.q(rdx_6 + 1)
                i += 0xffffffff - i_1
        
        int64_t rcx_6 = sx.q(r8_3.d)
        int64_t rdx_7 = sx.q((r8_3 * 3).d)
        zmm0 = *(r10_1 + (rcx_6 << 2) - 4)
        zmm2 = *(r11_1 + (rdx_7 << 2) - 0xc)
        zmm1.d = (*(r10_1 + (rcx_6 << 2))).d f- zmm0.d
        result = zx.d(*(rcx_6 + arg5 - 1))
        
        if (zmm1.d f<= 0f || result.b == 1)
            zmm5 = zmm2
        else
            zmm5 = *(r11_1 + (rdx_7 << 2))
            zmm4.d = zmm4.d f- zmm0.d
            zmm4.d = zmm4.d f/ zmm1.d
            
            if (result.b != 2)
                zmm1.d = zmm1.d f* 0.333333343f
                zmm0 = zmm1
                zmm1.d = zmm1.d f* *(r11_1 + (rdx_7 << 2) - 4)
                zmm0.d = zmm0.d f* *(r11_1 + (rdx_7 << 2) + 4)
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
            else
                zmm5.d = zmm5.d f- zmm2.d
                zmm5.d = zmm5.d f* zmm4.d
                zmm5.d = zmm5.d f+ zmm2.d
        
        zmm5.d = zmm5.d f+ zmm6.d
    else
        if (arg3 - 3 u> 1)
            zmm1 = zmm4
            zmm5.d = zmm3.d f- zmm2.d
            
            if (not(zmm4.d f<= zmm3.d))
                zmm1.d = zmm3.d f- zmm4.d
                zmm1.d = zmm1.d f/ zmm5.d
                zmm1.d = zmm1.d f+ zmm1.d
                zmm1.d = zmm1.d f- 0.5f
                r8 = int.d(zmm1.d) s>> 1
                zmm1.d = float.s(r8)
                zmm1.d = zmm1.d f* zmm5.d
                zmm1.d = zmm1.d f+ zmm4.d
            else if (not(zmm4.d f>= zmm2.d))
                zmm1.d = zmm4.d f- zmm2.d
                zmm1.d = zmm1.d f/ zmm5.d
                zmm1.d = zmm1.d f+ zmm1.d
                zmm1.d = zmm1.d f- 0.5f
                r8 = int.d(zmm1.d) s>> 1
                zmm0.d = float.s(r8)
                zmm0.d = zmm0.d f* zmm5.d
                zmm1.d = zmm4.d f- zmm0.d
            
            if (not(zmm1.d f!= zmm3.d) && not(zmm4.d f>= zmm2.d))
                zmm1 = zmm2
            label_141f7cfc1:
                
                if (not(zmm4.d f<= zmm3.d))
                    zmm1 = zmm3
            else if (not(zmm1.d f!= zmm2.d))
                goto label_141f7cfc1
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(r8)
            int32_t rax_17 = (temp5_1 ^ temp4_1) - temp4_1
            
            if (arg3 == 1)
                zmm0 = _mm_cvtepi32_ps(zx.o(rax_17))
                zmm6.d = (*(r11_1 + (sx.q((arg4 * 3).d) << 2) - 0xc)).d f- *r11_1
                zmm6.d = zmm6.d f* zmm0.d
            else if (arg3 == 2)
                int32_t rax_18 = rax_17 & 0x80000001
                
                if (rax_18 s< 0)
                    rax_18 = ((rax_18 - 1) | 0xfffffffe) + 1
                
                if (rax_18 == 1)
                    zmm3.d = zmm3.d f- zmm1.d
                    zmm1.d = zmm3.d f+ zmm2.d
            
            zmm4 = zmm1
            goto label_141f7d01c
        
        result = (arg4 * 3).d
        zmm1 = *(r11_1 + (sx.q(result) << 2) - 0xc)
        
        if (arg3 == 3)
            zmm2.d = (*(r10_1 + (rdx_2 << 2) - 8)).d f- zmm3.d
            
            if (not(__andps_xmmxud_memxud(zmm2, data_142d3f770).d f<= 9.99999994e-09f))
                zmm4.d = zmm4.d f- zmm3.d
                result = (arg4.d - 2) * 3
                zmm0.d = (*(r11_1 + (sx.q(result) << 2))).d f- zmm1.d
                zmm0.d = zmm0.d f/ zmm2.d
                zmm0.d = zmm0.d f* zmm4.d
                zmm0.d = zmm0.d f+ zmm1.d
else
    result = arg2 - 3
    
    if (result u> 1)
        zmm1 = zmm4
        zmm3 = *(r10_1 + (sx.q(arg4.d) << 2) - 4)
        int32_t rax_4 = 0
        zmm5.d = zmm3.d f- zmm2.d
        
        if (not(zmm4.d f<= zmm3.d))
            zmm1.d = zmm3.d f- zmm4.d
            zmm1.d = zmm1.d f/ zmm5.d
            zmm1.d = zmm1.d f+ zmm1.d
            zmm1.d = zmm1.d f- 0.5f
            rax_4 = int.d(zmm1.d) s>> 1
            zmm1.d = float.s(rax_4)
            zmm1.d = zmm1.d f* zmm5.d
            zmm1.d = zmm1.d f+ zmm4.d
        else if (not(zmm4.d f>= zmm2.d))
            zmm1.d = zmm4.d f- zmm2.d
            zmm1.d = zmm1.d f/ zmm5.d
            zmm1.d = zmm1.d f+ zmm1.d
            zmm1.d = zmm1.d f- 0.5f
            rax_4 = int.d(zmm1.d) s>> 1
            zmm0.d = float.s(rax_4)
            zmm0.d = zmm0.d f* zmm5.d
            zmm1.d = zmm4.d f- zmm0.d
        
        if (not(zmm1.d f!= zmm3.d) && not(zmm4.d f>= zmm2.d))
            zmm1 = zmm2
        label_141f7ce7b:
            
            if (not(zmm4.d f<= zmm3.d))
                zmm1 = zmm3
        else if (not(zmm1.d f!= zmm2.d))
            goto label_141f7ce7b
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rax_4)
        int32_t rax_9 = (temp3_1 ^ temp2_1) - temp2_1
        
        if (arg2 == 1)
            zmm6 = *r11_1
            zmm0 = _mm_cvtepi32_ps(zx.o(rax_9))
            zmm6.d = zmm6.d f- *(r11_1 + (sx.q((arg4 * 3).d) << 2) - 0xc)
            zmm6.d = zmm6.d f* zmm0.d
        else if (arg2 == 2)
            int32_t rax_10 = rax_9 & 0x80000001
            
            if (rax_10 s< 0)
                rax_10 = ((rax_10 - 1) | 0xfffffffe) + 1
            
            if (rax_10 == 1)
                zmm3.d = zmm3.d f- zmm1.d
                zmm1.d = zmm3.d f+ zmm2.d
        
        zmm4 = zmm1
        goto label_141f7ced3
    
    zmm1 = *r11_1
    
    if (arg2 == 3)
        zmm3.d = (*(r10_1 + 4)).d f- zmm2.d
        
        if (not(__andps_xmmxud_memxud(zmm3, data_142d3f770).d f<= 9.99999994e-09f))
            zmm4.d = zmm4.d f- zmm2.d
            zmm0.d = (*(r11_1 + 0xc)).d f- zmm1.d
            zmm0.d = zmm0.d f/ zmm3.d
            zmm0.d = zmm0.d f* zmm4.d
            zmm0.d = zmm0.d f+ zmm1.d
return result
