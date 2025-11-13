// 函数: sub_142218490
// 地址: 0x142218490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result_1 = *(arg1 + 0x240)
int64_t rsi = sx.q(arg3)
void* result = result_1

if (result_1 != 0 && *(result_1 + 0x28) s< 0)
    int64_t r12
    r12.b = 0
    int128_t zmm12
    int128_t var_98_1 = zmm12
    uint128_t zmm13
    uint128_t var_a8_1 = zmm13
    uint128_t zmm15
    uint128_t var_c8_1 = zmm15
    uint128_t zmm14
    zmm14.d = sub_141fe5610(result_1 + 0x40, *(arg1 + 0x12c), *(arg1 + 0x18), nullptr).d f/
        *(result_1 + 0x38)
    
    if (zmm14.d f< 0f)
        *arg4 = 0
        *arg5 = 0
    else
        int64_t rcx_1 = *(arg1 + 0x2a8)
        int64_t rsi_1 = rsi * 3
        int64_t rax_1 = *(arg1 + 0x258)
        int32_t arg_8 = (*(*(arg1 + 0x210) + (rsi << 2))).d
        uint128_t zmm9
        zmm9.d = (*(rax_1 + (rsi_1 << 2))).d f- *(rcx_1 + (rsi_1 << 2))
        uint128_t zmm11
        zmm11.d = (*(rax_1 + (rsi_1 << 2) + 4)).d f- *(rcx_1 + (rsi_1 << 2) + 4)
        float zmm10[0x4] = *(rax_1 + (rsi_1 << 2) + 8)
        zmm10[0] = zmm10[0] f- *(rcx_1 + (rsi_1 << 2) + 8)
        uint128_t zmm0_1
        zmm0_1.d = zmm9.d f* zmm9.d
        zmm13.d = zmm11.d f* zmm11.d
        zmm10[0] = zmm10[0] * zmm10[0]
        zmm13.d = zmm13.d f+ zmm0_1.d
        zmm0_1 = *(result_1 + 0x70)
        zmm13.d = zmm13.d f+ zmm10[0]
        float zmm7_1[0x4] = _mm_sqrt_ss(0, zmm13.d)
        
        if (zmm0_1.d f<= 0f)
            if (not(zmm7_1[0] <= 1048576f))
                goto label_1422185ea
        else if (zmm7_1[0] f> zmm0_1.d || not(zmm7_1[0] <= 1048576f))
        label_1422185ea:
            zmm7_1 = zx.o(0)
            *sub_1421b7c40(arg1, result_1) = 0
            int64_t rax_3 = *(arg1 + 0x258)
            int64_t rcx_3 = *(arg1 + 0x2a8)
            *(rcx_3 + (rsi_1 << 2)) = *(rax_3 + (rsi_1 << 2))
            *(rcx_3 + (rsi_1 << 2) + 8) = *(rax_3 + (rsi_1 << 2) + 8)
        
        uint128_t zmm6_1 = zx.o(0)
        uint128_t zmm3_1 = 0x322bcc77
        zmm15 = 0x3f000000
        uint128_t zmm2_1
        
        if (not(0f f>= *(*(arg1 + 0x238) + 0x48)))
            float zmm4_1[0x4] = *(arg1 + 0x1e0)
            float zmm1[0x4]
            
            if (*(arg1 + 0x118) == 0)
                if (not(zmm4_1[0] != 0f))
                    zmm4_1 = 0x38d1b717
                
                int64_t rax_6 = *(arg1 + 0x258)
                int64_t rcx_4 = *(arg1 + 0x2a8)
                zmm2_1.d = 1f / zmm4_1[0]
                zmm3_1.d = (*(rax_6 + (rsi_1 << 2))).d f- *(rcx_4 + (rsi_1 << 2))
                zmm0_1.d = (*(rax_6 + (rsi_1 << 2) + 8)).d f- *(rcx_4 + (rsi_1 << 2) + 8)
                zmm1 = *(rax_6 + (rsi_1 << 2) + 4)
                zmm1[0] = zmm1[0] f- *(rcx_4 + (rsi_1 << 2) + 4)
                int64_t rcx_5 = *(arg1 + 0x2d8)
                zmm3_1.d = zmm3_1.d f* zmm2_1.d
                zmm0_1.d = zmm0_1.d f* zmm2_1.d
                zmm1[0] = zmm1[0] f* zmm2_1.d
                int32_t var_d8_1 = zmm0_1.d
                zmm0_1 = zmm3_1
                zmm3_1 = 0x322bcc77
                *(rcx_5 + (rsi_1 << 2)) = (_mm_unpacklo_ps(zmm0_1, zmm1[0].q)).q
                *(rcx_5 + (rsi_1 << 2) + 8) = var_d8_1
            
            zmm4_1[0] = zmm4_1[0] f- *(*(arg1 + 0x1f0) + (rsi << 2))
            
            if (not(zmm4_1[0] != 0f))
                zmm4_1 = 0x38d1b717
            
            zmm0_1.d = 1f / zmm4_1[0]
            zmm9.d = zmm9.d f* zmm0_1.d
            zmm10[0] = zmm10[0] f* zmm0_1.d
            zmm6_1.d = zmm11.d f* zmm0_1.d
            zmm2_1.d = zmm9.d f* zmm9.d
            zmm10[0] = zmm10[0] * zmm10[0]
            zmm0_1.d = zmm6_1.d f* zmm6_1.d
            zmm2_1.d = zmm2_1.d f+ zmm0_1.d
            zmm2_1.d = zmm2_1.d f+ zmm10[0]
            uint128_t zmm5_1
            
            if (not(zmm2_1.d f<= zmm3_1.d))
                zmm4_1 = 0x3f000000
                zmm5_1 = _mm_rsqrt_ss(zmm2_1.d, zmm2_1.d)
                zmm3_1.d = zmm2_1.d f* 0.5f
                zmm0_1.d = zmm5_1.d f* zmm5_1.d
                zmm1 = zmm3_1
                zmm1[0] = zmm1[0] f* zmm0_1.d
                zmm2_1.d = 0.5f - zmm1[0]
                zmm0_1.d = zmm5_1.d f* zmm2_1.d
                zmm5_1.d = zmm5_1.d f+ zmm0_1.d
                zmm1 = zmm5_1
                zmm1[0] = zmm1[0] f* zmm5_1.d
                zmm3_1.d = zmm3_1.d f* zmm1[0]
                zmm4_1[0] = 0.5f f- zmm3_1.d
                zmm3_1 = 0x322bcc77
                zmm0_1.d = zmm5_1.d f* zmm4_1[0]
                zmm5_1.d = zmm5_1.d f+ zmm0_1.d
                zmm9.d = zmm9.d f* zmm5_1.d
                zmm0_1.d = zmm5_1.d f* zmm6_1.d
                zmm5_1.d = zmm5_1.d f* zmm10[0]
                zmm6_1 = zmm0_1
                zmm10 = zmm5_1
            
            int64_t rax_9 = *(arg1 + 0x2d8)
            zmm0_1 = zx.o(*(rax_9 + (rsi_1 << 2)))
            int32_t rax_10 = *(rax_9 + (rsi_1 << 2) + 8)
            zmm15 = zmm0_1.d
            zmm11 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
            zmm0_1.d = zmm15.d f* zmm15.d
            zmm2_1.d = zmm11.d f* zmm11.d
            zmm2_1.d = zmm2_1.d f+ zmm0_1.d
            zmm0_1 = rax_10
            zmm1 = zmm0_1
            zmm1[0] = zmm1[0] f* zmm0_1.d
            zmm2_1.d = zmm2_1.d f+ zmm1[0]
            
            if (not(zmm2_1.d f<= zmm3_1.d))
                zmm3_1.d = zmm2_1.d
                float temp0_5[0x4] = _mm_rsqrt_ss(zmm3_1[0], zmm3_1.d)
                zmm3_1.d = zmm3_1.d f* 0.5f
                zmm0_1.d = temp0_5.d f* temp0_5[0]
                zmm1 = zmm3_1
                zmm1[0] = zmm1[0] f* zmm0_1.d
                zmm2_1.d = 0.5f - zmm1[0]
                zmm0_1.d = temp0_5.d f* zmm2_1.d
                temp0_5[0] = temp0_5[0] f+ zmm0_1.d
                temp0_5[0] = temp0_5[0] * temp0_5[0]
                zmm3_1.d = zmm3_1.d f* temp0_5[0]
                zmm5_1.d = 0.5f f- zmm3_1.d
                zmm0_1.d = temp0_5.d f* zmm5_1.d
                temp0_5[0] = temp0_5[0] f+ zmm0_1.d
                zmm15.d = zmm15.d f* temp0_5[0]
                zmm11.d = zmm11.d f* temp0_5[0]
                zmm0_1.d = rax_10.d f* temp0_5[0]
            
            zmm6_1.d = zmm6_1.d f* zmm11.d
            zmm9.d = zmm9.d f* zmm15.d
            zmm15 = 0x3f000000
            zmm10[0] = zmm10[0] f* zmm0_1.d
            zmm6_1.d = zmm6_1.d f+ zmm9.d
            zmm6_1.d = zmm6_1.d f+ zmm10[0]
            zmm6_1.d = zmm6_1.d f- 1f
            zmm6_1.d = zmm6_1.d f* -0.5f
        
        if (zmm7_1[0] <= 0f)
            *arg4 = 0
            *arg5 = 0
        else
            void* rax_11 = *(arg1 + 0x240)
            zmm0_1.d = (*(rax_11 + 0x3c)).d f* *(rax_11 + 0x38)
            void* rax_12 = *(arg1 + 0x238)
            bool cond:2_1 = zmm7_1[0] f> zmm0_1.d
            zmm7_1[0] = zmm7_1[0] f+ arg_8
            zmm6_1.d = zmm6_1.d f* *(rax_12 + 0x48)
            r12.b = cond:2_1
            zmm0_1 = arg2
            zmm7_1[0] = zmm7_1[0] f* zmm14.d
            zmm7_1[0] = zmm7_1[0] f+ zmm6_1.d
            
            if (zmm0_1.d f<= 0f)
                zmm2_1 = zx.o(0)
            else
                zmm2_1.d = 1f f/ zmm0_1.d
            
            int32_t rax_13
            
            if ((*(rax_12 + 0x40) & 0x20) == 0 || *(arg1 + 0x118) != 0 || zmm7_1[0] >= 1f)
                zmm7_1[0] = zmm7_1[0] + zmm7_1[0]
                zmm7_1[0] = zmm7_1[0] f- zmm15.d
                rax_13 = int.d(zmm7_1[0]) s>> 1
            else
                rax_13 = 1
            
            *arg4 = rax_13
            zmm0_1.d = _mm_cvtepi32_ps(zx.o(rax_13)).d f* zmm2_1.d
            *arg5 = zmm0_1.d
            void* rax_16 = *(arg1 + 0x240)
            float temp0_7[0x4] = _mm_cvtepi32_ps(zx.o(*arg4))
            temp0_7[0] = temp0_7[0] f* *(rax_16 + 0x38)
            int64_t rax_17 = *(arg1 + 0x210)
            zmm7_1[0] = zmm7_1[0] - temp0_7[0]
            *(rax_17 + (rsi << 2)) = _mm_max_ss(zmm7_1[0], 0)[0]
    
    result = *(arg1 + 0x240)
    
    if ((*(result + 0x74) & 1) != 0)
        result.b = r12.b != 1
        return result

return *(result + 0x30) & 1
