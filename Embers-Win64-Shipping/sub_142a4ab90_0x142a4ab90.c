// 函数: sub_142a4ab90
// 地址: 0x142a4ab90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 8) & 1) != 0)
    *(arg1 + 8) = 2

int32_t rsi = arg2[1].d
int32_t rdi = 0x1b
void* rcx
int32_t rdx

if (rsi s> 0x1b)
    rdx = rsi + 1
    
    if (rdx s>= 0xffffffff)
        goto label_142a4abe3
    
    rcx = nullptr
else
    rdx = 0x1b
label_142a4abe3:
    
    if (sub_142a487e0(arg1, rdx, 0xffffffff, 1, 0, 0) == 0)
        rcx = nullptr
    else
        int16_t rax_2 = (*(arg1 + 8) & 0xf) | 0x10
        *(arg1 + 8) = rax_2
        
        if ((rax_2.b & 2) == 0)
            rcx = *(arg1 + 0x18)
        else
            rcx = arg1 + 0xa
bool cond:1 = (*(arg1 + 8) & 2) != 0
int32_t rdx_1 = 0x1b
int32_t arg_8 = 0

if (not(cond:1))
    rdx_1 = *(arg1 + 0x10)

int32_t arg_10
sub_142a8d9e0(rcx, rdx_1, &arg_10, *arg2, rsi, 0xfffd, nullptr, &arg_8)
int16_t rdx_2 = *(arg1 + 8)
int32_t rax_3 = arg_10

if ((rdx_2.b & 0x10) != 0 && rax_3 s>= 0xffffffff)
    int16_t rcx_1 = rdx_2 & 2
    
    if (rcx_1 == 0)
        rdi = *(arg1 + 0x10)
    
    int32_t rcx_4
    
    if (rax_3 != 0xffffffff)
        if (rax_3 s> rdi)
            rax_3 = rdi
        
        rcx_4 = rax_3
    else
        void* r9_2 = arg1 + 0xa
        
        if (rcx_1 == 0)
            r9_2 = *(arg1 + 0x18)
        
        void* rcx_2 = r9_2
        void* r8_1 = r9_2 + (sx.q(rdi) << 1)
        
        if (r9_2 u< r8_1)
            while (*rcx_2 != 0)
                rcx_2 += 2
                
                if (rcx_2 u>= r8_1)
                    break
        
        rcx_4 = ((rcx_2 - r9_2) s>> 1).d
    
    if (rcx_4 s> 0x3ff)
        rdx_2 |= 0xffe0
        *(arg1 + 0xc) = rcx_4
    else
        rcx_4.w <<= 5
        rdx_2 = (rdx_2 & 0x1f) | rcx_4.w
    
    *(arg1 + 8) = rdx_2
    *(arg1 + 8) &= 0xffef

if (arg_8 s> 0)
    if ((*(arg1 + 8) & 4) != 0)
        void* rax_5 = *(arg1 + 0x18)
        int32_t rbp_1 = *(rax_5 - 4)
        *(rax_5 - 4) -= 1
        
        if (rbp_1 == 1)
            sub_142a7dcd0(*(arg1 + 0x18) - 4)
    
    *(arg1 + 0x18) = 0
    *(arg1 + 8) = 1
    *(arg1 + 0x10) = 0

return arg1
