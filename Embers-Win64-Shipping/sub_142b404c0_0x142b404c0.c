// 函数: sub_142b404c0
// 地址: 0x142b404c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = *arg1
int64_t r15 = sx.q(arg3)
int64_t rsi = sx.q(arg2)
int32_t r8

if (rax == 0)
    r8 = 0x28
else
    r8 = *(arg1 + 0x10)

int64_t r9 = sx.q(*(arg1 + 0x80))
int32_t arg_8 = r9.d
void* r14

if (rax == 0)
    r14 = &arg1[8]
else
    r14 = *(arg1 + 8)

void* rbp

if (rax == 0)
    rbp = &arg1[0x58]
else
    rbp = *(arg1 + 0x58)

int64_t r10 = sx.q(*(arg1 + 0x84))
int32_t rax_1 = (r10 + r15).d

if (rax_1 s<= r8)
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax_1)
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r8)
    int32_t rbx_5 = ((temp3_1 - temp2_1) s>> 1) - ((temp1_1 - temp0_1) s>> 1)
    
    if (r10 != neg.q(r10))
        memmove(r14 + (sx.q(rbx_5) << 1), r14 + (r9 << 1), r10.d * 2)
    
    int64_t r8_9 = sx.q(*(arg1 + 0x84) - rsi.d)
    
    if (r8_9 != neg.q(r8_9))
        int64_t r9_5 = sx.q(rbx_5) + rsi
        memmove(r14 + ((r9_5 + r15) << 1), r14 + (r9_5 << 1), r8_9.d * 2)
    
    int64_t r8_11 = sx.q(*(arg1 + 0x84))
    
    if (r8_11 != 0)
        memmove(sx.q(rbx_5) + rbp, sx.q(arg_8) + rbp, r8_11.d)
    
    int32_t rax_35 = *(arg1 + 0x84)
    
    if (rax_35 != rsi.d)
        void* r9_7 = sx.q(rbx_5) + rsi
        memmove(r9_7 + r15 + rbp, r9_7 + rbp, rax_35 - rsi.d)
    
    *(arg1 + 0x80) = rbx_5
else
    int32_t r8_1 = rax_1 * 2
    int32_t temp6_1
    int32_t temp7_1
    temp6_1:temp7_1 = sx.q(rax_1)
    int64_t rbx = sx.q(r8_1)
    int32_t temp8_1
    int32_t temp9_1
    temp8_1:temp9_1 = sx.q(r8_1)
    int32_t rax_9 = ((temp9_1 - temp8_1) s>> 1) - ((temp7_1 - temp6_1) s>> 1)
    int64_t rax_10 = sub_142a7dd00(rbx * 2)
    int64_t rax_11 = sub_142a7dd00(rbx)
    int64_t r8_2 = rax_10
    
    if (r8_2 == 0 || rax_11 == 0)
        sub_142a7dcd0(r8_2)
        sub_142a7dcd0(rax_11)
        *arg4 = 7
        return 0xffffffff
    
    int64_t r9_1 = rsi * 2
    
    if (r9_1 != 0)
        memcpy(r8_2 + (sx.q(rax_9) << 1), r14 + (sx.q(arg_8) << 1), r9_1.d)
        r8_2 = rax_10
    
    int64_t r9_2 = sx.q(*(arg1 + 0x84) - rsi.d)
    
    if (r9_2 != neg.q(r9_2))
        memcpy(r8_2 + ((sx.q(rax_9) + rsi + r15) << 1), r14 + ((sx.q(arg_8) + rsi) << 1), 
            r9_2.d * 2)
    
    if (rsi.d != 0)
        memcpy(sx.q(rax_9) + rax_11, sx.q(arg_8) + rbp, rsi.d)
    
    int32_t rax_18 = *(arg1 + 0x84)
    int64_t rbx_3
    
    if (rax_18 == rsi.d)
        rbx_3 = rax_11
    else
        rbx_3 = rax_11
        memcpy(sx.q(rax_9) + rsi + r15 + rbx_3, sx.q(arg_8) + rsi + rbp, rax_18 - rsi.d)
    
    if (*arg1 != 0)
        sub_142a7dcd0(r14)
        sub_142a7dcd0(rbp)
    
    *(arg1 + 8) = rax_10
    *(arg1 + 0x10) = r8_1
    *(arg1 + 0x60) = r8_1
    *(arg1 + 0x80) = rax_9
    *arg1 = 1
    *(arg1 + 0x58) = rbx_3

*(arg1 + 0x84) += r15.d
return zx.q(*(arg1 + 0x80) + rsi.d)
