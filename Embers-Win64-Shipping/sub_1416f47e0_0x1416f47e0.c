// 函数: sub_1416f47e0
// 地址: 0x1416f47e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(arg2)
int64_t rdi = arg1
int64_t var_48 = r10
int64_t r11 = r10

if (arg2 s> 0)
    int64_t r8_1 = 0
    int32_t r9_1 = 1
    
    do
        if (r9_1 s< r10.d)
            void* rdx = *(rdi + (r8_1 << 3))
            void* rcx = *(rdi + (r8_1 << 3) + 8)
            
            if (*(rcx + 8) s< *(rdx + 8))
                *(rdi + (r8_1 << 3)) = rcx
                *(rdi + (r8_1 << 3) + 8) = rdx
        
        r9_1 += 2
        r8_1 += 2
    while (r8_1 s< r10)

int32_t i_2 = 2
int32_t i_4 = 2

if (r10.d s<= 2)
    return 

int32_t i

do
    int64_t i_5 = sx.q(i_2)
    i = i_2 * 2
    int32_t rcx_1 = 0
    int32_t i_1 = i
    uint64_t rax = 0
    int32_t arg_20 = 0
    int32_t rbx_1 = i_2 * 2
    uint64_t var_58_1 = 0
    int64_t rsi_1 = i_5 * 2
    int32_t var_60_1 = rbx_1
    int64_t r8_2 = i_5 << 4
    int64_t r15_1 = rdi
    int64_t var_50_1 = r8_2
    int64_t var_40_1 = rsi_1
    
    do
        int32_t i_6 = i_2
        int32_t i_3 = r10.d - rcx_1
        
        if (i s<= i_3)
            i_3 = i
        
        int32_t rdi_1 = 0
        
        if (i_2 s> 0)
            while (i_6 s< i_3)
                int32_t r9_2 = 0
                int32_t j = i_6 - rdi_1
                
                while (j s> 0)
                    int32_t rcx_4 = j & 0x80000001
                    
                    if (rcx_4 s< 0)
                        rcx_4 = ((rcx_4 - 1) | 0xfffffffe) + 1
                    
                    int32_t temp2_1
                    int32_t temp3_1
                    temp2_1:temp3_1 = sx.q(j)
                    int32_t j_4 = (temp3_1 - temp2_1) s>> 1
                    j = j_4
                    int32_t rax_5 = j_4 + r9_2
                    
                    if (*(*(r15_1 + (sx.q(i_6) << 3)) + 8)
                            s>= *(*(r15_1 + ((sx.q(rax_5) + sx.q(rdi_1)) << 3)) + 8))
                        r9_2 = rax_5 + rcx_4
                
                int32_t rdi_2 = rdi_1 + r9_2
                
                if (rdi_2 s>= i_6)
                    break
                
                int32_t j_10 = 0
                int32_t j_1 = i_3 - i_6
                
                if (j_1 s> 0)
                    int64_t rax_7 = sx.q(rdi_2)
                    int64_t* r14_1 = r15_1 + (rax_7 << 3)
                    
                    do
                        int32_t rcx_10 = j_1 & 0x80000001
                        
                        if (rcx_10 s< 0)
                            rcx_10 = ((rcx_10 - 1) | 0xfffffffe) + 1
                        
                        int32_t temp4_1
                        int32_t temp5_1
                        temp4_1:temp5_1 = sx.q(j_1)
                        int32_t j_5 = (temp5_1 - temp4_1) s>> 1
                        j_1 = j_5
                        int32_t rax_12 = j_5 + j_10
                        
                        if (*(*(r15_1 + ((sx.q(rax_12) + sx.q(i_6)) << 3)) + 8)
                                s< *(*(r15_1 + (rax_7 << 3)) + 8))
                            j_10 = rcx_10 + rax_12
                    while (j_1 s> 0)
                    
                    if (j_10 != 0)
                        int32_t j_6 = j_10
                        int32_t j_12 = j_10 - rdi_2 + i_6
                        int32_t j_11 = j_12
                        int32_t j_9
                        int32_t j_2
                        
                        do
                            j_9 = j_6
                            j_2 = mods.dp.d(sx.q(j_11), j_6)
                            j_11 = j_9
                            j_6 = j_2
                        while (j_2 != 0)
                        int32_t r9_4 = 0
                        uint64_t j_8 = zx.q(divs.dp.d(sx.q(j_12), j_9))
                        
                        if (j_9 s> 0)
                            do
                                int64_t r11_3 = *r14_1
                                int32_t rdx_9 = r9_4
                                
                                if (j_8.d s> 0)
                                    uint64_t j_7 = j_8
                                    uint64_t j_3
                                    
                                    do
                                        rdx_9 = mods.dp.d(sx.q(rdx_9 + j_10), j_12)
                                        int64_t rcx_15 = sx.q(rdx_9 + rdi_2)
                                        int64_t rax_21 = *(r15_1 + (rcx_15 << 3))
                                        *(r15_1 + (rcx_15 << 3)) = r11_3
                                        r11_3 = rax_21
                                        j_3 = j_7
                                        j_7 -= 1
                                    while (j_3 != 1)
                                
                                r9_4 += 1
                                r14_1 = &r14_1[1]
                            while (r9_4 s< j_9)
                
                i_6 += j_10
                rdi_1 = rdi_2 + 1 + j_10
                
                if (rdi_1 s>= i_6)
                    break
            
            rax = var_58_1
            rcx_1 = arg_20
            i_2 = i_4
            r8_2 = var_50_1
            i = i_1
            r10 = zx.q(arg2)
            r11 = var_48
            rbx_1 = var_60_1
            rsi_1 = var_40_1
        
        rcx_1 += rbx_1
        rax += rsi_1
        r15_1 += r8_2
        arg_20 = rcx_1
        var_58_1 = rax
    while (rax s< r11)
    
    rdi = arg1
    i_2 = i
    i_4 = i_2
while (i s< r10.d)
