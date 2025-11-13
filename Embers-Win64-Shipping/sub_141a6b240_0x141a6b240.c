// 函数: sub_141a6b240
// 地址: 0x141a6b240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_20 = arg3[1].d

if ((*arg3).b != 2)
    int32_t var_20_1 = *(arg3 + 0x14)
    
    if ((*(arg3 + 0xc)).b != 2)
        int64_t zmm0 = *arg3
        int32_t var_20_2 = arg3[1].d
        char var_18
        int64_t arg_18
        uint64_t arg_20
        int32_t* rax_3
        
        if (zmm0.b != 1)
            rax_3 = sub_141a35470(&arg_20, zmm0, arg1)
            var_18 = 0
        else
            rax_3 = sub_141a35470(&arg_18, zmm0, arg1)
            var_18 = 1
        
        int64_t rax_4 = *rax_3
        uint64_t rdx_1 = *(arg3 + 4)
        int32_t zmm4 = (zx.o(0)).d
        int64_t rcx_2 = arg3[2]
        arg_18 = rcx_2
        float zmm2[0x4] = arg_18:4.d
        arg_20 = rdx_1
        zmm2[0] = zmm2[0] f- arg_20:4.d
        int32_t var_20_3 = rax_4:4.d
        uint64_t var_28_3 = var_18.q
        zmm2[0] = zmm2[0] + zmm2[0]
        zmm2[0] = zmm2[0] - 0.5f
        int32_t rax_7 = int.d(zmm2[0]) s>> 1
        int32_t rdx_2 = rcx_2.d - rdx_1.d + rax_7
        uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(rax_7))
        arg_18.d = rdx_2
        zmm2[0] = zmm2[0] f- zmm0_1.d
        
        if (zmm2[0] f>= zmm4)
            arg_18:4.d = _mm_min_ss(zmm2[0], 0x3f7fffff)[0]
        else
            arg_18:4.d = 0
        
        arg_18 = arg_18
        zmm2 = arg_18:4.d
        arg_20 = var_28_3
        zmm2[0] = zmm2[0] f+ arg_20:4.d
        zmm2[0] = zmm2[0] + zmm2[0]
        zmm2[0] = zmm2[0] - 0.5f
        float zmm1[0x4] = zmm2
        int32_t rcx_4 = int.d(zmm1[0])
        arg_18.d = (int.d(zmm2[0]) s>> 1) + var_28_3:4.d + rdx_2
        
        if (rcx_4 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_4)).d f== zmm1[0]))
            zmm1 = _mm_cvtepi32_ps(zx.o(rcx_4
                - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))
        
        zmm2[0] = zmm2[0] - zmm1[0]
        
        if (zmm2[0] f>= zmm4)
            arg_18:4.d = _mm_min_ss(zmm2[0], 0x3f7fffff)[0]
        else
            arg_18:4.d = 0
        
        int32_t rax_16 = *(arg3 + 0x14)
        uint64_t var_28_4 = arg_18
        var_28_4.b = 1
        
        if ((*(arg3 + 0xc)).b != 1)
            var_28_4.b = 0
        
        *arg2 = var_18.q
        arg2[1].d = rax_4:4.d
        *(arg2 + 0xc) = var_28_4
        *(arg2 + 0x14) = rax_16
        return arg2

sub_141a6ae40(arg1, arg2, arg3)
return arg2
