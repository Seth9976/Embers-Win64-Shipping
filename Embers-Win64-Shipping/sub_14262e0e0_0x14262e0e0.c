// 函数: sub_14262e0e0
// 地址: 0x14262e0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float arg_18 = arg3[0]
int64_t rbp = 0
uint128_t zmm6
uint128_t var_38 = zmm6
uint128_t zmm7
uint128_t var_48 = zmm7
int32_t r12 = 0
uint128_t zmm10
uint128_t var_78 = zmm10
float zmm11[0x4] = *(arg1 + 0x14)
int128_t zmm12
int128_t var_98 = zmm12
int128_t zmm13 = zx.o(0)
float zmm14[0x4]
float var_b8[0x4] = zmm14
int128_t zmm15
int128_t var_c8 = zmm15
int32_t i = 0
uint128_t zmm0
float zmm1[0x4]
float zmm3
uint128_t zmm5

if (*(arg1 + 0x48) s> 0)
    zmm14 = arg5
    int128_t* rbx_1 = nullptr
    
    do
        int64_t rax_1 = *(arg1 + 0x40)
        zmm5 = *arg2
        zmm7 = *(arg2 + 8)
        zmm5.d = zmm5.d f+ zmm5.d
        zmm7.d = zmm7.d f+ zmm7.d
        zmm5.d = zmm5.d f- *arg6
        zmm7.d = zmm7.d f- arg6[2]
        zmm5.d = zmm5.d f- *(rbx_1 + rax_1 + 0xc)
        zmm7.d = zmm7.d f- *(rbx_1 + rax_1 + 0x14)
        zmm0.d = zmm5.d f+ zmm5.d
        arg3 = zmm7
        arg3[0] = arg3[0] f+ zmm7.d
        zmm1 = zmm7
        zmm1[0] = zmm1[0] f* *(rbx_1 + rax_1 + 0x30)
        zmm0.d = zmm0.d f* *(rbx_1 + rax_1 + 0x34)
        arg3[0] = arg3[0] f* *(rbx_1 + rax_1 + 0x3c)
        arg3[0] = arg3[0] f+ zmm0.d
        zmm0.d = zmm5.d f* *(rbx_1 + rax_1 + 0x28)
        zmm1[0] = zmm1[0] f+ zmm0.d
        zmm1[0] = zmm1[0] + 1f
        zmm1[0] = zmm1[0] * 0.5f
        float temp0_1[0x4] = _mm_min_ss(arg3[0], zmm1[0])
        
        if (temp0_1[0] >= 0f)
            arg3 = _mm_min_ss(temp0_1[0], 0x3f800000)
        else
            arg3 = zx.o(0)
        
        float zmm4[0x4] = *(rbx_1 + rax_1)
        zmm13.d = zmm13.d f+ arg3[0]
        arg3 = *(rbx_1 + rax_1 + 8)
        zmm4[0] = zmm4[0] f- *arg4
        arg3[0] = arg3[0] f- arg4[2]
        r12 += 1
        zmm0.d = zmm5.d f* zmm5.d
        zmm3 = zmm7.d f* zmm7.d f+ zmm0.d
        
        if (not(zmm3 < 9.99999975e-05f))
            zmm7.d = zmm7.d f* arg3[0]
            zmm14[0] = zmm14[0] f+ *(rbx_1 + rax_1 + 0x24)
            arg3[0] = arg3[0] * arg3[0]
            zmm5.d = zmm5.d f* zmm4[0]
            zmm4[0] = zmm4[0] * zmm4[0]
            zmm7.d = zmm7.d f+ zmm5.d
            zmm14[0] = zmm14[0] * zmm14[0]
            arg3[0] = arg3[0] + zmm4[0]
            zmm0.d = zmm7.d f* zmm7.d
            arg3[0] = arg3[0] - zmm14[0]
            arg3[0] = arg3[0] * zmm3
            zmm0.d = zmm0.d f- arg3[0]
            
            if (not(zmm0.d f< 0f))
                zmm6.d = 1f / zmm3
                zmm0 = sub_142609970(zmm0.d)
                zmm1 = zmm7
                zmm1[0] = zmm1[0] f- zmm0.d
                zmm0.d = zmm0.d f+ zmm7.d
                zmm1[0] = zmm1[0] f* zmm6.d
                zmm0.d = zmm0.d f* zmm6.d
                
                if (zmm1[0] >= 0f)
                    zmm11 = _mm_min_ss(zmm1[0], zmm11[0])
                else
                    if (not(zmm0.d f<= 0f))
                        zmm1[0] = zmm1[0] * -0.5f
                    
                    if (not(zmm1[0] < 0f))
                        zmm11 = _mm_min_ss(zmm1[0], zmm11[0])
        
        i += 1
        rbx_1 = &rbx_1[4]
    while (i s< *(arg1 + 0x48))

int64_t rax_2 = sx.q(*(arg1 + 0x58))
void* result

if (rax_2.d s> 0)
    float (* rcx)[0x4] = *(arg1 + 0x50)
    result = &(*rcx)[5]
    
    do
        char rdx = *(result + 4)
        arg3 = *rcx
        zmm1 = *result
        zmm3 = *(result - 8) - arg3[0]
        zmm0 = *(result - 0xc)
        
        if ((rdx & 1) == 0)
            zmm7 = *arg4
            zmm1[0] = zmm1[0] f- zmm0.d
            zmm7.d = zmm7.d f- arg3[0]
            arg3 = *(arg2 + 8)
            zmm10.d = arg4[2].d f- zmm0.d
            zmm6 = *arg2
            arg3[0] = arg3[0] * zmm3
            zmm0.d = zmm6.d f* zmm1[0]
            arg3[0] = arg3[0] f- zmm0.d
            
            if (not(_mm_and_ps(arg3, 0x7fffffff).d f< 9.99999997e-07f))
                zmm1[0] = zmm1[0] f* zmm7.d
                zmm5.d = 1f / arg3[0]
                zmm0.d = zmm10.d f* zmm3
                zmm1[0] = zmm1[0] f- zmm0.d
                zmm1[0] = zmm1[0] f* zmm5.d
                
                if (not(zmm1[0] < 0f) && not(zmm1[0] > 1f))
                    arg3[0] = arg3[0] f* zmm7.d
                    zmm6.d = zmm6.d f* zmm10.d
                    arg3[0] = arg3[0] f- zmm6.d
                    arg3[0] = arg3[0] f* zmm5.d
                    
                    if (not(arg3[0] < 0f) && not(arg3[0] > 1f))
                        bool cond:0_1
                        
                        if ((rdx & 2) == 0)
                            cond:0_1 = zmm1[0] < 0.100000001f
                        label_14262e411:
                            
                            if (cond:0_1)
                                return result
                        else
                            zmm1[0] - 0.100000001f
                            cond:0_1 = zmm1[0] < 0.100000001f
                            
                            if (zmm1[0] <= 0.100000001f)
                                goto label_14262e411
                            
                            zmm1 = 0x3f800000
                        zmm1[0] = zmm1[0] + zmm1[0]
                        zmm11 = _mm_min_ss(zmm1[0], zmm11[0])
        else
            zmm0.d = zmm0.d f- zmm1[0]
            zmm0.d = zmm0.d f* *arg2
            zmm0.d = zmm0.d f+ zmm3 f* *(arg2 + 8)
            
            if (not(zmm0.d f< 0f))
                return result
        
        rbp += 1
        rcx = &(*rcx)[7]
        result += 0x1c
    while (rbp s< rax_2)

if (r12 != 0)
    zmm13.d = zmm13.d f/ _mm_cvtepi32_ps(zx.o(r12)).d

result = arg7
zmm1 = *result
zmm0.d = (*(result + 8)).d f- *(arg2 + 8)
zmm1[0] = zmm1[0] f- *arg2
zmm0.d = zmm0.d f* zmm0.d
zmm1[0] = zmm1[0] * zmm1[0]
zmm0.d = zmm0.d f+ zmm1[0]
uint128_t zmm0_1 = sub_142609970(zmm0.d)
zmm1 = *arg6
zmm6 = zmm0_1
zmm0_1.d = arg6[2].d f- *(arg2 + 8)
zmm1[0] = zmm1[0] f- *arg2
zmm6.d = zmm6.d f* *(arg1 + 0x24)
zmm0_1.d = zmm0_1.d f* zmm0_1.d
zmm6.d = zmm6.d f* *(arg1 + 4)
zmm1[0] = zmm1[0] * zmm1[0]
zmm0_1.d = zmm0_1.d f+ zmm1[0]
float zmm0_2[0x4] = sub_142609970(zmm0_1.d)
zmm11[0] = zmm11[0] f* *(arg1 + 0x1c)
zmm0_2[0] = zmm0_2[0] f* *(arg1 + 0x24)
arg3 = *(arg1 + 0x10)
zmm11[0] = zmm11[0] + 0.100000001f
zmm13.d = zmm13.d f* *(arg1 + 0xc)
zmm0_2[0] = zmm0_2[0] f* *(arg1 + 8)
arg3[0] = arg3[0] / zmm11[0]
zmm0_2[0] = zmm0_2[0] f+ zmm6.d
zmm0_2[0] = zmm0_2[0] f+ zmm13.d
zmm0_2[0] = zmm0_2[0] + arg3[0]

if (arg8 != 0)
    result = zx.q(*arg8)
    
    if (result.d s< arg8[1])
        int64_t rcx_1 = *(arg8 + 8)
        int64_t rdx_1 = sx.q((result * 3).d)
        *(rcx_1 + (rdx_1 << 2)) = *arg2
        *(rcx_1 + (rdx_1 << 2) + 4) = *(arg2 + 4)
        *(rcx_1 + (rdx_1 << 2) + 8) = *(arg2 + 8)
        *(*(arg8 + 0x10) + (sx.q(*arg8) << 2)) = arg_18
        *(*(arg8 + 0x18) + (sx.q(*arg8) << 2)) = zmm0_2[0]
        *(*(arg8 + 0x20) + (sx.q(*arg8) << 2)) = zmm6.d
        *(*(arg8 + 0x28) + (sx.q(*arg8) << 2)) = zmm0_2[0]
        *(*(arg8 + 0x30) + (sx.q(*arg8) << 2)) = zmm13.d
        result = *(arg8 + 0x38)
        *(result + (sx.q(*arg8) << 2)) = arg3[0]
        *arg8 += 1

return result
