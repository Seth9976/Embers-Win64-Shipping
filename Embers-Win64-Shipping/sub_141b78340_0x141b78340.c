// 函数: sub_141b78340
// 地址: 0x141b78340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)
void* r11 = arg1
int32_t var_84 = rbx.d
int64_t rbp = rbx
int64_t var_48 = rbx
uint128_t zmm2
uint128_t zmm3

if (arg2 s> 0)
    int32_t r8_1 = 1
    int32_t* r9_1 = arg1 + 0x10
    int64_t i_5 = ((rbx - 1) u>> 1) + 1
    int64_t i
    
    do
        if (r8_1 s< rbx.d && r9_1[6] s> *r9_1)
            int128_t* rdx = r11 + sx.q(r8_1) * 0x18
            int128_t* rcx_2 = r11 + sx.q(r8_1 - 1) * 0x18
            
            if (rcx_2 != rdx)
                zmm3 = *rcx_2
                zmm2 = zx.o(rcx_2[1].q)
                *rcx_2 = *rdx
                rcx_2[1].q = rdx[1].q
                *rdx = zmm3
                rdx[1].q = zmm2.q
        
        r8_1 += 2
        r9_1 = &r9_1[0xc]
        i = i_5
        i_5 -= 1
    while (i != 1)

int32_t r8_2 = 2
int32_t i_2 = 2

if (rbx.d s<= 2)
    return 

int32_t i_1

do
    int64_t rax_2 = sx.q(r8_2)
    i_1 = r8_2 * 2
    int32_t rdx_1 = 0
    int32_t i_3 = i_1
    int64_t rcx_3 = 0
    int32_t var_90_1 = 0
    int32_t rdi_1 = r8_2 * 2
    int64_t var_78_1 = 0
    int32_t var_80_1 = rdi_1
    int64_t r10_4 = rax_2 * 0x30
    int64_t rsi_1 = rax_2 * 2
    int64_t var_58_1 = r10_4
    void* r12_1 = r11
    int64_t var_50_1 = rsi_1
    
    do
        int32_t j_1 = r8_2
        uint64_t i_4 = zx.q(rbx.d - rdx_1)
        int32_t j = r8_2
        
        if (i_1 s<= i_4.d)
            i_4 = zx.q(i_1)
        
        int32_t r14_1 = 0
        int32_t i_6 = i_4.d
        
        if (r8_2 s> 0)
            while (j s< i_4.d)
                int32_t k = j - r14_1
                int32_t r9_2 = 0
                
                if (k s> 0)
                    do
                        int32_t rcx_6 = k & 0x80000001
                        
                        if (rcx_6 s< 0)
                            rcx_6 = ((rcx_6 - 1) | 0xfffffffe) + 1
                        
                        int32_t temp3_1
                        int32_t temp4_1
                        temp3_1:temp4_1 = sx.q(k)
                        int32_t k_4 = (temp4_1 - temp3_1) s>> 1
                        k = k_4
                        int32_t rax_8 = k_4 + r9_2
                        
                        if (*(r12_1 + sx.q(j) * 0x18 + 0x10)
                                s<= *(r12_1 + (sx.q(rax_8) + sx.q(r14_1)) * 0x18 + 0x10))
                            r9_2 = rax_8 + rcx_6
                    while (k s> 0)
                    
                    j = j_1
                    i_4 = zx.q(i_6)
                
                int32_t r14_2 = r14_1 + r9_2
                
                if (r14_2 s>= j)
                    break
                
                int32_t k_8 = 0
                int32_t k_1 = i_4.d - j
                
                if (k_1 s> 0)
                    int64_t rcx_11 = sx.q(r14_2) * 3
                    
                    do
                        int32_t rcx_13 = k_1 & 0x80000001
                        
                        if (rcx_13 s< 0)
                            rcx_13 = ((rcx_13 - 1) | 0xfffffffe) + 1
                        
                        int32_t temp5_1
                        int32_t temp6_1
                        temp5_1:temp6_1 = sx.q(k_1)
                        int32_t k_5 = (temp6_1 - temp5_1) s>> 1
                        k_1 = k_5
                        int32_t rax_14 = k_5 + k_8
                        
                        if (*(r12_1 + (sx.q(rax_14) + sx.q(j)) * 0x18 + 0x10)
                                s> *(r12_1 + (rcx_11 << 3) + 0x10))
                            k_8 = rcx_13 + rax_14
                    while (k_1 s> 0)
                    
                    if (k_8 != 0)
                        int32_t k_6 = k_8
                        int32_t k_12 = k_8 - r14_2 + j
                        int32_t k_11 = k_12
                        int32_t k_10
                        int32_t k_2
                        
                        do
                            k_10 = k_6
                            k_2 = mods.dp.d(sx.q(k_11), k_6)
                            k_11 = k_10
                            k_6 = k_2
                        while (k_2 != 0)
                        uint64_t k_9 = zx.q(divs.dp.d(sx.q(k_12), k_10))
                        int32_t rsi_2 = 0
                        
                        if (k_10 s> 0)
                            void* rbx_2 = r12_1 + (rcx_11 << 3) + 0xc
                            
                            do
                                int64_t rcx_20 = *(rbx_2 - 0xc)
                                *(rbx_2 - 0xc) = 0
                                int32_t rdx_9 = rsi_2
                                int32_t var_68_1 = *(rbx_2 - 4)
                                int32_t var_64_1 = *rbx_2
                                *(rbx_2 - 4) = 0
                                int32_t rax_22 = *(rbx_2 + 4)
                                int64_t var_70 = rcx_20
                                
                                if (k_9.d s> 0)
                                    uint128_t zmm0 = zx.o(rax_22.q)
                                    uint64_t k_7 = k_9
                                    zmm3 = var_70.o
                                    uint64_t k_3
                                    
                                    do
                                        rdx_9 = mods.dp.d(sx.q(rdx_9 + k_8), k_12)
                                        uint128_t* rcx_19 = r12_1 + sx.q(rdx_9 + r14_2) * 0x18
                                        
                                        if (rcx_19 != &var_70)
                                            uint128_t zmm1 = *rcx_19
                                            zmm2 = zx.o(rcx_19[1].q)
                                            *rcx_19 = zmm3
                                            rcx_19[1].q = zmm0.q
                                            zmm3 = zmm1
                                            zmm0 = zmm2
                                        
                                        k_3 = k_7
                                        k_7 -= 1
                                    while (k_3 != 1)
                                    var_70.o = zmm3
                                    rcx_20 = var_70
                                
                                if (rcx_20 != 0)
                                    sub_140a74f90(rcx_20)
                                
                                rsi_2 += 1
                                rbx_2 += 0x18
                            while (rsi_2 s< k_10)
                            
                            j = j_1
                    
                    i_4 = zx.q(i_6)
                
                j += k_8
                r14_1 = r14_2 + 1 + k_8
                j_1 = j
                
                if (r14_1 s>= j)
                    break
            
            rcx_3 = var_78_1
            rdx_1 = var_90_1
            r8_2 = i_2
            i_1 = i_3
            r10_4 = var_58_1
            rbx = zx.q(var_84)
            rdi_1 = var_80_1
            rsi_1 = var_50_1
            rbp = var_48
        
        rdx_1 += rdi_1
        rcx_3 += rsi_1
        r12_1 += r10_4
        var_90_1 = rdx_1
        var_78_1 = rcx_3
    while (rcx_3 s< rbp)
    
    r11 = arg1
    r8_2 = i_1
    i_2 = i_1
while (i_1 s< rbx.d)
