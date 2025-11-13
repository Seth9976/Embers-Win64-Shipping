// 函数: sub_142a8f800
// 地址: 0x142a8f800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)
int32_t rsi_1
int32_t i

if (arg4 s>= 0)
    if (arg4 s> 0x1f)
        if (rbx.d s< arg3 && arg4 s<= 0xffff)
            *(arg1 + (rbx << 1)) = arg4.w
            
            if (arg8 != 0)
                sub_142afcad0(arg8, arg6, 1)
            
            return zx.q((rbx + 1).d)
        
        rsi_1 = arg4
        int32_t rdi_1
        rdi_1.b = arg4 u> 0xffff
        i = rdi_1 + 1
    else
        rsi_1 = -1
        i = arg4
    
    if (arg8 != 0)
        sub_142afcad0(arg8, arg6, i)
    
    goto label_142a8f8d5

i = arg6

if (arg8 != 0)
    sub_142afcd10(arg8, i)

if ((arg7 & 0x4000) == 0)
    int32_t rbp_1 = not.d(arg4)
    rsi_1 = rbp_1
    
    if (rbx.d s< arg3 && rbp_1 s<= 0xffff)
        *(arg1 + (rbx << 1)) = rbp_1.w
        return zx.q((rbx + 1).d)
    
label_142a8f8d5:
    
    if (i s> 0x7fffffff - rbx.d)
        return 0xffffffff
    
    if (rbx.d s>= arg3)
        rbx = zx.q(rbx.d + i)
    else if (rsi_1 s< 0)
        int32_t rax_5 = i + rbx.d
        
        if (rax_5 s> arg3)
            rbx = zx.q(rax_5)
        else if (i s> 0)
            int16_t* rdx_3 = arg5
            int16_t* rcx_4 = arg1 + (rbx << 1)
            rbx = zx.q(rbx.d + i)
            
            do
                i -= 1
                *rcx_4 = *rdx_3
                rcx_4 = &rcx_4[1]
                rdx_3 = &rdx_3[1]
            while (i s> 0)
    else
        if (rsi_1 u<= 0xffff)
            goto label_142a8f930
        
        int32_t r8_1
        
        if (rsi_1 u<= 0x10ffff)
            r8_1 = (rbx + 1).d
        
        if (rsi_1 u> 0x10ffff || r8_1 s>= arg3)
            rbx = zx.q(i + rbx.d)
        else
            int16_t rax_3 = (rsi_1 s>> 0xa).w
            rsi_1.w &= 0x3ff
            *(arg1 + (rbx << 1)) = rax_3 - 0x2840
            rsi_1.w |= 0xdc00
            rbx = sx.q(r8_1)
        label_142a8f930:
            *(arg1 + (rbx << 1)) = rsi_1.w
            rbx = zx.q(rbx.d + 1)

return zx.q(rbx.d)
