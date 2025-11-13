// 函数: sub_1427721a0
// 地址: 0x1427721a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = arg2
int32_t rcx_2 = *(arg1 + 0x1c) * *(arg1 + 0x20) * 2
uint64_t r12 = zx.q(divs.dp.d(0:0xc000, rcx_2))
int32_t temp0_1 = divs.dp.d(sx.q(arg3), rcx_2)

if (temp0_1 s<= r12.d)
    r12 = zx.q(temp0_1)

uint32_t temp1_1 = modu.dp.d(0:arg3, rcx_2)

if (r12.d == 0)
    *arg5 = r12.d
    return zx.q(temp1_1)

int32_t rbx = 0
int32_t i = 0
*arg4 = r12.b
arg4[1] = *(arg1 + 0x48)
int32_t rax_7 = ((r12 << 1) + 2).d
int32_t rdi_1 = *arg5 - rax_7
void* r14 = &arg4[2]

if (r12.d s> 0)
    int32_t rbp_1 = 0
    
    do
        int32_t var_88_1 = rdi_1
        int32_t rax_8 =
            opus_encode(*(arg1 + 0x28), sx.q(rbp_1) + r11, *(arg1 + 0x20), rbx + rax_7 + arg4.d)
        
        if (rax_8 s< 0)
            opus_strerror(rax_8)
            *arg4 = 0
            *arg5 = 0
            return 0
        
        int16_t rax_9
        
        if (rax_8 == 1)
            rax_9 = 0
        else
            rdi_1 -= rax_8
            rbx += rax_8
            rax_9 = rbx.w
        
        rbp_1 += rcx_2
        i += 1
        r11 = arg2
        *r14 = rax_9
        r14 += 2
    while (i s< r12.d)

*arg5 = rax_7 + rbx
int32_t rcx_5 = zx.d(*(arg1 + 0x48)) + 1
*(arg1 + 0x48) = rcx_5.b + (rcx_5 u/ 0xff).b
return zx.q(temp1_1)
