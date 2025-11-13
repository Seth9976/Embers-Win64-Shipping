// 函数: sub_1408bebf0
// 地址: 0x1408bebf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r8 = zx.d(*(arg1 + 0x200))
void var_58

if (r8 == 0)
    *arg2 = *sub_1408bed80(arg1, &var_58, arg3)
    return arg2

float zmm6[0x4]
float var_28[0x4] = zmm6
uint128_t zmm7
uint128_t var_38 = zmm7
int32_t arg_8
void arg_10

if (r8 == 1)
    if (*(arg1 + 0x201) == 0)
        *arg2 = *sub_1408bed80(arg1, &var_58, arg4)
    else
        zmm7 = zx.o(0)
        zmm6 = zx.o(0)
        void* rsi_2 = arg1
        int64_t i_3 = 4
        float zmm0_4[0x4]
        int64_t i
        
        do
            sub_141f8ba60(rsi_2, &arg_10, &arg_8)
            rsi_2 -= -0x80
            zmm0_4 = _mm_max_ss(arg_8[0], zmm6[0])
            zmm6 = zmm0_4
            i = i_3
            i_3 -= 1
        while (i != 1)
        
        if (not(zmm0_4[0] <= 0f))
            zmm7 = sub_140a454f0(arg4, zmm0_4)
        
        *arg2 = *sub_1408bed80(arg1, &var_58, zmm7)
else if (r8 == 2)
    if (*(arg1 + 0x201) == 0)
        *arg2 = *sub_1408bed80(arg1, &var_58, arg5)
    else
        uint64_t i_2 = zx.q(r8 + 2)
        zmm6 = zx.o(0)
        void* rsi_1 = arg1
        float zmm0_1[0x4]
        uint64_t i_1
        
        do
            sub_141f8ba60(rsi_1, &arg_10, &arg_8)
            rsi_1 -= -0x80
            zmm0_1 = _mm_max_ss(arg_8[0], zmm6[0])
            zmm6 = zmm0_1
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
        
        if (zmm0_1[0] <= 0f)
            *arg2 = *sub_1408bed80(arg1, &var_58, zx.o(0))
        else
            uint128_t zmm0_2
            int512_t zmm7_1
            zmm0_2, zmm7_1 = sub_140a454f0(arg5, zmm0_1)
            zmm7_1.o = zmm0_2
            *arg2 = *sub_1408bed80(arg1, &var_58, zmm0_2)
return arg2
