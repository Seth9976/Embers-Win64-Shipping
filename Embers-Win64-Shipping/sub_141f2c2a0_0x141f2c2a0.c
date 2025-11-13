// 函数: sub_141f2c2a0
// 地址: 0x141f2c2a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg2[1].b = 0
int32_t rax = *(arg1 + 0x10)
uint128_t* var_38
float var_28[0x4]
float var_18[0x4]
char rax_6
float zmm1[0x4]

if (rax == 0)
    int32_t rax_8
    
    if (arg5 == 0)
    label_141f2c475:
        var_38 = arg3[0x53]
        rax_8 = arg3[0x54].d
    label_141f2c47f:
        int32_t var_30_4 = rax_8
        
        if (&var_38 != arg2)
            *arg2 = var_38.o
            arg2[1].b = 1
    else
        zmm1 = *(arg3 + 0x1e0)
        int64_t rax_9 = *arg3
        var_38.d = zmm1[0]
        float temp0_8[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        float var_30_3 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
        var_38:4.d = temp0_8[0]
        float zmm0[0x4] = *(arg3 + 0x1c0)
        var_28 = *(arg1 + 0x20)
        var_18 = zmm0
        
        if ((*(rax_9 + 0x728))(arg3, &var_28, &var_18, &var_38) == 0)
            goto label_141f2c475
        
        var_28[0].q = arg3[0x53]
        var_28[2] = arg3[0x54].d
        rax_6 = sub_141f00360(arg3, arg4, &var_28)
    label_141f2c3c6:
        
        if (rax_6 != 0)
            uint128_t* rax_7 = *(arg4 + 0x1a8)
            uint128_t* rcx_3 = arg4
            
            if (rax_7 != 0)
                rcx_3 = rax_7
            
            rax_8 = arg4[0x1b].d
            var_38 = rcx_3
            goto label_141f2c47f
else if (rax == 2)
    int32_t r9 = *(arg1 + 0x74)
    
    if (r9 != 0xffffffff)
        float temp0_1[0x4] = __subps_xmmps_memps(*(arg1 + 0x40), *(arg3 + 0x1e0))
        
        if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_shuffle_ps(0x38d1b717, 0x38d1b717, 0), 
                __andps_xmmxud_memxud(temp0_1, data_143f3b3e0), 1)) == 0)
            zmm1 = *(arg3 + 0x1d0)
            void* rax_4 = *(arg1 + 0x220)
            void* rcx_1 = arg1 + 0x78
            var_18 = *(arg3 + 0x1c0)
            
            if (rax_4 != 0)
                rcx_1 = rax_4
            
            var_38.d = zmm1[0]
            var_28[2] = *(arg1 + 0x228)
            float temp0_6[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
            var_28[0].q = rcx_1
            float temp0_7[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
            var_38:4.d = temp0_6[0]
            float var_30_2 = temp0_7[0]
            rax_6 = sub_141f00540(arg3, arg4, &var_28, r9, &var_38, &var_18)
            goto label_141f2c3c6
    else
        uint128_t* rax_1 = *(arg4 + 0x1a8)
        uint128_t* rcx = arg4
        
        if (rax_1 != 0)
            rcx = rax_1
        
        int32_t var_30_1 = arg4[0x1b].d
        var_38 = rcx
        
        if (&var_38 != arg2)
            *arg2 = var_38.o
            arg2[1].b = 1
return arg2
