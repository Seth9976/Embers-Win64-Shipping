// 函数: sub_140d90ef0
// 地址: 0x140d90ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)
int64_t* r11 = arg3
int64_t var_60 = rbx
int64_t rdi = rbx
int64_t r14 = arg1
uint64_t i_3

if (arg2 s> 0)
    int64_t r9_1 = 0
    int32_t r10_1 = 1
    
    do
        if (r10_1 s< rbx.d)
            int64_t r8 = sx.q(*(r14 + (r9_1 << 2) + 4))
            int64_t r11_2 = r8 << 6
            int64_t rdx = ***r11
            int64_t rcx_1 = sx.q(*(r14 + (r9_1 << 2)))
            int64_t rbx_2 = rcx_1 << 6
            i_3 = *(r11_2 + rdx + 0x30)
            int64_t temp2_1 = *(rbx_2 + rdx + 0x30)
            
            if (i_3 s< temp2_1)
                *(r14 + (r9_1 << 2)) = r8.d
                *(r14 + (r9_1 << 2) + 4) = rcx_1.d
            else if (i_3 == temp2_1 && *(r11_2 + rdx + 0x38) s< *(rbx_2 + rdx + 0x38))
                *(r14 + (r9_1 << 2)) = r8.d
                *(r14 + (r9_1 << 2) + 4) = rcx_1.d
            
            r11 = arg3
            rbx = zx.q(arg2)
        
        r10_1 += 2
        r9_1 += 2
    while (r9_1 s< rdi)

int32_t r8_1 = 2
int32_t i_1 = 2

if (rbx.d s<= 2)
    return 

int32_t i

do
    int64_t rax_1 = sx.q(r8_1)
    i = r8_1 * 2
    int32_t rdx_1 = 0
    int32_t i_2 = i
    int64_t rcx_2 = 0
    int32_t var_78_1 = 0
    int32_t r10_2 = r8_1 * 2
    int64_t var_68_1 = 0
    int64_t rsi_1 = rax_1 * 2
    int32_t var_6c_1 = r10_2
    int64_t rbp_1 = rax_1 << 3
    int64_t var_58_1 = rsi_1
    int64_t var_50_1 = rbp_1
    int64_t r15_1 = r14
    
    do
        int32_t j = r8_1
        i_3 = zx.q(rbx.d - rdx_1)
        
        if (i s<= i_3.d)
            i_3 = zx.q(i)
        
        int32_t r14_1 = 0
        int32_t i_4 = i_3.d
        
        if (r8_1 s> 0)
            while (j s< i_3.d)
                int64_t* rsi_2 = *r11
                int32_t k = j - r14_1
                int64_t j_1 = sx.q(j)
                int32_t r8_2 = 0
                
                if (k s> 0)
                    int64_t r11_4 = sx.q(*(r15_1 + (j_1 << 2))) << 6
                    int64_t rbx_3 = **rsi_2
                    int64_t r10_3 = *(r11_4 + rbx_3 + 0x30)
                    
                    do
                        int32_t rcx_4 = k & 0x80000001
                        
                        if (rcx_4 s< 0)
                            rcx_4 = ((rcx_4 - 1) | 0xfffffffe) + 1
                        
                        int32_t temp3_1
                        int32_t temp4_1
                        temp3_1:temp4_1 = sx.q(k)
                        int32_t k_4 = (temp4_1 - temp3_1) s>> 1
                        k = k_4
                        int32_t rax_7 = k_4 + r8_2
                        int64_t rcx_10 = sx.q(*(r15_1 + ((sx.q(rax_7) + sx.q(r14_1)) << 2))) << 6
                        uint64_t rax_8 = *(rcx_10 + rbx_3 + 0x30)
                        
                        if (r10_3 s< rax_8 || (r10_3 == rax_8
                                && *(r11_4 + rbx_3 + 0x38) s< *(rcx_10 + rbx_3 + 0x38)))
                            rax_8.b = 1
                        else
                            rax_8.b = 0
                        
                        if (rax_8.b == 0)
                            r8_2 = rax_7 + rcx_4
                    while (k s> 0)
                    
                    i_3 = zx.q(i_4)
                
                int32_t r14_2 = r14_1 + r8_2
                
                if (r14_2 s>= j)
                    break
                
                int64_t r12_1 = sx.q(r14_2)
                int32_t k_1 = i_3.d - j
                int32_t k_10 = 0
                
                if (k_1 s> 0)
                    int64_t r11_6 = sx.q(*(r15_1 + (r12_1 << 2))) << 6
                    int64_t rbx_4 = **rsi_2
                    int64_t r10_4 = *(r11_6 + rbx_4 + 0x30)
                    
                    do
                        int32_t rcx_12 = k_1 & 0x80000001
                        
                        if (rcx_12 s< 0)
                            rcx_12 = ((rcx_12 - 1) | 0xfffffffe) + 1
                        
                        int32_t temp5_1
                        int32_t temp6_1
                        temp5_1:temp6_1 = sx.q(k_1)
                        int32_t k_5 = (temp6_1 - temp5_1) s>> 1
                        k_1 = k_5
                        int32_t rax_13 = k_5 + k_10
                        int64_t rcx_18 = sx.q(*(r15_1 + ((sx.q(rax_13) + j_1) << 2))) << 6
                        uint64_t rax_14 = *(rcx_18 + rbx_4 + 0x30)
                        
                        if (rax_14 s< r10_4 || (rax_14 == r10_4
                                && *(rcx_18 + rbx_4 + 0x38) s< *(r11_6 + rbx_4 + 0x38)))
                            rax_14.b = 1
                        else
                            rax_14.b = 0
                        
                        if (rax_14.b != 0)
                            k_10 = rax_13 + rcx_12
                    while (k_1 s> 0)
                    
                    if (k_10 != 0)
                        int32_t k_6 = k_10
                        int32_t k_12 = k_10 - r14_2 + j
                        int32_t k_11 = k_12
                        int32_t k_9
                        int32_t k_2
                        
                        do
                            k_9 = k_6
                            k_2 = mods.dp.d(sx.q(k_11), k_6)
                            k_11 = k_9
                            k_6 = k_2
                        while (k_2 != 0)
                        int32_t r10_5 = 0
                        uint64_t k_8 = zx.q(divs.dp.d(sx.q(k_12), k_9))
                        
                        if (k_9 s> 0)
                            int64_t rdi_2 = 0
                            
                            do
                                int32_t rdx_10 = r10_5
                                int32_t r11_7 = *(r15_1 + ((r12_1 + rdi_2) << 2))
                                
                                if (k_8.d s> 0)
                                    uint64_t k_7 = k_8
                                    uint64_t k_3
                                    
                                    do
                                        rdx_10 = mods.dp.d(sx.q(rdx_10 + k_10), k_12)
                                        int64_t rcx_20 = sx.q(rdx_10 + r14_2)
                                        int32_t rax_22 = *(r15_1 + (rcx_20 << 2))
                                        *(r15_1 + (rcx_20 << 2)) = r11_7
                                        r11_7 = rax_22
                                        k_3 = k_7
                                        k_7 -= 1
                                    while (k_3 != 1)
                                
                                r10_5 += 1
                                rdi_2 += 1
                            while (r10_5 s< k_9)
                    
                    i_3 = zx.q(i_4)
                
                r11 = arg3
                r14_1 = r14_2 + 1 + k_10
                j += k_10
                
                if (r14_1 s>= j)
                    break
            
            rcx_2 = var_68_1
            rdx_1 = var_78_1
            r8_1 = i_1
            i = i_2
            rbx = zx.q(arg2)
            rdi = var_60
            r10_2 = var_6c_1
            rsi_1 = var_58_1
            rbp_1 = var_50_1
        
        r11 = arg3
        rdx_1 += r10_2
        rcx_2 += rsi_1
        var_78_1 = rdx_1
        r15_1 += rbp_1
        var_68_1 = rcx_2
    while (rcx_2 s< rdi)
    
    r14 = arg1
    r8_1 = i
    i_1 = i
while (i s< rbx.d)
