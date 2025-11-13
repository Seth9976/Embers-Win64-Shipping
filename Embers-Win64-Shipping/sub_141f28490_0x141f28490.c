// 函数: sub_141f28490
// 地址: 0x141f28490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = arg1[5].d
int32_t rdi = 0
int32_t rbp = result - 1

if (rbp s>= 0)
    int64_t r14_1 = sx.q(rbp) << 3
    int64_t r15_1 = r14_1
    int32_t temp0_3
    
    do
        int64_t r9_1 = arg1[4]
        int64_t* rbx_1 = *(r14_1 + r9_1)
        
        if (rbx_1 == 0)
            int32_t rcx_5 = arg1[5].d
            int32_t rax_10 = rcx_5 - rbp - 1
            
            if (rax_10 s>= 1)
                rax_10 = 1
            
            if (rax_10 != 0)
                memcpy(r15_1 + r9_1, r9_1 + (sx.q(rcx_5 - rax_10) << 3), rax_10 << 3)
                rcx_5 = arg1[5].d
            
            arg1[5].d = rcx_5 - 1
        else
            void* rcx = rbx_1[0x3e]
            
            if (rcx == 0)
            label_141f28553:
                int32_t rdx_3 = arg1[5].d
                int32_t rax_4 = rdx_3 - rbp - 1
                
                if (rax_4 s>= 1)
                    rax_4 = 1
                
                if (rax_4 != 0)
                    int64_t rcx_1 = arg1[4]
                    memcpy(rcx_1 + r15_1, rcx_1 + (sx.q(rdx_3 - rax_4) << 3), rax_4 << 3)
                    rdx_3 = arg1[5].d
                
                arg1[5].d = rdx_3 - 1
                sub_141ef4e60(rbx_1, 0)
                rbx_1[0x59].d = 0
                
                if ((rbx_1[0x3f].b & 1) != 0)
                    (*(*rbx_1 + 0x3a0))(rbx_1, 0)
            else
                double zmm0_1[0x2] = sub_142004530(rcx)
                char rax_1 = rbx_1[0x3f].b
                float zmm2 = zmm0_1[0].d
                int64_t zmm1
                
                if ((rax_1 & 8) == 0)
                    zmm1 = fconvert.d(arg2.d)
                else
                    zmm1 = data_14399f938
                
                zmm0_1 = _mm_cvtps_pd(rbx_1[0x59].d[0])
                zmm0_1[0] = zmm0_1[0] f+ zmm1
                zmm1 = _mm_cvtpd_ps(zmm0_1).q
                rbx_1[0x59].d = zmm1.d
                
                if (not(zmm1.d f<= zmm2) && ((rax_1 & 4) == 0 || not(zmm2 != 0f)))
                    goto label_141f28553
        
        r15_1 -= 8
        r14_1 -= 8
        temp0_3 = rbp
        rbp -= 1
    while (temp0_3 - 1 s>= 0)
    result = arg1[5].d

if (result != 0)
    return result

int32_t rax_13 = data_143f3af18

if (rax_13 s> 0)
    int64_t r9_2 = data_143f3af10
    int64_t* rbx_2 = nullptr
    
    do
        if (*(rbx_2 + r9_2) == arg1)
            int32_t rcx_10 = rax_13 - rdi - 1
            
            if (rcx_10 s>= 1)
                rcx_10 = 1
            
            if (rcx_10 != 0)
                memcpy(r9_2 + (sx.q(rdi) << 3), r9_2 + (sx.q(rax_13 - rcx_10) << 3), rcx_10 << 3)
                rax_13 = data_143f3af18
            
            data_143f3af18 = rax_13 - 1
            sub_1405c53d0(&data_143f3af10)
            rax_13 = data_143f3af18
            rdi -= 1
            r9_2 = data_143f3af10
            rbx_2 -= 8
        
        rdi += 1
        rbx_2 = &rbx_2[1]
    while (rdi s< rax_13)

return (*(*arg1 + 0x20))(arg1, 1)
