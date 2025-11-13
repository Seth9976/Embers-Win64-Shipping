// 函数: sub_140acf6c0
// 地址: 0x140acf6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5[0x4] = arg6
zmm5[0] = zmm5[0] - arg2[0]
float zmm8[0x4] = arg4
zmm5[0] = zmm5[0] - arg4[0]
arg4 = arg5
zmm8[0] = zmm8[0] - arg2[0]
arg3[0] = arg3[0] f- arg1
float temp0[0x4] = _mm_max_ss(zmm5[0], 0x38d1b717)
float temp0_1[0x4] = _mm_max_ss(zmm5[0], 0x38d1b717)
float temp0_2[0x4] = _mm_max_ss(zmm8[0], 0x38d1b717)
arg4[0] = arg4[0] f- arg1
arg1 = (zx.o(0)).d
bool cond:0 = arg3[0] < 0f
arg4[0] = arg4[0] - arg3[0]

if (cond:0)
label_140acf72b:
    
    if (arg4[0] >= 0f)
        return arg1
else
    if (arg4[0] <= 0f)
        return arg1
    
    if (not(arg3[0] > 0f))
        goto label_140acf72b

bool cond:1_1 = arg4[0] <= 0f
arg4[0] = arg4[0] / temp0[0]
arg4[0] = arg4[0] / temp0_1[0]
zmm5 = arg4
arg3[0] = arg3[0] / temp0_2[0]
arg3[0] = arg3[0] / arg4[0]
float zmm4[0x4]

if (cond:1_1)
    if (not(arg3[0] >= 0.333000004f))
        zmm4 = 0x3f800000
        arg3[0] = arg3[0] - arg4[0]
        zmm4[0] = 1f f- arg3[0] f* 3.00300288f
        zmm4[0] = zmm4[0] * arg3[0]
        zmm4[0] = zmm4[0] + arg4[0]
        
        if (not(arg4[0] >= zmm4[0]))
            zmm5 = zmm4
    
    if (not(arg3[0] <= 0.666999996f))
        arg3[0] = arg3[0] - 0.666999996f
        arg4[0] = arg4[0] - arg4[0]
        arg3[0] = arg3[0] * 3.00300288f
        arg3[0] = arg3[0] * arg4[0]
        arg3[0] = arg3[0] + arg4[0]
        zmm5 = _mm_max_ss(arg3[0], zmm5[0])
else
    if (not(arg3[0] >= 0.333000004f))
        zmm4 = 0x3f800000
        arg3[0] = arg3[0] - arg4[0]
        zmm4[0] = 1f f- arg3[0] f* 3.00300288f
        zmm4[0] = zmm4[0] * arg3[0]
        zmm4[0] = zmm4[0] + arg4[0]
        
        if (not(arg4[0] <= zmm4[0]))
            zmm5 = zmm4
    
    if (not(arg3[0] <= 0.666999996f))
        arg3[0] = arg3[0] - 0.666999996f
        arg4[0] = arg4[0] - arg4[0]
        arg3[0] = arg3[0] * 3.00300288f
        arg3[0] = arg3[0] * arg4[0]
        arg3[0] = arg3[0] + arg4[0]
        zmm5 = _mm_min_ss(arg3[0], zmm5[0])
return zmm5[0]
