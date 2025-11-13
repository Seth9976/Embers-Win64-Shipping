// 函数: sub_141cf65f0
// 地址: 0x141cf65f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = sx.q(arg2)
int32_t* rbx = arg1
int32_t var_7c = r11.d
int64_t rdi = r11
int64_t var_60 = r11
int128_t zmm1

if (arg2 s> 0)
    int32_t r8_1 = 1
    int32_t* r9_1 = arg1
    int64_t i_4 = ((r11 - 1) u>> 1) + 1
    int64_t i
    
    do
        if (r8_1 s< r11.d && r9_1[4] u> *r9_1)
            int128_t* rcx_2 = &rbx[sx.q(r8_1) * 4]
            int128_t* rdx_2 = &rbx[sx.q(r8_1 - 1) * 4]
            
            if (rdx_2 != rcx_2)
                zmm1 = *rdx_2
                *rdx_2 = *rcx_2
                *rcx_2 = zmm1
        
        r8_1 += 2
        r9_1 = &r9_1[8]
        i = i_4
        i_4 -= 1
    while (i != 1)

int32_t i_3 = 2
int32_t i_6 = 2

if (r11.d s<= 2)
    return 

int32_t i_1

do
    int64_t i_7 = sx.q(i_3)
    i_1 = i_3 * 2
    int32_t rax = 0
    int32_t i_2 = i_1
    int64_t r13_1 = 0
    int32_t var_88_1 = 0
    int32_t r9_2 = i_3 * 2
    int32_t* r14_1 = rbx
    int64_t r10_3 = i_7 * 2
    int32_t var_78_1 = r9_2
    int64_t rdx_3 = i_7 << 5
    int64_t var_70_1 = rdx_3
    int64_t var_68_1 = r10_3
    
    do
        int32_t i_8 = i_3
        int32_t i_5 = r11.d - rax
        
        if (i_1 s<= i_5)
            i_5 = i_1
        
        int32_t rbx_1 = 0
        
        if (i_3 s> 0)
            while (i_8 s< i_5)
                int32_t r9_3 = 0
                int32_t j = i_8 - rbx_1
                
                while (j s> 0)
                    int32_t rcx_4 = j & 0x80000001
                    
                    if (rcx_4 s< 0)
                        rcx_4 = ((rcx_4 - 1) | 0xfffffffe) + 1
                    
                    int32_t temp3_1
                    int32_t temp4_1
                    temp3_1:temp4_1 = sx.q(j)
                    int32_t j_4 = (temp4_1 - temp3_1) s>> 1
                    j = j_4
                    int32_t rax_6 = j_4 + r9_3
                    
                    if (r14_1[sx.q(i_8) * 4] u<= r14_1[(sx.q(rax_6) + sx.q(rbx_1)) * 4])
                        r9_3 = rax_6 + rcx_4
                
                int32_t rbx_2 = rbx_1 + r9_3
                
                if (rbx_2 s>= i_8)
                    break
                
                int32_t j_10 = 0
                int32_t j_1 = i_5 - i_8
                
                if (j_1 s> 0)
                    void* rsi_3 = &r14_1[sx.q(rbx_2) * 4]
                    
                    do
                        int32_t rcx_11 = j_1 & 0x80000001
                        
                        if (rcx_11 s< 0)
                            rcx_11 = ((rcx_11 - 1) | 0xfffffffe) + 1
                        
                        int32_t temp5_1
                        int32_t temp6_1
                        temp5_1:temp6_1 = sx.q(j_1)
                        int32_t j_5 = (temp6_1 - temp5_1) s>> 1
                        j_1 = j_5
                        int32_t rax_10 = j_5 + j_10
                        
                        if (r14_1[(sx.q(rax_10) + sx.q(i_8)) * 4] u> *rsi_3)
                            j_10 = rcx_11 + rax_10
                    while (j_1 s> 0)
                    
                    if (j_10 != 0)
                        int32_t j_6 = j_10
                        int32_t j_12 = j_10 - rbx_2 + i_8
                        int32_t j_11 = j_12
                        int32_t j_9
                        int32_t j_2
                        
                        do
                            j_9 = j_6
                            j_2 = mods.dp.d(sx.q(j_11), j_6)
                            j_11 = j_9
                            j_6 = j_2
                        while (j_2 != 0)
                        int32_t r9_5 = 0
                        uint64_t j_8 = zx.q(divs.dp.d(sx.q(j_12), j_9))
                        
                        if (j_9 s> 0)
                            do
                                int32_t rdx_12 = r9_5
                                zmm1 = *rsi_3
                                
                                if (j_8.d s> 0)
                                    uint64_t j_7 = j_8
                                    uint64_t j_3
                                    
                                    do
                                        rdx_12 = mods.dp.d(sx.q(rdx_12 + j_10), j_12)
                                        void* rcx_19 = &r14_1[sx.q(rdx_12 + rbx_2) * 4]
                                        void var_50
                                        
                                        if (rcx_19 != &var_50)
                                            int128_t zmm0 = *rcx_19
                                            *rcx_19 = zmm1
                                            zmm1 = zmm0
                                        
                                        j_3 = j_7
                                        j_7 -= 1
                                    while (j_3 != 1)
                                
                                r9_5 += 1
                                rsi_3 += 0x10
                            while (r9_5 s< j_9)
                
                i_8 += j_10
                rbx_1 = rbx_2 + 1 + j_10
                
                if (rbx_1 s>= i_8)
                    break
            
            rax = var_88_1
            i_3 = i_6
            rdx_3 = var_70_1
            i_1 = i_2
            r11 = zx.q(var_7c)
            r9_2 = var_78_1
            r10_3 = var_68_1
            rdi = var_60
        
        rax += r9_2
        r13_1 += r10_3
        r14_1 += rdx_3
        var_88_1 = rax
    while (r13_1 s< rdi)
    
    rbx = arg1
    i_3 = i_1
    i_6 = i_3
while (i_1 s< r11.d)
