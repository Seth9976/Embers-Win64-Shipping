// 函数: sub_142623d60
// 地址: 0x142623d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg1)
int64_t r13 = sx.q(arg2)
int32_t rax = (rbp + 1).d
int16_t* r11 = arg4 + ((zx.q(*(arg5 + (rbp << 1))) & 0x7fff) << 3)

if (rax s>= arg3)
    rax = 0

int16_t* rsi = arg4 + ((zx.q(*(arg5 + (r13 << 1))) & 0x7fff) << 3)
int32_t rax_2 = rbp.d
uint64_t rcx_1 = zx.q(*(arg5 + (sx.q(rax) << 1))) & 0x7fff
uint32_t rdi = zx.d(*(arg4 + (rcx_1 << 3) + 4))

if (rbp.d s<= 0)
    rax_2 = arg3

uint32_t r8 = zx.d(*r11)
uint64_t rcx_3 = zx.q(*(arg5 + (sx.q(rax_2) << 1) - 2)) & 0x7fff
uint32_t rbx = zx.d(*(arg4 + (rcx_3 << 3) + 4))
uint32_t r10_4 = zx.d(*(arg4 + (rcx_3 << 3)))
uint32_t r9 = zx.d(r11[2])
uint32_t r11_1 = zx.d(*(arg4 + (rcx_1 << 3)))
int32_t result

if ((r8 - r10_4) * (rdi - rbx) - (r11_1 - r10_4) * (r9 - rbx) s> 0)
    uint32_t rcx_9 = zx.d(rsi[2])
    uint32_t rdx_5 = zx.d(*rsi)
    
    if ((rdx_5 - r8) * (rdi - r9) - (r11_1 - r8) * (rcx_9 - r9) s> 0
        || (r8 - rdx_5) * (rbx - rcx_9) - (r10_4 - rdx_5) * (r9 - rcx_9) s> 0)
    label_142623ecb:
        
        if (sub_142623ee0(rbp.d, r13.d, arg3, arg4, arg5).b == 0)
            result.b = 0
        else
            result.b = 1
    else
        result.b = 0
else
    uint32_t rdx_4 = zx.d(rsi[2])
    uint32_t rcx_8 = zx.d(*rsi)
    
    if ((rcx_8 - r8) * (rbx - r9) - (r10_4 - r8) * (rdx_4 - r9) s< 0
            && (r8 - rcx_8) * (rdi - rdx_4) - (r11_1 - rcx_8) * (r9 - rdx_4) s< 0)
        goto label_142623ecb
    
    result.b = 0

return result
