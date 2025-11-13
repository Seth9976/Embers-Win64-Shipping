// 函数: sub_140f51b90
// 地址: 0x140f51b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x2f8) == 0)
    sub_140dc18d0(arg1, arg2, arg3, arg4)
else
    int64_t* rcx = *(arg1 + 0x2f0)
    
    if (rcx == 0)
        sub_140dc18d0(arg1, arg2, arg3, arg4)
    else if ((*(*rcx + 0x28))(rcx) == 0)
        sub_140dc18d0(arg1, arg2, arg3, arg4)
    else
        int64_t* rcx_1
        
        if (*(arg1 + 0x2f8) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(arg1 + 0x2f0)
        
        int32_t arg_8
        (*(*rcx_1 + 0x48))(rcx_1, &arg_8, zx.q(*(arg1 + 0x2d0)))
        uint128_t zmm0 = arg_8
        
        if (zmm0.d f!= 0f)
        label_140f51c34:
            int64_t var_30
            sub_140f2bf70(arg1, &var_30, arg3, zmm0)
            int64_t r8_2 = sx.q(*(arg1 + 0x2d0))
            int64_t rsi_1 = var_30
            int32_t rdx_2 = *(arg1 + 0x2d8)
            int32_t r9 = *(arg1 + 0x2dc)
            int512_t zmm2_1
            zmm2_1.o = *(arg1 + 0x304)
            int64_t rcx_3 = r8_2 * 5
            float zmm1_1[0x4] = *(rsi_1 + (rcx_3 << 2))
            zmm1_1[0] = zmm1_1[0] f* *(rsi_1 + (rcx_3 << 2) + 0x10)
            zmm1_1[0] = zmm1_1[0] f* *(rsi_1 + (rcx_3 << 2) + 0xc)
            uint64_t rcx_5 = zx.q((sbb.q(rcx_3, rcx_3, rdx_2 != 0)).d) & 4
            int64_t var_38 = (_mm_unpacklo_ps(zmm1_1, zmm1_1[0].q)).q
            float zmm0_1[0x4] = *(&arg_8 + rcx_5)
            zmm0_1[0] = zmm0_1[0] f- *(&var_38 + rcx_5)
            sub_140f48de0(arg1, rdx_2, r8_2, r9, r8_2.d, zmm0_1[0], arg1 + 0x2a8, &var_30)
            *arg2 = 1
            *(arg2 + 8) = 0
            *(arg2 + 0x10) = 0
            arg2[0x20] = 0
            __builtin_memset(&arg2[0x28], 0, 0x88)
            *(arg2 + 0xb4) &= 0xffffff00
            *(arg2 + 0xb0) = 0x20702
            
            if (rsi_1 != 0)
                sub_140a74f90(rsi_1)
        else
            zmm0 = arg5
            
            if (not(zmm0.d f== 0f))
                goto label_140f51c34
            
            sub_140dc18d0(arg1, arg2, arg3, arg4)

return arg2
