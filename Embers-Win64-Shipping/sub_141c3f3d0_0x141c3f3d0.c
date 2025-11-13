// 函数: sub_141c3f3d0
// 地址: 0x141c3f3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = sx.q(arg2[1].d)
int32_t rdx = 0
int32_t rcx = *(arg4 + 0xc)
arg4[1].d = 0

if (r15.d s> rcx && rcx != r15.d)
    sub_140775b10(arg4, r15.d)
    rdx = arg4[1].d
    rcx = *(arg4 + 0xc)

int32_t rax = rdx + r15.d
arg4[1].d = rax

if (rax s> rcx)
    sub_140775270(arg4)

if (r15.d != arg3[1].d)
    return memset(*arg4, 0, r15 << 2) __tailcall

int64_t rax_2 = *arg2
int32_t r13 = 0
int64_t result = *arg4
int64_t result_1 = result

if (r15.d != 0)
    int32_t rbx_1
    int32_t temp0_12
    
    do
        rbx_1 = arg1[0xc]
        arg1[0x10] = 0
        
        if (r15.d s<= rbx_1)
            rbx_1 = r15.d
        
        if (rbx_1 s> arg1[0x11])
            sub_140775b10(&arg1[0xe], rbx_1)
        
        int32_t rax_3 = arg1[0x10] + rbx_1
        arg1[0x10] = rax_3
        
        if (rax_3 s> arg1[0x11])
            sub_140775270(&arg1[0xe])
        
        void* rsi_1 = *(arg1 + 0x38)
        int64_t rbp_1 = sx.q(rbx_1)
        int64_t r12_1 = sx.q(r13)
        memcpy(rsi_1, *arg3 + (r12_1 << 2), (rbp_1 << 2).d)
        int64_t i = 0
        uint128_t zmm0_2
        
        if (rbx_1 s> 0 && rbx_1 u>= 0x10)
            zmm0_2 = _mm_shuffle_epi32(zx.o(arg1[0xb]), 0)
            
            if (rsi_1 u> &arg1[0xb] || rsi_1 + (sx.q(rbx_1 - 1) << 2) u< &arg1[0xb])
                int32_t rcx_10 = rbx_1 & 0x8000000f
                
                if (rcx_10 s< 0)
                    rcx_10 = ((rcx_10 - 1) | 0xfffffff0) + 1
                
                uint128_t* rax_10 = rsi_1 + 0x20
                float zmm2[0x4] = _mm_cvtepi32_ps(zmm0_2)
                
                do
                    i += 0x10
                    rax_10[-2] = _mm_sub_ps(rax_10[-2], zmm2)
                    rax_10[-1] = _mm_sub_ps(rax_10[-1], zmm2)
                    *rax_10 = _mm_sub_ps(*rax_10, zmm2)
                    rax_10[1] = _mm_sub_ps(rax_10[1], zmm2)
                    rax_10 = &rax_10[4]
                while (i s< sx.q(rbx_1 - rcx_10))
        
        if (i s< rbp_1)
            uint128_t zmm1
            
            if (rbp_1 - i s>= 4)
                void* rax_14 = rsi_1 + 8 + (i << 2)
                int64_t i_2 = ((rbp_1 - i - 4) u>> 2) + 1
                i += i_2 << 2
                int64_t i_1
                
                do
                    zmm1.d = (*(rax_14 - 8)).d f- _mm_cvtepi32_ps(zx.o(arg1[0xb])).d
                    *(rax_14 - 8) = zmm1.d
                    zmm1.d = (*(rax_14 - 4)).d f- _mm_cvtepi32_ps(zx.o(arg1[0xb])).d
                    zmm0_2 = *rax_14
                    *(rax_14 - 4) = zmm1.d
                    zmm0_2.d = zmm0_2.d f- _mm_cvtepi32_ps(zx.o(arg1[0xb]))[0]
                    *rax_14 = zmm0_2.d
                    zmm0_2.d = (*(rax_14 + 4)).d f- _mm_cvtepi32_ps(zx.o(arg1[0xb])).d
                    *(rax_14 + 4) = zmm0_2.d
                    rax_14 += 0x10
                    i_1 = i_2
                    i_2 -= 1
                while (i_1 != 1)
            
            for (; i s< rbp_1; i += 1)
                zmm1.d = (*(rsi_1 + (i << 2))).d f- _mm_cvtepi32_ps(zx.o(arg1[0xb])).d
                *(rsi_1 + (i << 2)) = zmm1.d
        
        result =
            sub_141c40820(arg1, rax_2 + (r12_1 << 2), &arg1[0xe], rbx_1, result_1 + (r12_1 << 2))
        r13 += rbx_1
        temp0_12 = r15.d
        r15 = zx.q(r15.d - rbx_1)
    while (temp0_12 != rbx_1)

return result
