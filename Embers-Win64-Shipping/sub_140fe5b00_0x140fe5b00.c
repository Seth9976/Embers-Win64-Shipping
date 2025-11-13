// 函数: sub_140fe5b00
// 地址: 0x140fe5b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3[0] > arg4[0])
    return 

float zmm6[0x4] = zx.o(0)
float zmm7[0x4]

if (arg3[0] >= 0f)
    zmm7 = _mm_min_ss(arg3[0], 0x3f800000)
else
    zmm7 = zx.o(0)

if (not(arg4[0] < 0f))
    zmm6 = _mm_min_ss(arg4[0], 0x3f800000)

if (sub_1419767f0() == 0)
    if (sub_1419767d0().b != 0)
        float var_38_1 = zmm6[0]
        
        if (agsDriverExtensionsDX11_SetDepthBounds(*(arg1 + 0x26a0), *(arg1 + 0x150), arg2, zmm7)
                != 0 && data_143e2c0a9 == 0)
            data_143e2c0a9 = 1
            goto label_140fe5bbd
else
    int32_t rax
    rax, zmm6, zmm7 = sub_142c48700(*(arg1 + 0x168), zx.d(arg2), zmm7, zmm6)
    
    if (rax != 0 && data_143e2c0a8 == 0)
        data_143e2c0a8 = 1
    label_140fe5bbd:
        
        if (*(arg1 + 0x17d08) != 0)
            sub_140a4aa30()

*(arg1 + 0x180) = zmm6[0]
*(arg1 + 0x17c) = zmm7[0]
*(arg1 + 0x178) = arg2
