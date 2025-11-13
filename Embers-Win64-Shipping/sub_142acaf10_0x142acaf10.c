// 函数: sub_142acaf10
// 地址: 0x142acaf10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = arg8
int32_t r13 = arg3
uint64_t r14 = 0
int32_t i = 0
*rbx = 0
int32_t rdi = arg3

if (rdi s< sub_142a4a1f0(arg2))
    while (i s< zx.d(arg5))
        int16_t rax_1 = *(arg2 + 8)
        int32_t rax_3
        
        if (rax_1 s< 0)
            rax_3 = *(arg2 + 0xc)
        else
            rax_3 = sx.d(rax_1) s>> 5
        
        if (rdi s>= rax_3)
            break
        
        int32_t j = sub_142a486d0(arg2, rdi)
        int32_t rbx_1 = 0
        int64_t rcx_2 = 0
        int32_t* rax_4 = arg1 + 0x400
        
        while (j != *rax_4)
            rbx_1 += 1
            rcx_2 += 1
            rax_4 = &rax_4[1]
            
            if (rcx_2 s>= 0xa)
                goto label_142acafd1
        
        if (rbx_1 s< 0)
        label_142acafd1:
            int32_t rax_5 = sub_142a53ce0(j)
            rbx_1 = rax_5
            
            if (rax_5 u> 9)
                break
        
        int32_t rax_7 = sub_142a4a4f0(arg2, rdi, 1) - rdi
        
        if (rbx_1 s< 0)
            break
        
        int32_t rdx_3 = rbx_1 + ((r14 * 5).d << 1)
        
        if (rdx_3 s> zx.d(arg7))
            break
        
        r14 = zx.q(rdx_3)
        i += 1
        rdi += rax_7
        
        if (rdi s>= sub_142a4a1f0(arg2))
            break
    
    r13 = arg3
    rbx = arg8

if (i s< zx.d(arg4) || r14.d s< zx.d(arg6))
    return 0xffffffff

*rbx = rdi - r13
return zx.q(r14.d)
