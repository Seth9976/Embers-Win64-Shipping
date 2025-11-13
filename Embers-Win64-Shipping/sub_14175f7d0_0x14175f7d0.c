// 函数: sub_14175f7d0
// 地址: 0x14175f7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)
int64_t r14 = arg1
int64_t var_48 = rbx
int64_t rsi = rbx

if (arg2 s> 0)
    int64_t r10_1 = 0
    int32_t r11_1 = 1
    
    do
        if (r11_1 s< rbx.d)
            int32_t* rbx_1 = *(r14 + (r10_1 << 3))
            int32_t* rdi_1 = *(r14 + (r10_1 << 3) + 8)
            
            if (*(*(*(rdi_1 + 8) + 0x90) + sx.q(*rdi_1) * 0xc)
                    s< *(*(*(rbx_1 + 8) + 0x90) + sx.q(*rbx_1) * 0xc))
                *(r14 + (r10_1 << 3)) = rdi_1
                *(r14 + (r10_1 << 3) + 8) = rbx_1
            
            rbx = zx.q(arg2)
        
        r11_1 += 2
        r10_1 += 2
    while (r10_1 s< rsi)

int32_t i_2 = 2
int32_t i_4 = 2

if (rbx.d s<= 2)
    return 

int32_t i

do
    int64_t i_5 = sx.q(i_2)
    i = i_2 * 2
    int32_t rcx_1 = 0
    int32_t i_1 = i
    uint64_t rax = 0
    int32_t arg_20 = 0
    int32_t r10_2 = i_2 * 2
    uint64_t var_58_1 = 0
    int64_t r11_2 = i_5 * 2
    int32_t var_60_1 = r10_2
    int64_t r9_2 = i_5 << 4
    int64_t r15_1 = r14
    int64_t var_50_1 = r9_2
    int64_t var_40_1 = r11_2
    
    do
        int32_t i_6 = i_2
        int32_t i_3 = rbx.d - rcx_1
        
        if (i s<= i_3)
            i_3 = i
        
        int32_t rdi_2 = 0
        
        if (i_2 s> 0)
            while (i_6 s< i_3)
                int32_t r11_3 = 0
                int32_t j = i_6 - rdi_2
                
                if (j s> 0)
                    int32_t* rcx_2 = *(r15_1 + (sx.q(i_6) << 3))
                    
                    do
                        int32_t rcx_5 = j & 0x80000001
                        
                        if (rcx_5 s< 0)
                            rcx_5 = ((rcx_5 - 1) | 0xfffffffe) + 1
                        
                        int32_t temp2_1
                        int32_t temp3_1
                        temp2_1:temp3_1 = sx.q(j)
                        int32_t j_4 = (temp3_1 - temp2_1) s>> 1
                        j = j_4
                        int32_t rax_11 = j_4 + r11_3
                        int32_t* rdx_3 = *(r15_1 + ((sx.q(rax_11) + sx.q(rdi_2)) << 3))
                        
                        if (*(*(*(rcx_2 + 8) + 0x90) + sx.q(*rcx_2) * 0xc)
                                s>= *(*(*(rdx_3 + 8) + 0x90) + sx.q(*rdx_3) * 0xc))
                            r11_3 = rax_11 + rcx_5
                    while (j s> 0)
                
                int32_t rdi_3 = rdi_2 + r11_3
                
                if (rdi_3 s>= i_6)
                    break
                
                int32_t j_10 = 0
                int32_t j_1 = i_3 - i_6
                
                if (j_1 s> 0)
                    int64_t rax_14 = sx.q(rdi_3)
                    int32_t* rcx_11 = *(r15_1 + (rax_14 << 3))
                    int64_t* r14_1 = r15_1 + (rax_14 << 3)
                    
                    do
                        int32_t rcx_14 = j_1 & 0x80000001
                        
                        if (rcx_14 s< 0)
                            rcx_14 = ((rcx_14 - 1) | 0xfffffffe) + 1
                        
                        int32_t temp4_1
                        int32_t temp5_1
                        temp4_1:temp5_1 = sx.q(j_1)
                        int32_t j_5 = (temp5_1 - temp4_1) s>> 1
                        j_1 = j_5
                        int32_t rax_20 = j_5 + j_10
                        int32_t* rdx_6 = *(r15_1 + ((sx.q(rax_20) + sx.q(i_6)) << 3))
                        
                        if (*(*(*(rdx_6 + 8) + 0x90) + sx.q(*rdx_6) * 0xc)
                                s< *(*(*(rcx_11 + 8) + 0x90) + sx.q(*rcx_11) * 0xc))
                            j_10 = rax_20 + rcx_14
                    while (j_1 s> 0)
                    
                    if (j_10 != 0)
                        int32_t j_6 = j_10
                        int32_t j_12 = j_10 - rdi_3 + i_6
                        int32_t j_11 = j_12
                        int32_t j_9
                        int32_t j_2
                        
                        do
                            j_9 = j_6
                            j_2 = mods.dp.d(sx.q(j_11), j_6)
                            j_11 = j_9
                            j_6 = j_2
                        while (j_2 != 0)
                        int32_t r9_5 = 0
                        uint64_t j_8 = zx.q(divs.dp.d(sx.q(j_12), j_9))
                        
                        if (j_9 s> 0)
                            do
                                int64_t r10_5 = *r14_1
                                int32_t rdx_11 = r9_5
                                
                                if (j_8.d s> 0)
                                    uint64_t j_7 = j_8
                                    uint64_t j_3
                                    
                                    do
                                        rdx_11 = mods.dp.d(sx.q(rdx_11 + j_10), j_12)
                                        int64_t rcx_20 = sx.q(rdx_11 + rdi_3)
                                        int64_t rax_30 = *(r15_1 + (rcx_20 << 3))
                                        *(r15_1 + (rcx_20 << 3)) = r10_5
                                        r10_5 = rax_30
                                        j_3 = j_7
                                        j_7 -= 1
                                    while (j_3 != 1)
                                
                                r9_5 += 1
                                r14_1 = &r14_1[1]
                            while (r9_5 s< j_9)
                
                i_6 += j_10
                rdi_2 = rdi_3 + 1 + j_10
                
                if (rdi_2 s>= i_6)
                    break
            
            rax = var_58_1
            rcx_1 = arg_20
            i_2 = i_4
            i = i_1
            r9_2 = var_50_1
            rbx = zx.q(arg2)
            rsi = var_48
            r10_2 = var_60_1
            r11_2 = var_40_1
        
        rcx_1 += r10_2
        rax += r11_2
        r15_1 += r9_2
        arg_20 = rcx_1
        var_58_1 = rax
    while (rax s< rsi)
    
    r14 = arg1
    i_2 = i
    i_4 = i_2
while (i s< rbx.d)
