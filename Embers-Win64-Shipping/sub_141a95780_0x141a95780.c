// 函数: sub_141a95780
// 地址: 0x141a95780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 - 1 u> 5)
    return 

float zmm1[0x4]
float zmm2[0x4]
float zmm3[0x4]
int32_t zmm4

switch (arg2)
    case 1
        arg1[0] = arg1[0] * arg1[0]
        arg1[0] = arg1[0] * 3f
        arg1[0] = arg1[0] * arg1[0]
        arg1[0] = arg1[0] + arg1[0]
        arg1[0] = arg1[0] - arg1[0]
        
        if (not(arg1[0] < 0f))
            __minss_xmmss_memss(arg1[0], 0x3f800000)
    case 2
        arg1[0] = arg1[0] * 3.14159274f
        arg1[0] = arg1[0] - 1.57079637f
        arg1 = sinf(arg1[0])
        arg1[0] = arg1[0] + 1f
        arg1[0] = arg1[0] * 0.5f
        
        if (not(arg1[0] < zx.o(0)[0]))
            _mm_min_ss(arg1[0], 0x3f800000)
    case 3
        zmm4 = 0x3f000000
        zmm2 = arg1
        bool cond:0_1 = arg1[0] >= 0.5f
        zmm3 = 0x3f800000
        zmm2[0] = zmm2[0] + arg1[0]
        
        if (cond:0_1)
            zmm2[0] = zmm2[0] - 1f
            arg1 = 0x3f800000
            arg1[0] = 1f - zmm2[0]
        label_141a95853:
            arg1[0] = arg1[0] * arg1[0]
            zmm2 = zmm3
            zmm2[0] = zmm2[0] - arg1[0]
            zmm2[0] = zmm2[0] + zmm3[0]
            goto label_141a95862
        
        zmm2[0] = zmm2[0] * zmm2[0]
    label_141a95862:
        zmm2[0] = zmm2[0] f* zmm4
        
        if (not(zmm2[0] < zx.o(0)[0]))
            _mm_min_ss(zmm2[0], zmm3[0])
    case 4
        zmm3 = 0x3f000000
        arg1[0] = arg1[0] + arg1[0]
        zmm2 = 0x3f800000
        
        if (arg1[0] >= 0.5f)
            arg1[0] = arg1[0] - 1f
            zmm1 = 0x3f800000
            zmm1[0] = 1f - arg1[0]
            arg1 = zmm1
            arg1[0] = arg1[0] * zmm1[0]
        label_141a95935:
            arg1[0] = arg1[0] * zmm1[0]
            zmm1 = zmm2
            zmm1[0] = zmm1[0] - arg1[0]
            zmm1[0] = zmm1[0] + zmm2[0]
            goto label_141a95944
        
        zmm1 = arg1
        zmm1[0] = zmm1[0] * arg1[0]
        zmm1[0] = zmm1[0] * arg1[0]
    label_141a95944:
        zmm1[0] = zmm1[0] * zmm3[0]
        
        if (not(zmm1[0] < zx.o(0)[0]))
            _mm_min_ss(zmm1[0], zmm2[0])
    case 5
        zmm4 = 0x3f000000
        zmm2 = arg1
        bool cond:2_1 = arg1[0] >= 0.5f
        zmm3 = 0x3f800000
        zmm2[0] = zmm2[0] + arg1[0]
        
        if (not(cond:2_1))
            zmm2[0] = zmm2[0] * zmm2[0]
            zmm2[0] = zmm2[0] * zmm2[0]
            goto label_141a95862
        
        zmm2[0] = zmm2[0] - 1f
        arg1 = 0x3f800000
        arg1[0] = 1f - zmm2[0]
        arg1[0] = arg1[0] * arg1[0]
        goto label_141a95853
    case 6
        zmm3 = 0x3f000000
        arg1[0] = arg1[0] + arg1[0]
        zmm2 = 0x3f800000
        
        if (not(arg1[0] >= 0.5f))
            zmm1 = arg1
            zmm1[0] = zmm1[0] * arg1[0]
            zmm1[0] = zmm1[0] * zmm1[0]
            zmm1[0] = zmm1[0] * arg1[0]
            goto label_141a95944
        
        arg1[0] = arg1[0] - 1f
        zmm1 = 0x3f800000
        zmm1[0] = 1f - arg1[0]
        arg1 = zmm1
        arg1[0] = arg1[0] * zmm1[0]
        arg1[0] = arg1[0] * arg1[0]
        goto label_141a95935
