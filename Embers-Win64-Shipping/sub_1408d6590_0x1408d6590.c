// 函数: sub_1408d6590
// 地址: 0x1408d6590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_18 = arg3
int64_t rsi = sx.q(arg2)
int64_t r12 = arg1
int64_t var_60 = rsi
int64_t r14 = rsi
uint64_t i_4

if (arg2 s> 0)
    int64_t rbx_1 = 0
    int32_t rdi_1 = 1
    
    do
        if (rdi_1 s< rsi.d)
            i_4 = (*arg3)(*(r12 + (rbx_1 << 3) + 8), *(r12 + (rbx_1 << 3)))
            arg3 = arg_18
            
            if (i_4.b != 0)
                int64_t rcx_1 = *(r12 + (rbx_1 << 3))
                *(r12 + (rbx_1 << 3)) = *(r12 + (rbx_1 << 3) + 8)
                *(r12 + (rbx_1 << 3) + 8) = rcx_1
        
        rdi_1 += 2
        rbx_1 += 2
    while (rbx_1 s< rsi)

int32_t i_3 = 2
int32_t i_1 = 2

if (rsi.d s<= 2)
    return 

int32_t i

do
    int64_t i_5 = sx.q(i_3)
    i = i_3 * 2
    int32_t r9_1 = 0
    int32_t i_2 = i
    int64_t rdx_1 = 0
    int32_t var_84_1 = 0
    int32_t rdi_2 = i_3 * 2
    int64_t var_70_1 = 0
    int64_t r15_1 = i_5 * 2
    int32_t var_78_1 = rdi_2
    int64_t rbx_2 = i_5 << 4
    int64_t var_68_1 = rbx_2
    int64_t var_58_1 = r15_1
    
    do
        i_4 = zx.q(i_3)
        int32_t j = rsi.d - r9_1
        int32_t i_6 = i_4.d
        
        if (i s<= j)
            j = i
        
        int32_t rbp_1 = 0
        int32_t j_1 = j
        
        if (i_3 s> 0)
            while (i_4.d s< j)
                int64_t rbx_3 = *arg3
                int32_t k = i_4.d - rbp_1
                int64_t r13_1 = sx.q(i_4.d)
                int32_t r14_1 = 0
                
                if (k s> 0)
                    do
                        int32_t rcx_4 = k & 0x80000001
                        
                        if (rcx_4 s< 0)
                            rcx_4 = ((rcx_4 - 1) | 0xfffffffe) + 1
                        
                        int32_t temp2_1
                        int32_t temp3_1
                        temp2_1:temp3_1 = sx.q(k)
                        int32_t k_4 = (temp3_1 - temp2_1) s>> 1
                        k = k_4
                        int32_t rax_3 = k_4 + r14_1
                        
                        if (rbx_3(*(r12 + (r13_1 << 3)), 
                                *(r12 + ((sx.q(rax_3) + sx.q(rbp_1)) << 3))) == 0)
                            r14_1 = rax_3 + rcx_4
                    while (k s> 0)
                    
                    i_4 = zx.q(i_6)
                    j = j_1
                    arg3 = arg_18
                
                int32_t rbp_2 = rbp_1 + r14_1
                
                if (rbp_2 s>= i_4.d)
                    break
                
                int64_t rbx_4 = *arg3
                int32_t k_1 = j - i_4.d
                int32_t k_9 = 0
                
                if (k_1 s> 0)
                    int64_t* r15_3 = r12 + (sx.q(rbp_2) << 3)
                    
                    do
                        int32_t rcx_11 = k_1 & 0x80000001
                        
                        if (rcx_11 s< 0)
                            rcx_11 = ((rcx_11 - 1) | 0xfffffffe) + 1
                        
                        int32_t temp4_1
                        int32_t temp5_1
                        temp4_1:temp5_1 = sx.q(k_1)
                        int32_t k_5 = (temp5_1 - temp4_1) s>> 1
                        k_1 = k_5
                        int32_t rax_9 = k_5 + k_9
                        
                        if (rbx_4(*(r12 + ((sx.q(rax_9) + r13_1) << 3)), *r15_3) != 0)
                            k_9 = rax_9 + rcx_11
                    while (k_1 s> 0)
                    
                    if (k_9 != 0)
                        int32_t k_6 = k_9
                        int32_t k_12 = k_9 - rbp_2 + i_6
                        int32_t k_11 = k_12
                        int32_t k_8
                        int32_t k_2
                        
                        do
                            k_8 = k_6
                            k_2 = mods.dp.d(sx.q(k_11), k_6)
                            k_11 = k_8
                            k_6 = k_2
                        while (k_2 != 0)
                        int32_t r10 = 0
                        uint64_t k_10 = zx.q(divs.dp.d(sx.q(k_12), k_8))
                        
                        if (k_8 s> 0)
                            do
                                int64_t r9_2 = *r15_3
                                int32_t rdx_10 = r10
                                
                                if (k_10.d s> 0)
                                    uint64_t k_7 = k_10
                                    uint64_t k_3
                                    
                                    do
                                        rdx_10 = mods.dp.d(sx.q(rdx_10 + k_9), k_12)
                                        int64_t rcx_15 = sx.q(rdx_10 + rbp_2)
                                        int64_t rax_20 = *(r12 + (rcx_15 << 3))
                                        *(r12 + (rcx_15 << 3)) = r9_2
                                        r9_2 = rax_20
                                        k_3 = k_7
                                        k_7 -= 1
                                    while (k_3 != 1)
                                
                                r10 += 1
                                r15_3 = &r15_3[1]
                            while (r10 s< k_8)
                    
                    j = j_1
                    arg3 = arg_18
                
                i_4 = zx.q(i_6 + k_9)
                rbp_1 = rbp_2 + 1 + k_9
                i_6 = i_4.d
                
                if (rbp_1 s>= i_4.d)
                    break
            
            rdx_1 = var_70_1
            r9_1 = var_84_1
            i_3 = i_1
            i = i_2
            rbx_2 = var_68_1
            rsi = zx.q(arg2)
            r14 = var_60
            rdi_2 = var_78_1
            r15_1 = var_58_1
        
        r9_1 += rdi_2
        rdx_1 += r15_1
        r12 += rbx_2
        var_84_1 = r9_1
        var_70_1 = rdx_1
    while (rdx_1 s< r14)
    
    r12 = arg1
    i_3 = i
    i_1 = i
while (i s< rsi.d)
