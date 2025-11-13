// 函数: sub_141e23570
// 地址: 0x141e23570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm0[0x4]
uint32_t zmm1[0x4]

if (arg3 == 0)
    *arg4 = 0xffffffff
    int32_t i = 0
    *arg5 = 0xffffffff
    
    if (*(arg1 + 0x180) s> 0)
        int64_t* rcx = nullptr
        
        do
            int64_t rdx = *(arg1 + 0x178)
            zmm1 = *arg6
            zmm0 = *(rcx + rdx + 8)
            zmm1[0] f- zmm0[0]
            bool cond:0_1 = zmm1[0] f>= zmm0[0]
            
            if (zmm1[0] f<= zmm0[0])
                goto label_141e235f3
            
            if (*(rcx + rdx) != *arg2)
                cond:0_1 = zmm1[0] f>= zmm0[0]
            label_141e235f3:
                
                if (not(cond:0_1) && *(rcx + rdx) == arg2[1])
                    *arg5 = i
                    zmm0[0] = zmm0[0] f- *arg6
                    arg5[1] = zmm0[0]
                    return 
            else
                *arg4 = i
                zmm0[0] = zmm0[0] f- *arg6
                arg4[1] = zmm0[0]
            
            i += 1
            rcx += 0xc
        while (i s< *(arg1 + 0x180))
    
    return 

int32_t rbx_1 = *(arg2 + 4)
char rax_1 = sub_140b5b8a0(*arg2, 0)
int32_t rcx_1
rcx_1.b = rbx_1 == 0
int32_t rdi = 0
int64_t rax_2
int32_t rdx_1

if ((rcx_1.b & rax_1) != 0)
    *arg4 = 0xffffffff
    rdx_1 = 0
    rax_2 = sx.q(*(arg1 + 0x180))

if ((rcx_1.b & rax_1) != 0 && rax_2.d s> 0)
    int64_t* rax_3 = *(arg1 + 0x178)
    int64_t rcx_2 = 0
    
    while (*rax_3 != arg2[1])
        rdx_1 += 1
        rcx_2 += 1
        rax_3 += 0xc
        
        if (rcx_2 s>= rax_2)
            goto label_141e23692
    
    *arg5 = rdx_1
    *arg6 = sub_141e22c80(arg1, arg4, arg5, arg2[2].d)
    return 

label_141e23692:
int32_t rbx_2 = *(arg2 + 0xc)
int64_t rax = sub_140b5b8a0(arg2[1].d, 0)
int32_t rcx_3
rcx_3.b = rbx_2 == 0
int32_t r8_2
int32_t r8_3

if ((rcx_3.b & rax.b) != 0)
    *arg5 = 0xffffffff
    r8_2 = *(arg1 + 0x180)
    r8_3 = r8_2 - 1

if ((rcx_3.b & rax.b) != 0 && r8_2 - 1 s>= 0)
    int64_t rdx_2 = sx.q(r8_3)
    int64_t* r9_2 = *(arg1 + 0x178) + rdx_2 * 0xc
    
    while (*r9_2 != *arg2)
        r8_3 -= 1
        r9_2 -= 0xc
        int64_t temp3_1 = rdx_2
        rdx_2 -= 1
        
        if (temp3_1 - 1 s< 0)
            goto label_141e236f6
    
    *arg4 = r8_3
    *arg6 = sub_141e22c80(arg1, arg4, arg5, arg2[2].d)
    return 

label_141e236f6:
int128_t* rdx_3 = arg6
int32_t r9_3 = *(arg1 + 0x180)
uint32_t zmm6[0x4] = 0x7f7fffff
int128_t zmm7 = *rdx_3

if (r9_3 s<= 0)
    return 

int32_t rcx_5 = r9_3
int64_t rbp_1 = 0
int32_t r12_1 = 1

while (true)
    int64_t* rbx_3 = *(arg1 + 0x178)
    
    if (*(rbx_3 + rbp_1) == *arg2)
        int32_t r10_2 = r12_1 + rcx_5
        int32_t rcx_6 = r12_1
        float zmm2
        
        if (r12_1 s< r10_2)
            while (true)
                int32_t temp1_1 = mods.dp.d(sx.q(rcx_6), r9_3)
                int64_t r8_4 = sx.q(temp1_1)
                
                if (*(rbx_3 + r8_4 * 0xc) == arg2[1])
                    zmm2 = *(rbx_3 + rbp_1 + 8)
                    zmm0 = *(rbx_3 + r8_4 * 0xc + 8)
                    zmm1 = *(arg1 + 0x90)
                    
                    if (not(zmm0[0] f>= zmm2))
                        zmm0[0] = zmm0[0] f+ zmm1[0]
                    
                    zmm0[0] = zmm0[0] f- zmm2
                    zmm0[0] = zmm0[0] f* arg2[2].d
                    zmm0[0] = zmm0[0] f+ zmm2
                    
                    if (not(zmm0[0] f<= zmm1[0]))
                        zmm0[0] = zmm0[0] f- zmm1[0]
                    
                    zmm0[0] = zmm0[0] f- zmm7.d
                    
                    if (not(_mm_and_ps(zmm0, 0x7fffffff)[0] f>= zmm6[0]))
                        *arg4 = rdi
                        *arg5 = temp1_1
                        rax, zmm0, zmm6 = sub_141e22c80(arg1, arg4, arg5, arg2[2].d)
                        rdx_3 = arg6
                        *rdx_3 = zmm0[0]
                        break
                else
                    rcx_6 += 1
                    
                    if (rcx_6 s< r10_2)
                        continue
                
                rdx_3 = arg6
                break
        
        if (*arg4 == 0xfffffffe)
            zmm1 = *rdx_3
            int32_t r8_8 = rdi + 1
            uint32_t zmm3[0x4] = zx.o(0)
            zmm1[0] = zmm1[0] f- *(rbx_3 + rbp_1 + 8)
            
            if (not(zmm1[0] f<= zmm3[0]))
                int64_t r9_4 = sx.q(*(arg1 + 0x180))
                int64_t rcx_10 = sx.q(r8_8)
                int64_t rdx_10 = rcx_10 * 0xc
                
                while (rcx_10 s< r9_4)
                    r8_8 += 1
                    rcx_10 += 1
                    zmm1[0] = zmm1[0] f- *(rdx_10 + *(arg1 + 0x178) + 8)
                    rdx_10 += 0xc
                    
                    if (not(zmm1[0] f> zmm3[0]))
                        break
                
                rdx_3 = arg6
            
            *arg4 = r8_8 - 1
            *arg5 = 0xffffffff
            rax = sx.q(*arg4)
            
            if (rax.d == 0xffffffff)
                zmm2 = zmm3[0]
            else
                zmm2 = *(*(arg1 + 0x178) + rax * 0xc + 8)
            
            zmm1 = *(arg1 + 0x90)
            
            if (not(zmm2 f< zmm1[0]))
                zmm2 = zmm2 f- zmm1[0]
            
            zmm0 = zmm1
            zmm0[0] = zmm0[0] f- zmm2
            zmm0[0] = zmm0[0] f* arg2[2].d
            zmm0[0] = zmm0[0] f+ zmm2
            
            if (zmm0[0] f>= zmm3[0])
            label_141e23943:
                
                if (not(zmm0[0] f< zmm1[0]))
                    zmm0 = zmm1
            else
                zmm0[0] = zmm0[0] f+ zmm1[0]
                
                if (zmm0[0] f>= zmm3[0])
                    goto label_141e23943
                
                zmm0 = zmm3
            
            zmm2 = zmm2 f- zmm0[0]
            zmm1[0] = zmm1[0] f- zmm0[0]
            arg4[1] = zmm2
            arg5[1] = zmm1[0]
            *rdx_3 = zmm0[0]
            break
    
    r9_3 = *(arg1 + 0x180)
    rdi += 1
    r12_1 += 1
    rbp_1 += 0xc
    rcx_5 = r9_3
    
    if (rdi s>= r9_3)
        break
