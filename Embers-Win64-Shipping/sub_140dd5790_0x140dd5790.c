// 函数: sub_140dd5790
// 地址: 0x140dd5790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = sx.q(arg2)
void* rbx = arg1
int32_t var_6c = r11.d
int64_t rdi = r11
int64_t var_48 = r11
uint64_t rax
int64_t zmm1

if (arg2 s> 0)
    int32_t r8_1 = 1
    int32_t* r9_1 = arg1 + 4
    int64_t i_4 = ((r11 - 1) u>> 1) + 1
    int64_t i
    
    do
        if (r8_1 s< r11.d && r9_1[2] s< *r9_1)
            int64_t* rdx = rbx + (sx.q(r8_1) << 3)
            rax = rbx + (sx.q(r8_1 - 1) << 3)
            
            if (rax != rdx)
                zmm1 = *rax
                *rax = *rdx
                *rdx = zmm1
        
        r8_1 += 2
        r9_1 = &r9_1[4]
        i = i_4
        i_4 -= 1
    while (i != 1)

int32_t i_3 = 2
int32_t i_6 = 2

if (r11.d s<= 2)
    return 

int32_t i_1

do
    int64_t i_7 = sx.q(i_3)
    i_1 = i_3 * 2
    rax = 0
    int32_t i_2 = i_1
    int64_t r13_1 = 0
    int32_t var_78_1 = 0
    int32_t r9_2 = i_3 * 2
    void* r14_1 = rbx
    int64_t r10_3 = i_7 * 2
    int32_t var_68_1 = r9_2
    int64_t rdx_1 = i_7 << 4
    int64_t var_58_1 = rdx_1
    int64_t var_50_1 = r10_3
    
    do
        int32_t i_8 = i_3
        int32_t i_5 = r11.d - rax.d
        
        if (i_1 s<= i_5)
            i_5 = i_1
        
        int32_t rbx_1 = 0
        
        if (i_3 s> 0)
            while (i_8 s< i_5)
                int32_t r9_3 = 0
                int32_t j = i_8 - rbx_1
                
                while (j s> 0)
                    int32_t rcx_2 = j & 0x80000001
                    
                    if (rcx_2 s< 0)
                        rcx_2 = ((rcx_2 - 1) | 0xfffffffe) + 1
                    
                    int32_t temp3_1
                    int32_t temp4_1
                    temp3_1:temp4_1 = sx.q(j)
                    int32_t j_4 = (temp4_1 - temp3_1) s>> 1
                    j = j_4
                    int32_t rax_7 = j_4 + r9_3
                    
                    if (*(r14_1 + (sx.q(i_8) << 3) + 4)
                            s>= *(r14_1 + ((sx.q(rax_7) + sx.q(rbx_1)) << 3) + 4))
                        r9_3 = rax_7 + rcx_2
                
                int32_t rbx_2 = rbx_1 + r9_3
                
                if (rbx_2 s>= i_8)
                    break
                
                int32_t j_10 = 0
                int32_t j_1 = i_5 - i_8
                
                if (j_1 s> 0)
                    int64_t rax_8 = sx.q(rbx_2)
                    void* rsi_1 = r14_1 + (rax_8 << 3)
                    
                    do
                        int32_t rcx_8 = j_1 & 0x80000001
                        
                        if (rcx_8 s< 0)
                            rcx_8 = ((rcx_8 - 1) | 0xfffffffe) + 1
                        
                        int32_t temp5_1
                        int32_t temp6_1
                        temp5_1:temp6_1 = sx.q(j_1)
                        int32_t j_5 = (temp6_1 - temp5_1) s>> 1
                        j_1 = j_5
                        int32_t rax_12 = j_5 + j_10
                        
                        if (*(r14_1 + ((sx.q(rax_12) + sx.q(i_8)) << 3) + 4)
                                s< *(r14_1 + (rax_8 << 3) + 4))
                            j_10 = rcx_8 + rax_12
                    while (j_1 s> 0)
                    
                    if (j_10 != 0)
                        int32_t j_6 = j_10
                        int32_t j_12 = j_10 - rbx_2 + i_8
                        int32_t j_11 = j_12
                        int32_t j_9
                        int32_t j_2
                        
                        do
                            j_9 = j_6
                            j_2 = mods.dp.d(sx.q(j_11), j_6)
                            j_11 = j_9
                            j_6 = j_2
                        while (j_2 != 0)
                        int32_t r10_6 = 0
                        uint64_t j_8 = zx.q(divs.dp.d(sx.q(j_12), j_9))
                        
                        if (j_9 s> 0)
                            do
                                int32_t rdx_10 = r10_6
                                int64_t var_60 = *rsi_1
                                
                                if (j_8.d s> 0)
                                    int64_t zmm0 = var_60
                                    uint64_t j_7 = j_8
                                    uint64_t j_3
                                    
                                    do
                                        rdx_10 = mods.dp.d(sx.q(rdx_10 + j_10), j_12)
                                        void* rax_20 = r14_1 + (sx.q(rdx_10 + rbx_2) << 3)
                                        
                                        if (rax_20 != &var_60)
                                            zmm1 = *rax_20
                                            *rax_20 = zmm0
                                            zmm0 = zmm1
                                        
                                        j_3 = j_7
                                        j_7 -= 1
                                    while (j_3 != 1)
                                
                                r10_6 += 1
                                rsi_1 += 8
                            while (r10_6 s< j_9)
                
                i_8 += j_10
                rbx_1 = rbx_2 + 1 + j_10
                
                if (rbx_1 s>= i_8)
                    break
            
            rax = zx.q(var_78_1)
            i_3 = i_6
            rdx_1 = var_58_1
            i_1 = i_2
            r11 = zx.q(var_6c)
            r9_2 = var_68_1
            r10_3 = var_50_1
            rdi = var_48
        
        rax = zx.q(rax.d + r9_2)
        r13_1 += r10_3
        r14_1 += rdx_1
        var_78_1 = rax.d
    while (r13_1 s< rdi)
    
    rbx = arg1
    i_3 = i_1
    i_6 = i_3
while (i_1 s< r11.d)
