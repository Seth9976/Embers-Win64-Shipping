// 函数: sub_1426ed530
// 地址: 0x1426ed530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg2 + 0xc0)
int64_t* r14 = arg3
void* rax_1

if (rbx != 0)
    rax_1 = rbx[0x4a]

int32_t r8_1

if (rbx == 0 || rax_1 == 0)
    r8_1 = 1
else
    void* rcx = *(rax_1 + 0x130)
    float zmm6[0x4]
    float var_28_1[0x4] = zmm6
    int64_t var_78
    int64_t var_68
    int32_t var_60
    float* rax_2
    
    if (rcx == 0)
        var_60 = data_14399f6a0
        rax_2 = &var_68
        var_68 = data_14399f698.q
    else
        rax_2, arg4 = sub_141f133e0(rcx, &var_78)
    
    int64_t zmm0 = *rax_2
    int32_t rax_4 = rax_2[2]
    arg3.b = 2
    sub_1426b1cc0(rbx, &var_68, arg3.b)
    void* rcx_2 = *(rbx[0x4a] + 0x130)
    float result
    float zmm1[0x4]
    
    if (rcx_2 == 0)
        float result_1 = data_143dbb200
        var_78 = data_143dbb1f8.q
        result = result_1
    else
        zmm1 = *(rcx_2 + 0x1d0)
        var_78.d = zmm1[0]
        float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        result = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
        var_78:4.d = temp0_1[0]
    
    zmm6 = var_68.d
    zmm1 = zx.o(var_78)
    float zmm7[0x4] = var_68:4.d
    zmm6[0] = zmm6[0] - zmm1[0]
    float zmm9[0x4] = zmm0.d
    arg4.o = 0x38d1b717
    uint32_t zmm3[0x4] = var_60
    float zmm8[0x4] = zmm0:4.d
    float temp0_3[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    zmm7[0] = zmm7[0] - temp0_3[0]
    zmm3[0] = zmm3[0] f- result
    
    if (_mm_and_ps(zmm9, 0x7fffffff)[0] > 9.99999975e-05f)
    label_1426ed697:
        
        if (_mm_and_ps(zmm6, 0x7fffffff)[0] > 9.99999975e-05f)
        label_1426ed6c7:
            zmm9[0] = zmm9[0] * zmm9[0]
            zmm8[0] = zmm8[0] * zmm8[0]
            zmm9[0] = zmm9[0] + zmm8[0]
            
            if (not(zmm9[0] <= 9.99999994e-09f))
                zmm3 = zmm9
                float temp0_10[0x4] = _mm_rsqrt_ss(zmm9[0], zmm3[0])
                arg4.o = 0x3f000000
                zmm3[0] = zmm3[0] f* 0.5f
                temp0_10[0] = temp0_10[0] * temp0_10[0]
                zmm1 = zmm3
                zmm1[0] = zmm1[0] * temp0_10[0]
                arg4.d = 0.5f - zmm1[0]
                temp0_10[0] = temp0_10[0] f* arg4.d
                temp0_10[0] = temp0_10[0] + temp0_10[0]
                temp0_10[0] = temp0_10[0] * temp0_10[0]
                zmm3[0] = zmm3[0] f* temp0_10[0]
                temp0_10[0] = temp0_10[0] * (0.5f f- zmm3[0])
                temp0_10[0] = temp0_10[0] + temp0_10[0]
                zmm9[0] = zmm9[0] * temp0_10[0]
                zmm8[0] = zmm8[0] * temp0_10[0]
            
            zmm7[0] = zmm7[0] * zmm7[0]
            zmm6[0] = zmm6[0] * zmm6[0]
            zmm7[0] = zmm7[0] + zmm6[0]
            
            if (not(zmm7[0] <= 9.99999994e-09f))
                zmm3 = zmm7
                float temp0_11[0x4] = _mm_rsqrt_ss(zmm7[0], zmm3[0])
                arg4.o = 0x3f000000
                zmm3[0] = zmm3[0] f* 0.5f
                temp0_11[0] = temp0_11[0] * temp0_11[0]
                zmm1 = zmm3
                zmm1[0] = zmm1[0] * temp0_11[0]
                arg4.d = 0.5f - zmm1[0]
                temp0_11[0] = temp0_11[0] f* arg4.d
                temp0_11[0] = temp0_11[0] + temp0_11[0]
                temp0_11[0] = temp0_11[0] * temp0_11[0]
                zmm3[0] = zmm3[0] f* temp0_11[0]
                temp0_11[0] = temp0_11[0] * (0.5f f- zmm3[0])
                temp0_11[0] = temp0_11[0] + temp0_11[0]
                zmm6[0] = zmm6[0] * temp0_11[0]
                zmm7[0] = zmm7[0] * temp0_11[0]
            
            zmm6[0] = zmm6[0] * zmm9[0]
            zmm7[0] = zmm7[0] * zmm8[0]
            zmm6[0] = zmm6[0] + zmm7[0]
        else
            if (_mm_and_ps(zmm7, 0x7fffffff)[0] > 9.99999975e-05f)
                goto label_1426ed6c7
            
            if (_mm_and_ps(zmm3, 0x7fffffff)[0] f> 9.99999975e-05f)
                goto label_1426ed6c7
            
            zmm6 = 0x3f800000
    else
        if (_mm_and_ps(zmm8, 0x7fffffff)[0] > 9.99999975e-05f)
            goto label_1426ed697
        
        if (not(_mm_and_ps(rax_4, 0x7fffffff)[0] <= 9.99999975e-05f))
            goto label_1426ed697
        
        zmm6 = 0x3f800000
    
    if (zmm6[0] f< *(arg1 + 0x9c))
        return result
    
    sub_1426ce550(arg1, rbx, r14)
    r8_1 = 0

return sub_1426b08f0(arg1, arg2, r8_1, arg4)
