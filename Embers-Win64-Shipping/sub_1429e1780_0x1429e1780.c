// 函数: sub_1429e1780
// 地址: 0x1429e1780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = arg6
int64_t r15 = arg3
int64_t rdx = sx.q(arg5)
int64_t r10 = rdx
int64_t arg_8 = rdx
int64_t rcx = sx.q(arg2 * r14)
char* rdi_2 = arg1 - rcx - rdx

if (r14 s>= arg10)
    rdi_2 = &rdi_2[sx.q((arg10 - 1) * arg2)]
else if (r14 s> 0)
    rdi_2 = &rdi_2[rcx]

int64_t result = sx.q(arg9)
int32_t r8_2 = neg.d(rdx.d)
int32_t i_1 = arg8
int32_t r11 = rdx.d + arg7
int64_t result_1 = result
arg6 = r8_2
int32_t i

do
    int32_t rsi_1 = r8_2
    int32_t rbx_1 = 0
    
    if (rdx.d s>= 0)
        rsi_1 = 0
    
    if (rsi_1 s> arg7)
        rsi_1 = arg7
    
    if (r11 s> result.d)
        rbx_1 = rdx.d - result.d + arg7
    
    if (rbx_1 s> arg7)
        rbx_1 = arg7
    
    uint32_t count = arg7 - rsi_1 - rbx_1
    
    if (rsi_1 != 0)
        memset(r15, zx.d(*rdi_2), sx.q(rsi_1))
        r10 = arg_8
    
    if (count != 0)
        int64_t rax_6 = sx.q(rsi_1)
        memcpy(rax_6 + r15, &rdi_2[rax_6 + r10], count)
    
    if (rbx_1 != 0)
        memset(sx.q(rsi_1) + sx.q(count) + r15, zx.d(rdi_2[result_1 - 1]), sx.q(rbx_1))
    
    r15 += sx.q(arg4)
    r14 += 1
    
    if (r14 s> 0 && r14 s< arg10)
        rdi_2 = &rdi_2[sx.q(arg2)]
    
    rdx = sx.q(arg5)
    result = zx.q(arg9)
    r10 = rdx
    r8_2 = arg6
    r11 = rdx.d + arg7
    i = i_1
    i_1 -= 1
while (i != 1)
return result
