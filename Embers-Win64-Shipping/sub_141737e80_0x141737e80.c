// 函数: sub_141737e80
// 地址: 0x141737e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_98
(*(*arg1 + 0x20))(arg1, arg3, &var_98)
int128_t zmm7 = arg6
uint32_t zmm1[0x4] = arg5
zmm1[0] = zmm1[0] f- zmm7.d
uint128_t zmm6 = arg5
int32_t var_94
int32_t var_90
uint32_t zmm2[0x4]
uint32_t zmm3[0x4]

if (__andps_xmmxud_memxud(zmm1, data_142d3f770)[0] f> 9.99999975e-05f)
    arg5 = zx.o(*arg4)
    int32_t rax_2 = arg4[2]
    uint128_t zmm11
    zmm11.d = (*arg4).d f- *arg3
    int128_t zmm12
    zmm12.d = arg4[1].d f- *(arg3 + 4)
    uint32_t zmm13[0x4] = arg4[2]
    zmm13[0] = zmm13[0] f- *(arg3 + 8)
    uint64_t var_88 = arg5.q
    arg5.d = zmm11.d f* zmm11.d
    int32_t var_80_1 = rax_2
    int128_t zmm10
    zmm10.d = zmm12.d f* zmm12.d
    zmm13[0] = zmm13[0] f* zmm13[0]
    zmm10.d = zmm10.d f+ arg5.d
    zmm10.d = zmm10.d f+ zmm13[0]
    
    if (zmm10.d f>= 9.99999994e-09f)
        int32_t var_78
        (*(*arg1 + 0x20))(arg1, arg4, &var_78)
        arg5.d = arg5.d f- zmm7.d
        
        if (__andps_xmmxud_memxud(arg5, data_142d3f770).d f> 9.99999975e-05f)
            (*(*arg1 + 0xb0))(arg1, arg2, arg3, &var_88, zmm7.d)
        else
            zmm1 = 0x3f800000
            int32_t var_74
            int64_t zmm5_1 = var_74
            uint32_t zmm4_1[0x4] = var_78
            int32_t var_70
            zmm3 = var_70
            zmm1[0] = 1f f/ _mm_sqrt_ss(0, zmm10.d).d
            zmm1[0] = zmm1[0] f* zmm12.d
            arg5.d = zmm1.d f* zmm11.d
            zmm1[0] = zmm1[0] f* zmm5_1.d
            arg5.d = arg5.d f* zmm4_1[0]
            zmm1[0] = zmm1[0] f* zmm13[0]
            zmm1[0] = zmm1[0] f+ arg5.d
            zmm1[0] = zmm1[0] f* zmm3[0]
            zmm1[0] = zmm1[0] f+ zmm1[0]
            
            if (__andps_xmmxud_memxud(zmm1, data_142d3f770).d f> 9.99999975e-05f)
                arg5 = zx.o(0)
                zmm1[0] f- 0f
                
                if (not(zmm1[0] f<= 0f))
                    arg5 = 0x3951b717
                else if (not(zmm1[0] f>= 0f))
                    arg5 = 0xb951b717
                
                zmm4_1[0] = zmm4_1[0] f* arg5.d
                zmm5_1.d = zmm5_1.d f* arg5.d
                zmm4_1[0] = zmm4_1[0] f+ *arg4
                zmm3[0] = zmm3[0] f* arg5.d
                zmm5_1.d = zmm5_1.d f+ arg4[1]
                zmm3[0] = zmm3[0] f+ arg4[2]
                var_88 = (_mm_unpacklo_ps(zmm4_1, zmm5_1)).q
                uint32_t var_80_2 = zmm3[0]
                (*(*arg1 + 0xb0))(arg1, arg2, arg3, &var_88, zmm7.d)
            else
                zmm4_1 = *arg4
                zmm3 = arg4[1]
                zmm1 = var_94
                zmm2 = var_90
                arg5.d = var_98.d f* zmm6.d
                zmm1[0] = zmm1[0] f* zmm6.d
                zmm4_1[0] = zmm4_1[0] f- arg5.d
                zmm2[0] = zmm2[0] f* zmm6.d
                arg5 = arg4[2]
                zmm3[0] = zmm3[0] f- zmm1[0]
                *(arg2 + 0xc) = 1
                arg5.d = arg5.d f- zmm2[0]
                *arg2 = (_mm_unpacklo_ps(zmm4_1, zmm3[0].q)).q
                arg2[1].d = arg5.d
    else
        int32_t var_70_2 = 0
        *arg2 = (_mm_unpacklo_ps(zx.o(0), zx.o(0)[0].q)).q
        arg2[1].d = 0
        *(arg2 + 0xc) = 0
else
    zmm3 = *arg3
    zmm2 = *(arg3 + 4)
    zmm1 = var_98
    zmm1[0] = zmm1[0] f* zmm6.d
    arg5.d = var_94.d f* zmm6.d
    zmm3[0] = zmm3[0] f- zmm1[0]
    zmm1 = var_90
    zmm1[0] = zmm1[0] f* zmm6.d
    zmm2[0] = zmm2[0] f- arg5.d
    arg5 = *(arg3 + 8)
    *(arg2 + 0xc) = 1
    arg5.d = arg5.d f- zmm1[0]
    *arg2 = (_mm_unpacklo_ps(zmm3, zmm2[0].q)).q
    arg2[1].d = arg5.d
return arg2
