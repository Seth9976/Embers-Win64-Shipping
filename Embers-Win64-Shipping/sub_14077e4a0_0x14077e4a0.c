// 函数: sub_14077e4a0
// 地址: 0x14077e4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_38
int64_t rax_1 = __security_cookie ^ &var_38
uint32_t zmm6[0x4] = *arg2
bool cond:0 = _mm_and_ps(zmm6, 0x7fffffff)[0] f> 9.99999975e-05f
uint32_t zmm3[0x4] = *(arg2 + 8)

if (cond:0)
label_14077e4fc:
    uint32_t zmm5[0x4] = *(arg2 + 0x14)
    bool cond:1_1 = _mm_and_ps(arg2[1].d, 0x7fffffff)[0] f> 9.99999975e-05f
    zmm3 = *(arg2 + 0x18)
    
    if (cond:1_1)
    label_14077e526:
        zmm3 = *(arg2 + 0x24)
        bool cond:2_1 = _mm_and_ps(arg2[2].d, 0x7fffffff)[0] f> 9.99999975e-05f
        uint32_t zmm4[0x4] = *(arg2 + 0x28)
        
        if (cond:2_1)
        label_14077e560:
            zmm5[0] = zmm5[0] f+ zmm6[0]
            zmm5[0] = zmm5[0] f+ zmm4[0]
            uint32_t zmm0[0x4]
            uint32_t zmm1[0x4]
            
            if (zmm5[0] f<= zx.o(0)[0])
                int64_t rdx = 0
                
                if (zmm5[0] f> zmm6[0])
                    rdx = 1
                
                bool cond:4_1 = zmm4[0] f> *(arg2 + rdx * 0x14)
                zmm4 = 0x3f000000
                
                if (cond:4_1)
                    rdx = 2
                
                uint64_t r9_1 = zx.q(rdx.d)
                int64_t r8_1 = sx.q(*(&data_142da76f8 + (rdx << 2)))
                int64_t rdx_1 = sx.q(*(&data_142da76f8 + (r8_1 << 2)))
                zmm0 = *(arg2 + r9_1 * 0x14)
                zmm0[0] = zmm0[0] f- *(arg2 + r8_1 * 0x14)
                zmm0[0] = zmm0[0] f- *(arg2 + rdx_1 * 0x14)
                zmm0[0] = zmm0[0] f+ 1f
                zmm5 = _mm_rsqrt_ss(zmm0[0], zmm0[0])
                zmm0[0] = zmm0[0] f* 0.5f
                zmm5[0] = zmm5[0] f* zmm5[0]
                zmm0[0] = zmm0[0] f* zmm5[0]
                zmm5[0] = zmm5[0] f* (0.5f f- zmm0[0])
                zmm5[0] = zmm5[0] f+ zmm5[0]
                zmm5[0] = zmm5[0] f* zmm5[0]
                zmm0[0] = zmm0[0] f* zmm5[0]
                zmm1 = 0x3f000000
                zmm4[0] = 0.5f f- zmm0[0]
                zmm5[0] = zmm5[0] f* zmm4[0]
                zmm5[0] = zmm5[0] f+ zmm5[0]
                zmm0 = *(arg2 + ((rdx_1 + (r8_1 << 2)) << 2))
                zmm0[0] = zmm0[0] f- *(arg2 + ((r8_1 + (rdx_1 << 2)) << 2))
                zmm1[0] = 0.5f f/ zmm5[0]
                zmm5[0] = zmm5[0] f* 0.5f
                uint32_t var_30[0x4]
                var_30[r9_1] = zmm1[0]
                zmm0[0] = zmm0[0] f* zmm5[0]
                uint32_t var_24_1 = zmm0[0]
                zmm0 = *(arg2 + ((r8_1 + (r9_1 << 2)) << 2))
                zmm0[0] = zmm0[0] f+ *(arg2 + ((r9_1 + (r8_1 << 2)) << 2))
                zmm0[0] = zmm0[0] f* zmm5[0]
                var_30[r8_1] = zmm0[0]
                zmm0 = *(arg2 + ((r9_1 + (rdx_1 << 2)) << 2))
                zmm0[0] = zmm0[0] f+ *(arg2 + ((rdx_1 + (r9_1 << 2)) << 2))
                zmm0[0] = zmm0[0] f* zmm5[0]
                var_30[rdx_1] = zmm0[0]
                *arg1 = var_30
            else
                zmm5[0] = zmm5[0] f+ 1f
                zmm4 = 0x3f000000
                zmm6 = _mm_rsqrt_ss(zmm5[0], zmm5[0])
                zmm5[0] = zmm5[0] f* 0.5f
                zmm6[0] = zmm6[0] f* zmm6[0]
                zmm5[0] = zmm5[0] f* zmm6[0]
                zmm6[0] = zmm6[0] f* (0.5f f- zmm5[0])
                zmm6[0] = zmm6[0] f+ zmm6[0]
                zmm6[0] = zmm6[0] f* zmm6[0]
                zmm5[0] = zmm5[0] f* zmm6[0]
                zmm1 = 0x3f000000
                zmm4[0] = 0.5f f- zmm5[0]
                zmm6[0] = zmm6[0] f* zmm4[0]
                zmm6[0] = zmm6[0] f+ zmm6[0]
                zmm1[0] = 0.5f f/ zmm6[0]
                zmm6[0] = zmm6[0] f* 0.5f
                (*arg1)[3] = zmm1[0]
                zmm0 = *(arg2 + 0x18)
                zmm0[0] = zmm0[0] f- *(arg2 + 0x24)
                zmm0[0] = zmm0[0] f* zmm6[0]
                *arg1 = zmm0[0]
                zmm1 = arg2[2].d
                zmm1[0] = zmm1[0] f- *(arg2 + 8)
                zmm1[0] = zmm1[0] f* zmm6[0]
                (*arg1)[1] = zmm1[0]
                zmm0 = *(arg2 + 4)
                zmm0[0] = zmm0[0] f- arg2[1].d
                zmm0[0] = zmm0[0] f* zmm6[0]
                (*arg1)[2] = zmm0[0]
        else
            if (_mm_and_ps(zmm3, 0x7fffffff)[0] f> 9.99999975e-05f)
                goto label_14077e560
            
            if (_mm_and_ps(zmm4, 0x7fffffff)[0] f> 9.99999975e-05f)
                goto label_14077e560
            
            *arg1 = data_14399f720
    else
        if (_mm_and_ps(zmm5, 0x7fffffff)[0] f> 9.99999975e-05f)
            goto label_14077e526
        
        if (not(_mm_and_ps(zmm3, 0x7fffffff)[0] f<= 9.99999975e-05f))
            goto label_14077e526
        
        *arg1 = data_14399f720
else
    if (_mm_and_ps(*(arg2 + 4), 0x7fffffff)[0] f> 9.99999975e-05f)
        goto label_14077e4fc
    
    if (not(_mm_and_ps(zmm3, 0x7fffffff)[0] f<= 9.99999975e-05f))
        goto label_14077e4fc
    
    *arg1 = data_14399f720

__security_check_cookie(rax_1 ^ &var_38)
return arg1
