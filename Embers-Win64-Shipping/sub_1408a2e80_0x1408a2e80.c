// 函数: sub_1408a2e80
// 地址: 0x1408a2e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
uint64_t result = __security_cookie ^ &var_128
uint64_t result_4 = result
uint32_t zmm11[0x4] = arg3
uint32_t zmm12[0x4] = arg2

if (zmm12[0] f< 0f)
    arg2[0] = arg2[0] f- 0.5f
else
    arg2[0] = arg2[0] f+ 0.5f

int32_t rcx = int.d(arg2[0])

if (zmm11[0] f< 0f)
    zmm11[0] = zmm11[0] f- 0.5f
else
    zmm11[0] = zmm11[0] f+ 0.5f

int32_t rdx = int.d(zmm11[0])

if (arg4[0] f< 0f)
    arg4[0] = arg4[0] f- 0.5f
else
    arg4[0] = arg4[0] f+ 0.5f

int32_t r8 = *(arg1 + 0x424)
uint32_t zmm6[0x4]
uint32_t var_58[0x4] = zmm6
uint128_t zmm7
uint128_t var_68 = zmm7
uint128_t zmm8
uint128_t var_78 = zmm8
uint128_t zmm9
uint128_t var_88 = zmm9
int32_t r10 = int.d(arg4[0])
uint32_t var_e0[0x4] = data_142dfe680
int32_t var_ec = r10
uint32_t zmm0[0x4]
void var_e4

if (r8 == 0)
    result = zx.q(rcx + 1)
    int32_t r12_4 = rcx - 1
    int32_t var_108_2 = result.d
    int32_t var_100_1 = r12_4
    
    if (r12_4 s<= result.d)
        int32_t rcx_15 = var_108_2
        int32_t i_7 = rdx - 1
        result = zx.q(rdx + 1)
        int32_t i_9 = i_7
        int32_t result_3 = result.d
        
        do
            int32_t i_3 = i_7
            int32_t i = i_7
            
            if (i_7 s<= result.d)
                int32_t rcx_16 = r10 - 1
                int32_t var_fc_2 = rcx_16
                
                do
                    int64_t rdi_3 = sx.q(rcx_16)
                    
                    if (rdi_3.d s<= r10 + 1)
                        int64_t rsi_3 = rdi_3
                        zmm7 = _mm_cvtepi32_ps(zx.o(r12_4))
                        zmm8 = _mm_cvtepi32_ps(zx.o(i))
                        zmm7.d = zmm7.d f- zmm12[0]
                        zmm8.d = zmm8.d f- zmm11[0]
                        
                        do
                            arg3 = *(arg1 + 0x440)
                            int64_t j = sx.q(*(arg1 + 0x43c))
                            zmm0 = _mm_cvtepi32_ps(zx.o(rdi_3.d))
                            uint64_t rcx_19 = zx.q(zx.d(*(zx.q(rsi_3.b) + arg1)) + zx.d(i.b))
                            zmm0[0] = zmm0[0] f- arg4[0]
                            uint64_t rcx_22 =
                                zx.q(*(zx.q(zx.d(*(rcx_19 + arg1)) + zx.d(r12_4.b)) + arg1))
                            arg3[0] = arg3[0] f* *((rcx_22 << 2) + 0x142dfde50)
                            arg3[0] = arg3[0] f* *((rcx_22 << 2) + 0x142dfda50)
                            arg3[0] = arg3[0] f* *((rcx_22 << 2) + 0x142dfe250)
                            arg3[0] = arg3[0] f+ zmm8.d
                            arg3[0] = arg3[0] f+ zmm7.d
                            arg3[0] = arg3[0] f+ zmm0[0]
                            arg3[0] = arg3[0] f* arg3[0]
                            arg3[0] = arg3[0] f* arg3[0]
                            arg3[0] = arg3[0] f* arg3[0]
                            arg3[0] = arg3[0] f+ arg3[0]
                            arg3[0] = arg3[0] f+ arg3[0]
                            
                            for (; j s> 0; j -= 1)
                                zmm0 = var_e0[j]
                                fminf(zmm0[0], arg3[0])
                                fmaxf(zmm0[0], (*(&var_e4 + (j << 2)))[0])
                                var_e0[j] = zmm0[0]
                            
                            zmm0 = var_e0[0]
                            fminf(zmm0[0], arg3[0])
                            rdi_3 = zx.q(rdi_3.d + 1)
                            rsi_3 += 1
                            var_e0[0] = zmm0[0]
                        while (rdi_3.d s<= r10 + 1)
                        
                        i = i_3
                        r12_4 = var_100_1
                        result = zx.q(result_3)
                        rcx_16 = var_fc_2
                    
                    i += 1
                    i_3 = i
                while (i s<= result.d)
                
                rcx_15 = var_108_2
                i_7 = i_9
                r10 = var_ec
            
            r12_4 += 1
            var_100_1 = r12_4
        while (r12_4 s<= rcx_15)
else if (r8 == 1)
    int32_t i_1 = rcx + 1
    result = zx.q(rcx - 1)
    int32_t i_5 = i_1
    int32_t result_1 = result.d
    
    if (result.d s<= i_1)
        int32_t r9_1 = rdx - 1
        int32_t rcx_9 = rdx + 1
        int32_t var_fc_1 = r9_1
        int32_t var_f0_1 = rcx_9
        
        do
            int32_t var_104_2 = r9_1
            int32_t r14_2 = r9_1
            
            if (r9_1 s<= rcx_9)
                int32_t rdx_1 = r10 - 1
                int32_t var_f4_2 = rdx_1
                zmm9.d = _mm_cvtepi32_ps(zx.o(result.d)).d f- zmm12[0]
                
                do
                    int64_t rdi_2 = sx.q(rdx_1)
                    
                    if (rdi_2.d s<= r10 + 1)
                        int64_t rsi_2 = rdi_2
                        zmm7.d = _mm_cvtepi32_ps(zx.o(r14_2)).d f- zmm11[0]
                        
                        do
                            arg2 = *(arg1 + 0x440)
                            int64_t j_1 = sx.q(*(arg1 + 0x43c))
                            uint64_t rcx_14 = zx.q(*(zx.q(
                                zx.d(*(zx.q(zx.d(*(zx.q(rsi_2.b) + arg1)) + zx.d(r14_2.b)) + arg1))
                                + zx.d(result.b)) + arg1))
                            arg2[0] = arg2[0] f* *((rcx_14 << 2) + 0x142dfda50)
                            arg2[0] = arg2[0] f* *((rcx_14 << 2) + 0x142dfde50)
                            arg2[0] = arg2[0] f* *((rcx_14 << 2) + 0x142dfe250)
                            arg2[0] = arg2[0] f+ zmm9.d
                            arg2[0] = arg2[0] f+ zmm7.d
                            zmm0 = _mm_and_ps(arg2, 0x7fffffff)
                            zmm6 = _mm_and_ps(arg2, 0x7fffffff)
                            zmm6[0] = zmm6[0] f+ zmm0[0]
                            zmm0 = _mm_cvtepi32_ps(zx.o(rdi_2.d))
                            zmm0[0] = zmm0[0] f- arg4[0]
                            arg2[0] = arg2[0] f+ zmm0[0]
                            arg2 = _mm_and_ps(arg2, 0x7fffffff)
                            zmm6[0] = zmm6[0] f+ arg2[0]
                            
                            for (; j_1 s> 0; j_1 -= 1)
                                zmm0 = var_e0[j_1]
                                fminf(zmm0[0], zmm6[0])
                                fmaxf(zmm0[0], (*(&var_e4 + (j_1 << 2)))[0])
                                var_e0[j_1] = zmm0[0]
                            
                            zmm0 = var_e0[0]
                            fminf(zmm0[0], zmm6[0])
                            rdi_2 = zx.q(rdi_2.d + 1)
                            rsi_2 += 1
                            var_e0[0] = zmm0[0]
                        while (rdi_2.d s<= r10 + 1)
                        
                        r14_2 = var_104_2
                        result = zx.q(result_1)
                        rcx_9 = var_f0_1
                        rdx_1 = var_f4_2
                    
                    r14_2 += 1
                    var_104_2 = r14_2
                while (r14_2 s<= rcx_9)
                
                i_1 = i_5
                r9_1 = var_fc_1
                r10 = var_ec
            
            result = zx.q(result.d + 1)
            result_1 = result.d
        while (result.d s<= i_1)
else if (r8 == 2)
    result = zx.q(rcx + 1)
    int32_t r12_1 = rcx - 1
    int32_t var_108_1 = result.d
    int32_t var_104_1 = r12_1
    
    if (r12_1 s<= result.d)
        int32_t i_6 = rdx - 1
        int32_t rcx_1 = var_108_1
        result = zx.q(rdx + 1)
        int32_t i_8 = i_6
        int32_t result_2 = result.d
        
        do
            int32_t i_4 = i_6
            int32_t i_2 = i_6
            
            if (i_6 s<= result.d)
                int32_t rcx_2 = r10 - 1
                int32_t var_f4_1 = rcx_2
                
                do
                    int64_t rdi_1 = sx.q(rcx_2)
                    
                    if (rdi_1.d s<= r10 + 1)
                        int64_t rsi_1 = rdi_1
                        zmm7 = _mm_cvtepi32_ps(zx.o(r12_1))
                        zmm8 = _mm_cvtepi32_ps(zx.o(i_2))
                        zmm7.d = zmm7.d f- zmm12[0]
                        zmm8.d = zmm8.d f- zmm11[0]
                        
                        do
                            uint32_t zmm4[0x4] = *(arg1 + 0x440)
                            zmm0 = zx.o(0)
                            int64_t j_2 = sx.q(*(arg1 + 0x43c))
                            zmm0[0] = float.s(rdi_1.d)
                            uint64_t rcx_5 = zx.q(zx.d(*(zx.q(rsi_1.b) + arg1)) + zx.d(i_2.b))
                            zmm0[0] = zmm0[0] f- arg4[0]
                            uint64_t rcx_8 =
                                zx.q(*(zx.q(zx.d(*(rcx_5 + arg1)) + zx.d(r12_1.b)) + arg1))
                            zmm4[0] = zmm4[0] f* *((rcx_8 << 2) + 0x142dfe250)
                            zmm4[0] = zmm4[0] f* *((rcx_8 << 2) + 0x142dfda50)
                            zmm4[0] = zmm4[0] f* *((rcx_8 << 2) + 0x142dfde50)
                            zmm4[0] = zmm4[0] f+ zmm0[0]
                            zmm4[0] = zmm4[0] f+ zmm7.d
                            zmm4[0] = zmm4[0] f+ zmm8.d
                            zmm4[0] = zmm4[0] f* zmm4[0]
                            zmm6 = _mm_and_ps(zmm4, 0x7fffffff)
                            zmm4[0] = zmm4[0] f* zmm4[0]
                            zmm0 = _mm_and_ps(zmm4, 0x7fffffff)
                            zmm6[0] = zmm6[0] f+ zmm0[0]
                            zmm4[0] = zmm4[0] f* zmm4[0]
                            arg2 = _mm_and_ps(zmm4, 0x7fffffff)
                            zmm4[0] = zmm4[0] f+ zmm4[0]
                            zmm6[0] = zmm6[0] f+ arg2[0]
                            zmm4[0] = zmm4[0] f+ zmm4[0]
                            zmm6[0] = zmm6[0] f+ zmm4[0]
                            
                            for (; j_2 s> 0; j_2 -= 1)
                                zmm0 = var_e0[j_2]
                                fminf(zmm0[0], zmm6[0])
                                fmaxf(zmm0[0], (*(&var_e4 + (j_2 << 2)))[0])
                                var_e0[j_2] = zmm0[0]
                            
                            zmm0 = var_e0[0]
                            fminf(zmm0[0], zmm6[0])
                            rdi_1 = zx.q(rdi_1.d + 1)
                            rsi_1 += 1
                            var_e0[0] = zmm0[0]
                        while (rdi_1.d s<= r10 + 1)
                        
                        i_2 = i_4
                        r12_1 = var_104_1
                        result = zx.q(result_2)
                        rcx_2 = var_f4_1
                    
                    i_2 += 1
                    i_4 = i_2
                while (i_2 s<= result.d)
                
                rcx_1 = var_108_1
                i_6 = i_8
                r10 = var_ec
            
            r12_1 += 1
            var_104_1 = r12_1
        while (r12_1 s<= rcx_1)
int32_t rcx_23 = *(arg1 + 0x428)

if (rcx_23 == 3)
    result = sx.q(*(arg1 + 0x43c))
    var_e0[result]
else if (rcx_23 == 4)
    result = sx.q(*(arg1 + 0x43c))
    zmm0 = var_e0[result]
    zmm0[0] = zmm0[0] f+ var_e0[sx.q(*(arg1 + 0x438))]
else if (rcx_23 == 5)
    result = sx.q(*(arg1 + 0x43c))
    zmm0 = var_e0[result]
    zmm0[0] = zmm0[0] f- var_e0[sx.q(*(arg1 + 0x438))]
else if (rcx_23 == 6)
    result = sx.q(*(arg1 + 0x43c))
    zmm0 = var_e0[result]
    zmm0[0] = zmm0[0] f* var_e0[sx.q(*(arg1 + 0x438))]
else if (rcx_23 == 7)
    result = sx.q(*(arg1 + 0x438))
    zmm0 = var_e0[result]
    zmm0[0] = zmm0[0] f/ var_e0[sx.q(*(arg1 + 0x43c))]

__security_check_cookie(result_4 ^ &var_128)
return result
