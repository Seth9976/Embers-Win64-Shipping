// 函数: sub_141a35470
// 地址: 0x141a35470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = *arg3
int32_t r9_1 = arg3[1] - r11
int32_t arg_8
arg_8.q = arg2
float zmm2[0x4] = 0
zmm2[0] = 0f f- r11.q:4.d
int32_t arg_1c = 0
zmm2[0] = zmm2[0] + zmm2[0]
zmm2[0] = zmm2[0] - 0.5f
int32_t rax_2 = int.d(zmm2[0]) s>> 1
int32_t r8 = arg2.d - r11 + rax_2
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(rax_2))
zmm2[0] = zmm2[0] f- zmm0.d
float arg_c

if (not(zmm2[0] >= 0f))
    arg_c = 0f
else if (zmm2[0] >= 0.99999994f)
    arg_c = 0.99999994f
else
    arg_c = zmm2[0]

int64_t rcx = r8.q
int64_t rdx_1 = r9_1.q
arg_8.q = rcx
int32_t arg_10
arg_10.q = rdx_1

if (arg_c.d f!= 0f || 0f != 0f)
    arg_8.q = rdx_1
    float zmm5 = arg_c
    
    while (true)
        arg_10.q = rcx
        
        if (rcx.d s<= r9_1)
            if (rcx.d != r9_1)
                break
            
            if (0f < zmm5)
                break
        
        arg_10.q = rcx
        zmm2 = 0
        zmm2[0] = 0f f- rdx_1:4.d
        zmm2[0] = zmm2[0] + zmm2[0]
        zmm2[0] = zmm2[0] - 0.5f
        int32_t rax_15 = int.d(zmm2[0]) s>> 1
        int32_t rcx_4 = rcx.d - r9_1 + rax_15
        zmm0 = _mm_cvtepi32_ps(zx.o(rax_15))
        zmm2[0] = zmm2[0] f- zmm0.d
        
        if (not(zmm2[0] >= 0f))
            arg_c = 0f
            rcx = rcx_4.q
        else if (zmm2[0] >= 0.99999994f)
            arg_c = 0.99999994f
            rcx = rcx_4.q
        else
            arg_c = zmm2[0]
            rcx = rcx_4.q
else
    arg_c = 0f
    rcx = mods.dp.d(sx.q(r8), r9_1).q

arg_8.q = r11.q
zmm2 = arg_c
arg_10.q = rcx
zmm2[0] = zmm2[0] + 0f
zmm2[0] = zmm2[0] + zmm2[0]
zmm2[0] = zmm2[0] - 0.5f
float zmm1[0x4] = zmm2
int32_t rcx_1 = int.d(zmm1[0])
*arg1 = (int.d(zmm2[0]) s>> 1) + rcx.d + r11

if (rcx_1 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_1)).d f== zmm1[0]))
    zmm1 = _mm_cvtepi32_ps(zx.o(rcx_1 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))

zmm2[0] = zmm2[0] - zmm1[0]

if (zmm2[0] >= 0f)
    arg1[1] = _mm_min_ss(zmm2[0], 0x3f7fffff)[0]
    return arg1

arg1[1] = 0
return arg1
