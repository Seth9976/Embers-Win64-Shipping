// 函数: sub_142407ec0
// 地址: 0x142407ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0 || (*(*arg1 + 0x28))() == 0)
    return 

int32_t rax_2 = arg1[8].d
uint128_t __saved_zmm6_1 = arg3
uint8_t rsi_2 = (rax_2 u>> 1).b & 1
float zmm0[0x4]
uint128_t zmm1

if (rsi_2 != 0)
    zmm0 = *(arg1 + 0x7c)
    zmm1 = arg1[0xf].d
    zmm0[0] = zmm0[0] * zmm0[0]
    zmm1.d = zmm1.d f* zmm1.d
    zmm1.d = zmm1.d f+ zmm0[0]
    
    if (not(zmm1.d f!= 0f))
        arg1[0xf].d = 0x3f800000
        *(arg1 + 0x7c) = 0x3f800000
        arg1[8].d = rax_2 | 2
        *(arg1 + 0x68) = data_14399f5e0

*(arg1 + 0x14) = (*(*arg1 + 0x30))(arg1, zx.q(rsi_2))

if (*(arg2 + 0x95) != 0)
    *(arg1 + 0x14) = 0xd

if (arg2[0x25].b == 0)
    arg3 = arg2[0x29]
else
    arg3 = 0x3f800000

bool cond:2_1 = arg1[0x11].b != 0
zmm0 = arg3
zmm0[0] = zmm0[0] f* arg1[1].d
zmm1.d = arg3.d f* *(arg1 + 0xc)
float arg_10 = zmm0[0]
float arg_14 = zmm1.d
float arg_18

if (cond:2_1 || *(arg1 + 0x89) != 0 || *(arg1 + 0x9c) == 0)
    (*(*arg1 + 0x38))(arg1, &arg_18, arg3.d)
    float zmm2
    
    if (arg1[0x11].b != 0)
        zmm2 = arg_10
        zmm0 = arg_18
        zmm0[0] = zmm0[0] * -0.5f
        char rax_9 = *(arg1 + 0x89)
        arg_10 = zmm2 f+ _mm_cvtepi32_ps(zx.o(int.d(zmm0[0]))).d
        
        if (rax_9 != 0)
        label_142408017:
            zmm0 = arg5
            zmm0[0] = zmm0[0] * -0.5f
            arg_14 = arg_14 f+ _mm_cvtepi32_ps(zx.o(int.d(zmm0[0]))).d
    else if (*(arg1 + 0x89) != 0)
        goto label_142408017
    
    if (*(arg1 + 0x9c) == 0 && sub_1423e6860(data_143f5b298, nullptr) != 0)
        int64_t* rcx_3 = *(data_143f5b298 + 0x440)
        int64_t rax_14 = (*(*rcx_3 + 0x280))(rcx_3)
        zmm0 = arg_14
        zmm2 = arg_18
        zmm0[0] = zmm0[0] - 2f
        zmm1.d = arg_10.d f- 2f
        arg1[0x21] = rax_14
        int64_t rax_15 = arg1[0x15]
        arg1[0x18].b = 1
        *(arg1 + 0xb4) = zmm0[0]
        zmm0 = arg5
        zmm0[0] = zmm0[0] + 2f
        arg1[0x16].d = zmm1.d
        arg1[0x1c].d = zmm2 + 2f + 2f
        zmm0[0] = zmm0[0] + 2f
        *(arg1 + 0xe4) = zmm0[0]
        (*(rax_15 + 0x18))(&arg1[0x15], arg2)

arg1[0x25] = 0
float var_48[0x4]

if (rsi_2 != 0)
    int64_t rax_16 = *arg1
    zmm1.d = (*(arg1 + 0x34)).d f* *arg2
    var_48 = *(arg1 + 0x68)
    zmm0 = arg3
    arg3.d = arg3.d f* *(arg1 + 0x7c)
    var_48[3] = zmm1.d
    zmm0[0] = zmm0[0] f* arg1[0xf].d
    arg3.d = arg3.d f+ arg_14
    zmm0[0] = zmm0[0] + arg_10
    arg5 = arg3.d
    arg_18 = zmm0[0]
    (*(rax_16 + 0x40))(arg1, arg2, &arg_18, &var_48, var_48, arg4, __saved_zmm6_1)

if (*(arg1 + 0x8a) != 0)
    zmm0 = *(arg1 + 0x8c)
    int64_t rax_17 = *arg1
    var_48 = zmm0
    float temp0_3[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xff)
    zmm1.d = arg_14.d f- 1f
    temp0_3[0] = temp0_3[0] f* *arg2
    var_48[3] = temp0_3[0]
    zmm0 = arg_10
    zmm0[0] = zmm0[0] - 1f
    arg5 = zmm1.d
    arg_18 = zmm0[0]
    (*(rax_17 + 0x40))(arg1, arg2, &arg_18, &var_48, var_48, arg4, __saved_zmm6_1)
    zmm0 = arg_10
    zmm0[0] = zmm0[0] - 1f
    int64_t rax_18 = *arg1
    zmm1.d = arg_14.d f+ 1f
    arg_18 = zmm0[0]
    arg5 = zmm1.d
    (*(rax_18 + 0x40))(arg1, arg2, &arg_18, &var_48)
    zmm0 = arg_10
    zmm0[0] = zmm0[0] + 1f
    int64_t rax_19 = *arg1
    zmm1.d = arg_14.d f+ 1f
    arg_18 = zmm0[0]
    arg5 = zmm1.d
    (*(rax_19 + 0x40))(arg1, arg2, &arg_18, &var_48)
    zmm0 = arg_10
    zmm0[0] = zmm0[0] + 1f
    int64_t rax_20 = *arg1
    zmm1.d = arg_14.d f- 1f
    arg_18 = zmm0[0]
    arg5 = zmm1.d
    (*(rax_20 + 0x40))(arg1, arg2, &arg_18, &var_48)

zmm0 = *(arg1 + 0x28)
int64_t rax_21 = *arg1
var_48 = zmm0
float temp0_4[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xff)
temp0_4[0] = temp0_4[0] f* *arg2
var_48[3] = temp0_4[0]
(*(rax_21 + 0x40))(arg1, arg2, &arg_10, &var_48, var_48, arg4, __saved_zmm6_1)
