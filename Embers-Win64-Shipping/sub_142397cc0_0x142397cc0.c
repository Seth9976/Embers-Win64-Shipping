// 函数: sub_142397cc0
// 地址: 0x142397cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(arg3)
void* rdi = arg9
int64_t r14 = sx.q(arg2)
void* rsi = *(**(arg1 + 0x150) + (r14 << 3))
void* rax_1 = *(rsi + 0x28)
void* rdx_1 = rsi + 0x10

if (rax_1 != 0)
    rdx_1 = rax_1

void* r14_2 = (r14 << 7) + *(arg1 + 0x160)
void* rcx = r14_2 + 0x30
void* r8 = rdx_1 + r10 * 0x18
void* rax_3 = *(rcx + 0x10)

if (rax_3 != 0)
    rcx = rax_3

void* rax_4 = *(arg9 + 0x68)

if (rax_4 != 0)
    rdi = rax_4

void* rdx_2 = rcx + r10 * 0x10
int64_t rbp

if (arg7 == 0 || data_143a2ffa0 == 0 || *(rdx_2 + 0xc) s< 0)
    rbp.b = 0
else
    rbp.b = 1

int32_t rdx_7

if (arg4 == 0)
    *(arg9 + 0x9c) &= 0xffffe07f
    
    if (rbp.b == 0)
        void* rax_40
        
        if (arg6 == 0)
            rax_40 = rsi + 0x178
        else
            rax_40 = *(rsi + 0x1f8)
        
        *(rdi + 0x10) = rax_40
        *(rdi + 0x40) = *(r8 + 4)
        rdx_7 = *(r8 + 8)
    else
        *(rdi + 0x10) = *(r14_2 + 0x60)
        *(rdi + 0x40) = *(rdx_2 + 8)
        rdx_7 = *(rdx_2 + 0xc)
else
    char rax_6
    
    if (sub_1419803d0((*U"1111")[sx.q(*(*(arg1 + 0x108) + 8))]) == 0)
        rax_6 = 0
    else if ((*((*(*arg8 + 0x40))(arg8) + 0x60))() == 0)
        rax_6 = 0
    else
        rax_6 = 1
    
    void* rcx_4 = *(rsi + 0x1f8)
    
    if (rcx_4 == 0 || *(rcx_4 + 0x88) == 0xffffffff || rax_6 != 0)
        *(arg9 + 0x9c) &= 0xffffe07f
        int32_t rcx_6
        int32_t r8_2
        bool cond:2_1
        
        if (rbp.b == 0)
            *(rdi + 0x40) = 0
            *(rdi + 0x10) = rsi + 0x178
            rcx_6 = *(rsi + 0x1b0)
            
            if (rcx_6 s< 0)
                int32_t rcx_8 = *(rsi + 0x1a0)
                int32_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(rcx_8)
                r8_2 = (temp3_1 - temp2_1) s>> 1
                int32_t temp4_1
                int32_t temp5_1
                temp4_1:temp5_1 = sx.q(rcx_8)
                rcx_6 = ((temp4_1 & 3) + temp5_1) s>> 2
                cond:2_1 = *(rsi + 0x1b4) == 0
            label_142397eaf:
                
                if (cond:2_1)
                    rcx_6 = r8_2
        else
            *(rdi + 0x10) = *(r14_2 + 0x60)
            *(rdi + 0x40) = 0
            void* r9_1 = *(r14_2 + 0x60)
            rcx_6 = *(r9_1 + 0x38)
            
            if (rcx_6 s< 0)
                int32_t temp6_1
                int32_t temp7_1
                temp6_1:temp7_1 = sx.q(*(r9_1 + 0x28))
                r8_2 = (temp7_1 - temp6_1) s>> 1
                int32_t temp8_1
                int32_t temp9_1
                temp8_1:temp9_1 = sx.q(*(r9_1 + 0x28))
                rcx_6 = ((temp8_1 & 3) + temp9_1) s>> 2
                cond:2_1 = *(r9_1 + 0x3c) == 0
                goto label_142397eaf
        rdx_7 = rcx_6 s/ 3
        *(arg9 + 0x9c) |= 0x42
    else
        *(arg9 + 0x9c) &= 0xffffe17f
        *(arg9 + 0x9c) |= 0x100
        *(rdi + 0x40) = 0
        *(rdi + 0x10) = *(rsi + 0x1f8) + 0x80
        void* r9 = *(rsi + 0x1f8)
        int32_t rax_11 = *(r9 + 0xb8)
        
        if (rax_11 s< 0)
            int32_t rcx_5 = *(r9 + 0xa8)
            int32_t temp12_1
            int32_t temp13_1
            temp12_1:temp13_1 = sx.q(rcx_5)
            int32_t temp14_1
            int32_t temp15_1
            temp14_1:temp15_1 = sx.q(rcx_5)
            rax_11 = (temp15_1 + (temp14_1 & 3)) s>> 2
            
            if (*(r9 + 0xbc) == 0)
                rax_11 = (temp13_1 - temp12_1) s>> 1
        
        int32_t temp10_1
        int32_t temp11_1
        temp10_1:temp11_1 = sx.q(rax_11)
        rdx_7 = (temp11_1 - temp10_1) s>> 1

if (arg5 != 0)
    *(rdi + 0x10) = *(rsi + 0x1f8) + 0xc0
    *(arg9 + 0x9c) &= 0xffffe8ff
    *(arg9 + 0x9c) |= 0x880
    *(rdi + 0x40) <<= 2

*(rdi + 0x44) = rdx_7
*(arg9 + 0x78) = arg8
return zx.q(rdx_7)
