// 函数: sub_141f11000
// 地址: 0x141f11000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 - 0x130)
int128_t zmm10 = arg3
int64_t result

if (rbx == 0)
label_141f1122f:
    
    if (arg4 == 0)
        result.b = 1
    else
        *arg4 = 0f
        result.b = 1
else
    void* rax = sub_14258d940()
    void* rdx = rbx[2]
    result = sx.q(*(rax + 0x38))
    
    if (result.d s> *(rdx + 0x38))
        goto label_141f1122f
    
    if (*(*(rdx + 0x30) + (result << 3)) != rax + 0x30)
        goto label_141f1122f
    
    int64_t rax_1 = *rbx
    int32_t arg_8 = 0xbf800000
    void var_88
    float zmm0_1[0x4]
    
    if ((*(rax_1 + 0x6b0))(rbx, arg2, &arg_8, &var_88).b == 0)
        int32_t var_78
        (*(*rbx + 0x480))(rbx, &var_78, &rbx[0x38])
        void* rax_3 = sub_1425a4300()
        void* rdx_3 = rbx[2]
        result = sx.q(*(rax_3 + 0x38))
        int64_t result_1
        
        if (result.d s<= *(rdx_3 + 0x38))
            result_1 = result
        
        float var_74
        float var_70
        float zmm1[0x4]
        
        if (result.d s> *(rdx_3 + 0x38) || *(*(rdx_3 + 0x30) + (result_1 << 3)) != rax_3 + 0x30)
            int32_t var_64
            zmm0_1 = var_64
            int32_t var_68
            zmm1 = var_68
            int32_t var_6c
            arg3 = var_6c
            float zmm6[0x4] = zmm0_1
            zmm6[0] = zmm6[0] + var_70
            float zmm5_1 = var_70 - zmm0_1[0]
            int128_t zmm9 = var_78
            float zmm7[0x4] = zmm1
            zmm0_1 = *arg2
            float zmm3 = arg3.d f+ zmm9.d
            zmm9.d = zmm9.d f- arg3.d
            zmm7[0] = zmm7[0] + var_74
            float zmm4_1 = var_74 - zmm1[0]
            zmm1 = zx.o(0)
            
            if (not(zmm0_1[0] f>= zmm9.d))
                zmm1 = zmm0_1
                zmm1[0] = zmm1[0] f- zmm9.d
                zmm1[0] = zmm1[0] * zmm1[0]
            else if (not(zmm0_1[0] <= zmm3))
                zmm1 = zmm0_1
                zmm1[0] = zmm1[0] - zmm3
                zmm1[0] = zmm1[0] * zmm1[0]
            
            zmm0_1 = arg2[1]
            
            if (not(zmm0_1[0] >= zmm4_1))
                zmm0_1[0] = zmm0_1[0] - zmm4_1
                zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
                zmm1[0] = zmm1[0] + zmm0_1[0]
            else if (not(zmm0_1[0] <= zmm7[0]))
                zmm0_1[0] = zmm0_1[0] - zmm7[0]
                zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
                zmm1[0] = zmm1[0] + zmm0_1[0]
            
            zmm0_1 = arg2[2]
            
            if (not(zmm0_1[0] >= zmm5_1))
                zmm0_1[0] = zmm0_1[0] - zmm5_1
                zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
                zmm1[0] = zmm1[0] + zmm0_1[0]
            else if (not(zmm0_1[0] <= zmm6[0]))
                zmm0_1[0] = zmm0_1[0] - zmm6[0]
                zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
                zmm1[0] = zmm1[0] + zmm0_1[0]
            
            zmm0_1 = _mm_sqrt_ss(0, zmm1[0])
        else
            zmm0_1 = var_74
            zmm0_1[0] = zmm0_1[0] f- arg2[1]
            arg3.d = var_78.d f- *arg2
            zmm1 = var_70
            zmm1[0] = zmm1[0] f- arg2[2]
            zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
            arg3.d = arg3.d f* arg3.d
            zmm1[0] = zmm1[0] * zmm1[0]
            arg3.d = arg3.d f+ zmm0_1[0]
            arg3.d = arg3.d f+ zmm1[0]
            float temp0_2[0x4] = _mm_sqrt_ss(0, arg3.d)
            int32_t var_60
            temp0_2[0] = temp0_2[0] f- var_60
            zmm0_1 = _mm_max_ss(temp0_2[0], 0)
    else
        zmm0_1 = __sqrtss_xmmss_memss(0xbf800000, arg_8)
    
    if (arg4 != 0)
        *arg4 = zmm0_1[0]
    
    if (zmm0_1[0] < 0f || not(zmm0_1[0] f<= zmm10.d))
        result.b = 0
    else
        result.b = 1

return result
