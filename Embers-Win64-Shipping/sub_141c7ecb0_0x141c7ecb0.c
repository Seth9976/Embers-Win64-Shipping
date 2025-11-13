// 函数: sub_141c7ecb0
// 地址: 0x141c7ecb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = sx.d(*(arg1 + 0x50))
int64_t* r14 = nullptr
uint64_t rbp = zx.q(arg2)
int32_t r8 = ((rbp << 1) + -ffffffffffffffff).d
int32_t i_1 = r8 + r9
int32_t i

if (r8 + r9 s>= 0)
    i = *(arg1 + 0x48)
    
    if (i_1 s< i)
        i = i_1
else
    i = 0

if (i == r9)
    return 

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int64_t zmm1 = float.d(performanceCount) f* data_143d796f8 f+ 16777216.0

if (rbp.b == 0)
    while (i s> 0)
        int32_t r11_1 = 0
        int64_t rax_2 = *(arg1 + 0x40)
        int64_t rcx_2 = sx.q(i) * 6
        int32_t r12_1 = *(rax_2 + (rcx_2 << 3) + 0x1c)
        
        if (r12_1 s> 0)
            int32_t rbp_1 = *(rax_2 + (rcx_2 << 3) - 0x30)
            int32_t rbx_1 = *(rax_2 + (rcx_2 << 3) - 0x2c)
            int32_t r14_1 = *(rax_2 + (rcx_2 << 3) - 0x28)
            int16_t r15_1 = *(rax_2 + (rcx_2 << 3) - 0x24)
            int32_t r9_1 = *(arg1 + 0x90)
            
            while (true)
                int32_t rax_4 = r9_1
                
                if (r9_1 s< 0)
                    rax_4 = *(arg1 + 0x88) + r9_1
                
                int32_t* rcx_4 = sx.q(rax_4) * 0x1c + *(arg1 + 0x80)
                char r10_1
                
                if (rbp_1 s<= 0 || *rcx_4 s< rbp_1)
                    r10_1 = 0
                else
                    r10_1 = 1
                
                char r8_1
                
                if (rbx_1 s<= 0 || rcx_4[2] s< rbx_1)
                    r8_1 = 0
                else
                    r8_1 = 1
                
                char rdx
                
                if (r14_1 s<= 0 || rcx_4[3] s< r14_1)
                    rdx = 0
                else
                    rdx = 1
                
                int64_t rax_5
                
                if (r15_1 s<= 0 || rcx_4[6] s<= sx.d(r15_1))
                    rax_5.b = 0
                else
                    rax_5.b = 1
                
                if (r10_1 != 0 || r8_1 != 0 || rdx != 0 || rax_5.b != 0)
                    r14 = nullptr
                    *(arg1 + 0x58) = zmm1 f- _mm_cvtepi32_pd(zx.q(r11_1)).q
                    goto label_141c7ee2d
                
                r11_1 += 1
                r9_1 -= 1
                
                if (r11_1 s< r12_1)
                    continue
                
                r14 = nullptr
                break
        
        i -= 1
    
label_141c7ee2d:
    rbp = zx.q(arg2)
else
    *(arg1 + 0x58) = zmm1

*(arg1 + 0x50) = i.b
*(arg1 + 0x60) = 0
int32_t* rbx_4 = sx.q(i) * 0x30 + *(arg1 + 0x40)
int64_t rax_6
rax_6.b = i s> 0
*(arg1 + 0x61) = rax_6.b
*(arg1 + 0x1c) = *rbx_4
*(arg1 + 0x20) = rbx_4[1]
*(arg1 + 0x24) = rbx_4[2]
*(arg1 + 0x28) = rbx_4[3].w
*(arg1 + 0x2c) = rbx_4[4]
*(arg1 + 0x30) = rbx_4[5]
*(arg1 + 0x34) = rbx_4[6]
*(arg1 + 0x38) = rbx_4[7]
int32_t zmm2 = *(arg1 + 0xb8)

if (not(zmm2 f<= (zx.o(0)).q.d))
    sub_141c7d910(rbx_4, arg1 + 0x1c, zmm2)

if (rbp.b == 0 || *(arg1 + 0x50) s<= *(arg1 + 0x51))
    return 

if (*(arg1 + 0x3d) != 0)
    void var_58
    int64_t* rax_14 = sub_140596d10(&var_58, &rbx_4[8])
    
    if (*(arg1 + 0xc8) != 0)
        int64_t* rcx_7 = *(arg1 + 0xc0)
        
        if (rcx_7 != 0)
            int64_t rdx_3 = *rcx_7
            
            if ((*(rdx_3 + 0x28))(rcx_7, rdx_3) != 0)
                if (*(arg1 + 0xc8) != 0)
                    r14 = *(arg1 + 0xc0)
                
                void var_48
                (*(*r14 + 0x50))(r14, sub_140596d10(&var_48, rax_14))
    
    int64_t rcx_10 = *rax_14
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)

*(arg1 + 0x51) = *(arg1 + 0x50)
