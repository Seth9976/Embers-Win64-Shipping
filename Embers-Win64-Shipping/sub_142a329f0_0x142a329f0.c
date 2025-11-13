// 函数: sub_142a329f0
// 地址: 0x142a329f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = sx.d(*arg2)
int32_t rdx = sx.d(arg2[1])
int32_t r15 = *(arg1 + 0x64d0)
int32_t rax_1 = r11 - arg4
int32_t r13 = *(arg1 + 0x64d4)
int32_t r14 = *(arg1 + 0x64c8)
int32_t r12 = *(arg1 + 0x64cc)

if (rax_1 s> r15)
    r15 = rax_1

int32_t rax_2 = r11 + arg4
int32_t arg_10 = r15

if (rax_2 s< r13)
    r13 = rax_2

int32_t rax_4 = rdx - arg4
int32_t var_54 = r13

if (rax_4 s> r14)
    r14 = rax_4

int32_t rax_5 = rdx + arg4
int32_t var_58 = r14

if (rax_5 s< r12)
    r12 = rax_5

int16_t r8 = arg6[1] s>> 3
int16_t rbx = *arg6 s>> 3
arg6.w = r8
int32_t rax_9 = *(arg1 + 0x6178) * r11 + rdx
rdx.w -= r8
int16_t temp0 = r11.w
r11.w -= rbx
int32_t rcx

if (temp0 != rbx)
    int32_t rcx_1
    rcx_1.b = rdx.w != 0
    rcx = rcx_1 + 2
else
    rcx.b = rdx.w != 0

int32_t rbx_3 = *(*(arg1 + 0x64a8) + (sx.q(rdx.w) << 2)) + *(arg1 + (zx.q(rcx) << 2) + 0x6490)
    + *(*(arg1 + 0x64a0) + (sx.q(r11.w) << 2))
int32_t rbp_4 = ((arg3 * rbx_3 + 0x100) u>> 9)
    + (*arg5)(*(arg1 + 0x2018), zx.q(*(arg1 + 0x2020)), sx.q(rax_9) + *(arg1 + 0x6170))
*arg7 = *arg2

while (r15 s< r13)
    int32_t rdi_1 = r14
    
    if (r14 s< r12)
        int16_t r14_1 = r15.w - rbx
        
        do
            int16_t arg_a = rdi_1.w
            int16_t rcx_6 = rdi_1.w - arg6.w
            int32_t rax_15
            
            if (r14_1 != 0)
                rax_15.b = rcx_6 != 0
                rax_15 += 2
            else
                rax_15.b = rcx_6 != 0
            
            int32_t rbx_7 = (*(*(arg1 + 0x64a8) + (sx.q(rcx_6) << 2))
                + *(arg1 + (zx.q(rax_15) << 2) + 0x6490)
                + *(*(arg1 + 0x64a0) + (sx.q(r14_1) << 2))) * arg3
            int32_t rcx_10 =
                ((rbx_7 + 0x100) u>> 9) + (*arg5)(*(arg1 + 0x2018), zx.q(*(arg1 + 0x2020)))
            
            if (rcx_10 s< rbp_4)
                *arg7 = r15.w.d
            
            rdi_1 += 1
            
            if (rcx_10 s>= rbp_4)
                rcx_10 = rbp_4
            
            rbp_4 = rcx_10
        while (rdi_1 s< r12)
        
        r15 = arg_10
        r14 = var_58
        r13 = var_54
    
    r15 += 1
    arg_10 = r15

return zx.q(rbp_4)
