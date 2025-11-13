// 函数: sub_1421eec90
// 地址: 0x1421eec90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6
uint128_t var_18 = zmm6
uint64_t result

if (*(arg1 + 0x30) != 1)
    uint32_t rcx_1 = zx.d(*(arg1 + 0x68))
    float rbx_1
    
    if (rcx_1 == 0)
        int64_t rbx_2 = sx.q(arg4) * 5
        result = sub_141f5e0e0(arg3, *(*(arg1 + 0x40) + (rbx_2 << 2)))
        int64_t rcx_5 = *(arg1 + 0x40)
        arg4 = result.d
        uint128_t zmm1
        zmm1.d = (*(rcx_5 + (rbx_2 << 2) + 8)).d f+ *(arg1 + 0x34)
        int64_t zmm2
        zmm2.d = (*(rcx_5 + (rbx_2 << 2) + 0xc)).d f+ *(arg1 + 0x38)
        rbx_1 = *(rcx_5 + (rbx_2 << 2) + 0x10) f+ *(arg1 + 0x3c)
        zmm6 = _mm_unpacklo_ps(zmm1, zmm2)
    label_1421eed85:
        
        if (arg4 == 0xffffffff)
            result.b = 0
        else
            float var_58[0x4][0x4]
            float (* rax_1)[0x4] = sub_141f5e2b0(arg3, &var_58, arg4)
            *arg5 = *rax_1
            arg5[1] = rax_1[1]
            arg5[2] = rax_1[2]
            arg5[3] = rax_1[3]
            *arg6 = zmm6.q
            *(arg6 + 8) = rbx_1
            result.b = 1
    else
        if (rcx_1 == 1)
            zmm6 = zx.o(*(arg1 + 0x34))
            rbx_1 = *(arg1 + 0x3c)
            arg4 = *(*(arg2 + 0x40) + (sx.q(arg4) << 2))
            goto label_1421eed85
        
        if (rcx_1 == 2)
            zmm6 = zx.o(*(arg1 + 0x34))
            rbx_1 = *(arg1 + 0x3c)
            goto label_1421eed85
        
        result.b = 0
else
    void* arg_8 = nullptr
    void var_68
    
    if (sub_1421f4330(arg1, arg2, arg3, arg4, &arg_8, &var_68).b != 0)
        sub_141f5e0e0(arg3, *(arg_8 + 0x30))
    
    result.b = 0

return result
