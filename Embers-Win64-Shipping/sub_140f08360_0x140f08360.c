// 函数: sub_140f08360
// 地址: 0x140f08360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm8[0x4] = arg5
uint32_t zmm6[0x4]

if (arg4 != *(arg1 + 0x2f4))
    zmm6 = zx.o(0)
else
    zmm8[0] = zmm8[0] f* arg1[0x21].d
    zmm6 = _mm_and_ps(zmm8, 0x7fffffff)

zmm8[0] = zmm8[0] f* *(arg1 + 0x10c)
uint32_t temp0_2[0x4] = _mm_and_ps(zmm8, 0x7fffffff)

if (arg4 != arg3)
    int64_t var_48
    sub_140eec190(&var_48, arg4 - arg3)
    int64_t* var_58
    sub_140e14af0(*(*(data_143e29f28 + 0x20) + 8), &var_58)
    int64_t* rcx_4 = var_58
    void arg_8
    int32_t* rax_4 = (*(*rcx_4 + 0x18))(rcx_4, &arg_8, &var_48, &arg1[0x12], zmm8[0])
    zmm6[0] = zmm6[0] f+ *rax_4
    temp0_2[0] = temp0_2[0] f+ rax_4[1]
    *arg2 = zmm6[0]
    arg2[1] = temp0_2[0]
    int64_t* var_50
    
    if (var_50 != 0)
        var_50[1].d -= 1
        
        if (var_50[1].d == 1)
            (**var_50)(var_50)
            int32_t temp2_1 = *(var_50 + 0xc)
            *(var_50 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*var_50 + 8))(var_50, 1)
    
    int64_t rcx_7 = var_48
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
else
    int512_t zmm1
    zmm1.o = zmm8
    int32_t rcx = sx.d((*(*arg1 + 0x20))())
    zmm6[0] = zmm6[0] f* zmm8[0]
    uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(rcx))
    *arg2 = zmm6[0]
    arg2[1] = zmm0.d

return arg2
