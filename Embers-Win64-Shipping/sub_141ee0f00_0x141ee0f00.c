// 函数: sub_141ee0f00
// 地址: 0x141ee0f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax_1 = (*(*arg1 + 0x5c0))()
int32_t rax_4

if (rax_1 != 0)
    int64_t* rcx = arg1[0x16]
    rax_4 = (*(*rcx + 0x4c8))(rcx) - 1

int32_t result

if (rax_1 == 0 || (rax_4 & 0xfffffffd) != 0)
    *arg3 &= 0xfffffff8
    *(arg3 + 4) = 0
    result = memset(arg3 + 0xc, 0, 0x88)
    *(arg3 + 0x14) = 0x3f800000
else
    char rax_6
    int64_t r8
    rax_6, r8 = (*(*arg1 + 0x550))(arg1)
    float zmm6[0x4]
    
    zmm6 = rax_6 == 0 ? 0xc019999a : 0x40199b3d
    
    zmm6[0] = zmm6[0] f+ *(arg1 + 0x154)
    float temp0_1[0x4] = __maxss_xmmss_memss(zmm6[0], 0x4019999a)
    
    if (temp0_1[0] <= 0f)
        goto label_141ee1201
    
    if ((*(arg1 + 0x389) & 1) != 0 || arg4 == 0 || (*(arg1 + 0x1f1) & 8) != 0
            || (*(arg1 + 0x387) & 0x20) != 0)
        *(arg1 + 0x1f1) &= 0xf7
    label_141ee11b2:
        int512_t zmm3
        zmm3.o = temp0_1
        int64_t r8_3 = *arg1
        int512_t zmm2
        zmm2.o = temp0_1
        void* rcx_10 = *(arg1[0x29] + 0x290)
        int64_t var_f8 = arg5
        float zmm0[0x4] = *(rcx_10 + 0x1e0)
        float temp0_4[0x4] = _mm_min_ss(_mm_shuffle_ps(zmm0, zmm0, 0x55)[0], zmm0[0])
        temp0_4[0] = temp0_4[0] f* *(rcx_10 + 0x424)
        float var_100 = temp0_4[0]
        (*(r8_3 + 0x8b0))(arg1, arg2, zmm2, zmm3, arg3, var_100, var_f8)
    label_141ee1201:
        result = *arg3
        
        if ((result.b & 1) != 0 && (result.b & 4) == 0)
            r8.b = 1
            result = (*(*arg1 + 0x8d8))(arg1, arg3 + 0xc, r8)
            
            if (result.b != 0)
                zmm6[0] = zmm6[0] f+ *(arg1 + 0x154)
                int64_t rax_23 = *arg1
                float temp0_5[0x4] = __maxss_xmmss_memss(zmm6[0], 0x4019999a)
                
                if ((*(rax_23 + 0x550))(arg1) != 0)
                    float temp0_6[0x4] = _mm_max_ss(arg1[0x3c].d[0], 0)
                    temp0_5[0] = temp0_5[0] + temp0_6[0]
                
                zmm0 = data_143264930
                int32_t var_e8 = var_e8 & 0xfffffff8
                float var_78_1[0x4] = zmm0
                int32_t var_e4_1 = 0
                int32_t var_7c_1 = 0xffffffff
                int64_t var_68_1 = 0
                int64_t var_60_1 = 0
                char var_dc
                memset(&var_dc, 0, 0x88)
                int64_t rbx_2 = *arg1
                int32_t var_d4_1 = 0x3f800000
                int128_t zmm0_1
                int512_t zmm1_1
                zmm0_1, zmm1_1 = sub_141ee6630(arg1)
                zmm1_1.o = zmm0_1
                result =
                    (*(rbx_2 + 0x8e0))(arg1, zmm1_1, arg3 + 0xc, temp0_5, &var_e8, var_100, var_f8)
                
                if (result.b == 0)
                    *arg3 &= 0xfffffffd
                else
                    uint128_t zmm2_1 = *(arg3 + 4)
                    zmm0_1.d = 2.1500001f f- zmm2_1.d
                    zmm0_1.d = zmm0_1.d f+ var_e4_1
                    
                    if (not(zmm0_1.d f< temp0_5[0]))
                        *(arg3 + 4) = 0x4009999a
                        zmm2_1 = 0x4009999a
                    
                    if ((*arg3 & 2) == 0)
                        int32_t* var_108_2
                        var_108_2.b = 1
                        return sub_141ef5960(arg3, &var_dc, zmm2_1, 
                            __maxss_xmmss_memss(zmm2_1[0], 0x3ff33333), var_108_2.b)
    else
        int64_t* rbx_1 = *(arg1[0x29] + 0x298)
        void* const r14_1
        
        if (rbx_1 == 0)
            r14_1 = nullptr
        else
            r14_1 = rbx_1[0x14]
        
        int64_t* rcx_2 = arg1[0x16]
        uint32_t r15_1 = (*(*rcx_2 + 0x4d8))(rcx_2)
        uint32_t rax_9
        char r8_2
        
        if (rbx_1 == 0)
            r8_2 = *(arg1 + 0x1f1)
        else
            int64_t rdx = *rbx_1
            
            if ((((*(rdx + 0x4c8))(rbx_1, rdx) - 1) & 0xfffffffd) != 0)
                rax_9.b = 8
            else
                int64_t r8_1 = *rbx_1
                
                if ((*(r8_1 + 0x4d0))(rbx_1, zx.q(r15_1), r8_1) != 2)
                    rax_9.b = 8
                else
                    rax_9 = sub_141ea5e60(rbx_1)
                    
                    if (rax_9.b != 0)
                        rax_9.b = 8
            
            r8_2 = (*(arg1 + 0x1f1) & 0xf7) | rax_9.b
            *(arg1 + 0x1f1) = r8_2
        
        void* const rax_18
        
        if (r14_1 != 0)
            int32_t rax_11 = *(r14_1 + 0xc)
            
            if (rax_11 s>= data_143e1d9b4)
                rax_18 = nullptr
            else
                int16_t temp0_2
                int32_t temp1_1
                temp0_2:temp1_1 = sx.q(rax_11)
                uint32_t rdx_3 = zx.d(temp0_2)
                int32_t rax_13 = temp1_1 + rdx_3
                rax_18 = *(data_143e1d9a0 + (sx.q(rax_13 s>> 0x10) << 3))
                    + sx.q(zx.d(rax_13.w) - rdx_3) * 0x18
        
        if (r14_1 == 0 || ((*(rax_18 + 8) u>> 0x1d).b & 1) == 0)
            rax_9.b = 0
        else
            rax_9.b = 1
        
        if ((r8_2 & 8) != 0 || rax_9.b != 0 || rbx_1 == 0)
            *(arg1 + 0x1f1) = r8_2 & 0xf7
            goto label_141ee11b2
        
        *arg3 = *(arg1 + 0x2f0)
        arg3[1] = *(arg1 + 0x300)
        arg3[2] = *(arg1 + 0x310)
        arg3[3] = *(arg1 + 0x320)
        arg3[4] = *(arg1 + 0x330)
        arg3[5] = *(arg1 + 0x340)
        arg3[6] = *(arg1 + 0x350)
        arg3[7] = *(arg1 + 0x360)
        arg3[8] = *(arg1 + 0x370)
        result = arg1[0x70].d
        arg3[9].d = result

return result
