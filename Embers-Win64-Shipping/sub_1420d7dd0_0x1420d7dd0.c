// 函数: sub_1420d7dd0
// 地址: 0x1420d7dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg2)
int64_t* r9 = arg3
int64_t var_58 = rsi
int64_t r14 = rsi
int64_t r15 = arg1
int32_t i_3

if (arg2 s> 0)
    int64_t rbx_1 = 0
    int32_t rdi_1 = 1
    
    do
        if (rdi_1 s< rsi.d)
            int64_t rsi_1 = *(r15 + (rbx_1 << 3))
            int64_t rbp_1 = *(r15 + (rbx_1 << 3) + 8)
            i_3 = sub_1420db580(r9, rbp_1, rsi_1)
            r9 = arg3
            
            if (i_3.b != 0)
                *(r15 + (rbx_1 << 3)) = rbp_1
                *(r15 + (rbx_1 << 3) + 8) = rsi_1
            
            rsi = zx.q(arg2)
        
        rdi_1 += 2
        rbx_1 += 2
    while (rbx_1 s< r14)

int32_t i_4 = 2
int32_t i_1 = 2

if (rsi.d s<= 2)
    return 

int32_t i

do
    int64_t i_7 = sx.q(i_4)
    i = i_4 * 2
    int32_t r10_1 = 0
    int32_t i_2 = i
    int64_t rdx_1 = 0
    int32_t var_88_1 = 0
    int32_t rbp_2 = i_4 * 2
    int64_t var_68_1 = 0
    int64_t r12_1 = i_7 * 2
    int32_t var_6c_1 = rbp_2
    int64_t rbx_2 = i_7 << 4
    int64_t r8_1 = r15
    int64_t var_60_1 = rbx_2
    int64_t var_50_1 = r12_1
    int64_t var_90_1 = r15
    
    do
        int32_t i_6 = i_4
        i_3 = rsi.d - r10_1
        int32_t i_8 = i_6
        
        if (i s<= i_3)
            i_3 = i
        
        int32_t r15_1 = 0
        int32_t i_5 = i_3
        int32_t var_98_1 = 0
        
        if (i_4 s> 0)
            while (i_6 s< i_3)
                int64_t* rbx_3 = *r9
                int32_t j = i_6 - r15_1
                int32_t rbp_3 = 0
                
                if (j s> 0)
                    int64_t r12_2 = *(r8_1 + (sx.q(i_6) << 3))
                    
                    do
                        int32_t rcx_3 = j & 0x80000001
                        
                        if (rcx_3 s< 0)
                            rcx_3 = ((rcx_3 - 1) | 0xfffffffe) + 1
                        
                        int32_t temp2_1
                        int32_t temp3_1
                        temp2_1:temp3_1 = sx.q(j)
                        int32_t j_4 = (temp3_1 - temp2_1) s>> 1
                        j = j_4
                        int32_t rax_4 = j_4 + rbp_3
                        int64_t rsi_2 = *(r8_1 + ((sx.q(rax_4) + sx.q(r15_1)) << 3))
                        int32_t rdi_2
                        
                        if (r12_2 == 0)
                            rdi_2 = 0x7fffffff
                        else
                            int32_t var_80
                            sub_140865c40(rbx_3, &var_80, r12_2)
                            int64_t rax_5 = sx.q(var_80)
                            void* rcx_9
                            
                            if (rax_5.d != 0xffffffff)
                                rcx_9 = *rbx_3 + rax_5 * 0x18
                            
                            if (rax_5.d == 0xffffffff || rcx_9 == 0)
                                rdi_2 = 0
                            else
                                rdi_2 = *(rcx_9 + 8)
                        
                        int32_t rax_9
                        
                        if (rsi_2 == 0)
                            rax_9 = 0x7fffffff
                        else
                            int32_t var_7c
                            sub_140865c40(rbx_3, &var_7c, rsi_2)
                            int64_t rax_7 = sx.q(var_7c)
                            void* rcx_11
                            
                            if (rax_7.d != 0xffffffff)
                                rcx_11 = *rbx_3 + rax_7 * 0x18
                            
                            if (rax_7.d == 0xffffffff || rcx_11 == 0)
                                rax_9 = 0
                            else
                                rax_9 = *(rcx_11 + 8)
                        
                        r8_1 = var_90_1
                        
                        if (rdi_2 s>= rax_9)
                            rbp_3 = rax_4 + rcx_3
                    while (j s> 0)
                    
                    r15_1 = var_98_1
                    i_6 = i_8
                    i_3 = i_5
                
                int32_t r15_4 = r15_1 + rbp_3
                
                if (r15_4 s>= i_6)
                    break
                
                int32_t j_9 = 0
                int32_t j_1 = i_3 - i_6
                
                if (j_1 s> 0)
                    int64_t rax_10 = sx.q(r15_4)
                    int64_t rbp_4 = *(r8_1 + (rax_10 << 3))
                    int64_t* r13_2 = r8_1 + (rax_10 << 3)
                    
                    do
                        int32_t rcx_13 = j_1 & 0x80000001
                        
                        if (rcx_13 s< 0)
                            rcx_13 = ((rcx_13 - 1) | 0xfffffffe) + 1
                        
                        int32_t temp4_1
                        int32_t temp5_1
                        temp4_1:temp5_1 = sx.q(j_1)
                        int32_t j_5 = (temp5_1 - temp4_1) s>> 1
                        j_1 = j_5
                        int32_t rax_14 = j_5 + j_9
                        int64_t r8_4 = *(r8_1 + ((sx.q(rax_14) + sx.q(i_6)) << 3))
                        int32_t rdi_3
                        
                        if (r8_4 == 0)
                            rdi_3 = 0x7fffffff
                        else
                            int32_t var_78
                            sub_140865c40(rbx_3, &var_78, r8_4)
                            int64_t rax_15 = sx.q(var_78)
                            void* rcx_19
                            
                            if (rax_15.d != 0xffffffff)
                                rcx_19 = *rbx_3 + rax_15 * 0x18
                            
                            if (rax_15.d == 0xffffffff || rcx_19 == 0)
                                rdi_3 = 0
                            else
                                rdi_3 = *(rcx_19 + 8)
                        
                        int32_t rax_19
                        
                        if (rbp_4 == 0)
                            rax_19 = 0x7fffffff
                        else
                            int32_t var_74
                            sub_140865c40(rbx_3, &var_74, rbp_4)
                            int64_t rax_17 = sx.q(var_74)
                            void* rcx_21
                            
                            if (rax_17.d != 0xffffffff)
                                rcx_21 = *rbx_3 + rax_17 * 0x18
                            
                            if (rax_17.d == 0xffffffff || rcx_21 == 0)
                                rax_19 = 0
                            else
                                rax_19 = *(rcx_21 + 8)
                        
                        r8_1 = var_90_1
                        
                        if (rdi_3 s< rax_19)
                            j_9 = rax_14 + rcx_13
                    while (j_1 s> 0)
                    
                    if (j_9 != 0)
                        int32_t j_6 = j_9
                        int32_t j_12 = j_9 - r15_4 + i_8
                        int32_t j_11 = j_12
                        int32_t j_8
                        int32_t j_2
                        
                        do
                            j_8 = j_6
                            j_2 = mods.dp.d(sx.q(j_11), j_6)
                            j_11 = j_8
                            j_6 = j_2
                        while (j_2 != 0)
                        int32_t r9_1 = 0
                        uint64_t j_10 = zx.q(divs.dp.d(sx.q(j_12), j_8))
                        
                        if (j_8 s> 0)
                            do
                                int64_t r10_2 = *r13_2
                                int32_t rdx_16 = r9_1
                                
                                if (j_10.d s> 0)
                                    uint64_t j_7 = j_10
                                    uint64_t j_3
                                    
                                    do
                                        rdx_16 = mods.dp.d(sx.q(rdx_16 + j_9), j_12)
                                        int64_t rcx_22 = sx.q(rdx_16 + r15_4)
                                        int64_t rax_27 = *(var_90_1 + (rcx_22 << 3))
                                        *(var_90_1 + (rcx_22 << 3)) = r10_2
                                        r10_2 = rax_27
                                        j_3 = j_7
                                        j_7 -= 1
                                    while (j_3 != 1)
                                
                                r9_1 += 1
                                r13_2 = &r13_2[1]
                            while (r9_1 s< j_8)
                    
                    i_6 = i_8
                    i_3 = i_5
                
                r8_1 = var_90_1
                r9 = arg3
                r15_1 = r15_4 + 1 + j_9
                i_6 += j_9
                var_98_1 = r15_1
                i_8 = i_6
                
                if (r15_1 s>= i_6)
                    break
            
            r8_1 = var_90_1
            rdx_1 = var_68_1
            r10_1 = var_88_1
            i_4 = i_1
            rbx_2 = var_60_1
            i = i_2
            rsi = zx.q(arg2)
            r14 = var_58
            rbp_2 = var_6c_1
            r12_1 = var_50_1
        
        r9 = arg3
        r10_1 += rbp_2
        rdx_1 += r12_1
        var_88_1 = r10_1
        r8_1 += rbx_2
        var_68_1 = rdx_1
        var_90_1 = r8_1
    while (rdx_1 s< r14)
    
    r15 = arg1
    i_4 = i
    i_1 = i
while (i s< rsi.d)
