// 函数: sub_142018890
// 地址: 0x142018890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)
int64_t* r11 = arg1
int32_t var_84 = rdi.d
int64_t r14 = rdi
int64_t var_48 = rdi
uint128_t zmm1

if (arg2 s> 0)
    int32_t r8_1 = 1
    int64_t* r9_1 = arg1
    int64_t i_5 = ((rdi - 1) u>> 1) + 1
    int64_t i
    
    do
        if (r8_1 s< rdi.d && not(*(*r9_1 + 0x10) f<= *(r9_1[2] + 0x10)))
            uint128_t* rcx_3 = &r11[sx.q(r8_1) * 2]
            uint128_t* rdx_2 = &r11[sx.q(r8_1 - 1) * 2]
            
            if (rdx_2 != rcx_3)
                zmm1 = *rdx_2
                *rdx_2 = *rcx_3
                *rcx_3 = zmm1
        
        r8_1 += 2
        r9_1 = &r9_1[4]
        i = i_5
        i_5 -= 1
    while (i != 1)

int32_t r8_2 = 2
int32_t i_2 = 2

if (rdi.d s<= 2)
    return 

int32_t i_1

do
    int64_t r9_2 = sx.q(r8_2)
    i_1 = r8_2 * 2
    int32_t rdx_3 = 0
    int32_t i_3 = i_1
    int64_t rcx_4 = 0
    int32_t var_90_1 = 0
    int32_t rsi_1 = r8_2 * 2
    int64_t var_70_1 = 0
    int64_t rbp_1 = r9_2 * 2
    int32_t var_80_1 = rsi_1
    int64_t r9_3 = r9_2 << 5
    int64_t* r10_3 = r11
    int64_t var_58_1 = r9_3
    int64_t var_50_1 = rbp_1
    int64_t* var_78_1 = r11
    
    do
        int32_t j_1 = r8_2
        uint64_t i_4 = zx.q(rdi.d - rdx_3)
        int32_t j = r8_2
        
        if (i_1 s<= i_4.d)
            i_4 = zx.q(i_1)
        
        int32_t r15_1 = 0
        int32_t i_6 = i_4.d
        
        if (r8_2 s> 0)
            while (j s< i_4.d)
                int32_t r8_3 = 0
                int32_t k = j - r15_1
                
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
                        int32_t rax_7 = k_4 + r8_3
                        
                        if (*(r10_3[sx.q(j) * 2] + 0x10) f>=
                                *(r10_3[(sx.q(rax_7) + sx.q(r15_1)) * 2] + 0x10))
                            r8_3 = rcx_6 + rax_7
                    while (k s> 0)
                    
                    i_4 = zx.q(i_6)
                
                int32_t r15_2 = r15_1 + r8_3
                
                if (r15_2 s>= j)
                    break
                
                int32_t k_8 = 0
                int32_t k_1 = i_4.d - j
                
                if (k_1 s> 0)
                    int64_t* rdi_3 = &r10_3[sx.q(r15_2) * 2]
                    
                    do
                        int32_t rcx_11 = k_1 & 0x80000001
                        
                        if (rcx_11 s< 0)
                            rcx_11 = ((rcx_11 - 1) | 0xfffffffe) + 1
                        
                        int32_t temp5_1
                        int32_t temp6_1
                        temp5_1:temp6_1 = sx.q(k_1)
                        int32_t k_5 = (temp6_1 - temp5_1) s>> 1
                        k_1 = k_5
                        int32_t rax_16 = k_5 + k_8
                        
                        if (*(*rdi_3 + 0x10) f> *(r10_3[(sx.q(rax_16) + sx.q(j)) * 2] + 0x10))
                            k_8 = rcx_11 + rax_16
                    while (k_1 s> 0)
                    
                    if (k_8 != 0)
                        int32_t k_6 = k_8
                        int32_t k_12 = k_8 - r15_2 + j
                        int32_t k_11 = k_12
                        int32_t k_9
                        int32_t k_2
                        
                        do
                            k_9 = k_6
                            k_2 = mods.dp.d(sx.q(k_11), k_6)
                            k_11 = k_9
                            k_6 = k_2
                        while (k_2 != 0)
                        int32_t rsi_2 = 0
                        uint64_t k_10 = zx.q(divs.dp.d(sx.q(k_12), k_9))
                        
                        if (k_9 s> 0)
                            do
                                int64_t rcx_15 = *rdi_3
                                int32_t rdx_12 = rsi_2
                                int64_t* rbx_1 = rdi_3[1]
                                rdi_3[1] = 0
                                int64_t var_68 = rcx_15
                                *rdi_3 = 0
                                
                                if (k_10.d s> 0)
                                    zmm1 = var_68.o
                                    uint64_t k_7 = k_10
                                    uint64_t k_3
                                    
                                    do
                                        rdx_12 = mods.dp.d(sx.q(rdx_12 + k_8), k_12)
                                        uint128_t* rcx_18 = &r10_3[sx.q(rdx_12 + r15_2) * 2]
                                        
                                        if (rcx_18 != &var_68)
                                            uint128_t zmm0 = *rcx_18
                                            *rcx_18 = zmm1
                                            zmm1 = zmm0
                                        
                                        k_3 = k_7
                                        k_7 -= 1
                                    while (k_3 != 1)
                                    var_68.o = zmm1
                                
                                if (rbx_1 != 0)
                                    rbx_1[1].d -= 1
                                    
                                    if (rbx_1[1].d == 1)
                                        (**rbx_1)(rbx_1)
                                        int32_t temp26_1 = *(rbx_1 + 0xc)
                                        *(rbx_1 + 0xc) -= 1
                                        
                                        if (temp26_1 == 1)
                                            (*(*rbx_1 + 8))(rbx_1, 1)
                                        
                                        r10_3 = var_78_1
                                
                                rsi_2 += 1
                                rdi_3 = &rdi_3[2]
                            while (rsi_2 s< k_9)
                            
                            j = j_1
                    
                    i_4 = zx.q(i_6)
                
                j += k_8
                r15_1 = r15_2 + 1 + k_8
                j_1 = j
                
                if (r15_1 s>= j)
                    break
            
            rcx_4 = var_70_1
            rdx_3 = var_90_1
            r8_2 = i_2
            r9_3 = var_58_1
            i_1 = i_3
            rdi = zx.q(var_84)
            rsi_1 = var_80_1
            rbp_1 = var_50_1
            r14 = var_48
        
        rdx_3 += rsi_1
        rcx_4 += rbp_1
        r10_3 += r9_3
        var_90_1 = rdx_3
        var_70_1 = rcx_4
        var_78_1 = r10_3
    while (rcx_4 s< r14)
    
    r11 = arg1
    r8_2 = i_1
    i_2 = i_1
while (i_1 s< rdi.d)
