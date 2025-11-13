// 函数: sub_141a2e4b0
// 地址: 0x141a2e4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg2)
int32_t i = 0
int64_t* var_a0 = arg3
int128_t* rdx = arg1
int32_t var_8c = rbp.d
uint128_t zmm2
int128_t zmm3

if (rbp.d s> 0)
    int128_t* rbx_1 = arg1
    
    do
        if (i + 1 s< rbp.d)
            uint64_t rax = (*arg3)(rbx_1 + 0x28, rbx_1)
            arg3 = var_a0
            
            if (rax.b != 0 && rbx_1 != rbx_1 + 0x28)
                zmm3 = *rbx_1
                int128_t zmm4_1 = rbx_1[1]
                zmm2 = zx.o(rbx_1[2].q)
                *rbx_1 = *(rbx_1 + 0x28)
                rbx_1[1] = *(rbx_1 + 0x38)
                rbx_1[2].q = *(rbx_1 + 0x48)
                *(rbx_1 + 0x28) = zmm3
                *(rbx_1 + 0x38) = zmm4_1
                *(rbx_1 + 0x48) = zmm2.q
        
        i += 2
        rbx_1 = &rbx_1[5]
    while (i s< rbp.d)
    
    rdx = arg1

int32_t i_5 = 2
int32_t i_2 = 2

if (rbp.d s<= 2)
    return 

int64_t r14_1 = rbp
int64_t var_68_1 = rbp
int32_t i_1

do
    int32_t r10_1 = 0
    int64_t r9_1 = 0
    int32_t var_98_1 = 0
    i_1 = i_5 * 2
    int64_t var_78_1 = 0
    int32_t rdi_2 = i_5 * 2
    int32_t i_3 = i_1
    int64_t rsi = sx.q(i_5) * 2
    int32_t var_88_1 = rdi_2
    int64_t var_70_1 = rsi
    
    do
        int32_t i_4 = rbp.d - r10_1
        void* r13_1 = rdx + r9_1 * 0x28
        int32_t i_7 = i_5
        int32_t i_8 = i_7
        
        if (i_1 s<= i_4)
            i_4 = i_1
        
        int32_t r15_1 = 0
        int32_t i_6 = i_4
        
        if (i_5 s> 0)
            while (i_7 s< i_4)
                int64_t rbx_2 = *arg3
                int32_t j = i_7 - r15_1
                int32_t rbp_1 = 0
                
                if (j s> 0)
                    do
                        int32_t rcx_4 = j & 0x80000001
                        
                        if (rcx_4 s< 0)
                            rcx_4 = ((rcx_4 - 1) | 0xfffffffe) + 1
                        
                        int32_t temp2_1
                        int32_t temp3_1
                        temp2_1:temp3_1 = sx.q(j)
                        int32_t j_4 = (temp3_1 - temp2_1) s>> 1
                        j = j_4
                        int32_t rax_6 = j_4 + rbp_1
                        
                        if (rbx_2(sx.q(i_7) * 0x28 + r13_1, 
                                (sx.q(rax_6) + sx.q(r15_1)) * 0x28 + r13_1).b == 0)
                            rbp_1 = rax_6 + rcx_4
                    while (j s> 0)
                    
                    i_7 = i_8
                    i_4 = i_6
                    arg3 = var_a0
                
                int32_t r15_2 = r15_1 + rbp_1
                
                if (r15_2 s>= i_7)
                    break
                
                int64_t rbx_3 = *arg3
                int32_t j_1 = i_4 - i_7
                int32_t j_9 = 0
                
                if (j_1 s> 0)
                    void* r14_4 = sx.q(r15_2) * 0x28 + r13_1
                    
                    do
                        int32_t rcx_12 = j_1 & 0x80000001
                        
                        if (rcx_12 s< 0)
                            rcx_12 = ((rcx_12 - 1) | 0xfffffffe) + 1
                        
                        int32_t temp4_1
                        int32_t temp5_1
                        temp4_1:temp5_1 = sx.q(j_1)
                        int32_t j_5 = (temp5_1 - temp4_1) s>> 1
                        j_1 = j_5
                        int32_t rax_12 = j_5 + j_9
                        
                        if (rbx_3((sx.q(rax_12) + sx.q(i_7)) * 0x28 + r13_1, r14_4).b != 0)
                            j_9 = rax_12 + rcx_12
                    while (j_1 s> 0)
                    
                    if (j_9 != 0)
                        int32_t j_6 = j_9
                        int32_t j_12 = j_9 - r15_2 + i_8
                        int32_t j_11 = j_12
                        int32_t j_10
                        int32_t j_2
                        
                        do
                            j_10 = j_6
                            j_2 = mods.dp.d(sx.q(j_11), j_6)
                            j_11 = j_10
                            j_6 = j_2
                        while (j_2 != 0)
                        int32_t r9_2 = 0
                        uint64_t j_8 = zx.q(divs.dp.d(sx.q(j_12), j_10))
                        
                        if (j_10 s> 0)
                            do
                                uint128_t zmm0 = zx.o(*(r14_4 + 0x20))
                                int32_t rdx_11 = r9_2
                                uint128_t zmm4_2 = *r14_4
                                int128_t zmm5_1 = *(r14_4 + 0x10)
                                
                                if (j_8.d s> 0)
                                    uint64_t j_7 = j_8
                                    uint64_t j_3
                                    
                                    do
                                        rdx_11 = mods.dp.d(sx.q(rdx_11 + j_9), j_12)
                                        uint128_t* rcx_21 = sx.q(rdx_11 + r15_2) * 0x28 + r13_1
                                        void var_60
                                        
                                        if (rcx_21 != &var_60)
                                            zmm2 = *rcx_21
                                            zmm3 = rcx_21[1]
                                            uint128_t zmm1 = zx.o(rcx_21[2].q)
                                            *rcx_21 = zmm4_2
                                            rcx_21[1] = zmm5_1
                                            rcx_21[2].q = zmm0.q
                                            zmm4_2 = zmm2
                                            zmm5_1 = zmm3
                                            zmm0 = zmm1
                                        
                                        j_3 = j_7
                                        j_7 -= 1
                                    while (j_3 != 1)
                                
                                r9_2 += 1
                                r14_4 += 0x28
                            while (r9_2 s< j_10)
                    
                    i_7 = i_8
                    i_4 = i_6
                    arg3 = var_a0
                
                i_7 += j_9
                r15_1 = r15_2 + 1 + j_9
                i_8 = i_7
                
                if (r15_1 s>= i_7)
                    break
            
            r9_1 = var_78_1
            r10_1 = var_98_1
            i_5 = i_2
            i_1 = i_3
            rbp = zx.q(var_8c)
            rdi_2 = var_88_1
            rsi = var_70_1
            r14_1 = var_68_1
        
        rdx = arg1
        r10_1 += rdi_2
        r9_1 += rsi
        var_98_1 = r10_1
        var_78_1 = r9_1
    while (r9_1 s< r14_1)
    
    i_2 = i_1
    i_5 = i_1
while (i_1 s< rbp.d)
