// 函数: sub_141a34d30
// 地址: 0x141a34d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg3 + 0x18) == 0)
    sub_141a352a0(arg1, arg2, arg3)
    return arg1

int64_t arg_18
sub_141a352a0(&arg_18, arg2, arg3)
void* i = arg3[1].q
int64_t rax_2 = arg_18

for (void* rdi = i + sx.q(*(arg3 + 0x18)) * 0x14; i != rdi; i += 0x14)
    int32_t r8 = *(i + 0x10)
    int32_t rbx_1 = *(i + 0xc)
    float zmm1_1[0x4] = *i
    uint128_t zmm0_1
    float zmm3_1[0x4]
    
    if (r8 s<= rbx_1)
        int32_t arg_20
        
        if (zmm1_1[0] != 1f)
            zmm1_1 = _mm_cvtps_pd(zmm1_1[0].q)
            zmm0_1 = _mm_cvtps_pd(rax_2:4.d.q)
            zmm3_1 = _mm_cvtepi32_pd(zx.o(rax_2.d)[0].q)
            zmm3_1[0].q = zmm3_1[0].q f+ zmm0_1.q
            zmm3_1[0].q = zmm3_1[0].q f* zmm1_1[0].q
            int64_t rcx_20 = int.q(zmm3_1[0].q)
            zmm0_1 = zmm3_1
            
            if (rcx_20 != -0x8000000000000000)
                zmm1_1 = zx.o(0)
                zmm1_1[0].q = float.d(rcx_20)
                
                if (not(zmm1_1[0].q f== zmm3_1[0].q))
                    zmm0_1.q = float.d(rcx_20
                        - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm0_1, zmm0_1.q))) & 1))
            
            zmm3_1[0].q = zmm3_1[0].q f- zmm0_1.q
            int32_t rdx_7 = int.d(zmm0_1.q)
            zmm1_1 = _mm_cvtpd_ps(zmm3_1)
            
            if (zmm1_1[0] >= 0f)
                zmm1_1 = _mm_min_ss(zmm1_1[0], 0x3f7fffff)
                
                if (zmm1_1[0] >= 0f)
                    goto label_141a351a7
                
                int32_t var_7c_2 = 0
            else
                zmm1_1 = zx.o(0)
            label_141a351a7:
                
                if (zmm1_1[0] >= 0.99999994f)
                    int32_t var_7c_3 = 0x3f7fffff
                else
                    float var_7c_1 = zmm1_1[0]
            
            int64_t rcx_22 = *(i + 4)
            zmm3_1 = rcx_22:4.d
            zmm3_1[0] = zmm3_1[0] f+ rdx_7.q:4.d
            zmm3_1[0] = zmm3_1[0] + zmm3_1[0]
            zmm3_1[0] = zmm3_1[0] - 0.5f
            arg_20 = (int.d(zmm3_1[0]) s>> 1) + rdx_7 + rcx_22.d
        else
            int64_t rdx_6 = *(i + 4)
            zmm3_1 = rdx_6:4.d
            zmm3_1[0] = zmm3_1[0] f+ rax_2:4.d
            zmm3_1[0] = zmm3_1[0] + zmm3_1[0]
            zmm3_1[0] = zmm3_1[0] - 0.5f
            arg_20 = (int.d(zmm3_1[0]) s>> 1) + rax_2.d + rdx_6.d
        
        zmm1_1 = zmm3_1
        int32_t rcx_23 = int.d(zmm1_1[0])
        
        if (rcx_23 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_23)).d f== zmm1_1[0]))
            zmm1_1 = _mm_cvtepi32_ps(zx.o(rcx_23
                - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1_1, zmm1_1[0].q)) & 1)))
        
        zmm3_1[0] = zmm3_1[0] - zmm1_1[0]
        
        if (not(zmm3_1[0] >= 0f))
            float arg_24 = 0f
        else if (zmm3_1[0] >= 0.99999994f)
            arg_24 = 0.99999994f
        else
            arg_24 = zmm3_1[0]
        
        rax_2 = arg_20.q
    else
        int32_t rcx_4
        int64_t rdx
        
        if (zmm1_1[0] != 1f)
            zmm0_1 = _mm_cvtps_pd(rax_2:4.d.q)
            zmm1_1 = _mm_cvtps_pd(zmm1_1[0].q)
            zmm3_1 = _mm_cvtepi32_pd(zx.o(rax_2.d)[0].q)
            zmm3_1[0].q = zmm3_1[0].q f+ zmm0_1.q
            zmm3_1[0].q = zmm3_1[0].q f* zmm1_1[0].q
            int64_t rcx_5 = int.q(zmm3_1[0].q)
            zmm0_1 = zmm3_1
            
            if (rcx_5 != -0x8000000000000000)
                zmm1_1 = zx.o(0)
                zmm1_1[0].q = float.d(rcx_5)
                
                if (not(zmm1_1[0].q f== zmm3_1[0].q))
                    zmm0_1.q = float.d(rcx_5
                        - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm0_1, zmm0_1.q))) & 1))
            
            zmm3_1[0].q = zmm3_1[0].q f- zmm0_1.q
            int32_t r9_1 = int.d(zmm0_1.q)
            zmm1_1 = _mm_cvtpd_ps(zmm3_1)
            
            if (zmm1_1[0] >= 0f)
                zmm1_1 = _mm_min_ss(zmm1_1[0], 0x3f7fffff)
                
                if (zmm1_1[0] >= 0f)
                    goto label_141a34e82
                
                int32_t var_84_2 = 0
            else
                zmm1_1 = zx.o(0)
            label_141a34e82:
                
                if (zmm1_1[0] >= 0.99999994f)
                    int32_t var_84_3 = 0x3f7fffff
                else
                    float var_84_1 = zmm1_1[0]
            
            rdx = *(i + 4)
            zmm3_1 = rdx:4.d
            zmm3_1[0] = zmm3_1[0] f+ r9_1.q:4.d
            zmm3_1[0] = zmm3_1[0] + zmm3_1[0]
            zmm3_1[0] = zmm3_1[0] - 0.5f
            rcx_4 = (int.d(zmm3_1[0]) s>> 1) + r9_1
        else
            rdx = *(i + 4)
            zmm3_1 = rdx:4.d
            zmm3_1[0] = zmm3_1[0] f+ rax_2:4.d
            zmm3_1[0] = zmm3_1[0] + zmm3_1[0]
            zmm3_1[0] = zmm3_1[0] - 0.5f
            rcx_4 = (int.d(zmm3_1[0]) s>> 1) + rax_2.d
        
        int32_t rcx_9 = rcx_4 + rdx.d
        zmm1_1 = zmm3_1
        int32_t rdx_1 = int.d(zmm1_1[0])
        arg_18.d = rcx_9
        
        if (rdx_1 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rdx_1)).d f== zmm1_1[0]))
            zmm1_1 = _mm_cvtepi32_ps(zx.o(rdx_1
                - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1_1, zmm1_1[0].q)) & 1)))
        
        zmm3_1[0] = zmm3_1[0] - zmm1_1[0]
        
        if (not(zmm3_1[0] >= 0f))
            arg_18:4.d = 0
        else if (zmm3_1[0] >= 0.99999994f)
            arg_18:4.d = 0x3f7fffff
        else
            arg_18:4.d = zmm3_1[0]
        
        int32_t var_54_1 = 0
        int32_t r8_1 = r8 - rbx_1
        zmm3_1 = arg_18:4.d
        zmm3_1[0] = zmm3_1[0] f- rbx_1.q:4.d
        int32_t var_44_1 = 0
        int32_t var_4c_1 = 0
        zmm3_1[0] = zmm3_1[0] + zmm3_1[0]
        zmm3_1[0] = zmm3_1[0] - 0.5f
        int32_t rax_11 = int.d(zmm3_1[0]) s>> 1
        int32_t r11_1 = rcx_9 - rbx_1 + rax_11
        zmm0_1 = _mm_cvtepi32_ps(zx.o(rax_11))
        zmm3_1[0] = zmm3_1[0] f- zmm0_1.d
        
        if (not(zmm3_1[0] >= 0f))
            int32_t var_74_1 = 0
        else if (zmm3_1[0] >= 0.99999994f)
            int32_t var_74_3 = 0x3f7fffff
        else
            float var_74_2 = zmm3_1[0]
        
        int64_t rcx_11 = r11_1.q
        int64_t rdx_3 = r8_1.q
        
        if (rcx_11:4.d.d f!= 0f || rdx_3:4.d.d f!= 0f)
            while (true)
                if (rcx_11.d s<= r8_1)
                    if (rcx_11.d != r8_1)
                        break
                    
                    if (rcx_11:4.d.d f< rdx_3:4.d)
                        break
                
                zmm3_1 = rcx_11:4.d
                zmm3_1[0] = zmm3_1[0] f- rdx_3:4.d
                zmm3_1[0] = zmm3_1[0] + zmm3_1[0]
                zmm3_1[0] = zmm3_1[0] - 0.5f
                int32_t rax_16 = int.d(zmm3_1[0]) s>> 1
                int32_t rcx_13 = rcx_11.d - r8_1 + rax_16
                zmm0_1 = _mm_cvtepi32_ps(zx.o(rax_16))
                zmm3_1[0] = zmm3_1[0] f- zmm0_1.d
                
                if (not(zmm3_1[0] >= 0f))
                    int32_t var_6c_1 = 0
                    rcx_11 = rcx_13.q
                else if (zmm3_1[0] >= 0.99999994f)
                    int32_t var_6c_3 = 0x3f7fffff
                    rcx_11 = rcx_13.q
                else
                    float var_6c_2 = zmm3_1[0]
                    rcx_11 = rcx_13.q
            
            int32_t var_60
            var_60.q = rcx_11
        else
            int32_t var_5c_1 = 0
            rcx_11 = mods.dp.d(sx.q(r11_1), r8_1).q
        
        zmm3_1 = rbx_1.q:4.d
        zmm3_1[0] = zmm3_1[0] f+ rcx_11:4.d
        zmm3_1[0] = zmm3_1[0] + zmm3_1[0]
        zmm3_1[0] = zmm3_1[0] - 0.5f
        zmm1_1 = zmm3_1
        int32_t rax_21 = (int.d(zmm3_1[0]) s>> 1) + rcx_11.d + rbx_1
        int32_t rcx_14 = int.d(zmm1_1[0])
        
        if (rcx_14 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_14)).d f== zmm1_1[0]))
            zmm1_1 = _mm_cvtepi32_ps(zx.o(rcx_14
                - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1_1, zmm1_1[0].q)) & 1)))
        
        zmm3_1[0] = zmm3_1[0] - zmm1_1[0]
        
        if (not(zmm3_1[0] >= 0f))
            int32_t var_64_1 = 0
            rax_2 = rax_21.q
        else if (zmm3_1[0] >= 0.99999994f)
            int32_t var_64_3 = 0x3f7fffff
            rax_2 = rax_21.q
        else
            float var_64_2 = zmm3_1[0]
            rax_2 = rax_21.q

*arg1 = rax_2
return arg1
