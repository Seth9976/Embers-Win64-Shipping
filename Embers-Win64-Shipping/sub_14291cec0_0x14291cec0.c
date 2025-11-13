// 函数: sub_14291cec0
// 地址: 0x14291cec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
uint64_t rbp = 0
int32_t r14 = 2
int64_t rsi = arg3
int64_t rdi = arg2

if (arg3 == 0)
    return -1

int32_t rax_1 = sub_142890660(rsi)
int64_t r9_2 = arg1 - rsi

if (arg1 u< rsi)
    r9_2 = arg1

if (0x40 != rax_1)
    rsi <<= 0x40 - rax_1.b
    r9_2 = rdi u>> (0x40 * 0 + rax_1.b) | r9_2 << (0x40 - rax_1.b)
    rdi <<= 0x40 - rax_1.b

uint64_t rbx_1 = zx.q(rsi.d)
uint64_t r11_3 = rsi u>> 0x20
uint64_t rax_10

while (true)
    uint64_t r10_2
    
    if (r9_2 u>> 0x20 != r11_3)
        r10_2 = divu.dp.q(0:r9_2, r11_3)
    else
        r10_2 = 0xffffffff
    
    int64_t r8_2 = r10_2 * r11_3
    int64_t i = r10_2 * rbx_1
    int64_t rcx_6 = r9_2 - r8_2
    
    if ((-0x100000000 & rcx_6) == 0)
        while (i u> (rcx_6 << 0x20 | rdi u>> 0x20))
            r8_2 -= r11_3
            rcx_6 = r9_2 - r8_2
            r10_2 -= 1
            i -= rbx_1
            
            if ((-0x100000000 & rcx_6) != 0)
                break
    
    rax_10 = r10_2 - 1
    int64_t rcx_12 = (i u>> 0x20) + r8_2
    int64_t rdx_5 = i << 0x20
    int64_t r8_3 = rcx_12 + 1
    
    if (rdi u>= rdx_5)
        r8_3 = rcx_12
    
    int64_t rdi_1 = rdi - rdx_5
    
    if (r9_2 u>= r8_3)
        rax_10 = r10_2
    
    int32_t temp4_1 = r14
    r14 -= 1
    
    if (temp4_1 == 1)
        break
    
    int64_t rax_11 = r9_2 + rsi
    rbp = rax_10 << 0x20
    
    if (r9_2 u>= r8_3)
        rax_11 = r9_2
    
    r9_2 = (rax_11 - r8_3) << 0x20 | rdi_1 u>> 0x20
    rdi = rdi_1 << 0x20

return rax_10 | rbp
