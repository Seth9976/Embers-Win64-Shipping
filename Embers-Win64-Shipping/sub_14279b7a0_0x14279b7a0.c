// 函数: sub_14279b7a0
// 地址: 0x14279b7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = sx.q(arg2)
int64_t* r15 = arg1
int32_t var_b0 = r11.d
int64_t r14 = r11
int64_t var_48 = r11
int32_t i_3
int32_t var_a0
int128_t zmm2
int128_t zmm3

if (arg2 s> 0)
    int32_t rdi_1 = 1
    int64_t* rsi_1 = arg1
    int64_t i_5 = ((r11 - 1) u>> 1) + 1
    int64_t i
    
    do
        if (rdi_1 s< r11.d)
            int64_t* rcx = *rsi_1
            int32_t* rax_2 = (*(*rcx + 0x260))(rcx, &var_a0)
            int64_t* rcx_1 = rsi_1[4]
            int64_t r8_1 = *rcx_1
            r11 = zx.q(r14.d)
            
            if (*(*(r8_1 + 0x260))(rcx_1, &i_3, r8_1) s< *rax_2)
                int128_t* rcx_5 = &r15[sx.q(rdi_1) * 4]
                int128_t* rdx_4 = &r15[sx.q(rdi_1 - 1) * 4]
                
                if (rdx_4 != rcx_5)
                    zmm2 = *rdx_4
                    zmm3 = rdx_4[1]
                    *rdx_4 = *rcx_5
                    rdx_4[1] = rcx_5[1]
                    *rcx_5 = zmm2
                    rcx_5[1] = zmm3
        
        rdi_1 += 2
        rsi_1 = &rsi_1[8]
        i = i_5
        i_5 -= 1
    while (i != 1)

int32_t i_6 = 2
int32_t i_2 = 2

if (r11.d s<= 2)
    return 

int32_t i_1

do
    int64_t i_9 = sx.q(i_6)
    i_1 = i_6 * 2
    int32_t rdx_5 = 0
    i_3 = i_1
    int32_t* rax = nullptr
    int32_t var_ac_1 = 0
    int32_t rbx_2 = i_6 * 2
    int32_t* var_98_1 = nullptr
    int64_t rdi_2 = i_9 * 2
    var_a0 = rbx_2
    int64_t r10_1 = i_9 << 6
    int64_t* r13_1 = r15
    int64_t var_58_1 = r10_1
    int64_t var_50_1 = rdi_2
    
    do
        int32_t i_7 = i_6
        int32_t i_4 = r11.d - rdx_5
        int32_t i_10 = i_6
        
        if (i_1 s<= i_4)
            i_4 = i_1
        
        int32_t r15_1 = 0
        int32_t i_8 = i_4
        
        if (i_6 s> 0)
            while (i_10 s< i_4)
                int64_t i_11 = sx.q(i_10)
                int32_t j = i_10 - r15_1
                int32_t rbp_3 = 0
                
                if (j s> 0)
                    do
                        int32_t rcx_8 = j & 0x80000001
                        
                        if (rcx_8 s< 0)
                            rcx_8 = ((rcx_8 - 1) | 0xfffffffe) + 1
                        
                        int32_t temp3_1
                        int32_t temp4_1
                        temp3_1:temp4_1 = sx.q(j)
                        int32_t j_4 = (temp4_1 - temp3_1) s>> 1
                        j = j_4
                        int32_t rax_6 = j_4 + rbp_3
                        int64_t* rcx_14 = *(((sx.q(rax_6) + sx.q(r15_1)) << 5) + r13_1)
                        void var_70
                        int32_t* rax_8 = (*(*rcx_14 + 0x260))(rcx_14, &var_70)
                        int64_t* rcx_15 = *((i_11 << 5) + r13_1)
                        int64_t r8_2 = *rcx_15
                        void var_6c
                        
                        if (*(*(r8_2 + 0x260))(rcx_15, &var_6c, r8_2) s>= *rax_8)
                            rbp_3 = rax_6 + rcx_8
                    while (j s> 0)
                    
                    i_10 = i_7
                    i_4 = i_8
                
                uint64_t r15_2 = zx.q(r15_1 + rbp_3)
                int32_t var_9c_1 = r15_2.d
                
                if (r15_2.d s>= i_10)
                    break
                
                int32_t j_1 = i_4 - i_7
                int32_t j_8 = 0
                
                if (j_1 s> 0)
                    do
                        int32_t rcx_18 = j_1 & 0x80000001
                        
                        if (rcx_18 s< 0)
                            rcx_18 = ((rcx_18 - 1) | 0xfffffffe) + 1
                        
                        int32_t temp5_1
                        int32_t temp6_1
                        temp5_1:temp6_1 = sx.q(j_1)
                        int32_t j_5 = (temp6_1 - temp5_1) s>> 1
                        j_1 = j_5
                        int32_t rbx_4 = j_5 + j_8
                        int64_t* rcx_21 = *((sx.q(r15_2.d) << 5) + r13_1)
                        void var_68
                        int32_t* rax_14 = (*(*rcx_21 + 0x260))(rcx_21, &var_68)
                        int64_t* rcx_25 = *(((sx.q(rbx_4) + i_11) << 5) + r13_1)
                        int64_t r8_3 = *rcx_25
                        void var_64
                        
                        if (*(*(r8_3 + 0x260))(rcx_25, &var_64, r8_3) s< *rax_14)
                            j_8 = rbx_4 + rcx_18
                    while (j_1 s> 0)
                    
                    r15_2 = sx.q(var_9c_1)
                    
                    if (j_8 != 0)
                        int32_t j_6 = j_8
                        int32_t j_12 = j_8 - r15_2.d + i_7
                        int32_t j_11 = j_12
                        int32_t j_9
                        int32_t j_2
                        
                        do
                            j_9 = j_6
                            j_2 = mods.dp.d(sx.q(j_11), j_6)
                            j_11 = j_9
                            j_6 = j_2
                        while (j_2 != 0)
                        uint64_t j_10 = zx.q(divs.dp.d(sx.q(j_12), j_9))
                        int32_t rdi_5 = 0
                        
                        if (j_9 s> 0)
                            int64_t r14_4 = 0
                            
                            do
                                void* rcx_29 = &r13_1[(r14_4 + r15_2) * 4]
                                int64_t r8_4 = *(rcx_29 + 0x10)
                                int64_t var_90 = *rcx_29
                                int64_t rax_21 = *(rcx_29 + 8)
                                *(rcx_29 + 0x10) = 0
                                int32_t rdx_15 = rdi_5
                                int64_t var_88_1 = rax_21
                                int32_t var_78_1 = *(rcx_29 + 0x18)
                                int32_t var_74_1 = *(rcx_29 + 0x1c)
                                *(rcx_29 + 0x18) = 0
                                
                                if (j_10.d s> 0)
                                    zmm2 = r8_4.o
                                    uint64_t j_7 = j_10
                                    zmm3 = var_90.o
                                    uint64_t j_3
                                    
                                    do
                                        rdx_15 = mods.dp.d(sx.q(rdx_15 + j_8), j_12)
                                        void* rax_29 = &r13_1[sx.q(rdx_15 + r15_2.d) * 4]
                                        
                                        if (rax_29 != &var_90)
                                            int128_t zmm0 = *rax_29
                                            int128_t zmm1 = *(rax_29 + 0x10)
                                            *rax_29 = zmm3
                                            *(rax_29 + 0x10) = zmm2
                                            zmm3 = zmm0
                                            zmm2 = zmm1
                                        
                                        j_3 = j_7
                                        j_7 -= 1
                                    while (j_3 != 1)
                                    int64_t var_80_1
                                    var_80_1.o = zmm2
                                    r8_4 = var_80_1
                                
                                if (r8_4 != 0)
                                    sub_140a74f90(r8_4)
                                
                                rdi_5 += 1
                                r14_4 += 1
                            while (rdi_5 s< j_9)
                    
                    i_4 = i_8
                
                i_10 = i_7 + j_8
                r15_1 = r15_2.d + 1 + j_8
                i_7 = i_10
                
                if (r15_1 s>= i_10)
                    break
            
            rax = var_98_1
            rdx_5 = var_ac_1
            i_6 = i_2
            i_1 = i_3
            r10_1 = var_58_1
            r11 = zx.q(var_b0)
            rbx_2 = var_a0
            rdi_2 = var_50_1
            r14 = var_48
        
        rdx_5 += rbx_2
        rax += rdi_2
        r13_1 += r10_1
        var_ac_1 = rdx_5
        var_98_1 = rax
    while (rax s< r14)
    
    r15 = arg1
    i_6 = i_1
    i_2 = i_1
while (i_1 s< r11.d)
