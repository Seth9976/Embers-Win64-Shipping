// 函数: sub_142aa6da0
// 地址: 0x142aa6da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    sub_142a4ab40(arg2)
    return arg2

sub_142a48100(arg2, arg1)
int16_t rax_1 = *(arg2 + 8)
int32_t i_2 = 0
int32_t r9_1

if (rax_1 s< 0)
    r9_1 = *(arg2 + 0xc)
else
    r9_1 = sx.d(rax_1) s>> 5

int32_t rbp = sub_142a491f0(arg2, 0x40, 0, r9_1)
int16_t rax_3 = *(arg2 + 8)
int32_t r9_3

if (rax_3 s< 0)
    r9_3 = *(arg2 + 0xc)
else
    r9_3 = sx.d(rax_3) s>> 5

int32_t rax_4 = sub_142a491f0(arg2, 0x2e, 0, r9_3)

if (rax_4 s>= 0 && rax_4 s< rbp)
    rbp = rax_4

if (rbp s< 0)
    int16_t rax_5 = *(arg2 + 8)
    
    if (rax_5 s< 0)
        rbp = *(arg2 + 0xc)
    else
        rbp = sx.d(rax_5) s>> 5

int16_t rax_6 = *(arg2 + 8)
int32_t r9_5

if (rax_6 s< 0)
    r9_5 = *(arg2 + 0xc)
else
    r9_5 = sx.d(rax_6) s>> 5

int32_t rax_7 = sub_142a491f0(arg2, 0x5f, 0, r9_5)
int64_t i = 0

if (rax_7 s< 0)
    rax_7 = rbp

if (rax_7 s> 0)
    do
        int16_t rcx_5 = *(arg2 + 8)
        int32_t rax_9
        
        if (rcx_5 s< 0)
            rax_9 = *(arg2 + 0xc)
        else
            rax_9 = sx.d(rcx_5) s>> 5
        
        int16_t rcx_6
        
        if (i_2 u>= rax_9)
            rcx_6 = -1
        else
            void* rax_10 = arg2 + 0xa
            
            if ((rcx_5.b & 2) == 0)
                rax_10 = *(arg2 + 0x18)
            
            rcx_6 = *(rax_10 + (i << 1))
        
        if (rcx_6 - 0x41 u<= 0x19)
            sub_142a4a800(arg2, i_2, rcx_6 + 0x20)
        
        i_2 += 1
        i += 1
    while (i s< sx.q(rax_7))

for (int64_t i_1 = sx.q(i_2); i_1 s< sx.q(rbp); i_1 += 1)
    int16_t rcx_8 = *(arg2 + 8)
    int32_t rax_13
    
    if (rcx_8 s< 0)
        rax_13 = *(arg2 + 0xc)
    else
        rax_13 = sx.d(rcx_8) s>> 5
    
    int16_t rcx_9
    
    if (i_2 u>= rax_13)
        rcx_9 = -1
    else
        void* rax_14 = arg2 + 0xa
        
        if ((rcx_8.b & 2) == 0)
            rax_14 = *(arg2 + 0x18)
        
        rcx_9 = *(rax_14 + (i_1 << 1))
    
    if (rcx_9 - 0x61 u<= 0x19)
        sub_142a4a800(arg2, i_2, rcx_9 - 0x20)
    
    i_2 += 1

return arg2
