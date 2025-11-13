// 函数: sub_140342b40
// 地址: 0x140342b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm7[0x4]
uint32_t var_28[0x4] = zmm7
float zmm6[0x4]
float var_38[0x4] = zmm6
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
                        goto label_140342cf0
                    
                    goto label_140342e80
                
                int32_t var_48 = *(arg2 + (rsi_1 << 6))
                
                if ((result.b & 2) != 0)
                label_140342cf0:
                    int32_t var_44_1 = *(arg2 + (rsi_1 << 6) + 4)
                    
                    if ((result.b & 4) == 0)
                        goto label_140342e88
                    
                    goto label_140342d07
                
            label_140342e80:
                
                if ((result.b & 4) == 0)
                label_140342e88:
                    
                    if ((result.b & 8) != 0)
                        goto label_140342d1e
                    
                    goto label_140342e90
                
            label_140342d07:
                int32_t var_40_1 = *(arg2 + (rsi_1 << 6) + 8)
                
                if ((result.b & 8) != 0)
                label_140342d1e:
                    int32_t var_3c_1 = *(arg2 + (rsi_1 << 6) + 0xc)
                    zmm0 = var_48.o
                    
                    if ((result.b & 1) == 0)
                        goto label_140342e9d
                    
                    goto label_140342d3a
                
            label_140342e90:
                zmm0 = var_48.o
                
                if ((result.b & 1) == 0)
                label_140342e9d:
                    
                    if ((result.b & 2) != 0)
                        goto label_140342d50
                    
                    goto label_140342ea5
                
            label_140342d3a:
                var_48 = *(arg2 + (rsi_1 << 6) + 0x10)
                
                if ((result.b & 2) != 0)
                label_140342d50:
                    int32_t var_44_2 = *(arg2 + (rsi_1 << 6) + 0x14)
                    
                    if ((result.b & 4) == 0)
                        goto label_140342ead
                    
                    goto label_140342d67
                
            label_140342ea5:
                
                if ((result.b & 4) == 0)
                label_140342ead:
                    
                    if ((result.b & 8) != 0)
                        goto label_140342d7e
                    
                    goto label_140342eb5
                
            label_140342d67:
                int32_t var_40_2 = *(arg2 + (rsi_1 << 6) + 0x18)
                
                if ((result.b & 8) != 0)
                label_140342d7e:
                    int32_t var_3c_2 = *(arg2 + (rsi_1 << 6) + 0x1c)
                    zmm1 = var_48.o
                    
                    if ((result.b & 1) == 0)
                        goto label_140342ec2
                    
                    goto label_140342d9a
                
            label_140342eb5:
                zmm1 = var_48.o
                
                if ((result.b & 1) == 0)
                label_140342ec2:
                    
                    if ((result.b & 2) != 0)
                        goto label_140342db0
                    
                    goto label_140342eca
                
            label_140342d9a:
                var_48 = *(arg2 + (rsi_1 << 6) + 0x20)
                
                if ((result.b & 2) != 0)
                label_140342db0:
                    int32_t var_44_3 = *(arg2 + (rsi_1 << 6) + 0x24)
                    
                    if ((result.b & 4) == 0)
                        goto label_140342ed2
                    
                    goto label_140342dc7
                
            label_140342eca:
                
                if ((result.b & 4) == 0)
                label_140342ed2:
                    
                    if ((result.b & 8) != 0)
                        goto label_140342dde
                    
                    goto label_140342eda
                
            label_140342dc7:
                int32_t var_40_3 = *(arg2 + (rsi_1 << 6) + 0x28)
                
                if ((result.b & 8) != 0)
                label_140342dde:
                    int32_t var_3c_3 = *(arg2 + (rsi_1 << 6) + 0x2c)
                    zmm2 = var_48.o
                    
                    if ((result.b & 1) == 0)
                        goto label_140342ee7
                    
                    goto label_140342dfa
                
            label_140342eda:
                zmm2 = var_48.o
                
                if ((result.b & 1) == 0)
                label_140342ee7:
                    
                    if ((result.b & 2) != 0)
                        goto label_140342e10
                    
                    goto label_140342eef
                
            label_140342dfa:
                var_48 = *(arg2 + (rsi_1 << 6) + 0x30)
                
                if ((result.b & 2) != 0)
                label_140342e10:
                    int32_t var_44_4 = *(arg2 + (rsi_1 << 6) + 0x34)
                    
                    if ((result.b & 4) == 0)
                        goto label_140342ef7
                    
                    goto label_140342e27
                
            label_140342eef:
                int32_t var_3c_4
                
                if ((result.b & 4) != 0)
                label_140342e27:
                    int32_t var_40_4 = *(arg2 + (rsi_1 << 6) + 0x38)
                    
                    if ((result.b & 8) != 0)
                        var_3c_4 = *(arg2 + (rsi_1 << 6) + 0x3c)
                else
                label_140342ef7:
                    
                    if ((result.b & 8) != 0)
                        var_3c_4 = *(arg2 + (rsi_1 << 6) + 0x3c)
                zmm3 = var_48.o
            else
                uint64_t rsi_2 = rsi_1 << 6
                zmm0 = *(arg2 + rsi_2)
                zmm1 = *(arg2 + rsi_2 + 0x10)
                zmm2 = *(arg2 + rsi_2 + 0x20)
                zmm3 = *(arg2 + rsi_2 + 0x30)
            
            float zmm4[0x4] = _mm_unpacklo_epi32(zmm0, zmm1[0].q)
            int32_t temp0_18[0x4] = _mm_unpacklo_epi32(zmm2, zmm3[0].q)
            zmm6 = _mm_unpacklo_epi64(zmm4, temp0_18[0].q)
            
            if ((result.b & 1) == 0)
                if ((result.b & 2) != 0)
                    goto label_140342c12
                
                goto label_140342f34
            
            *(rcx_1 - 0x2c) = zmm6[0]
            
            if ((result.b & 2) != 0)
            label_140342c12:
                *(rcx_1 - 0x28) = _mm_shuffle_epi32(zmm6, 0xe5)[0]
                
                if ((result.b & 4) == 0)
                    goto label_140342f3c
                
                goto label_140342c24
            
        label_140342f34:
            
            if ((result.b & 4) == 0)
            label_140342f3c:
                
                if ((result.b & 8) != 0)
                    goto label_140342c36
                
                goto label_140342f44
            
        label_140342c24:
            *(rcx_1 - 0x24) = _mm_shuffle_epi32(zmm6, 0x4e)[0]
            
            if ((result.b & 8) != 0)
            label_140342c36:
                *(rcx_1 - 0x20) = _mm_shuffle_epi32(zmm6, 0xe7)[0]
                zmm4 = _mm_unpackhi_epi64(zmm4, temp0_18[0].q)
                
                if ((result.b & 1) == 0)
                    goto label_140342f50
                
                goto label_140342c47
            
        label_140342f44:
            zmm4 = _mm_unpackhi_epi64(zmm4, temp0_18[0].q)
            
            if ((result.b & 1) != 0)
            label_140342c47:
                *(rcx_1 - 0x1c) = zmm4[0]
                
                if ((result.b & 2) != 0)
                label_140342c59:
                    *(rcx_1 - 0x18) = _mm_shuffle_epi32(zmm4, 0xe5)[0]
                    
                    if ((result.b & 4) == 0)
                        goto label_140342f60
                    
                    goto label_140342c6b
            else
            label_140342f50:
                
                if ((result.b & 2) != 0)
                    goto label_140342c59
            
            if ((result.b & 4) == 0)
            label_140342f60:
                zmm0 = _mm_unpackhi_epi32(zmm0, zmm1[0].q)
                zmm2 = _mm_unpackhi_epi32(zmm2, zmm3[0].q)
                
                if ((result.b & 8) != 0)
                    goto label_140342c85
                
                goto label_140342f70
            
        label_140342c6b:
            *(rcx_1 - 0x14) = _mm_shuffle_epi32(zmm4, 0x4e)[0]
            zmm0 = _mm_unpackhi_epi32(zmm0, zmm1[0].q)
            zmm2 = _mm_unpackhi_epi32(zmm2, zmm3[0].q)
            
            if ((result.b & 8) != 0)
            label_140342c85:
                *(rcx_1 - 0x10) = _mm_shuffle_epi32(zmm4, 0xe7)[0]
                zmm0 = _mm_unpacklo_epi64(zmm0, zmm2[0].q)
                
                if ((result.b & 1) == 0)
                    goto label_140342f7c
                
                goto label_140342c96
            
        label_140342f70:
            zmm0 = _mm_unpacklo_epi64(zmm0, zmm2[0].q)
            
            if ((result.b & 1) == 0)
            label_140342f7c:
                
                if ((result.b & 2) != 0)
                    goto label_140342ca8
                
                goto label_140342f84
            
        label_140342c96:
            *(rcx_1 - 0xc) = zmm0[0]
            
            if ((result.b & 2) != 0)
            label_140342ca8:
                *(rcx_1 - 8) = _mm_shuffle_epi32(zmm0, 0xe5)[0]
                
                if ((result.b & 4) == 0)
                    goto label_140342f8c
                
                goto label_140342cba
            
        label_140342f84:
            
            if ((result.b & 4) != 0)
            label_140342cba:
                *(rcx_1 - 4) = _mm_shuffle_epi32(zmm0, 0x4e)[0]
                
                if ((result.b & 8) != 0)
                    *rcx_1 = _mm_shuffle_epi32(zmm0, 0xe7)[0]
            else
            label_140342f8c:
                
                if ((result.b & 8) != 0)
                    *rcx_1 = _mm_shuffle_epi32(zmm0, 0xe7)[0]
            
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
