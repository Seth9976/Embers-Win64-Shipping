// 函数: sub_141c424f0
// 地址: 0x141c424f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = arg3
int64_t rax
int128_t zmm6
int128_t zmm7

if (*(arg1 + 0xdc) s> 0)
    if (*(arg1 + 0xe4) != 0)
        rax, arg5, zmm6, zmm7 = sub_141c42410(arg1, arg4, *(arg1 + 0x98))
        arg4 = *(arg1 + 0x98)
    
    if (*(arg1 + 0xe3) != 0)
        rax, arg5, zmm6, zmm7 = sub_141c42410(arg1 + 0x30, arg4, *(arg1 + 0x98))
        arg4 = *(arg1 + 0x98)

float zmm4[0x4] = *(arg1 + 0xd8)
zmm4[0] = zmm4[0] f* *(arg1 + 0xd0)
int32_t rdx_2 = *(arg1 + 0xdc)
int32_t i_4 = 0

if (*(arg1 + 0xe2) == 0)
    int128_t var_28_1 = zmm6
    int32_t r10_1 = 0
    int128_t var_38_1 = zmm7
    uint32_t zmm1[0x4] = zx.o(0)
    float zmm2[0x4]
    
    if (rdx_2 s> 0)
        float* r8_2 = nullptr
        int64_t rcx_1 = 0
        
        do
            int64_t rax_1 = *(arg1 + 0x78)
            zmm4[0] = zmm4[0] f* *(r8_2 + arg4)
            bool cond:1_1 = *(rcx_1 + rax_1 + 8) == 2
            zmm2 = _mm_and_ps(zmm4, 0x7fffffff)
            
            if (not(cond:1_1))
                zmm2[0] = zmm2[0] * zmm2[0]
            
            arg5 = *(rcx_1 + rax_1 + 0x20)
            int32_t zmm3
            
            if (zmm2[0] <= arg5[0])
                zmm3 = *(rcx_1 + rax_1 + 0x1c)
            else
                zmm3 = *(rcx_1 + rax_1 + 0x14)
            
            arg5[0] = arg5[0] - zmm2[0]
            arg5[0] = arg5[0] f* zmm3
            arg5[0] = arg5[0] + zmm2[0]
            
            if (not(arg5[0] <= -1.17549435e-38f) && not(arg5[0] >= 1.17549435e-38f))
                arg5 = zmm1
            else if (not(arg5[0] f>= zmm1[0]))
                arg5 = zmm1
            else if (not(arg5[0] < 1f))
                arg5 = 0x3f800000
            
            *(rcx_1 + rax_1 + 0x20) = arg5[0]
            r10_1 += 1
            rcx_1 += 0x28
            *(r8_2 + *(arg1 + 0x98)) = arg5[0]
            r8_2 = &r8_2[1]
            rdx_2 = *(arg1 + 0xdc)
        while (r10_1 s< rdx_2)
    
    uint32_t rcx_2 = zx.d(*(arg1 + 0xe0))
    
    if (rcx_2 == 1)
        int32_t i_5 = 0
        
        if (rdx_2 s> 0 && rdx_2 u>= 8)
            int64_t r9_2 = *(arg1 + 0x98)
            zmm2 = zx.o(0)
            zmm1 = zx.o(0)
            int32_t rcx_13 = rdx_2 & 0x80000007
            
            if (rcx_13 s< 0)
                rcx_13 = ((rcx_13 - 1) | 0xfffffff8) + 1
            
            int64_t i = 0
            
            do
                i_5 += 8
                zmm2 = _mm_add_ps(zmm2, *(r9_2 + (i << 2)))
                arg5 = *(r9_2 + (i << 2) + 0x10)
                i += 8
                zmm1 = _mm_add_ps(zmm1, arg5)
            while (i s< sx.q(rdx_2 - rcx_13))
            
            zmm2 = _mm_add_ps(zmm2, zmm1)
            zmm1 = zmm2
            zmm1[0].q = zmm2 u>> 0x40
            zmm1 = _mm_add_ps(zmm1, zmm2)
            arg5 = _mm_shuffle_ps(zmm1, zmm1, 0xf5)
            zmm1[0] = zmm1[0] f+ arg5[0]
        
        int64_t i_1 = sx.q(i_5)
        int64_t r8_4 = sx.q(rdx_2)
        
        if (i_1 s< r8_4)
            if (r8_4 - i_1 s>= 4)
                int64_t rax_12 = *(arg1 + 0x98)
                
                do
                    zmm1[0] = zmm1[0] f+ *(rax_12 + (i_1 << 2))
                    zmm1[0] = zmm1[0] f+ *(rax_12 + (i_1 << 2) + 4)
                    zmm1[0] = zmm1[0] f+ *(rax_12 + (i_1 << 2) + 8)
                    zmm1[0] = zmm1[0] f+ *(rax_12 + (i_1 << 2) + 0xc)
                    i_1 += 4
                while (i_1 s< r8_4 - 3)
            
            if (i_1 s< r8_4)
                int64_t rax_13 = *(arg1 + 0x98)
                
                do
                    zmm1[0] = zmm1[0] f+ *(rax_13 + (i_1 << 2))
                    i_1 += 1
                while (i_1 s< r8_4)
        
        arg5 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0xdc)))
        zmm1[0] = zmm1[0] f/ arg5[0]
        uint32_t zmm0_2[0x4] = logf(__maxss_xmmss_memss(zmm1[0], 0x322bcc77)[0])
        zmm0_2[0] = zmm0_2[0] f* 8.68588924f
        arg5, rax = sub_141c35850(arg1, zmm0_2)
        rdx_2 = *(arg1 + 0xdc)
        int32_t r8_5 = 0
        
        if (rdx_2 s> 0)
            int64_t rcx_18 = 0
            
            do
                rcx_18 += 4
                r8_5 += 1
                *(rcx_18 + *(arg1 + 0xa8) - 4) = arg5[0]
                rdx_2 = *(arg1 + 0xdc)
            while (r8_5 s< rdx_2)
    else if (rcx_2 == 2)
        int64_t r9_1 = sx.q(*(arg1 + 0xa0))
        
        if (r9_1.d != 0)
            uint32_t (* rdx_3)[0x4] = *(arg1 + 0x98)
            int32_t rcx_5 = (r9_1 - 1).d
            int64_t i_2 = 1
            int32_t i_6 = 1
            zmm1 = *rdx_3
            
            if (r9_1.d s> 1 && rcx_5 u>= 8)
                zmm2 = zmm1
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0)
                zmm1 = zmm2
                int32_t rcx_6 = rcx_5 & 0x80000007
                
                if (rcx_6 s< 0)
                    rcx_6 = ((rcx_6 - 1) | 0xfffffff8) + 1
                
                do
                    i_6 += 8
                    zmm2 = _mm_max_ps(zmm2, *(rdx_3 + (i_2 << 2)))
                    arg5 = *(rdx_3 + (i_2 << 2) + 0x10)
                    i_2 += 8
                    zmm1 = _mm_max_ps(zmm1, arg5)
                while (i_2 s< sx.q(r9_1.d - rcx_6))
                
                zmm2 = _mm_max_ps(zmm2, zmm1)
                zmm1 = zmm2
                zmm1[0].q = zmm2 u>> 0x40
                zmm1 = _mm_max_ps(zmm1, zmm2)
                arg5 = _mm_shuffle_ps(zmm1, zmm1, 0xf5)
                zmm1 = _mm_max_ss(zmm1[0], arg5[0])
            
            int64_t i_3 = sx.q(i_6)
            
            if (i_3 s< r9_1)
                if (r9_1 - i_3 s>= 4)
                    do
                        zmm2 = (*rdx_3)[i_3 + 1]
                        arg5 = _mm_max_ss((*rdx_3)[i_3][0], zmm1[0])
                        zmm1 = (*rdx_3)[i_3 + 2]
                        zmm2 = _mm_max_ss(zmm2[0], arg5[0])
                        arg5 = (*rdx_3)[i_3 + 3]
                        i_3 += 4
                        zmm1 = _mm_max_ss(zmm1[0], zmm2[0])
                        zmm1 = _mm_max_ss(arg5[0], zmm1[0])
                    while (i_3 s< r9_1 - 3)
                
                while (i_3 s< r9_1)
                    arg5 = (*rdx_3)[i_3]
                    i_3 += 1
                    zmm1 = _mm_max_ss(arg5[0], zmm1[0])
        
        uint32_t zmm0_1[0x4] = logf(__maxss_xmmss_memss(zmm1[0], 0x322bcc77)[0])
        zmm0_1[0] = zmm0_1[0] f* 8.68588924f
        arg5, rax = sub_141c35850(arg1, zmm0_1)
        rdx_2 = *(arg1 + 0xdc)
        int32_t r8_3 = 0
        
        if (rdx_2 s> 0)
            int64_t rcx_11 = 0
            
            do
                rcx_11 += 4
                r8_3 += 1
                *(rcx_11 + *(arg1 + 0xa8) - 4) = arg5[0]
                rdx_2 = *(arg1 + 0xdc)
            while (r8_3 s< rdx_2)
    else
        int32_t r14_1 = 0
        
        if (rdx_2 s> 0)
            zmm6 = 0x322bcc77
            float (* rsi_1)[0x4] = nullptr
            zmm7 = 0x410af967
            
            do
                uint32_t zmm0[0x4] = logf(_mm_max_ss((*(rsi_1 + *(arg1 + 0x98)))[0], zmm6.d)[0])
                zmm0[0] = zmm0[0] f* zmm7.d
                arg5, zmm6, zmm7 = sub_141c35850(arg1, zmm0)
                rsi_1 = &(*rsi_1)[1]
                r14_1 += 1
                *(rsi_1 + *(arg1 + 0xa8) - 4) = arg5[0]
                rdx_2 = *(arg1 + 0xdc)
            while (r14_1 s< rdx_2)
    
    if (rdx_2 s> 0)
        int64_t r14_2 = 0
        void* rsi_2 = rbp
        
        do
            int64_t* rcx_20 = *(arg1 + 0x68) + r14_2
            (*(*rcx_20 + 8))(rcx_20, *(arg2 - rbp + rsi_2))
            i_4 += 1
            r14_2 += 0x48
            arg5[0] = arg5[0] f* *(rsi_2 - rbp + *(arg1 + 0xa8))
            arg5[0] = arg5[0] f* *(arg1 + 0xd4)
            arg5[0] = arg5[0] f* *(arg1 + 0xd0)
            *rsi_2 = arg5[0]
            rsi_2 += 4
        while (i_4 s< *(arg1 + 0xdc))
else if (rdx_2 s> 0)
    int32_t* r9 = arg4 - rbp
    
    do
        i_4 += 1
        zmm4[0] = zmm4[0] f* *(r9 + rbp)
        rbp += 4
        *(rbp - 4) = zmm4[0]
    while (i_4 s< *(arg1 + 0xdc))
