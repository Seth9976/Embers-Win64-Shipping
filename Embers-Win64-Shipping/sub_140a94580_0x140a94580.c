// 函数: sub_140a94580
// 地址: 0x140a94580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)
int64_t* r12 = arg1
int32_t var_9c = rbx.d
int64_t r15 = rbx
int64_t var_50 = rbx
int128_t zmm1

if (arg2 s> 0)
    int32_t rsi_1 = 1
    int64_t* r14_1 = arg1
    int64_t i_5 = ((rbx - 1) u>> 1) + 1
    int64_t i
    
    do
        if (rsi_1 s< rbx.d)
            int64_t* rcx = *r14_1
            int64_t* rdi_1 = r14_1[2]
            int32_t rax_1 = (*(*rcx + 8))(rcx)
            int64_t rdx = *rdi_1
            rbx = zx.q(r15.d)
            
            if ((*(rdx + 8))(rdi_1, rdx) s> rax_1)
                int128_t* rcx_4 = &r12[sx.q(rsi_1) * 2]
                int128_t* rdx_3 = &r12[sx.q(rsi_1 - 1) * 2]
                
                if (rdx_3 != rcx_4)
                    zmm1 = *rdx_3
                    *rdx_3 = *rcx_4
                    *rcx_4 = zmm1
        
        rsi_1 += 2
        r14_1 = &r14_1[4]
        i = i_5
        i_5 -= 1
    while (i != 1)

int32_t i_6 = 2
int32_t i_2 = 2

if (rbx.d s<= 2)
    return 

int32_t i_1

do
    int64_t i_9 = sx.q(i_6)
    i_1 = i_6 * 2
    int32_t r8_1 = 0
    int32_t i_3 = i_1
    int64_t rcx_5 = 0
    int32_t var_98_1 = 0
    int32_t rdi_2 = i_6 * 2
    int64_t var_80_1 = 0
    int64_t rsi_2 = i_9 * 2
    int32_t var_8c_1 = rdi_2
    int64_t r11_1 = i_9 << 5
    int64_t* r13_1 = r12
    int64_t var_60_1 = r11_1
    int64_t var_58_1 = rsi_2
    int64_t* var_88_1 = r12
    
    do
        int32_t i_8 = i_6
        int32_t i_4 = rbx.d - r8_1
        int32_t i_10 = i_8
        
        if (i_1 s<= i_4)
            i_4 = i_1
        
        int32_t r12_1 = 0
        int32_t i_7 = i_4
        int32_t var_a8_1 = 0
        
        if (i_6 s> 0)
            while (i_8 s< i_4)
                int64_t i_11 = sx.q(i_8)
                int32_t j = i_8 - r12_1
                int32_t rbp_3 = 0
                
                if (j s> 0)
                    do
                        int32_t rcx_8 = j & 0x80000001
                        
                        if (rcx_8 s< 0)
                            rcx_8 = ((rcx_8 - 1) | 0xfffffffe) + 1
                        
                        int64_t* rdi_3 = r13_1[i_11 * 2]
                        int32_t temp3_1
                        int32_t temp4_1
                        temp3_1:temp4_1 = sx.q(j)
                        int32_t j_4 = (temp4_1 - temp3_1) s>> 1
                        j = j_4
                        int32_t rax_5 = j_4 + rbp_3
                        int64_t* rcx_14 = var_88_1[(sx.q(rax_5) + sx.q(r12_1)) * 2]
                        int32_t rax_7 = (*(*rcx_14 + 8))(rcx_14)
                        int64_t rdx_6 = *rdi_3
                        
                        if ((*(rdx_6 + 8))(rdi_3, rdx_6) s<= rax_7)
                            rbp_3 = rax_5 + rcx_8
                    while (j s> 0)
                    
                    r12_1 = var_a8_1
                    r13_1 = var_88_1
                    i_8 = i_10
                    i_4 = i_7
                
                int32_t r12_4 = r12_1 + rbp_3
                
                if (r12_4 s>= i_8)
                    break
                
                int32_t j_9 = 0
                int32_t j_1 = i_4 - i_8
                
                if (j_1 s> 0)
                    void* r15_3 = &r13_1[sx.q(r12_4) * 2]
                    
                    do
                        int32_t rcx_17 = j_1 & 0x80000001
                        
                        if (rcx_17 s< 0)
                            rcx_17 = ((rcx_17 - 1) | 0xfffffffe) + 1
                        
                        int64_t* rbx_3 = *r15_3
                        int32_t temp5_1
                        int32_t temp6_1
                        temp5_1:temp6_1 = sx.q(j_1)
                        int32_t j_5 = (temp6_1 - temp5_1) s>> 1
                        j_1 = j_5
                        int32_t rax_14 = j_5 + j_9
                        int64_t* rcx_23 = r13_1[(sx.q(rax_14) + i_11) * 2]
                        int32_t rax_16 = (*(*rcx_23 + 8))(rcx_23)
                        int64_t rdx_8 = *rbx_3
                        
                        if (rax_16 s> (*(rdx_8 + 8))(rbx_3, rdx_8))
                            j_9 = rax_14 + rcx_17
                    while (j_1 s> 0)
                    
                    if (j_9 != 0)
                        int32_t j_6 = j_9
                        int32_t j_13 = j_9 - r12_4 + i_10
                        int32_t j_12 = j_13
                        int32_t j_10
                        int32_t j_2
                        
                        do
                            j_10 = j_6
                            j_2 = mods.dp.d(sx.q(j_12), j_6)
                            j_12 = j_10
                            j_6 = j_2
                        while (j_2 != 0)
                        int32_t rdi_5 = 0
                        int32_t j_8 = divs.dp.d(sx.q(j_13), j_10)
                        int32_t j_11 = j_8
                        
                        if (j_10 s> 0)
                            do
                                int64_t rcx_25 = *r15_3
                                int32_t rdx_13 = rdi_5
                                int64_t* rbx_4 = *(r15_3 + 8)
                                *(r15_3 + 8) = 0
                                int64_t var_78 = rcx_25
                                *r15_3 = 0
                                
                                if (j_8 s> 0)
                                    zmm1 = var_78.o
                                    uint64_t j_7 = zx.q(j_8)
                                    uint64_t j_3
                                    
                                    do
                                        rdx_13 = mods.dp.d(sx.q(rdx_13 + j_9), j_13)
                                        void* rax_26 = &r13_1[sx.q(rdx_13 + r12_4) * 2]
                                        
                                        if (rax_26 != &var_78)
                                            int128_t zmm0 = *rax_26
                                            *rax_26 = zmm1
                                            zmm1 = zmm0
                                        
                                        j_3 = j_7
                                        j_7 -= 1
                                    while (j_3 != 1)
                                    var_78.o = zmm1
                                
                                if (rbx_4 != 0)
                                    rbx_4[1].d -= 1
                                    
                                    if (rbx_4[1].d == 1)
                                        (**rbx_4)(rbx_4)
                                        int32_t temp26_1 = *(rbx_4 + 0xc)
                                        *(rbx_4 + 0xc) -= 1
                                        
                                        if (temp26_1 == 1)
                                            (*(*rbx_4 + 8))(rbx_4, 1)
                                
                                j_8 = j_11
                                rdi_5 += 1
                                r15_3 += 0x10
                            while (rdi_5 s< j_10)
                    
                    i_4 = i_7
                
                i_8 = i_10 + j_9
                r12_1 = r12_4 + 1 + j_9
                i_10 = i_8
                var_a8_1 = r12_1
                
                if (r12_1 s>= i_8)
                    break
            
            rcx_5 = var_80_1
            r8_1 = var_98_1
            i_6 = i_2
            i_1 = i_3
            r11_1 = var_60_1
            rbx = zx.q(var_9c)
            rdi_2 = var_8c_1
            rsi_2 = var_58_1
            r15 = var_50
        
        r8_1 += rdi_2
        rcx_5 += rsi_2
        r13_1 += r11_1
        var_98_1 = r8_1
        var_80_1 = rcx_5
        var_88_1 = r13_1
    while (rcx_5 s< r15)
    
    r12 = arg1
    i_6 = i_1
    i_2 = i_1
while (i_1 s< rbx.d)
