// 函数: sub_1408a2910
// 地址: 0x1408a2910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
uint64_t result = __security_cookie ^ &var_d8
uint64_t result_4 = result
uint32_t zmm9[0x4] = arg3
uint32_t zmm10[0x4] = arg2

if (zmm10[0] f< 0f)
    arg2[0] = arg2[0] f- 0.5f
else
    arg2[0] = arg2[0] f+ 0.5f

int32_t r14 = int.d(arg2[0])

if (zmm9[0] f< 0f)
    zmm9[0] = zmm9[0] f- 0.5f
else
    zmm9[0] = zmm9[0] f+ 0.5f

int32_t rdx = *(arg1 + 0x424)
uint32_t zmm6[0x4]
uint32_t var_48[0x4] = zmm6
uint128_t zmm7
uint128_t var_58 = zmm7
int128_t zmm8
int128_t var_68 = zmm8
int32_t rcx = int.d(zmm9[0])
uint32_t var_b0[0x4] = data_142dfe680
uint32_t zmm0[0x4]
int32_t result_3

if (rdx == 0)
label_1408a2c46:
    int32_t result_6 = r14 + 1
    int32_t r14_3 = r14 - 1
    result_3 = result_6
    
    if (r14_3 s<= result_6)
        result = zx.q(rcx - 1)
        int32_t result_2 = result.d
        
        do
            int64_t rdi_3 = sx.q(result.d)
            
            if (rdi_3.d s<= rcx + 1)
                int64_t rbp_3 = rdi_3
                zmm7.d = _mm_cvtepi32_ps(zx.o(r14_3)).d f- zmm10[0]
                
                do
                    zmm6 = *(arg1 + 0x440)
                    int64_t i = sx.q(*(arg1 + 0x43c))
                    zmm0 = _mm_cvtepi32_ps(zx.o(rdi_3.d))
                    uint64_t rcx_8 = zx.q(zx.d(*(zx.q(rbp_3.b) + arg1)) + zx.d(r14_3.b))
                    zmm0[0] = zmm0[0] f- zmm9[0]
                    uint64_t rcx_9 = zx.q(*(rcx_8 + arg1))
                    zmm6[0] = zmm6[0] f* *((rcx_9 << 2) + 0x142dfd650)
                    zmm6[0] = zmm6[0] f* *((rcx_9 << 2) + 0x142dfd250)
                    zmm6[0] = zmm6[0] f+ zmm0[0]
                    zmm6[0] = zmm6[0] f+ zmm7.d
                    zmm6[0] = zmm6[0] f* zmm6[0]
                    zmm6[0] = zmm6[0] f* zmm6[0]
                    zmm6[0] = zmm6[0] f+ zmm6[0]
                    
                    for (; i s> 0; i -= 1)
                        zmm0 = var_b0[i]
                        fminf(zmm0[0], zmm6[0])
                        fmaxf(zmm0[0], (&result_3)[i][0])
                        var_b0[i] = zmm0[0]
                    
                    zmm0 = var_b0[0]
                    fminf(zmm0[0], zmm6[0])
                    rdi_3 = zx.q(rdi_3.d + 1)
                    rbp_3 += 1
                    var_b0[0] = zmm0[0]
                while (rdi_3.d s<= rcx + 1)
                
                result_6 = result_3
                result = zx.q(result_2)
            
            r14_3 += 1
        while (r14_3 s<= result_6)
else if (rdx == 1)
    int32_t result_5 = r14 + 1
    int32_t r14_2 = r14 - 1
    result_3 = result_5
    
    if (r14_2 s<= result_5)
        result = zx.q(rcx - 1)
        int32_t result_1 = result.d
        
        do
            int64_t rdi_2 = sx.q(result.d)
            
            if (rdi_2.d s<= rcx + 1)
                int64_t rbp_2 = rdi_2
                zmm7.d = _mm_cvtepi32_ps(zx.o(r14_2)).d f- zmm10[0]
                
                do
                    arg2 = *(arg1 + 0x440)
                    int64_t i_1 = sx.q(*(arg1 + 0x43c))
                    zmm0 = _mm_cvtepi32_ps(zx.o(rdi_2.d))
                    uint64_t rcx_5 = zx.q(zx.d(*(zx.q(rbp_2.b) + arg1)) + zx.d(r14_2.b))
                    zmm0[0] = zmm0[0] f- zmm9[0]
                    uint64_t rcx_6 = zx.q(*(rcx_5 + arg1))
                    arg2[0] = arg2[0] f* *((rcx_6 << 2) + 0x142dfd650)
                    arg2[0] = arg2[0] f* *((rcx_6 << 2) + 0x142dfd250)
                    arg2[0] = arg2[0] f+ zmm0[0]
                    arg2[0] = arg2[0] f+ zmm7.d
                    zmm6 = _mm_and_ps(arg2, 0x7fffffff)
                    arg2 = _mm_and_ps(arg2, 0x7fffffff)
                    zmm6[0] = zmm6[0] f+ arg2[0]
                    
                    for (; i_1 s> 0; i_1 -= 1)
                        zmm0 = var_b0[i_1]
                        fminf(zmm0[0], zmm6[0])
                        fmaxf(zmm0[0], (&result_3)[i_1][0])
                        var_b0[i_1] = zmm0[0]
                    
                    zmm0 = var_b0[0]
                    fminf(zmm0[0], zmm6[0])
                    rdi_2 = zx.q(rdi_2.d + 1)
                    rbp_2 += 1
                    var_b0[0] = zmm0[0]
                while (rdi_2.d s<= rcx + 1)
                
                result_5 = result_3
                result = zx.q(result_1)
            
            r14_2 += 1
        while (r14_2 s<= result_5)
else
    if (rdx != 2)
        goto label_1408a2c46
    
    int32_t r13 = r14 + 1
    int32_t r14_1 = r14 - 1
    int32_t var_b8_1 = r13
    
    if (r14_1 s<= r13)
        result = zx.q(rcx - 1)
        result_3 = result.d
        
        do
            int64_t rdi_1 = sx.q(result.d)
            
            if (rdi_1.d s<= rcx + 1)
                int64_t rbp_1 = rdi_1
                zmm7.d = _mm_cvtepi32_ps(zx.o(r14_1)).d f- zmm10[0]
                
                do
                    arg3 = *(arg1 + 0x440)
                    zmm0 = zx.o(0)
                    int64_t i_2 = sx.q(*(arg1 + 0x43c))
                    zmm0[0] = float.s(rdi_1.d)
                    uint32_t rcx_1 = zx.d(*(zx.q(rbp_1.b) + arg1))
                    zmm0[0] = zmm0[0] f- zmm9[0]
                    uint64_t rcx_3 = zx.q(*(zx.q(rcx_1 + zx.d(r14_1.b)) + arg1))
                    arg3[0] = arg3[0] f* *((rcx_3 << 2) + 0x142dfd650)
                    arg3[0] = arg3[0] f* *((rcx_3 << 2) + 0x142dfd250)
                    arg3[0] = arg3[0] f+ zmm0[0]
                    arg3[0] = arg3[0] f+ zmm7.d
                    arg3[0] = arg3[0] f* arg3[0]
                    zmm6 = _mm_and_ps(arg3, 0x7fffffff)
                    arg3[0] = arg3[0] f* arg3[0]
                    zmm0 = _mm_and_ps(arg3, 0x7fffffff)
                    zmm6[0] = zmm6[0] f+ zmm0[0]
                    arg3[0] = arg3[0] f+ arg3[0]
                    zmm6[0] = zmm6[0] f+ arg3[0]
                    
                    for (; i_2 s> 0; i_2 -= 1)
                        zmm0 = var_b0[i_2]
                        fminf(zmm0[0], zmm6[0])
                        fmaxf(zmm0[0], (&result_3)[i_2][0])
                        var_b0[i_2] = zmm0[0]
                    
                    zmm0 = var_b0[0]
                    fminf(zmm0[0], zmm6[0])
                    rdi_1 = zx.q(rdi_1.d + 1)
                    rbp_1 += 1
                    var_b0[0] = zmm0[0]
                while (rdi_1.d s<= rcx + 1)
                
                r13 = var_b8_1
                result = zx.q(result_3)
            
            r14_1 += 1
        while (r14_1 s<= r13)
int32_t rcx_10 = *(arg1 + 0x428)

if (rcx_10 == 3)
    result = sx.q(*(arg1 + 0x43c))
    var_b0[result]
else if (rcx_10 == 4)
    result = sx.q(*(arg1 + 0x43c))
    zmm0 = var_b0[result]
    zmm0[0] = zmm0[0] f+ var_b0[sx.q(*(arg1 + 0x438))]
else if (rcx_10 == 5)
    result = sx.q(*(arg1 + 0x43c))
    zmm0 = var_b0[result]
    zmm0[0] = zmm0[0] f- var_b0[sx.q(*(arg1 + 0x438))]
else if (rcx_10 == 6)
    result = sx.q(*(arg1 + 0x43c))
    zmm0 = var_b0[result]
    zmm0[0] = zmm0[0] f* var_b0[sx.q(*(arg1 + 0x438))]
else if (rcx_10 == 7)
    result = sx.q(*(arg1 + 0x438))
    zmm0 = var_b0[result]
    zmm0[0] = zmm0[0] f/ var_b0[sx.q(*(arg1 + 0x43c))]

__security_check_cookie(result_4 ^ &var_d8)
return result
