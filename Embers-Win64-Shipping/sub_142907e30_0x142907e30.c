// 函数: sub_142907e30
// 地址: 0x142907e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15 = 0
void* rsi = arg2
void* const r10_1

if (arg1 != 0)
    r10_1 = &data_14351b650

if (arg1 == 0 || (*(arg1 + 0x5c) & 2) == 0)
    r10_1 = &data_14351b5d0

while (true)
    char rax_1 = *arg3
    
    if (rax_1 s< 0)
        break
    
    if (*(zx.q(rax_1) + r10_1) != 0xe0)
        break
    
    if (arg4 s<= 0)
        break
    
    arg3 = &arg3[1]
    arg4 -= 1

int64_t i

for (i = sx.q(arg4); i s> 3; i -= 1)
    char rax_3 = arg3[i - 1]
    
    if (rax_3 s>= 0)
        rax_3 = *(zx.q(rax_3) + r10_1)
    else
        rax_3 = 0xff
    
    if ((rax_3 | 0x13) != 0xf3)
        break
    
    arg4 -= 1

int32_t rax_6 = arg4 & 0x80000003

if (rax_6 s< 0)
    rax_6 = ((rax_6 - 1) | 0xfffffffc) + 1

uint64_t rbx
uint64_t arg_8 = rbx

if (rax_6 != 0)
    return 0xffffffff

int32_t r14_1 = 0

if (arg4 s<= 0)
    return zx.q(r15)

while (true)
    char rax_9 = *arg3
    char r11
    
    if (rax_9 s>= 0)
        r11 = *(zx.q(rax_9) + r10_1)
    else
        r11 = 0xff
    
    char rax_11 = arg3[1]
    
    if (rax_11 s>= 0)
        i = zx.q(*(zx.q(rax_11) + r10_1))
    else
        i.b = 0xff
    
    char rax_13 = arg3[2]
    
    if (rax_13 s>= 0)
        rax_13 = *(zx.q(rax_13) + r10_1)
    else
        rax_13 = 0xff
    
    uint32_t rdi_1 = zx.d(rax_13)
    char rax_15 = arg3[3]
    
    if (rax_15 s>= 0)
        rbx = zx.q(*(zx.q(rax_15) + r10_1))
    else
        rbx.b = 0xff
    
    arg3 = &arg3[4]
    
    if ((i.b | r11) s< 0)
        return 0xffffffff
    
    uint32_t rcx_2 = zx.d(rbx.b)
    
    if ((rcx_2.b | rdi_1.b) s< 0)
        return 0xffffffff
    
    r15 += 3
    r14_1 += 4
    uint32_t rdx_6 = ((zx.d(r11) << 6 | zx.d(i.b)) << 6 | rdi_1) << 6 | rcx_2
    *rsi = (rdx_6 u>> 0x10).b
    *(rsi + 1) = (rdx_6 u>> 8).b
    *(rsi + 2) = rdx_6.b
    rsi += 3
    
    if (r14_1 s>= arg4)
        return zx.q(r15)
