// 函数: sub_141de73e0
// 地址: 0x141de73e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int32_t r9_1 = *(arg1 + 0xc)
int64_t* r15_1 = arg2
int32_t rbx_1 = 0
int64_t rdi_1 = sx.q(*(arg3 + 0x80))
arg1[1].d = 0

if (rdi_1.d s> r9_1 && r9_1 != rdi_1.d)
    sub_1405c5570(arg1, rdi_1.d)
    r9_1 = *(arg1 + 0xc)
    rbx_1 = arg1[1].d

int32_t rax_1 = rbx_1 + rdi_1.d
arg1[1].d = rax_1

if (rax_1 s> r9_1)
    sub_1405a4d70(arg1)

memset(*arg1 + (sx.q(rbx_1) << 3), 0, rdi_1 << 3)
int32_t i = 0

if (r15_1[1].d s<= 0)
    return 

int64_t r13_1 = 0
int64_t arg_18 = 0

do
    int64_t* rax = *r15_1
    int32_t j = 0
    int64_t* var_78_1 = rax
    
    if (*(rax + r13_1 + 8) s> 0)
        int32_t* r14_2 = nullptr
        
        do
            int64_t rdi_2 = *(rax + r13_1)
            int32_t rcx_3
            rcx_3.b = sub_140b5b8a0(*(r14_2 + rdi_2), 0) == 0
            
            if ((*(r14_2 + rdi_2 + 4) != 0 | rcx_3.b) != 0)
                int64_t rbx_2 = *(r14_2 + rdi_2)
                void* const rcx_7
                
                if (*(arg3 + 0xf0) == *(arg3 + 0x11c))
                label_141de7570:
                    rcx_7 = nullptr
                else
                    int32_t rax_6 = sub_140b5ead0(rbx_2.d) + rbx_2:4.d
                    void* r8_1 = arg3 + 0x120
                    void* rcx_5 = *(r8_1 + 8)
                    
                    if (rcx_5 != 0)
                        r8_1 = rcx_5
                    
                    int32_t rax_8 = *(r8_1 + (((sx.q(*(arg3 + 0x130)) - 1) & sx.q(rax_6)) << 2))
                    
                    if (rax_8 == 0xffffffff)
                    label_141de7570_1:
                        rcx_7 = nullptr
                    else
                        int64_t r8_2 = *(arg3 + 0xe8)
                        
                        while (true)
                            int64_t rdx_5 = sx.q(rax_8) * 5
                            rcx_7 = r8_2 + (rdx_5 << 2)
                            
                            if (*(r8_2 + (rdx_5 << 2)) == rbx_2)
                                break
                            
                            rax_8 = *(rcx_7 + 0xc)
                            
                            if (rax_8 == 0xffffffff)
                                goto label_141de7570_2
                        
                        if (rax_8 == 0xffffffff)
                        label_141de7570_2:
                            rcx_7 = nullptr
                
                void* rax_9 = rcx_7 + 8
                
                if (rcx_7 == 0)
                    rax_9 = nullptr
                
                if (rax_9 != 0)
                    int64_t r8_3 = sx.q(*rax_9)
                    
                    if (r8_3.d != 0xffffffff)
                        int32_t rax_10 = *(r14_2 + rdi_2 + 8)
                        float zmm1 = 1f
                        
                        if (rax_10 != 0)
                            zmm1 = 1f f/ _mm_cvtepi32_ps(zx.o(rax_10)).d
                        
                        int32_t k_1 = r8_3.d
                        int64_t r9_2 = r8_3
                        
                        if (r8_3 s< rdi_1)
                            do
                                if (k_1 s>= r8_3.d)
                                    int32_t k = k_1
                                    int32_t rdx_6 = 0
                                    
                                    do
                                        if (k == r8_3.d)
                                            if (rdx_6 != 0xffffffff)
                                                uint64_t rcx_9 = *arg1
                                                uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(rdx_6 + 1))
                                                *(rcx_9 + (r9_2 << 3)) = i
                                                zmm0_1.d = zmm0_1.d f* zmm1
                                                zmm0_1.d = zmm0_1.d f+ *(rcx_9 + (r9_2 << 3) + 4)
                                                
                                                if (zmm0_1.d f>= 0f)
                                                    zmm0_1 = _mm_min_ss(zmm0_1.d, 0x3f800000)
                                                else
                                                    zmm0_1 = zx.o(0)
                                                
                                                *(rcx_9 + (r9_2 << 3) + 4) = zmm0_1.d
                                            
                                            break
                                        
                                        rdx_6 += 1
                                        k = *(*(arg3 + 0x78) + sx.q(k) * 0xc + 8)
                                    while (k != 0xffffffff)
                                
                                k_1 += 1
                                r9_2 += 1
                            while (r9_2 s< rdi_1)
                            
                            r13_1 = arg_18
            
            rax = var_78_1
            j += 1
            r14_2 = &r14_2[3]
        while (j s< *(rax + r13_1 + 8))
    
    r15_1 = arg2
    r13_1 += 0x10
    i += 1
    arg_18 = r13_1
while (i s< r15_1[1].d)
