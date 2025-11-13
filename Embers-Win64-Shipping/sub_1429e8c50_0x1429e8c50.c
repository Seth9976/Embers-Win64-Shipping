// 函数: sub_1429e8c50
// 地址: 0x1429e8c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = *(arg1 + 0x1e70)
int32_t r10 = sx.d(*arg4)
int64_t r11 = sx.q(arg4[1])
int64_t r12_1 = sx.q(*(arg2 + 0x50)) + **(arg2 + 0x48)
int32_t r14 = *(arg2 + 0x54)
int64_t r9 = *(arg1 + 0x23a0)
int32_t rsi_1 = r10 - arg6
int64_t rbx_1 = sx.q(*(arg3 + 0x20)) + *(arg1 + 0x1e98)
int32_t r15 = r11.d + arg6
int64_t rax_2 = *(arg1 + 0x2398)
int32_t rcx_3 = sx.d(arg9[1] s>> 3)
int32_t rdx_1 = sx.d(*arg9 s>> 3)
*(arg3 + 0x30) = r10.w
int64_t r13_3 = sx.q(r10 * rdi) + rbx_1 + r11
*(arg3 + 0x32) = r11.w
int32_t r9_2 = r11.d - arg6
int32_t r14_1 = (((*(rax_2 + (sx.q(r10 - rdx_1) << 2)) + *(r9 + (sx.q(r11.d - rcx_3) << 2))) * arg5
    + 0x80) s>> 8) + (*arg7)(r12_1, zx.q(r14), r13_3, zx.q(rdi))
int32_t rcx_6 = *(arg1 + 0x23d0)
int32_t rax_13 = *(arg1 + 0x23d8)

if (r9_2 s< rcx_6)
    r9_2 = rcx_6

int32_t rcx_7 = *(arg1 + 0x23d4)
int32_t arg_18 = r9_2

if (r15 s> rcx_7)
    r15 = rcx_7

int32_t rcx_8 = r10 + arg6

if (rsi_1 s< rax_13)
    rsi_1 = rax_13

int32_t rax_14 = *(arg1 + 0x23dc)

if (rcx_8 s> rax_14)
    rcx_8 = rax_14

int32_t arg_20

if (rsi_1 s< rcx_8)
    int64_t rdx_5 = sx.q(rdi)
    int64_t var_58_1 = rdx_5
    int32_t rcx_10 = rcx_8
    int64_t r8_3 = sx.q(r9_2) + rbx_1 + sx.q(rsi_1 * rdx_5.d)
    int64_t rax_19 = rdx_5
    int64_t var_70_1 = r8_3
    
    do
        int64_t rdi_1 = r8_3
        int32_t rbx_7 = r9_2
        
        if (r9_2 s< r15)
            do
                int32_t rax_24 = (*arg7)(r12_1, zx.q(r14), rdi_1, zx.q(rdx_5.d))
                arg_20 = rax_24
                int32_t rax_25 = rax_24 + (((*(r9 + (sx.q(sx.d(rbx_7.w) - rcx_3) << 2))
                    + *(rax_2 + (sx.q(sx.d(rsi_1.w) - rdx_1) << 2))) * arg5 + 0x80) s>> 8)
                arg_20 = rax_25
                
                if (rax_25 u< r14_1)
                    r14_1 = rax_25
                    *(arg3 + 0x30) = rsi_1.w
                    *(arg3 + 0x32) = rbx_7.w
                    r13_3 = rdi_1
                
                rdx_5 = zx.q(rdi)
                rdi_1 += 1
                rbx_7 += 1
            while (rbx_7 s< r15)
            
            r8_3 = var_70_1
            r9_2 = arg_18
            rax_19 = var_58_1
            rcx_10 = rcx_8
        
        r8_3 += rax_19
        rsi_1 += 1
        var_70_1 = r8_3
    while (rsi_1 s< rcx_10)

int32_t rbx_12

if (arg8 == 0)
    rbx_12 = 0
else
    int32_t rbx_9 = *(arg8[1] + (sx.q(sx.d(*(arg3 + 0x32) << 3) - sx.d(arg9[1])) s>> 1 << 2))
        + *(*arg8 + (sx.q(sx.d(*(arg3 + 0x30) << 3) - sx.d(*arg9)) s>> 1 << 2))
    rbx_12 = (rbx_9 * *(arg1 + 0x2358) + 0x80) s>> 8

return zx.q((*(arg7 + 8))(r12_1, zx.q(r14), r13_3, zx.q(rdi), &arg_20) + rbx_12)
