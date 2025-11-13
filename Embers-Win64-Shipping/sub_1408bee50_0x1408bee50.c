// 函数: sub_1408bee50
// 地址: 0x1408bee50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = zx.q(*arg1)
float zmm4[0x4] = arg3
float var_28[0x4]
float zmm0[0x4]
float zmm1[0x4]

if (rax.d u<= 7)
    switch (rax)
        case 0
            zmm0 = *(arg1 + 4)
            float temp0[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
            var_28 = temp0
            *arg2 = temp0
        case 1
            zmm1 = *(arg1 + 0xc)
            zmm1[0] = zmm1[0] f- *(arg1 + 8)
            zmm1[0] = zmm1[0] f* *arg6
            zmm1[0] = zmm1[0] f+ *(arg1 + 8)
            float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
            var_28 = temp0_1
            *arg2 = temp0_1
        case 2
            float zmm0_1[0x4] = sub_1408beb20(&arg1[0x10], zmm4, arg4, arg5)
            float temp0_2[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0)
            var_28 = temp0_2
            *arg2 = temp0_2
        case 3
            float zmm0_2[0x4] = sub_1408be910(&arg1[0x98], zmm4, arg4, arg5, (*arg6)[0])
            float temp0_3[0x4] = _mm_shuffle_ps(zmm0_2, zmm0_2, 0)
            var_28 = temp0_3
            *arg2 = temp0_3
        case 4
            zmm0 = *(arg1 + 0x1a8)
            float temp0_4[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
            var_28 = temp0_4
            *arg2 = temp0_4
        case 5
            zmm1 = *arg6
            zmm4 = *(arg6 + 4)
            
            if (arg1[0x1c0] != 0)
                zmm4 = zmm1
            
            zmm0 = *(arg1 + 0x1b0)
            arg4 = *(arg1 + 0x1b8)
            arg3 = *(arg1 + 0x1bc)
            arg4[0] = arg4[0] - zmm0[0]
            var_28[2].q = 0
            arg4[0] = arg4[0] * zmm1[0]
            zmm1 = *(arg1 + 0x1b4)
            arg3.d = arg3.d f- zmm1[0]
            arg4[0] = arg4[0] + zmm0[0]
            zmm0 = var_28
            arg3.d = arg3.d f* zmm4[0]
            zmm0[0] = arg4[0]
            float temp0_5[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xe1)
            arg3.d = arg3.d f+ zmm1[0]
            temp0_5[0] = arg3.d
            *arg2 = _mm_shuffle_ps(temp0_5, temp0_5, 0xe1)
        case 6
            *arg2 = *sub_1408bebf0(arg1 + 0x1c8, &var_28, arg3, arg4, arg5[0])
        case 7
            var_28 = *arg6
            float var_18[0x4]
            *arg2 = *sub_1408be990(arg1 + 0x3d0, &var_18, arg3, arg4, arg5[0], &var_28)
return arg2
