// 函数: sub_141e8e550
// 地址: 0x141e8e550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_368
int64_t rax_2 = __security_cookie ^ &var_368
int64_t var_328 = arg1
int64_t var_320_1 = arg1 + (sx.q(arg2) << 3) - 8
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_318_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_310
memset(&var_310, 0, 0x2e8)
int64_t* r14_1 = &var_328

while (true)
    uint128_t zmm2 = *r14_1
    int32_t rbx_1 = (r14_1[2]).d
    void** r8_1 = zmm2.q
    void* i_2 = _mm_bsrli_si128(zmm2, 8).q
    int32_t i = ((i_2 - r8_1) s>> 3).d + 1
    
    if (rbx_1 == 0)
    label_141e8e721:
        int32_t temp0_3
        int32_t temp1_1
        temp0_3:temp1_1 = sx.q(i - 2)
        uint64_t rax_19 = zx.q((temp1_1 - temp0_3) s>> 1)
        int32_t rdi_1 = rax_19.d
        
        if (rax_19.d s>= 0)
            int32_t rsi_1 = ((rax_19 << 1) + 1).d
            int32_t temp2_1
            
            do
                uint64_t rbx_2 = zx.q(rdi_1)
                
                if (rsi_1 s< i)
                    uint64_t r9_2
                    
                    do
                        r9_2 = zx.q(((rbx_2 << 1) + 1).d)
                        int32_t r10_1 = (r9_2 + 1).d
                        
                        if (r10_1 s< i)
                            if (*(r8_1[sx.q(r10_1)] + 0x258) f> *(r8_1[sx.q(r9_2.d)] + 0x258))
                                r10_1 = r9_2.d
                            
                            r9_2 = zx.q(r10_1)
                        
                        int64_t rcx_11 = sx.q(r9_2.d)
                        int64_t rax_22 = sx.q(rbx_2.d)
                        void* rdx_4 = r8_1[rcx_11]
                        void* r10_2 = r8_1[rax_22]
                        
                        if (*(rdx_4 + 0x258) f>= *(r10_2 + 0x258))
                            break
                        
                        r8_1[rax_22] = rdx_4
                        rbx_2 = zx.q(r9_2.d)
                        r8_1[rcx_11] = r10_2
                    while (((r9_2 << 1) + 1).d s< i)
                
                rsi_1 -= 2
                temp2_1 = rdi_1
                rdi_1 -= 1
            while (temp2_1 - 1 s>= 0)
        
        int32_t j = i - 1
        int64_t i_1 = sx.q(j)
        
        if (j s> 0)
            do
                uint64_t rbx_3 = 0
                void* rcx_12 = *r8_1
                *r8_1 = r8_1[i_1]
                r8_1[i_1] = rcx_12
                
                if (j s> 1)
                    uint64_t r9_3
                    
                    do
                        r9_3 = zx.q(((rbx_3 << 1) + 1).d)
                        int32_t r10_3 = (r9_3 + 1).d
                        
                        if (r10_3 s< j)
                            if (*(r8_1[sx.q(r10_3)] + 0x258) f> *(r8_1[sx.q(r9_3.d)] + 0x258))
                                r10_3 = r9_3.d
                            
                            r9_3 = zx.q(r10_3)
                        
                        int64_t rcx_14 = sx.q(r9_3.d)
                        int64_t rax_27 = sx.q(rbx_3.d)
                        void* rdx_6 = r8_1[rcx_14]
                        void* r10_4 = r8_1[rax_27]
                        
                        if (*(rdx_6 + 0x258) f>= *(r10_4 + 0x258))
                            break
                        
                        r8_1[rax_27] = rdx_6
                        rbx_3 = zx.q(r9_3.d)
                        r8_1[rcx_14] = r10_4
                    while (((r9_3 << 1) + 1).d s< j)
                
                j -= 1
                i_1 -= 1
            while (i_1 s> 0)
    else
        while (true)
            if (i s<= 8)
                for (; i_2 u> r8_1; i_2 -= 8)
                    void* rdx_7 = r8_1
                    void* r9_4 = &r8_1[1]
                    
                    if (&r8_1[1] u<= i_2)
                        do
                            if (*(*r9_4 + 0x258) f< *(*rdx_7 + 0x258))
                                rdx_7 = r9_4
                            
                            r9_4 += 8
                        while (r9_4 u<= i_2)
                    
                    int64_t rcx_18 = *rdx_7
                    *rdx_7 = *i_2
                    *i_2 = rcx_18
                
                break
            
            if (i s< 0)
                i += 1
            
            void* r9_1 = i_2 + 8
            int64_t rdx = sx.q(i s>> 1)
            void* rcx_3 = r8_1[rdx]
            r8_1[rdx] = *r8_1
            void** rdx_1 = r8_1
            *r8_1 = rcx_3
            void* rcx_5
            
            while (true)
                rdx_1 = &rdx_1[1]
                
                if (rdx_1 u<= i_2 && *(*rdx_1 + 0x258) f>= *(*r8_1 + 0x258))
                    continue
                
                do
                    rcx_5 = *(r9_1 - 8)
                    r9_1 -= 8
                    
                    if (r9_1 u<= r8_1)
                        break
                while (*(*r8_1 + 0x258) f>= *(rcx_5 + 0x258))
                
                if (rdx_1 u> r9_1)
                    break
                
                void* rax_8 = *rdx_1
                *rdx_1 = rcx_5
                *r9_1 = rax_8
            
            void* rax_9 = *r8_1
            rbx_1 -= 1
            *r8_1 = rcx_5
            *r9_1 = rax_9
            
            if (((r9_1 - r8_1 - 8) & 0xfffffffffffffff8) s< ((i_2 - rdx_1) & 0xfffffffffffffff8))
                if (i_2 u> rdx_1)
                    *r14_1 = rdx_1
                    r14_1[1] = i_2
                    r14_1[2].d = rbx_1
                    r14_1 = &r14_1[3]
                
                if (&r8_1[1] u>= r9_1)
                    break
                
                i_2 = r9_1 - 8
            else
                if (&r8_1[1] u< r9_1)
                    *r14_1 = r8_1
                    r14_1[1] = r9_1 - 8
                    r14_1[2].d = rbx_1
                    r14_1 = &r14_1[3]
                
                if (i_2 u<= rdx_1)
                    break
                
                r8_1 = rdx_1
            
            i = ((i_2 - r8_1) s>> 3).d + 1
            
            if (rbx_1 == 0)
                goto label_141e8e721
    
    r14_1 -= 0x18
    
    if (r14_1 u< &var_328)
        break

__security_check_cookie(rax_2 ^ &var_368)
