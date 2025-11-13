// 函数: sub_142280460
// 地址: 0x142280460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = (*(arg1 + 0x10) & 1) == 0
void* rdi = arg2
float zmm1 = *(arg2 + 0x64) f+ *(arg1 + 0xc)
*(arg1 + 0xc) = zmm1
int64_t rbp

if (cond:0)
    rbp.b = 1
else
    int32_t zmm2 = *(arg1 + 8)
    
    if (zmm2 f< 0f || not(zmm1 f>= zmm2))
        if (sub_140d3e110(arg1 + 0x14) == 0)
            rbp.b = 1
        else
            rbp.b = 0
    else
        rbp.b = 1

void* rax_2 = sub_140d3c6e0(arg1 + 0x14)

if (rax_2 != 0)
    if (rbp.b == 0)
        void* arg_8 = arg1 + 0x1c
        sub_1422585c0(rax_2 + 0x370, arg1 + 0x30, &arg_8)
        *(arg1 + 0x10) |= 2
    else
        int32_t i_2 = *(rax_2 + 0x378)
        int32_t r9_1 = 0
        int64_t r11_1 = *(rax_2 + 0x370)
        int32_t i = i_2
        int32_t r14_1 = *(arg1 + 0x30)
        
        if (i_2 s> 0)
            do
                int32_t rcx_3 = i & 0x80000001
                
                if (rcx_3 s< 0)
                    rcx_3 = ((rcx_3 - 1) | 0xfffffffe) + 1
                
                int32_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(i)
                int32_t i_1 = (temp1_1 - temp0_1) s>> 1
                i = i_1
                int32_t rax_6 = i_1 + r9_1
                
                if (*(r11_1 + sx.q(rax_6) * 0x10) s< r14_1)
                    r9_1 = rax_6 + rcx_3
            while (i s> 0)
        
        if (r9_1 s< i_2)
            int32_t* rcx_10 = (sx.q(r9_1) << 4) + r11_1
            
            if (r14_1 s>= *rcx_10 && r9_1 != 0xffffffff)
                int32_t rax_8 = i_2 - r9_1
                
                if (rax_8 != 1)
                    memmove(rcx_10, (sx.q(r9_1 + 1) << 4) + r11_1, (rax_8 - 1) << 4)
                    i_2 = *(rax_2 + 0x378)
                
                *(rax_2 + 0x378) = i_2 - 1
                sub_1405a5010(rax_2 + 0x370)
        
        *(arg1 + 0x10) &= 0xfd

uint64_t result = *(arg1 + 0x34)
int32_t rdx_6 = *(arg1 + 0x2c)
int64_t rcx_13 = *(arg1 + 0x24)
*(rdi + 0x60) = rbp.b

if (rbp.b != 0)
    int64_t rbx_1 = sx.q(*(rdi + 0x58))
    int32_t var_30_1 = rdx_6
    int32_t rax_13 = (rbx_1 + 1).d
    *(rdi + 0x58) = rax_13
    
    if (rax_13 s> *(rdi + 0x5c))
        sub_140679970(rdi, rbx_1.d)
    
    void* rax_14 = *(rdi + 0x50)
    int64_t rcx_15 = rbx_1 * 5
    
    if (rax_14 != 0)
        rdi = rax_14
    
    result = zx.q(result:4.d)
    *(rdi + (rcx_15 << 2)) = rcx_13.o
    *(rdi + (rcx_15 << 2) + 0x10) = result.d

return result
