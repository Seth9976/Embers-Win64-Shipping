// 函数: sub_14060b220
// 地址: 0x14060b220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)
void* r11 = arg1
int32_t var_7c = rbx.d
int64_t rdi = rbx
int64_t var_60 = rbx
int128_t zmm1

if (arg2 s> 0)
    int32_t r8_1 = 1
    int128_t* r9_1 = arg1
    int64_t i_4 = ((rbx - 1) u>> 1) + 1
    int64_t i
    
    do
        if (r8_1 s< rbx.d && not((*r9_1).d f<= r9_1[1].d))
            int128_t* rdx_2 = (sx.q(r8_1) << 4) + r11
            int128_t* rcx_1 = r11 - 0x10 + (sx.q(r8_1) << 4)
            
            if (rcx_1 != rdx_2)
                zmm1 = *rcx_1
                *rcx_1 = *rdx_2
                *rdx_2 = zmm1
        
        r8_1 += 2
        r9_1 = &r9_1[2]
        i = i_4
        i_4 -= 1
    while (i != 1)

int32_t i_3 = 2
int32_t i_6 = 2

if (rbx.d s<= 2)
    return 

int32_t i_1

do
    int64_t i_7 = sx.q(i_3)
    i_1 = i_3 * 2
    int64_t rax = 0
    int32_t i_2 = i_1
    int64_t r13_1 = 0
    int32_t var_88_1 = 0
    int32_t r9_2 = i_3 * 2
    void* rbp_1 = r11
    int64_t r10_3 = i_7 * 2
    int32_t var_78_1 = r9_2
    int64_t rdx_3 = i_7 << 5
    int64_t var_70_1 = rdx_3
    int64_t var_68_1 = r10_3
    
    do
        int32_t i_8 = i_3
        int32_t i_5 = rbx.d - rax.d
        
        if (i_1 s<= i_5)
            i_5 = i_1
        
        int32_t r11_1 = 0
        
        if (i_3 s> 0)
            while (i_8 s< i_5)
                int32_t r9_3 = 0
                uint32_t j = i_8 - r11_1
                int128_t zmm0
                
                if (j s> 0)
                    zmm0 = *(rbp_1 + sx.q(i_8) * 0x10)
                    
                    do
                        uint32_t j_5 = j
                        j u>>= 1
                        int32_t rax_4 = j + r9_3
                        int32_t rdx_5 = (j_5 & 1) + rax_4
                        float temp3_1 = *(rbp_1 + (sx.q(rax_4) + sx.q(r11_1)) * 0x10)
                        zmm0.d f- temp3_1
                        rax_4.b = zmm0.d f< temp3_1
                        
                        if (rax_4.b == 0)
                            r9_3 = rdx_5
                    while (j != 0)
                
                int32_t r11_2 = r11_1 + r9_3
                
                if (r11_2 s>= i_8)
                    break
                
                int32_t j_9 = 0
                uint32_t j_1 = i_5 - i_8
                
                if (j_1 s> 0)
                    void* rdi_3 = (sx.q(r11_2) << 4) + rbp_1
                    
                    do
                        uint32_t j_6 = j_1
                        j_1 u>>= 1
                        int32_t rax_5 = j_1 + j_9
                        int32_t j_12 = (j_6 & 1) + rax_5
                        rax_5.b = (*rdi_3).d f> *(rbp_1 + (sx.q(rax_5) + sx.q(i_8)) * 0x10)
                        
                        if (rax_5.b != 0)
                            j_9 = j_12
                    while (j_1 != 0)
                    
                    if (j_9 != 0)
                        int32_t j_4 = j_9
                        int32_t j_13 = j_9 - r11_2 + i_8
                        int32_t j_11 = j_13
                        int32_t j_8
                        int32_t j_2
                        
                        do
                            j_8 = j_4
                            j_2 = mods.dp.d(sx.q(j_11), j_4)
                            j_11 = j_8
                            j_4 = j_2
                        while (j_2 != 0)
                        int32_t r10_6 = 0
                        uint64_t j_10 = zx.q(divs.dp.d(sx.q(j_13), j_8))
                        
                        if (j_8 s> 0)
                            do
                                int32_t rdx_11 = r10_6
                                zmm1 = *rdi_3
                                
                                if (j_10.d s> 0)
                                    uint64_t j_7 = j_10
                                    uint64_t j_3
                                    
                                    do
                                        rdx_11 = mods.dp.d(sx.q(rdx_11 + j_9), j_13)
                                        void* rax_15 = (sx.q(rdx_11 + r11_2) << 4) + rbp_1
                                        void var_48
                                        
                                        if (rax_15 != &var_48)
                                            zmm0 = *rax_15
                                            *rax_15 = zmm1
                                            zmm1 = zmm0
                                        
                                        j_3 = j_7
                                        j_7 -= 1
                                    while (j_3 != 1)
                                
                                r10_6 += 1
                                rdi_3 += 0x10
                            while (r10_6 s< j_8)
                
                i_8 += j_9
                r11_1 = r11_2 + 1 + j_9
                
                if (r11_1 s>= i_8)
                    break
            
            rax = zx.q(var_88_1)
            i_3 = i_6
            rdx_3 = var_70_1
            i_1 = i_2
            rbx = zx.q(var_7c)
            r9_2 = var_78_1
            r10_3 = var_68_1
            rdi = var_60
        
        rax = zx.q(rax.d + r9_2)
        r13_1 += r10_3
        rbp_1 += rdx_3
        var_88_1 = rax.d
    while (r13_1 s< rdi)
    
    r11 = arg1
    i_3 = i_1
    i_6 = i_3
while (i_1 s< rbx.d)
