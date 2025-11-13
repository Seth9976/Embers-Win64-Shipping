// 函数: sub_142074be0
// 地址: 0x142074be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = 0
uint64_t result_1 = zx.q(arg3)
float zmm6[0x4]
float zmm7[0x4]

if (arg3 s< 8)
    zmm7 = arg5
    zmm6 = arg5
else
    zmm7 = 0x7f7fc99e
    zmm6 = 0xff7fc99e
    result = zx.q(((zx.q((result_1 - 8).d u>> 3) << 3) + 8).d)

if (result.d s< result_1.d)
    zmm7 = 0x7f7fc99e
    zmm6 = 0xff7fc99e

int64_t rcx = sx.q(arg2[1].d)
int32_t r12 = 0

if (rcx.d s> 0)
    int64_t rcx_1 = 0
    result = *arg2
    
    while (not((**(arg1 + 0x18))[0] f<= *result))
        r12 += 1
        rcx_1 += 1
        result += 0x14
        
        if (rcx_1 s>= rcx)
            break

arg5 = 0
int64_t r13 = sx.q(result_1.d)

if (*(arg1 + 0x20) s> 0)
    int32_t* rdi_1 = nullptr
    int128_t zmm8 = 0x80000000
    int64_t rbp_1 = sx.q(arg4)
    int64_t rsi_2 = sx.q(r12) * 0x14
    int32_t i
    
    do
        int64_t rcx_2
        uint32_t zmm0[0x4]
        
        if (r12 s< arg2[1].d)
            result = *arg2
            rcx_2 = *(arg1 + 0x18)
            zmm0 = *(rsi_2 + result)
            zmm0[0] = zmm0[0] f- *(rdi_1 + rcx_2)
        
        if (r12 s>= arg2[1].d || zmm0[0] f<= -0.00999999978f || zmm0[0] f>= 0.00999999978f)
            int32_t arg_8
            void arg_10
            result, arg3, zmm6, zmm7, zmm8 =
                sub_1420885b0(arg2, &arg_8, *(rdi_1 + *(arg1 + 0x18)), &arg_10)
            zmm0 = arg_8
            uint32_t rdx_3 = 0
            
            if (result_1.d s>= 4)
                uint64_t rax_26 = zx.q(((result_1 - 4).d u>> 2) + 1)
                uint64_t j_7 = zx.q(rax_26.d)
                rdx_3 = (rax_26 << 2).d
                uint64_t j
                
                do
                    int64_t rax_27 = *(arg1 + 0x18)
                    float temp0_21[0x4] = _mm_min_ss(zmm7[0], zmm0[0])
                    float temp0_22[0x4] = _mm_max_ss(zmm6[0], zmm0[0])
                    *(rdi_1 + rax_27 + 4) = zmm0[0]
                    int64_t rax_28 = *(arg1 + 0x18)
                    zmm7 = _mm_min_ss(temp0_21[0], zmm0[0])
                    zmm6 = _mm_max_ss(temp0_22[0], zmm0[0])
                    *(rdi_1 + rax_28 + 4) = zmm0[0]
                    *(rdi_1 + *(arg1 + 0x18) + 4) = zmm0[0]
                    result = *(arg1 + 0x18)
                    *(rdi_1 + result + 4) = zmm0[0]
                    j = j_7
                    j_7 -= 1
                while (j != 1)
            
            if (rdx_3 s< result_1.d)
                uint64_t j_8 = zx.q(result_1.d - rdx_3)
                uint64_t j_1
                
                do
                    result = *(arg1 + 0x18)
                    zmm7 = _mm_min_ss(zmm7[0], zmm0[0])
                    zmm6 = _mm_max_ss(zmm6[0], zmm0[0])
                    *(rdi_1 + result + 4) = zmm0[0]
                    j_1 = j_8
                    j_8 -= 1
                while (j_1 != 1)
        else
            uint32_t rdx_1 = 0
            uint32_t zmm1[0x4]
            
            if (result_1.d s>= 4)
                uint64_t rax_6 = zx.q(((result_1 - 4).d u>> 2) + 1)
                uint64_t j_5 = zx.q(rax_6.d)
                rdx_1 = (rax_6 << 2).d
                uint64_t j_2
                
                do
                    zmm0 = *(rsi_2 + *arg2 + 4)
                    int64_t rax_8 = *(arg1 + 0x18)
                    float temp0_1[0x4] = _mm_max_ss(zmm6[0], zmm0[0])
                    float temp0_2[0x4] = _mm_min_ss(zmm7[0], zmm0[0])
                    *(rdi_1 + rax_8 + 4) = zmm0[0]
                    float zmm3 = temp0_1[0]
                    zmm6 = *(rsi_2 + *arg2 + 4)
                    int64_t rax_10 = *(arg1 + 0x18)
                    float temp0_3[0x4] = _mm_min_ss(zmm6[0], temp0_2[0])
                    *(rdi_1 + rax_10 + 4) = zmm6[0]
                    float temp0_4[0x4] = _mm_max_ss(zmm6[0], zmm3)
                    zmm1 = *(rsi_2 + *arg2 + 4)
                    int64_t rax_12 = *(arg1 + 0x18)
                    float temp0_5[0x4] = _mm_min_ss(temp0_3[0], zmm1[0])
                    float temp0_6[0x4] = _mm_max_ss(temp0_4[0], zmm1[0])
                    *(rdi_1 + rax_12 + 4) = zmm1[0]
                    zmm0 = *(rsi_2 + *arg2 + 4)
                    result = *(arg1 + 0x18)
                    zmm7 = _mm_min_ss(temp0_5[0], zmm0[0])
                    zmm6 = _mm_max_ss(temp0_6[0], zmm0[0])
                    *(rdi_1 + result + 4) = zmm0[0]
                    j_2 = j_5
                    j_5 -= 1
                while (j_2 != 1)
                rcx_2 = *(arg1 + 0x18)
            
            if (rdx_1 s< result_1.d)
                uint64_t j_6 = zx.q(result_1.d - rdx_1)
                uint64_t j_3
                
                do
                    zmm0 = *(rsi_2 + *arg2 + 4)
                    result = *(arg1 + 0x18)
                    zmm7 = _mm_min_ss(zmm7[0], zmm0[0])
                    zmm6 = _mm_max_ss(zmm6[0], zmm0[0])
                    *(rdi_1 + result + 4) = zmm0[0]
                    j_3 = j_6
                    j_6 -= 1
                while (j_3 != 1)
                rcx_2 = *(arg1 + 0x18)
            
            if (*(rdi_1 + rcx_2 + 8) == 4)
                int64_t j_4 = 0
                float zmm2[0x4]
                
                if (r13 s>= 4)
                    do
                        uint64_t rax_15 = *arg2
                        zmm0 = *(rsi_2 + rax_15 + 8)
                        zmm2 = *(rsi_2 + rax_15 + 0xc)
                        zmm0[0] = zmm0[0] f* *(arg1 + 0x3c)
                        zmm2[0] = zmm2[0] f- zmm0[0]
                        zmm1 = _mm_max_ss(_mm_and_ps(zmm0, 0x7fffffff)[0], 0x322bcc77)
                        
                        if (zmm2[0] f<= (zmm1 ^ zmm8)[0] || zmm2[0] f>= zmm1[0])
                            arg3.b = 0
                        else
                            arg3.b = 1
                        
                        *(rdi_1 + j_4 + rbp_1 + *(arg1 + 0x18) + 9) = arg3.b
                        uint64_t rax_17 = *arg2
                        zmm0 = *(rsi_2 + rax_17 + 8)
                        zmm2 = *(rsi_2 + rax_17 + 0xc)
                        zmm0[0] = zmm0[0] f* *(arg1 + 0x3c)
                        zmm2[0] = zmm2[0] f- zmm0[0]
                        zmm1 = _mm_max_ss(_mm_and_ps(zmm0, 0x7fffffff)[0], 0x322bcc77)
                        
                        if (zmm2[0] f<= (zmm1 ^ zmm8)[0] || zmm2[0] f>= zmm1[0])
                            arg3.b = 0
                        else
                            arg3.b = 1
                        
                        *(rdi_1 + j_4 + rbp_1 + *(arg1 + 0x18) + 0xa) = arg3.b
                        uint64_t rax_19 = *arg2
                        zmm0 = *(rsi_2 + rax_19 + 8)
                        zmm2 = *(rsi_2 + rax_19 + 0xc)
                        zmm0[0] = zmm0[0] f* *(arg1 + 0x3c)
                        zmm2[0] = zmm2[0] f- zmm0[0]
                        zmm1 = _mm_max_ss(_mm_and_ps(zmm0, 0x7fffffff)[0], 0x322bcc77)
                        
                        if (zmm2[0] f<= (zmm1 ^ zmm8)[0] || zmm2[0] f>= zmm1[0])
                            arg3.b = 0
                        else
                            arg3.b = 1
                        
                        *(rdi_1 + j_4 + rbp_1 + *(arg1 + 0x18) + 0xb) = arg3.b
                        uint64_t rax_21 = *arg2
                        zmm0 = *(rsi_2 + rax_21 + 8)
                        zmm2 = *(rsi_2 + rax_21 + 0xc)
                        zmm0[0] = zmm0[0] f* *(arg1 + 0x3c)
                        zmm2[0] = zmm2[0] f- zmm0[0]
                        zmm1 = _mm_max_ss(_mm_and_ps(zmm0, 0x7fffffff)[0], 0x322bcc77)
                        
                        if (zmm2[0] f<= (zmm1 ^ zmm8)[0] || zmm2[0] f>= zmm1[0])
                            arg3.b = 0
                        else
                            arg3.b = 1
                        
                        result = *(arg1 + 0x18)
                        void* rcx_11 = rdi_1 + j_4 + rbp_1
                        j_4 += 4
                        *(rcx_11 + result + 0xc) = arg3.b
                    while (j_4 s< r13 - 3)
                
                while (j_4 s< r13)
                    uint64_t rax_22 = *arg2
                    zmm0 = *(rsi_2 + rax_22 + 8)
                    zmm2 = *(rsi_2 + rax_22 + 0xc)
                    zmm0[0] = zmm0[0] f* *(arg1 + 0x3c)
                    zmm2[0] = zmm2[0] f- zmm0[0]
                    zmm1 = _mm_max_ss(_mm_and_ps(zmm0, 0x7fffffff)[0], 0x322bcc77)
                    
                    if (zmm2[0] f<= (zmm1 ^ zmm8)[0] || zmm2[0] f>= zmm1[0])
                        arg3.b = 0
                    else
                        arg3.b = 1
                    
                    result = *(arg1 + 0x18)
                    void* rcx_13 = rdi_1 + j_4 + rbp_1
                    j_4 += 1
                    *(rcx_13 + result + 9) = arg3.b
            
            r12 += 1
            rsi_2 += 0x14
        
        rdi_1 = &rdi_1[3]
        i = arg5 + 1
        arg5 = i
    while (i s< *(arg1 + 0x20))

if (result_1.d s> 0)
    zmm6[0] = zmm6[0] - zmm7[0]
    result = result_1
    zmm6[0] = zmm6[0] f* *(arg1 + 0x3c)
    float temp0_27[0x4] = __maxss_xmmss_memss(zmm6[0], 0x38d1b717)
    uint64_t i_1
    
    do
        i_1 = result
        result -= 1
    while (i_1 != 1)
    *(arg1 + 0x38) = temp0_27[0]

return result
