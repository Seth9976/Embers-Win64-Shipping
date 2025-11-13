// 函数: sub_1418514b0
// 地址: 0x1418514b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = *(arg1 + 0x40)
int64_t rsi = 0

while (true)
    int32_t rax_1 = *(arg1 + 0x40) + 1
    *(arg1 + 0x40) = rax_1
    
    if (rax_1 s> *(arg1 + 0x44))
        sub_1405a4df0(arg1 + 0x38)
        rax_1 = *(arg1 + 0x40)
    
    int64_t r8_1 = *(arg1 + 0x38)
    int64_t rcx_1 = sx.q(rax_1) * 3
    void* rdx_2 = **(arg1 + 0x30)
    
    if (rdx_2 == 0)
        break
    
    int64_t var_40_1 = 0
    *(r8_1 + (rcx_1 << 3) - 0x18) = *(rdx_2 + 8)
    *(r8_1 + (rcx_1 << 3) - 8) = *(rdx_2 + 0x18)
    int64_t rcx_2 = *(arg1 + 0x30)
    *(arg1 + 0x30) = rdx_2
    *(rdx_2 + 8) = 0.o
    *(rdx_2 + 0x18) = 0
    j_sub_140a74f90(rcx_2)

int32_t rdx_4 = *(arg1 + 0x40) - 1
*(arg1 + 0x40) = rdx_4

if (*(arg1 + 0x40) s<= rbp)
    int32_t rax_4
    rax_4.b = 1
    return rax_4

sub_14181c4e0(*(arg1 + 0x38), rdx_4, 0, arg2)
int64_t* r14 = *(arg1 + 0x68)
void* rdi
rdi.b = 0
int64_t r11 = -1
int64_t rdx_5 = 0
int32_t rax_5 = r14[1].d
uint64_t rax_6

if (rax_5 - 1 s>= 0)
    int64_t r9_1 = sx.q(rax_5 - 1)
    int64_t rcx_5 = r9_1 * 0x18
    int64_t temp1_1
    
    do
        if (rdi.b != 0)
            goto label_1418515f8
        
        int64_t r8_2 = *r14
        int64_t r10_1 = *(rcx_5 + r8_2)
        
        if (r11 u> r10_1)
            int64_t rax_7 = *(rcx_5 + r8_2 + 8)
            
            if (r11 u<= rax_7)
                rax_7 = r11
            
            r11 = r10_1
            rsi += rax_7 - r10_1
        
        rdx_5 += *(rcx_5 + r8_2 + 0x10)
        
        if (rsi u>= *(arg1 + 0x58))
            rdi = zx.q(rdi.b)
            
            if (rdx_5 u>= *(arg1 + 0x60))
                rdi = 1
        
        rcx_5 -= 0x18
        temp1_1 = r9_1
        r9_1 -= 1
    while (temp1_1 - 1 s>= 0)
    
    if (rdi.b != 0 || *(arg1 + 0x70) == 0)
        goto label_1418515f8
    
    rax_6.b = 1
else if (*(arg1 + 0x70) != 0)
    rax_6.b = 1
else
label_1418515f8:
    int128_t zmm6
    zmm6.q = float.d(rdx_5)
    
    if (rdx_5 s< 0)
        zmm6.q = zmm6.q f+ 1.8446744073709552e+19
    
    double zmm0_1 = sub_140a48b40()
    int64_t zmm1_1 = float.d(rsi)
    
    if (rsi s< 0)
        zmm1_1 = zmm1_1 f+ 1.8446744073709552e+19
    
    zmm6.q = zmm6.q f/ (zmm0_1 f* zmm1_1)
    
    if (zmm6.q f> *(arg1 + 0x78) || *(arg1 + 0x70) == 0)
        *(arg1 + 0x78) = zmm6.q
        *(arg1 + 0x70) = rdi.b
    
    rax_6.b = 1

return rax_6
