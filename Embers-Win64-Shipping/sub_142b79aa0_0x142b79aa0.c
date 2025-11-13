// 函数: sub_142b79aa0
// 地址: 0x142b79aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg2 s> 0)
    return 0xffffffff

int64_t rbp = sx.q(sub_142b7c9e0(arg1, *(arg1 + 0x48)))
*(arg1 + 0x48) = rbp.d
void* rdi_1 = *(arg1 + 0x10)
int16_t rcx = *(rdi_1 + 8)
int32_t rcx_2

if (rcx s< 0)
    rcx_2 = *(rdi_1 + 0xc)
else
    rcx_2 = sx.d(rcx) s>> 5

if (rbp.d s>= rcx_2)
    return 0xffffffff

int16_t rcx_3 = *(rdi_1 + 8)
int32_t rbx = rbp.d
int32_t rax_4

if (rcx_3 s< 0)
    rax_4 = *(rdi_1 + 0xc)
else
    rax_4 = sx.d(rcx_3) s>> 5

int16_t rdx_1

if (rbx u>= rax_4)
    rdx_1 = -1
else
    void* rcx_4 = rdi_1 + 0xa
    
    if ((rcx_3.b & 2) == 0)
        rcx_4 = *(rdi_1 + 0x18)
    
    rdx_1 = *(rcx_4 + (rbp << 1))

int32_t rbx_1 = rbx + 1
uint32_t rcx_5 = zx.d(rdx_1)
int32_t rsi_1

if (rcx_5 == 0x2c)
    rsi_1 = 2
else if (rcx_5 == 0x3b)
    rsi_1 = 1
else if (rcx_5 == 0x3c)
    int16_t rax_10 = *(rdi_1 + 8)
    int32_t rax_12
    
    if (rax_10 s< 0)
        rax_12 = *(rdi_1 + 0xc)
    else
        rax_12 = sx.d(rax_10) s>> 5
    
    int16_t rax_13
    
    if (rbx_1 s< rax_12)
        rax_13 = sub_142a4a1a0(rdi_1, rbx_1)
    
    if (rbx_1 s>= rax_12 || rax_13 != 0x3c)
        rsi_1 = 0
    else
        int16_t rax_14 = *(rdi_1 + 8)
        rbx_1 += 1
        int32_t rax_16
        
        if (rax_14 s< 0)
            rax_16 = *(rdi_1 + 0xc)
        else
            rax_16 = sx.d(rax_14) s>> 5
        
        int16_t rax_17
        
        if (rbx_1 s< rax_16)
            rax_17 = sub_142a4a1a0(rdi_1, rbx_1)
        
        if (rbx_1 s>= rax_16 || rax_17 != 0x3c)
            rsi_1 = 1
        else
            int16_t rax_18 = *(rdi_1 + 8)
            rbx_1 += 1
            int32_t rax_20
            
            if (rax_18 s< 0)
                rax_20 = *(rdi_1 + 0xc)
            else
                rax_20 = sx.d(rax_18) s>> 5
            
            int16_t rax_21
            
            if (rbx_1 s< rax_20)
                rax_21 = sub_142a4a1a0(rdi_1, rbx_1)
            
            if (rbx_1 s>= rax_20 || rax_21 != 0x3c)
                rsi_1 = 2
            else
                rbx_1 += 1
                rsi_1 = 3
    
    int16_t rax_22 = *(rdi_1 + 8)
    int32_t rax_24
    
    if (rax_22 s< 0)
        rax_24 = *(rdi_1 + 0xc)
    else
        rax_24 = sx.d(rax_22) s>> 5
    
    if (rbx_1 s< rax_24 && sub_142a4a1a0(rdi_1, rbx_1) == 0x2a)
        rbx_1 += 1
        rsi_1 |= 0x10
else
    if (rcx_5 != 0x3d)
        return 0xffffffff
    
    int16_t rax_6 = *(rdi_1 + 8)
    rsi_1 = 0xf
    int32_t rax_8
    
    if (rax_6 s< 0)
        rax_8 = *(rdi_1 + 0xc)
    else
        rax_8 = sx.d(rax_6) s>> 5
    
    if (rbx_1 s< rax_8 && sub_142a4a1a0(rdi_1, rbx_1) == 0x2a)
        rbx_1 += 1
        rsi_1 = 0x1f

return zx.q((rbx_1 - rbp.d) << 8) | zx.q(rsi_1)
