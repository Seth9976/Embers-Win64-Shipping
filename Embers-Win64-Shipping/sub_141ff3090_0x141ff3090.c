// 函数: sub_141ff3090
// 地址: 0x141ff3090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)
int64_t* r11 = arg1
int32_t var_80 = rbx.d
int64_t rbp = rbx
int64_t var_50 = rbx
int128_t zmm1

if (arg2 s> 0)
    int32_t r8_1 = 1
    int64_t* r9_1 = arg1
    int64_t i_6 = ((rbx - 1) u>> 1) + 1
    int64_t i
    
    do
        if (r8_1 s< rbx.d)
            void* rcx = r9_1[2]
            void* rax_1
            
            if (rcx != 0)
                rax_1 = *r9_1
            
            if (rcx == 0 || rax_1 == 0 || *(rcx + 0x10) u> *(rax_1 + 0x10))
                int128_t* rcx_3 = &r11[sx.q(r8_1) * 2]
                int128_t* rdx_2 = &r11[sx.q(r8_1 - 1) * 2]
                
                if (rdx_2 != rcx_3)
                    zmm1 = *rdx_2
                    *rdx_2 = *rcx_3
                    *rcx_3 = zmm1
        
        r8_1 += 2
        r9_1 = &r9_1[4]
        i = i_6
        i_6 -= 1
    while (i != 1)

int32_t i_5 = 2
int32_t i_2 = 2

if (rbx.d s<= 2)
    return 

int32_t i_1

do
    int64_t i_9 = sx.q(i_5)
    i_1 = i_5 * 2
    int32_t rdx_3 = 0
    int32_t i_3 = i_1
    uint64_t rax = 0
    int32_t var_8c_1 = 0
    int32_t rdi_1 = i_5 * 2
    uint64_t var_78_1 = 0
    int64_t rsi_1 = i_9 * 2
    int32_t var_7c_1 = rdi_1
    int64_t r10_3 = i_9 << 5
    int64_t* r13_1 = r11
    int64_t var_60_1 = r10_3
    int64_t var_58_1 = rsi_1
    
    do
        int32_t i_8 = i_5
        int32_t i_4 = rbx.d - rdx_3
        int32_t i_10 = i_5
        
        if (i_1 s<= i_4)
            i_4 = i_1
        
        int32_t r11_1 = 0
        int32_t i_7 = i_4
        int32_t var_98_1 = 0
        
        if (i_5 s> 0)
            while (i_10 s< i_4)
                int64_t i_11 = sx.q(i_10)
                int32_t j = i_10 - r11_1
                int32_t r8_2 = 0
                
                if (j s> 0)
                    void* r10_4 = r13_1[i_11 * 2]
                    
                    do
                        int32_t rcx_6 = j & 0x80000001
                        
                        if (rcx_6 s< 0)
                            rcx_6 = ((rcx_6 - 1) | 0xfffffffe) + 1
                        
                        int32_t temp3_1
                        int32_t temp4_1
                        temp3_1:temp4_1 = sx.q(j)
                        int32_t j_4 = (temp4_1 - temp3_1) s>> 1
                        j = j_4
                        int64_t* rax_7 = zx.q(j_4 + r8_2)
                        int32_t r9_2 = rax_7.d + rcx_6
                        void* rcx_9
                        
                        if (r10_4 != 0)
                            rcx_9 = *(((sx.q(rax_7.d) + sx.q(r11_1)) << 4) + r13_1)
                        
                        if (r10_4 == 0 || rcx_9 == 0)
                            rax_7.b = 1
                        else
                            rax_7.b = *(r10_4 + 0x10) u> *(rcx_9 + 0x10)
                        
                        if (rax_7.b == 0)
                            r8_2 = r9_2
                    while (j s> 0)
                    
                    r11_1 = var_98_1
                    i_4 = i_7
                
                int32_t r11_3 = r11_1 + r8_2
                int32_t var_98_2 = r11_3
                
                if (r11_3 s>= i_10)
                    break
                
                int32_t j_1 = i_4 - i_10
                int32_t j_8 = 0
                
                if (j_1 s> 0)
                    do
                        int32_t rcx_11 = j_1 & 0x80000001
                        
                        if (rcx_11 s< 0)
                            rcx_11 = ((rcx_11 - 1) | 0xfffffffe) + 1
                        
                        int32_t temp5_1
                        int32_t temp6_1
                        temp5_1:temp6_1 = sx.q(j_1)
                        int32_t j_5 = (temp6_1 - temp5_1) s>> 1
                        j_1 = j_5
                        uint64_t rax_14 = zx.q(j_5 + j_8)
                        int32_t j_12 = rax_14.d + rcx_11
                        void* r8_3 = r13_1[(sx.q(rax_14.d) + i_11) * 2]
                        
                        if (r8_3 != 0)
                            rax_14 = r13_1[sx.q(r11_3) * 2]
                        
                        if (r8_3 == 0 || rax_14 == 0)
                            rax_14.b = 1
                        else
                            rax_14.b = *(r8_3 + 0x10) u> *(rax_14 + 0x10)
                        
                        if (rax_14.b != 0)
                            j_8 = j_12
                    while (j_1 s> 0)
                    
                    if (j_8 != 0)
                        int32_t j_6 = j_8
                        int32_t j_13 = j_8 - r11_3 + i_10
                        int32_t j_11 = j_13
                        int32_t j_10
                        int32_t j_2
                        
                        do
                            j_10 = j_6
                            j_2 = mods.dp.d(sx.q(j_11), j_6)
                            j_11 = j_10
                            j_6 = j_2
                        while (j_2 != 0)
                        int32_t rsi_2 = 0
                        uint64_t j_9 = zx.q(divs.dp.d(sx.q(j_13), j_10))
                        
                        if (j_10 s> 0)
                            int64_t r14_1 = 0
                            
                            do
                                void* rdx_15 = &r13_1[(sx.q(r11_3) + r14_1) * 2]
                                int64_t rcx_17 = *rdx_15
                                int64_t* rbx_1 = *(rdx_15 + 8)
                                *(rdx_15 + 8) = 0
                                *rdx_15 = 0
                                int32_t rdx_16 = rsi_2
                                int64_t var_70 = rcx_17
                                
                                if (j_9.d s> 0)
                                    zmm1 = var_70.o
                                    uint64_t j_7 = j_9
                                    uint64_t j_3
                                    
                                    do
                                        rdx_16 = mods.dp.d(sx.q(rdx_16 + j_8), j_13)
                                        void* rcx_20 = &r13_1[sx.q(rdx_16 + r11_3) * 2]
                                        
                                        if (rcx_20 != &var_70)
                                            int128_t zmm0 = *rcx_20
                                            *rcx_20 = zmm1
                                            zmm1 = zmm0
                                        
                                        j_3 = j_7
                                        j_7 -= 1
                                    while (j_3 != 1)
                                    var_70.o = zmm1
                                
                                if (rbx_1 != 0)
                                    rbx_1[1].d -= 1
                                    
                                    if (rbx_1[1].d == 1)
                                        (**rbx_1)(rbx_1)
                                        int32_t temp26_1 = *(rbx_1 + 0xc)
                                        *(rbx_1 + 0xc) -= 1
                                        
                                        if (temp26_1 == 1)
                                            (*(*rbx_1 + 8))(rbx_1, 1)
                                        
                                        r11_3 = var_98_2
                                
                                rsi_2 += 1
                                r14_1 += 1
                            while (rsi_2 s< j_10)
                            
                            i_10 = i_8
                    
                    i_4 = i_7
                
                i_10 += j_8
                r11_1 = r11_3 + 1 + j_8
                i_8 = i_10
                var_98_1 = r11_1
                
                if (r11_1 s>= i_10)
                    break
            
            rax = var_78_1
            rdx_3 = var_8c_1
            i_5 = i_2
            i_1 = i_3
            r10_3 = var_60_1
            rbx = zx.q(var_80)
            rdi_1 = var_7c_1
            rsi_1 = var_58_1
            rbp = var_50
        
        rdx_3 += rdi_1
        rax += rsi_1
        r13_1 += r10_3
        var_8c_1 = rdx_3
        var_78_1 = rax
    while (rax s< rbp)
    
    r11 = arg1
    i_5 = i_1
    i_2 = i_1
while (i_1 s< rbx.d)
