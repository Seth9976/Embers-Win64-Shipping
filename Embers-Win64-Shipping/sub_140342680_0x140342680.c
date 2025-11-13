// 函数: sub_140342680
// 地址: 0x140342680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4]
float var_28[0x4] = zmm6
uint64_t result = zx.q(_mm_movemask_ps(*arg5))
float zmm0[0x4]
int32_t zmm1[0x4]
int32_t zmm2[0x4]
int32_t zmm3[0x4]

if (result.d != 0xf)
    if (arg4 s> 0)
        result = zx.q(result.d)
        void* rcx_1 = arg1 + 0x2c
        int64_t i = 0
        
        do
            uint64_t rsi_1 = zx.q(*(arg3 + (i << 1)))
            
            if ((zx.q(result.d) & 0xfffffff9) != 9)
                if ((result.b & 1) == 0)
                    if ((result.b & 2) != 0)
                        goto label_140342810
                    
                    goto label_1403429a0
                
                int32_t var_38 = *(arg2 + (rsi_1 << 6))
                
                if ((result.b & 2) != 0)
                label_140342810:
                    int32_t var_34_1 = *(arg2 + (rsi_1 << 6) + 4)
                    
                    if ((result.b & 4) == 0)
                        goto label_1403429a8
                    
                    goto label_140342827
                
            label_1403429a0:
                
                if ((result.b & 4) == 0)
                label_1403429a8:
                    
                    if ((result.b & 8) != 0)
                        goto label_14034283e
                    
                    goto label_1403429b0
                
            label_140342827:
                int32_t var_30_1 = *(arg2 + (rsi_1 << 6) + 8)
                
                if ((result.b & 8) != 0)
                label_14034283e:
                    int32_t var_2c_1 = *(arg2 + (rsi_1 << 6) + 0xc)
                    zmm0 = var_38.o
                    
                    if ((result.b & 1) == 0)
                        goto label_1403429bc
                    
                    goto label_140342859
                
            label_1403429b0:
                zmm0 = var_38.o
                
                if ((result.b & 1) == 0)
                label_1403429bc:
                    
                    if ((result.b & 2) != 0)
                        goto label_14034286f
                    
                    goto label_1403429c4
                
            label_140342859:
                var_38 = *(arg2 + (rsi_1 << 6) + 0x10)
                
                if ((result.b & 2) != 0)
                label_14034286f:
                    int32_t var_34_2 = *(arg2 + (rsi_1 << 6) + 0x14)
                    
                    if ((result.b & 4) == 0)
                        goto label_1403429cc
                    
                    goto label_140342886
                
            label_1403429c4:
                
                if ((result.b & 4) == 0)
                label_1403429cc:
                    
                    if ((result.b & 8) != 0)
                        goto label_14034289d
                    
                    goto label_1403429d4
                
            label_140342886:
                int32_t var_30_2 = *(arg2 + (rsi_1 << 6) + 0x18)
                
                if ((result.b & 8) != 0)
                label_14034289d:
                    int32_t var_2c_2 = *(arg2 + (rsi_1 << 6) + 0x1c)
                    zmm1 = var_38.o
                    
                    if ((result.b & 1) == 0)
                        goto label_1403429e0
                    
                    goto label_1403428b8
                
            label_1403429d4:
                zmm1 = var_38.o
                
                if ((result.b & 1) == 0)
                label_1403429e0:
                    
                    if ((result.b & 2) != 0)
                        goto label_1403428ce
                    
                    goto label_1403429e8
                
            label_1403428b8:
                var_38 = *(arg2 + (rsi_1 << 6) + 0x20)
                
                if ((result.b & 2) != 0)
                label_1403428ce:
                    int32_t var_34_3 = *(arg2 + (rsi_1 << 6) + 0x24)
                    
                    if ((result.b & 4) == 0)
                        goto label_1403429f0
                    
                    goto label_1403428e5
                
            label_1403429e8:
                
                if ((result.b & 4) == 0)
                label_1403429f0:
                    
                    if ((result.b & 8) != 0)
                        goto label_1403428fc
                    
                    goto label_1403429f8
                
            label_1403428e5:
                int32_t var_30_3 = *(arg2 + (rsi_1 << 6) + 0x28)
                
                if ((result.b & 8) != 0)
                label_1403428fc:
                    int32_t var_2c_3 = *(arg2 + (rsi_1 << 6) + 0x2c)
                    zmm2 = var_38.o
                    
                    if ((result.b & 1) == 0)
                        goto label_140342a04
                    
                    goto label_140342917
                
            label_1403429f8:
                zmm2 = var_38.o
                
                if ((result.b & 1) == 0)
                label_140342a04:
                    
                    if ((result.b & 2) != 0)
                        goto label_14034292d
                    
                    goto label_140342a0c
                
            label_140342917:
                var_38 = *(arg2 + (rsi_1 << 6) + 0x30)
                
                if ((result.b & 2) != 0)
                label_14034292d:
                    int32_t var_34_4 = *(arg2 + (rsi_1 << 6) + 0x34)
                    
                    if ((result.b & 4) == 0)
                        goto label_140342a14
                    
                    goto label_140342944
                
            label_140342a0c:
                int32_t var_2c_4
                
                if ((result.b & 4) != 0)
                label_140342944:
                    int32_t var_30_4 = *(arg2 + (rsi_1 << 6) + 0x38)
                    
                    if ((result.b & 8) != 0)
                        var_2c_4 = *(arg2 + (rsi_1 << 6) + 0x3c)
                else
                label_140342a14:
                    
                    if ((result.b & 8) != 0)
                        var_2c_4 = *(arg2 + (rsi_1 << 6) + 0x3c)
                zmm3 = var_38.o
            else
                uint64_t rsi_2 = rsi_1 << 6
                zmm0 = *(arg2 + rsi_2)
                zmm1 = *(arg2 + rsi_2 + 0x10)
                zmm2 = *(arg2 + rsi_2 + 0x20)
                zmm3 = *(arg2 + rsi_2 + 0x30)
            
            float temp0_16[0x4] = _mm_unpacklo_ps(zmm0, zmm1[0].q)
            float temp0_17[0x4] = _mm_unpacklo_ps(zmm2, zmm3[0].q)
            zmm6 = temp0_16[0].q | temp0_17[0].q << 0x40
            
            if ((result.b & 1) == 0)
                if ((result.b & 2) != 0)
                    goto label_14034273d
                
                goto label_140342a4a
            
            *(rcx_1 - 0x2c) = zmm6[0]
            
            if ((result.b & 2) != 0)
            label_14034273d:
                *(rcx_1 - 0x28) = __extractps_memd_xmmps_immb(zmm6, 1)
                
                if ((result.b & 4) == 0)
                    goto label_140342a52
                
                goto label_14034274c
            
        label_140342a4a:
            
            if ((result.b & 4) == 0)
            label_140342a52:
                
                if ((result.b & 8) != 0)
                    goto label_14034275b
                
                goto label_140342a5a
            
        label_14034274c:
            *(rcx_1 - 0x24) = __extractps_memd_xmmps_immb(zmm6, 2)
            float zmm4[0x4]
            
            if ((result.b & 8) != 0)
            label_14034275b:
                *(rcx_1 - 0x20) = __extractps_memd_xmmps_immb(zmm6, 3)
                zmm4 = _mm_unpackhi_pd(temp0_16, temp0_17[0].q)
                
                if ((result.b & 1) == 0)
                    goto label_140342a66
                
                goto label_14034276e
            
        label_140342a5a:
            zmm4 = _mm_unpackhi_pd(temp0_16, temp0_17[0].q)
            
            if ((result.b & 1) != 0)
            label_14034276e:
                *(rcx_1 - 0x1c) = zmm4[0]
                
                if ((result.b & 2) != 0)
                label_14034277b:
                    *(rcx_1 - 0x18) = __extractps_memd_xmmps_immb(zmm4, 1)
                    
                    if ((result.b & 4) == 0)
                        goto label_140342a76
                    
                    goto label_14034278a
            else
            label_140342a66:
                
                if ((result.b & 2) != 0)
                    goto label_14034277b
            
            if ((result.b & 4) == 0)
            label_140342a76:
                zmm0 = _mm_unpackhi_ps(zmm0, zmm1)
                zmm2 = _mm_unpackhi_ps(zmm2, zmm3)
                
                if ((result.b & 8) != 0)
                    goto label_14034279f
                
                goto label_140342a84
            
        label_14034278a:
            *(rcx_1 - 0x14) = __extractps_memd_xmmps_immb(zmm4, 2)
            zmm0 = _mm_unpackhi_ps(zmm0, zmm1)
            zmm2 = _mm_unpackhi_ps(zmm2, zmm3)
            
            if ((result.b & 8) != 0)
            label_14034279f:
                *(rcx_1 - 0x10) = __extractps_memd_xmmps_immb(zmm4, 3)
                zmm0 = zmm0[0].q | zmm2[0].q << 0x40
                
                if ((result.b & 1) == 0)
                    goto label_140342a8f
                
                goto label_1403427b1
            
        label_140342a84:
            zmm0 = zmm0[0].q | zmm2[0].q << 0x40
            
            if ((result.b & 1) == 0)
            label_140342a8f:
                
                if ((result.b & 2) != 0)
                    goto label_1403427be
                
                goto label_140342a97
            
        label_1403427b1:
            *(rcx_1 - 0xc) = zmm0[0]
            
            if ((result.b & 2) != 0)
            label_1403427be:
                *(rcx_1 - 8) = __extractps_memd_xmmps_immb(zmm0, 1)
                
                if ((result.b & 4) == 0)
                    goto label_140342a9f
                
                goto label_1403427cd
            
        label_140342a97:
            
            if ((result.b & 4) != 0)
            label_1403427cd:
                *(rcx_1 - 4) = __extractps_memd_xmmps_immb(zmm0, 2)
                
                if ((result.b & 8) != 0)
                    *rcx_1 = __extractps_memd_xmmps_immb(zmm0, 3)
            else
            label_140342a9f:
                
                if ((result.b & 8) != 0)
                    *rcx_1 = __extractps_memd_xmmps_immb(zmm0, 3)
            
            i += 1
            rcx_1 += 0x30
        while (zx.q(arg4) != i)
else if (arg4 s> 0)
    void* rcx = arg1 + 0x20
    int64_t i_1 = 0
    
    do
        result = zx.q(*(arg3 + (i_1 << 1))) << 6
        zmm0 = *(arg2 + result)
        zmm1 = *(arg2 + result + 0x10)
        zmm2 = *(arg2 + result + 0x20)
        zmm3 = *(arg2 + result + 0x30)
        float temp0_1[0x4] = _mm_unpacklo_ps(zmm0, zmm1[0].q)
        float temp0_2[0x4] = _mm_unpackhi_ps(zmm0, zmm1)
        zmm1 = _mm_unpacklo_ps(zmm2, zmm3[0].q)
        zmm2 = _mm_unpackhi_ps(zmm2, zmm3)
        zmm0 = temp0_2[0].q | zmm2[0].q << 0x40
        *(rcx - 0x20) = temp0_1[0].q | zmm1[0].q << 0x40
        zmm1[0].q = temp0_1 u>> 0x40
        *(rcx - 0x10) = zmm1
        *rcx = zmm0
        i_1 += 1
        rcx += 0x30
    while (zx.q(arg4) != i_1)
return result
