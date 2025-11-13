// 函数: sub_14279bbe0
// 地址: 0x14279bbe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
int64_t rbp = sx.q(arg2)
int32_t var_88 = rbp.d
int64_t* rdi = arg1
int128_t zmm2
int128_t zmm3

if (arg2 s> 0)
    int64_t* rbx_1 = arg1
    
    do
        if (i + 1 s< rbp.d && sub_14279d530(&rbx_1[4], rbx_1).b != 0 && rbx_1 != &rbx_1[4])
            zmm2 = *rbx_1
            zmm3 = *(rbx_1 + 0x10)
            *rbx_1 = *(rbx_1 + 0x20)
            *(rbx_1 + 0x10) = *(rbx_1 + 0x30)
            *(rbx_1 + 0x20) = zmm2
            *(rbx_1 + 0x30) = zmm3
        
        i += 2
        rbx_1 = &rbx_1[8]
    while (i s< rbp.d)
    
    rdi = arg1

int32_t i_5 = 2
int32_t i_2 = 2

if (rbp.d s<= 2)
    return 

int64_t rbx_2 = rbp
int64_t var_68_1 = rbx_2
int32_t i_1

do
    int32_t rdx_1 = 0
    int64_t rcx_1 = 0
    int32_t var_94_1 = 0
    i_1 = i_5 * 2
    int64_t var_78_1 = 0
    int32_t r10_1 = i_5 * 2
    int32_t i_3 = i_1
    int64_t r11_1 = sx.q(i_5) * 2
    int32_t var_84_1 = r10_1
    int64_t var_70_1 = r11_1
    
    do
        int32_t i_4 = rbp.d - rdx_1
        int32_t i_7 = i_5
        
        if (i_1 s<= i_4)
            i_4 = i_1
        
        void* r12_3 = &rdi[rcx_1 * 4]
        int32_t i_6 = i_4
        int32_t r14_1 = 0
        
        if (i_5 s> 0)
            while (i_7 s< i_4)
                int32_t rsi = 0
                int32_t j = i_7 - r14_1
                
                if (j s> 0)
                    do
                        int32_t rcx_3 = j & 0x80000001
                        
                        if (rcx_3 s< 0)
                            rcx_3 = ((rcx_3 - 1) | 0xfffffffe) + 1
                        
                        int32_t temp2_1
                        int32_t temp3_1
                        temp2_1:temp3_1 = sx.q(j)
                        int32_t j_4 = (temp3_1 - temp2_1) s>> 1
                        j = j_4
                        int32_t rax_5 = j_4 + rsi
                        
                        if (sub_14279d530((sx.q(i_7) << 5) + r12_3, 
                                ((sx.q(rax_5) + sx.q(r14_1)) << 5) + r12_3) == 0)
                            rsi = rax_5 + rcx_3
                    while (j s> 0)
                    
                    i_4 = i_6
                
                int32_t r14_2 = r14_1 + rsi
                
                if (r14_2 s>= i_7)
                    break
                
                int32_t j_8 = 0
                int32_t j_1 = i_4 - i_7
                
                if (j_1 s> 0)
                    int64_t* r15_6 = (sx.q(r14_2) << 5) + r12_3
                    
                    do
                        int32_t rcx_8 = j_1 & 0x80000001
                        
                        if (rcx_8 s< 0)
                            rcx_8 = ((rcx_8 - 1) | 0xfffffffe) + 1
                        
                        int32_t temp4_1
                        int32_t temp5_1
                        temp4_1:temp5_1 = sx.q(j_1)
                        int32_t j_5 = (temp5_1 - temp4_1) s>> 1
                        j_1 = j_5
                        int32_t rax_10 = j_5 + j_8
                        
                        if (sub_14279d530(((sx.q(rax_10) + sx.q(i_7)) << 5) + r12_3, r15_6) != 0)
                            j_8 = rax_10 + rcx_8
                    while (j_1 s> 0)
                    
                    if (j_8 != 0)
                        int32_t j_6 = j_8
                        int32_t j_12 = j_8 - r14_2 + i_7
                        int32_t j_11 = j_12
                        int32_t j_9
                        int32_t j_2
                        
                        do
                            j_9 = j_6
                            j_2 = mods.dp.d(sx.q(j_11), j_6)
                            j_11 = j_9
                            j_6 = j_2
                        while (j_2 != 0)
                        int32_t r8 = 0
                        uint64_t j_10 = zx.q(divs.dp.d(sx.q(j_12), j_9))
                        
                        if (j_9 s> 0)
                            do
                                int32_t rdx_13 = r8
                                zmm2 = *r15_6
                                zmm3 = *(r15_6 + 0x10)
                                
                                if (j_10.d s> 0)
                                    uint64_t j_7 = j_10
                                    uint64_t j_3
                                    
                                    do
                                        rdx_13 = mods.dp.d(sx.q(rdx_13 + j_8), j_12)
                                        void* rax_21 = (sx.q(rdx_13 + r14_2) << 5) + r12_3
                                        void var_60
                                        
                                        if (rax_21 != &var_60)
                                            int128_t zmm0_2 = *rax_21
                                            int128_t zmm1 = *(rax_21 + 0x10)
                                            *rax_21 = zmm2
                                            *(rax_21 + 0x10) = zmm3
                                            zmm2 = zmm0_2
                                            zmm3 = zmm1
                                        
                                        j_3 = j_7
                                        j_7 -= 1
                                    while (j_3 != 1)
                                
                                r8 += 1
                                r15_6 = &r15_6[4]
                            while (r8 s< j_9)
                    
                    i_4 = i_6
                
                i_7 += j_8
                r14_1 = r14_2 + 1 + j_8
                
                if (r14_1 s>= i_7)
                    break
            
            rcx_1 = var_78_1
            rdx_1 = var_94_1
            i_5 = i_2
            i_1 = i_3
            rbp = zx.q(var_88)
            r10_1 = var_84_1
            r11_1 = var_70_1
            rbx_2 = var_68_1
            rdi = arg1
        
        rdx_1 += r10_1
        rcx_1 += r11_1
        var_94_1 = rdx_1
        var_78_1 = rcx_1
    while (rcx_1 s< rbx_2)
    
    i_2 = i_1
    i_5 = i_1
while (i_1 s< rbp.d)
