// 函数: sub_1408a3a40
// 地址: 0x1408a3a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr
uint128_t zmm9 = arg4
uint32_t zmm12[0x4] = arg3
uint32_t zmm14[0x4] = arg2

if (zmm14[0] f< 0f)
    arg2[0] = arg2[0] f- 0.5f
else
    arg2[0] = arg2[0] f+ 0.5f

int32_t rdi = int.d(arg2[0])

if (zmm12[0] f< 0f)
    zmm12[0] = zmm12[0] f- 0.5f
else
    zmm12[0] = zmm12[0] f+ 0.5f

int32_t r12 = int.d(zmm12[0])
arg2 = zmm9

if (zmm9.d f< 0f)
    arg2[0] = arg2[0] f- 0.5f
else
    arg2[0] = arg2[0] f+ 0.5f

int32_t rcx = *(arg1 + 0x424)
uint32_t zmm7[0x4] = 0x497423f0
int32_t r8 = 0
int32_t r9 = 0
int32_t r10 = 0
uint32_t zmm6[0x4]
uint32_t var_58[0x4] = zmm6
uint128_t zmm8
uint128_t var_78 = zmm8
int32_t rbp = int.d(arg2[0])
int32_t arg_10 = rbp
uint128_t zmm0
int32_t arg_8
int32_t arg_18
int32_t result_1
uint32_t zmm4[0x4]
uint128_t zmm5

if (rcx == 0)
    result = rdi + 1
    int32_t rdi_3 = rdi - 1
    result_1 = result
    
    if (rdi_3 s<= result)
        int32_t rcx_14 = r12 - 1
        int32_t r12_3 = r12 + 1
        arg_18 = r12_3
        arg_8 = rcx_14
        
        do
            int32_t rbx_3 = rcx_14
            
            if (rcx_14 s<= r12_3)
                do
                    int64_t rdx_3 = sx.q(rbp - 1)
                    
                    if (rdx_3.d s<= rbp + 1)
                        zmm5 = *(arg1 + 0x440)
                        int64_t rsi_3 = rdx_3
                        zmm6 = _mm_cvtepi32_ps(zx.o(rdi_3))
                        zmm8 = _mm_cvtepi32_ps(zx.o(rbx_3))
                        
                        do
                            zmm0.d = zmm6.d f- zmm14[0]
                            zmm4 = zmm7
                            arg3 = zmm5
                            arg2 = zmm5
                            int32_t rax_9 = rdx_3.d
                            uint64_t rcx_19 = zx.q(*(zx.q(
                                zx.d(*(zx.q(zx.d(*(zx.q(rsi_3.b) + arg1)) + zx.d(rbx_3.b)) + arg1))
                                + zx.d(rdi_3.b)) + arg1))
                            arg4.d = zmm5.d f* *((rcx_19 << 2) + 0x142dfde50)
                            arg3[0] = arg3[0] f* *((rcx_19 << 2) + 0x142dfda50)
                            arg2[0] = arg2[0] f* *((rcx_19 << 2) + 0x142dfe250)
                            arg3[0] = arg3[0] f+ zmm0.d
                            zmm0.d = zmm8.d f- zmm12[0]
                            arg3[0] = arg3[0] f* arg3[0]
                            arg4.d = arg4.d f+ zmm0.d
                            arg4.d = arg4.d f* arg4.d
                            zmm0.d = _mm_cvtepi32_ps(zx.o(rdx_3.d)).d f- zmm9.d
                            arg4.d = arg4.d f+ arg3[0]
                            arg2[0] = arg2[0] f+ zmm0.d
                            arg2[0] = arg2[0] f* arg2[0]
                            arg4.d = arg4.d f+ arg2[0]
                            zmm7[0] f- arg4.d
                            bool cond:2_1 = zmm7[0] f<= arg4.d
                            bool cond:3_1 = zmm7[0] f<= arg4.d
                            zmm7 = _mm_min_ss(arg4[0], zmm4[0])
                            
                            if (cond:2_1)
                                rax_9 = r10
                            
                            r10 = rax_9
                            int32_t rax_10 = rbx_3
                            
                            if (cond:3_1)
                                rax_10 = r9
                            
                            r9 = rax_10
                            int32_t rax_11 = rdi_3
                            
                            if (zmm4[0] f<= arg4.d)
                                rax_11 = r8
                            
                            rdx_3 = zx.q(rdx_3.d + 1)
                            rsi_3 += 1
                            r8 = rax_11
                        while (rdx_3.d s<= rbp + 1)
                        
                        r12_3 = arg_18
                    
                    rbx_3 += 1
                while (rbx_3 s<= r12_3)
                
                result = result_1
                rcx_14 = arg_8
                rbp = arg_10
            
            rdi_3 += 1
        while (rdi_3 s<= result)
else if (rcx == 1)
    result = rdi + 1
    int32_t rsi_2 = rdi - 1
    result_1 = result
    
    if (rsi_2 s<= result)
        int32_t rcx_8 = r12 - 1
        int32_t r12_2 = r12 + 1
        arg_8 = rcx_8
        arg_18 = r12_2
        
        do
            int32_t rbx_2 = rcx_8
            
            if (rcx_8 s<= r12_2)
                zmm6 = _mm_cvtepi32_ps(zx.o(rsi_2))
                zmm6[0] = zmm6[0] f- zmm14[0]
                
                do
                    int64_t rdx_2 = sx.q(rbp - 1)
                    
                    if (rdx_2.d s<= rbp + 1)
                        arg4 = *(arg1 + 0x440)
                        int64_t rdi_2 = rdx_2
                        zmm4 = _mm_cvtepi32_ps(zx.o(rbx_2))
                        zmm4[0] = zmm4[0] f- zmm12[0]
                        
                        do
                            arg3 = arg4
                            arg2 = arg4
                            int32_t rax_5 = rdx_2.d
                            uint64_t rcx_13 = zx.q(*(zx.q(
                                zx.d(*(zx.q(zx.d(*(zx.q(rdi_2.b) + arg1)) + zx.d(rbx_2.b)) + arg1))
                                + zx.d(rsi_2.b)) + arg1))
                            arg3[0] = arg3[0] f* *((rcx_13 << 2) + 0x142dfde50)
                            zmm0.d = arg4.d f* *((rcx_13 << 2) + 0x142dfda50)
                            arg2[0] = arg2[0] f* *((rcx_13 << 2) + 0x142dfe250)
                            arg3[0] = arg3[0] f+ zmm4[0]
                            zmm0.d = zmm0.d f+ zmm6[0]
                            arg3 = _mm_and_ps(arg3, 0x7fffffff)
                            zmm0 = _mm_and_ps(zmm0, 0x7fffffff)
                            arg3[0] = arg3[0] f+ zmm0.d
                            zmm0.d = _mm_cvtepi32_ps(zx.o(rdx_2.d)).d f- zmm9.d
                            arg2[0] = arg2[0] f+ zmm0.d
                            arg2 = _mm_and_ps(arg2, 0x7fffffff)
                            arg3[0] = arg3[0] f+ arg2[0]
                            zmm7[0] f- arg3[0]
                            bool cond:5_1 = zmm7[0] f<= arg3[0]
                            bool cond:6_1 = zmm7[0] f<= arg3[0]
                            bool cond:7_1 = zmm7[0] f<= arg3[0]
                            arg3 = _mm_min_ss(arg3[0], zmm7[0])
                            
                            if (cond:5_1)
                                rax_5 = r10
                            
                            r10 = rax_5
                            int32_t rax_6 = rbx_2
                            
                            if (cond:6_1)
                                rax_6 = r9
                            
                            r9 = rax_6
                            zmm7 = arg3
                            int32_t rax_7 = rsi_2
                            
                            if (cond:7_1)
                                rax_7 = r8
                            
                            rdx_2 = zx.q(rdx_2.d + 1)
                            rdi_2 += 1
                            r8 = rax_7
                        while (rdx_2.d s<= rbp + 1)
                        
                        r12_2 = arg_18
                    
                    rbx_2 += 1
                while (rbx_2 s<= r12_2)
                
                result = result_1
                rcx_8 = arg_8
                rbp = arg_10
            
            rsi_2 += 1
        while (rsi_2 s<= result)
else if (rcx == 2)
    result = rdi + 1
    int32_t rdi_1 = rdi - 1
    result_1 = result
    
    if (rdi_1 s<= result)
        uint128_t zmm10
        uint128_t var_98_1 = zmm10
        int32_t rcx_2 = r12 - 1
        uint128_t zmm11
        uint128_t var_a8_1 = zmm11
        int32_t r12_1 = r12 + 1
        arg_18 = r12_1
        arg_8 = rcx_2
        
        do
            int32_t rdx_1 = rcx_2
            
            if (rcx_2 s<= r12_1)
                do
                    int64_t rbx_1 = sx.q(rbp - 1)
                    
                    if (rbx_1.d s<= rbp + 1)
                        zmm8 = *(arg1 + 0x440)
                        int64_t rsi_1 = rbx_1
                        zmm10 = _mm_cvtepi32_ps(zx.o(rdi_1))
                        zmm11 = _mm_cvtepi32_ps(zx.o(rdx_1))
                        
                        do
                            zmm0.d = zmm10.d f- zmm14[0]
                            arg3 = zmm8
                            zmm6 = zmm7
                            int32_t rax_1 = rbx_1.d
                            uint64_t rcx_7 = zx.q(*(zx.q(
                                zx.d(*(zx.q(zx.d(*(zx.q(rsi_1.b) + arg1)) + zx.d(rdx_1.b)) + arg1))
                                + zx.d(rdi_1.b)) + arg1))
                            arg3[0] = arg3[0] f* *((rcx_7 << 2) + 0x142dfe250)
                            zmm5.d = zmm8.d f* *((rcx_7 << 2) + 0x142dfda50)
                            arg4.d = zmm8.d f* *((rcx_7 << 2) + 0x142dfde50)
                            zmm5.d = zmm5.d f+ zmm0.d
                            zmm0.d = zmm11.d f- zmm12[0]
                            arg4.d = arg4.d f+ zmm0.d
                            arg2 = arg4
                            arg4.d = arg4.d f* arg4.d
                            zmm0.d = _mm_cvtepi32_ps(zx.o(rbx_1.d)).d f- zmm9.d
                            arg2 = _mm_and_ps(arg2, 0x7fffffff)
                            arg3[0] = arg3[0] f+ zmm0.d
                            zmm0 = zmm5
                            zmm5.d = zmm5.d f* zmm5.d
                            zmm0 = _mm_and_ps(zmm0, 0x7fffffff)
                            arg3[0] = arg3[0] f* arg3[0]
                            zmm4 = _mm_and_ps(arg3, 0x7fffffff)
                            zmm4[0] = zmm4[0] f+ zmm0.d
                            arg3[0] = arg3[0] f+ zmm5.d
                            zmm4[0] = zmm4[0] f+ arg2[0]
                            arg3[0] = arg3[0] f+ arg4.d
                            zmm4[0] = zmm4[0] f+ arg3[0]
                            zmm7[0] f- zmm4[0]
                            bool cond:8_1 = zmm7[0] f<= zmm4[0]
                            bool cond:9_1 = zmm7[0] f<= zmm4[0]
                            zmm7 = _mm_min_ss(zmm4[0], zmm6[0])
                            
                            if (cond:8_1)
                                rax_1 = r10
                            
                            r10 = rax_1
                            int32_t rax_2 = rdx_1
                            
                            if (cond:9_1)
                                rax_2 = r9
                            
                            r9 = rax_2
                            int32_t rax_3 = rdi_1
                            
                            if (zmm6[0] f<= zmm4[0])
                                rax_3 = r8
                            
                            rbx_1 = zx.q(rbx_1.d + 1)
                            rsi_1 += 1
                            r8 = rax_3
                        while (rbx_1.d s<= rbp + 1)
                        
                        r12_1 = arg_18
                    
                    rdx_1 += 1
                while (rdx_1 s<= r12_1)
                
                result = result_1
                rcx_2 = arg_8
                rbp = arg_10
            
            rdi_1 += 1
        while (rdi_1 s<= result)
int32_t rcx_20 = *(arg1 + 0x428)

if (rcx_20 == 0)
    int32_t rcx_30 = (r9 * 0x7a69) ^ (r10 * 0x1b3b) ^ (r8 * 0x653) ^ *(arg1 + 0x400)
    result = rcx_30 * rcx_30 * rcx_30 * 0xec4d
    zmm0.d = _mm_cvtepi32_ps(zx.o(result)).d f* 4.65661287e-10f
else if (rcx_20 == 1)
    arg2 = *(arg1 + 0x440)
    zmm0 = _mm_cvtepi32_ps(zx.o(r10))
    uint64_t rcx_25 = zx.q(
        *(zx.q(zx.d(*(zx.q(zx.d(*(zx.q(r10.b) + arg1)) + zx.d(r9.b)) + arg1)) + zx.d(r8.b)) + arg1))
    arg4.d = arg2.d f* *((rcx_25 << 2) + 0x142dfe250)
    arg2[0] = arg2[0] f* *((rcx_25 << 2) + 0x142dfde50)
    arg2[0] = arg2[0] f* *((rcx_25 << 2) + 0x142dfda50)
    arg4.d = arg4.d f+ zmm0.d
    char* rcx_26 = *(arg1 + 0x430)
    zmm0 = _mm_cvtepi32_ps(zx.o(r9))
    arg2[0] = arg2[0] f+ zmm0.d
    zmm0 = _mm_cvtepi32_ps(zx.o(r8))
    arg2[0] = arg2[0] f+ zmm0.d
    return sub_1408a2390(rcx_26, arg2, arg2, arg4)

return result
