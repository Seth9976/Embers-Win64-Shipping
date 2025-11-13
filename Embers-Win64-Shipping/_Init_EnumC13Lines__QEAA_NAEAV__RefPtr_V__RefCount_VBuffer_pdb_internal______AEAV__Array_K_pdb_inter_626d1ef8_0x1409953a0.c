// 函数: ?Init@EnumC13Lines@@QEAA_NAEAV?$RefPtr@V?$RefCount@VBuffer@pdb_internal@@@@@@AEAV?$Array@K@pdb_internal@@PEAVIDebugSSectionReader@@@Z
// 地址: 0x1409953a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdx = *arg4
int64_t r11 = 0
float* result = *arg1
float zmm3 = arg2[0]
float zmm5[0x4] = arg3
arg3[0] = arg3[0] f* *rdx
float (* r10)[0x4] = 0x20
zmm3 = zmm3 * *result
float zmm4[0x4] = arg2
float temp0[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
zmm3 = zmm3 + arg3[0]
float temp0_1[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
*rdx = zmm3
int64_t rdx_1 = sx.q(*(arg1 + 0x1c))
float zmm0[0x4]

if (rdx_1.d != 0)
    int32_t i_6 = 0
    
    if (*(arg4 + 0x1c) != 0)
        if (rdx_1.d s> 0 && rdx_1.d u>= 0x10)
            int64_t rdi_2 = arg4[1]
            int64_t r12_2 = arg1[1]
            int64_t rcx_1 = sx.q((rdx_1 - 1).d)
            result = r12_2 + (rcx_1 << 2)
            int64_t rsi_2 = rdi_2 + (rcx_1 << 2)
            
            if ((rdi_2 u> result || rsi_2 u< r12_2) && (rdi_2 u> &arg1[1] || rsi_2 u< &arg1[1])
                    && (rdi_2 u> &arg4[1] || rsi_2 u< &arg4[1]))
                int32_t rax_16 = rdx_1.d & 0x8000000f
                
                if (rax_16 s< 0)
                    rax_16 = ((rax_16 - 1) | 0xfffffff0) + 1
                
                int64_t i = 0
                result = 0x20
                
                do
                    i_6 += 0x10
                    i += 0x10
                    arg3 = *(result + r12_2 - 0x20)
                    float temp0_6[0x4] = _mm_mul_ps(temp0, *(result + rdi_2 - 0x20))
                    float temp0_8[0x4] = _mm_add_ps(_mm_mul_ps(arg3, temp0_1), temp0_6)
                    float temp0_9[0x4] = _mm_mul_ps(*(result + r12_2 - 0x10), temp0_1)
                    *(result + rdi_2 - 0x20) = temp0_8
                    arg3 = *(result + r12_2 + 0x10)
                    float temp0_10[0x4] = _mm_mul_ps(*(result + rdi_2 - 0x10), temp0)
                    float temp0_11[0x4] = _mm_mul_ps(arg3, temp0_1)
                    *(result + rdi_2 - 0x10) = _mm_add_ps(temp0_9, temp0_10)
                    arg2 = *(result + r12_2)
                    float temp0_13[0x4] = _mm_mul_ps(*(result + rdi_2), temp0)
                    *(result + rdi_2) = _mm_add_ps(_mm_mul_ps(arg2, temp0_1), temp0_13)
                    *(result + rdi_2 + 0x10) =
                        _mm_add_ps(temp0_11, _mm_mul_ps(temp0, *(result + rdi_2 + 0x10)))
                    result = &result[0x10]
                while (i s< sx.q(rdx_1.d - rax_16))
        
        int64_t i_1 = sx.q(i_6)
        
        if (i_1 s< rdx_1)
            result = rdx_1 - i_1
            
            if (result s>= 4)
                do
                    int64_t rcx_2 = arg4[1]
                    int64_t rax_20 = arg1[1]
                    zmm5[0] = zmm5[0] f* *(rcx_2 + (i_1 << 2))
                    zmm4[0] = zmm4[0] f* *(rax_20 + (i_1 << 2))
                    zmm4[0] = zmm4[0] + zmm5[0]
                    *(rcx_2 + (i_1 << 2)) = zmm4[0]
                    int64_t rcx_3 = arg4[1]
                    int64_t rax_21 = arg1[1]
                    zmm5[0] = zmm5[0] f* *(rcx_3 + (i_1 << 2) + 4)
                    zmm4[0] = zmm4[0] f* *(rax_21 + (i_1 << 2) + 4)
                    zmm4[0] = zmm4[0] + zmm5[0]
                    *(rcx_3 + (i_1 << 2) + 4) = zmm4[0]
                    int64_t rcx_4 = arg4[1]
                    int64_t rax_22 = arg1[1]
                    zmm5[0] = zmm5[0] f* *(rcx_4 + (i_1 << 2) + 8)
                    zmm4[0] = zmm4[0] f* *(rax_22 + (i_1 << 2) + 8)
                    zmm4[0] = zmm4[0] + zmm5[0]
                    *(rcx_4 + (i_1 << 2) + 8) = zmm4[0]
                    int64_t rcx_5 = arg4[1]
                    result = arg1[1]
                    zmm5[0] = zmm5[0] f* *(rcx_5 + (i_1 << 2) + 0xc)
                    zmm4[0] = zmm4[0] * result[i_1 + 3]
                    zmm4[0] = zmm4[0] + zmm5[0]
                    *(rcx_5 + (i_1 << 2) + 0xc) = zmm4[0]
                    i_1 += 4
                while (i_1 s< rdx_1 - 3)
            
            for (; i_1 s< rdx_1; i_1 += 1)
                int64_t rcx_6 = arg4[1]
                result = arg1[1]
                zmm5[0] = zmm5[0] f* *(rcx_6 + (i_1 << 2))
                zmm4[0] = zmm4[0] * result[i_1]
                zmm4[0] = zmm4[0] + zmm5[0]
                *(rcx_6 + (i_1 << 2)) = zmm4[0]
    else
        *(arg4 + 0x1c) = rdx_1.d
        
        if (rdx_1.d s> 0 && rdx_1.d u>= 0x10)
            int64_t rdi_1 = arg4[1]
            int64_t rsi_1 = arg1[1]
            int64_t rcx = sx.q((rdx_1 - 1).d)
            result = rsi_1 + (rcx << 2)
            int64_t r14_1 = rdi_1 + (rcx << 2)
            
            if ((rdi_1 u> result || r14_1 u< rsi_1) && (rdi_1 u> &arg1[1] || r14_1 u< &arg1[1])
                    && (rdi_1 u> &arg4[1] || r14_1 u< &arg4[1]))
                int32_t rax_2 = rdx_1.d & 0x8000000f
                
                if (rax_2 s< 0)
                    rax_2 = ((rax_2 - 1) | 0xfffffff0) + 1
                
                int64_t i_2 = 0
                result = 0x20
                
                do
                    zmm0 = *(result + rsi_1 - 0x20)
                    i_6 += 0x10
                    i_2 += 0x10
                    arg2 = *(result + rsi_1)
                    result = &result[0x10]
                    float temp0_2[0x4] = _mm_mul_ps(zmm0, temp0_1)
                    float temp0_3[0x4] = _mm_mul_ps(arg2, temp0_1)
                    *(result + rdi_1 - 0x60) = temp0_2
                    *(result + rdi_1 - 0x50) = _mm_mul_ps(*(result + rsi_1 - 0x50), temp0_1)
                    zmm0 = *(result + rsi_1 - 0x30)
                    *(result + rdi_1 - 0x40) = temp0_3
                    *(result + rdi_1 - 0x30) = _mm_mul_ps(zmm0, temp0_1)
                while (i_2 s< sx.q(rdx_1.d - rax_2))
        
        int64_t i_3 = sx.q(i_6)
        
        if (i_3 s< rdx_1)
            result = rdx_1 - i_3
            
            if (result s>= 4)
                do
                    zmm4[0] = zmm4[0] f* *(arg1[1] + (i_3 << 2))
                    *(arg4[1] + (i_3 << 2)) = zmm4[0]
                    zmm4[0] = zmm4[0] f* *(arg1[1] + (i_3 << 2) + 4)
                    *(arg4[1] + (i_3 << 2) + 4) = zmm4[0]
                    zmm4[0] = zmm4[0] f* *(arg1[1] + (i_3 << 2) + 8)
                    *(arg4[1] + (i_3 << 2) + 8) = zmm4[0]
                    zmm4[0] = zmm4[0] f* *(arg1[1] + (i_3 << 2) + 0xc)
                    result = arg4[1]
                    result[i_3 + 3] = zmm4[0]
                    i_3 += 4
                while (i_3 s< rdx_1 - 3)
            
            for (; i_3 s< rdx_1; i_3 += 1)
                zmm4[0] = zmm4[0] f* *(arg1[1] + (i_3 << 2))
                result = arg4[1]
                result[i_3] = zmm4[0]

int64_t rdx_7 = sx.q(arg1[4].d)

if (rdx_7.d != 0)
    int32_t i_7 = 0
    
    if (arg4[4].d != 0)
        if (rdx_7.d s> 0 && rdx_7.d u>= 0x10)
            int64_t rdi_5 = arg4[2]
            int64_t rsi_4 = arg1[2]
            int64_t rcx_8 = sx.q((rdx_7 - 1).d)
            result = rsi_4 + (rcx_8 << 2)
            int64_t r14_4 = rdi_5 + (rcx_8 << 2)
            
            if ((rdi_5 u> result || r14_4 u< rsi_4) && (rdi_5 u> &arg1[2] || r14_4 u< &arg1[2])
                    && (rdi_5 u> &arg4[2] || r14_4 u< &arg4[2]))
                int32_t rax_39 = rdx_7.d & 0x8000000f
                
                if (rax_39 s< 0)
                    rax_39 = ((rax_39 - 1) | 0xfffffff0) + 1
                
                result = sx.q(rdx_7.d - rax_39)
                
                do
                    i_7 += 0x10
                    r11 += 0x10
                    arg3 = *(r10 + rsi_4 - 0x20)
                    float temp0_22[0x4] = _mm_mul_ps(temp0, *(r10 + rdi_5 - 0x20))
                    float temp0_24[0x4] = _mm_add_ps(_mm_mul_ps(arg3, temp0_1), temp0_22)
                    float temp0_25[0x4] = _mm_mul_ps(*(r10 + rsi_4 - 0x10), temp0_1)
                    *(r10 + rdi_5 - 0x20) = temp0_24
                    *(r10 + rdi_5 - 0x10) =
                        _mm_add_ps(temp0_25, _mm_mul_ps(*(r10 + rdi_5 - 0x10), temp0))
                    arg2 = *(r10 + rsi_4)
                    float temp0_28[0x4] = _mm_mul_ps(*(r10 + rdi_5), temp0)
                    *(r10 + rdi_5) = _mm_add_ps(_mm_mul_ps(arg2, temp0_1), temp0_28)
                    arg2 = *(r10 + rsi_4 + 0x10)
                    float temp0_31[0x4] = _mm_mul_ps(*(r10 + rdi_5 + 0x10), temp0)
                    *(r10 + rdi_5 + 0x10) = _mm_add_ps(_mm_mul_ps(arg2, temp0_1), temp0_31)
                    r10 = &r10[4]
                while (r11 s< result)
        
        int64_t i_4 = sx.q(i_7)
        
        if (i_4 s< rdx_7)
            result = rdx_7 - i_4
            
            if (result s>= 4)
                do
                    int64_t rcx_9 = arg4[2]
                    int64_t rax_43 = arg1[2]
                    zmm5[0] = zmm5[0] f* *(rcx_9 + (i_4 << 2))
                    zmm4[0] = zmm4[0] f* *(rax_43 + (i_4 << 2))
                    zmm4[0] = zmm4[0] + zmm5[0]
                    *(rcx_9 + (i_4 << 2)) = zmm4[0]
                    int64_t rcx_10 = arg4[2]
                    int64_t rax_44 = arg1[2]
                    zmm5[0] = zmm5[0] f* *(rcx_10 + (i_4 << 2) + 4)
                    zmm4[0] = zmm4[0] f* *(rax_44 + (i_4 << 2) + 4)
                    zmm4[0] = zmm4[0] + zmm5[0]
                    *(rcx_10 + (i_4 << 2) + 4) = zmm4[0]
                    int64_t rcx_11 = arg4[2]
                    int64_t rax_45 = arg1[2]
                    zmm5[0] = zmm5[0] f* *(rcx_11 + (i_4 << 2) + 8)
                    zmm4[0] = zmm4[0] f* *(rax_45 + (i_4 << 2) + 8)
                    zmm4[0] = zmm4[0] + zmm5[0]
                    *(rcx_11 + (i_4 << 2) + 8) = zmm4[0]
                    int64_t rcx_12 = arg4[2]
                    result = arg1[2]
                    zmm5[0] = zmm5[0] f* *(rcx_12 + (i_4 << 2) + 0xc)
                    zmm4[0] = zmm4[0] * result[i_4 + 3]
                    zmm4[0] = zmm4[0] + zmm5[0]
                    *(rcx_12 + (i_4 << 2) + 0xc) = zmm4[0]
                    i_4 += 4
                while (i_4 s< rdx_7 - 3)
            
            for (; i_4 s< rdx_7; i_4 += 1)
                int64_t rcx_13 = arg4[2]
                result = arg1[2]
                zmm5[0] = zmm5[0] f* *(rcx_13 + (i_4 << 2))
                zmm4[0] = zmm4[0] * result[i_4]
                zmm4[0] = zmm4[0] + zmm5[0]
                *(rcx_13 + (i_4 << 2)) = zmm4[0]
    else
        arg4[4].d = rdx_7.d
        result = zx.q(*(arg1 + 0x24))
        *(arg4 + 0x24) = result.b
        
        if (rdx_7.d s> 0 && rdx_7.d u>= 0x10)
            int64_t rdi_4 = arg4[2]
            int64_t rsi_3 = arg1[2]
            int64_t rcx_7 = sx.q((rdx_7 - 1).d)
            result = rsi_3 + (rcx_7 << 2)
            int64_t r14_3 = rdi_4 + (rcx_7 << 2)
            
            if ((rdi_4 u> result || r14_3 u< rsi_3) && (rdi_4 u> &arg1[2] || r14_3 u< &arg1[2])
                    && (rdi_4 u> &arg4[2] || r14_3 u< &arg4[2]))
                int32_t rax_25 = rdx_7.d & 0x8000000f
                
                if (rax_25 s< 0)
                    rax_25 = ((rax_25 - 1) | 0xfffffff0) + 1
                
                result = sx.q(rdx_7.d - rax_25)
                
                do
                    zmm0 = *(r10 + rsi_3 - 0x20)
                    i_7 += 0x10
                    r11 += 0x10
                    arg2 = *(r10 + rsi_3)
                    r10 = &r10[4]
                    float temp0_18[0x4] = _mm_mul_ps(zmm0, temp0_1)
                    float temp0_19[0x4] = _mm_mul_ps(arg2, temp0_1)
                    *(r10 + rdi_4 - 0x60) = temp0_18
                    *(r10 + rdi_4 - 0x50) = _mm_mul_ps(*(r10 + rsi_3 - 0x50), temp0_1)
                    zmm0 = *(r10 + rsi_3 - 0x30)
                    *(r10 + rdi_4 - 0x40) = temp0_19
                    *(r10 + rdi_4 - 0x30) = _mm_mul_ps(zmm0, temp0_1)
                while (r11 s< result)
        
        int64_t i_5 = sx.q(i_7)
        
        if (i_5 s< rdx_7)
            result = rdx_7 - i_5
            
            if (result s>= 4)
                do
                    zmm4[0] = zmm4[0] f* *(arg1[2] + (i_5 << 2))
                    *(arg4[2] + (i_5 << 2)) = zmm4[0]
                    zmm4[0] = zmm4[0] f* *(arg1[2] + (i_5 << 2) + 4)
                    *(arg4[2] + (i_5 << 2) + 4) = zmm4[0]
                    zmm4[0] = zmm4[0] f* *(arg1[2] + (i_5 << 2) + 8)
                    *(arg4[2] + (i_5 << 2) + 8) = zmm4[0]
                    zmm4[0] = zmm4[0] f* *(arg1[2] + (i_5 << 2) + 0xc)
                    result = arg4[2]
                    result[i_5 + 3] = zmm4[0]
                    i_5 += 4
                while (i_5 s< rdx_7 - 3)
            
            for (; i_5 s< rdx_7; i_5 += 1)
                zmm4[0] = zmm4[0] f* *(arg1[2] + (i_5 << 2))
                result = arg4[2]
                result[i_5] = zmm4[0]

return result
