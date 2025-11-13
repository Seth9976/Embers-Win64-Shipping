// 函数: sub_140a5fca0
// 地址: 0x140a5fca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)
int64_t i_5 = 0
int32_t var_5c = rbx.d
void* rdi = arg1
int64_t r11 = rbx
int64_t var_48 = rbx
uint64_t rax

if (arg2 s> 0)
    int32_t r8_1 = 1
    int32_t* r9_1 = arg1 + 8
    i_5 = ((rbx - 1) u>> 1) + 1
    int64_t i
    
    do
        if (r8_1 s< rbx.d)
            int32_t rax_1 = r9_1[0xc]
            int32_t rdx = *r9_1
            int32_t rcx = rax_1 - 1
            
            if (rax_1 == 0)
                rcx = 0
            
            rax = zx.q(rdx - 1)
            
            if (rdx == 0)
                rax = 0
            
            if (rcx s> rax.d)
                int128_t* rdx_3 = sx.q(r8_1) * 0x30 + rdi
                rax = sx.q(r8_1 - 1) * 0x30 + rdi
                
                if (rax != rdx_3)
                    int128_t zmm2 = *rax
                    int128_t zmm3 = *(rax + 0x10)
                    int128_t zmm4 = *(rax + 0x20)
                    *rax = *rdx_3
                    *(rax + 0x10) = rdx_3[1]
                    *(rax + 0x20) = rdx_3[2]
                    *rdx_3 = zmm2
                    rdx_3[1] = zmm3
                    rdx_3[2] = zmm4
        
        r8_1 += 2
        r9_1 = &r9_1[0x18]
        i = i_5
        i_5 -= 1
    while (i != 1)

int32_t i_4 = 2
int32_t i_2 = 2

if (rbx.d s<= 2)
    return 

int32_t i_1

do
    int64_t i_7 = sx.q(i_4)
    i_1 = i_4 * 2
    int64_t i_10 = i_5
    int32_t i_3 = i_1
    void* rbp_1 = rdi
    int32_t i_9 = rbx.d
    int64_t r9_2 = i_7 * 2
    int64_t var_50_1 = r9_2
    int64_t r8_3 = i_7 * 0x60
    int64_t var_58_1 = r8_3
    rax = zx.q(neg.d(i_4) * 2)
    int32_t var_60_1 = rax.d
    
    do
        int32_t i_6 = i_9
        int32_t rdi_1 = i_5.d
        int32_t i_8 = i_4
        
        if (i_1 s<= i_9)
            i_6 = i_1
        
        if (i_4 s> 0)
            while (i_8 s< i_6)
                int64_t i_11 = sx.q(i_8)
                int32_t j = i_8 - rdi_1
                int32_t r9_3 = i_5.d
                
                if (j s> 0)
                    int32_t rcx_2 = *(rbp_1 + i_11 * 0x30 + 8)
                    int32_t r10_2 = rcx_2 - 1
                    
                    if (rcx_2 == 0)
                        r10_2 = 0
                    
                    do
                        int32_t rcx_4 = j & 0x80000001
                        
                        if (rcx_4 s< 0)
                            rcx_4 = ((rcx_4 - 1) | 0xfffffffe) + 1
                        
                        int32_t temp1_1
                        int32_t temp2_1
                        temp1_1:temp2_1 = sx.q(j)
                        int32_t j_2 = (temp2_1 - temp1_1) s>> 1
                        j = j_2
                        int32_t rax_13 = j_2 + r9_3
                        int32_t rcx_9 = *(rbp_1 + (sx.q(rax_13) + sx.q(rdi_1)) * 0x30 + 8)
                        int32_t rax_16 = rcx_9 - 1
                        
                        if (rcx_9 == 0)
                            rax_16 = 0
                        
                        if (r10_2 s<= rax_16)
                            r9_3 = rax_13 + rcx_4
                    while (j s> 0)
                    
                    i_5 = 0
                
                int32_t rdi_2 = rdi_1 + r9_3
                
                if (rdi_2 s>= i_8)
                    break
                
                int32_t rbx_1 = i_5.d
                int32_t j_1 = i_6 - i_8
                
                if (j_1 s> 0)
                    int32_t rax_18 = *(rbp_1 + sx.q(rdi_2) * 0x30 + 8)
                    int32_t r9_4 = rax_18 - 1
                    
                    if (rax_18 == 0)
                        r9_4 = i_5.d
                    
                    do
                        int32_t rcx_13 = j_1 & 0x80000001
                        
                        if (rcx_13 s< 0)
                            rcx_13 = ((rcx_13 - 1) | 0xfffffffe) + 1
                        
                        int32_t temp3_1
                        int32_t temp4_1
                        temp3_1:temp4_1 = sx.q(j_1)
                        int32_t j_3 = (temp4_1 - temp3_1) s>> 1
                        j_1 = j_3
                        int32_t rax_22 = j_3 + rbx_1
                        int32_t rcx_18 = *(rbp_1 + (sx.q(rax_22) + i_11) * 0x30 + 8)
                        int32_t rax_25 = rcx_18 - 1
                        
                        if (rcx_18 == 0)
                            rax_25 = i_5.d
                        
                        if (rax_25 s> r9_4)
                            rbx_1 = rcx_13 + rax_22
                    while (j_1 s> 0)
                
                i_8 += rbx_1
                sub_140a5fa40(rbp_1, rdi_2, i_8, rbx_1)
                i_5 = 0
                rdi_1 = rdi_2 + 1 + rbx_1
                
                if (rdi_1 s>= i_8)
                    break
            
            i_4 = i_2
            i_5 = 0
            i_1 = i_3
            rax = zx.q(var_60_1)
            r8_3 = var_58_1
            r9_2 = var_50_1
            r11 = var_48
        
        i_9 += rax.d
        i_10 += r9_2
        rbp_1 += r8_3
    while (i_10 s< r11)
    
    rbx = zx.q(var_5c)
    i_4 = i_1
    rdi = arg1
    i_2 = i_1
while (i_1 s< rbx.d)
