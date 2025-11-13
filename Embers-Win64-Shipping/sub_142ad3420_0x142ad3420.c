// 函数: sub_142ad3420
// 地址: 0x142ad3420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = 0
int32_t i = arg3
uint64_t rbx = zx.q(arg2.d)

if (arg3 s< 0)
    int32_t r8 = ((zx.q((arg2 * 3).d) << 2) + 0x11).d
    int32_t rax_5
    int32_t i_1
    
    do
        r8 -= 0xc
        rbx = zx.q(rbx.d - 1)
        int32_t rdx_4 = r8 s% 0x13
        rax_5.b = rdx_4 s>= (rdx_4 s>> 0x1f & 0xffffffed) + 0xc
        i_1 = i
        i += rax_5 + 0xc
    while (i_1 + rax_5 + 0xc s< 0)

if (i s> 0xc)
    int32_t r8_1 = ((zx.q((rbx * 3).d) << 2) + 0x11).d
    
    do
        int32_t rdx_9 = r8_1 s% 0x13
        int32_t rax_11
        rax_11.b = rdx_9 s>= (rdx_9 s>> 0x1f & 0xffffffed) + 0xc
        rbx = zx.q(rbx.d + 1)
        r8_1 += 0xc
        i -= rax_11 + 0xc
    while (i s> 0xc)

int32_t rsi = sub_142ad3a30(rbx.d, &arg_18)

if (arg_18 s> 0)
    return 0

if (i != 0)
    uint64_t rdx_14 = zx.q(rbx.d)
    int32_t rcx_11 = ((zx.q((rbx * 3).d) << 2) + 0x11).d s% 0x13
    int64_t rax_22 = *arg1
    void* const rdx_15
    
    if (rcx_11 s< (rcx_11 s>> 0x1f & 0xffffffed) + 0xc)
        int32_t rax_26 = (*(rax_22 + 0x110))(arg1, rdx_14)
        
        if (rax_26 s> 0x17c)
            rax_26 -= 0x1e
        
        if (rax_26 == 0x161)
            rdx_15 = &data_143657f40
        else if (rax_26 == 0x162 || rax_26 != 0x163)
            rdx_15 = &data_143657f42
        else
            rdx_15 = &data_143657f44
    else
        int32_t rax_23 = (*(rax_22 + 0x110))(arg1, rdx_14)
        
        if (rax_23 s> 0x17c)
            rax_23 -= 0x1e
        
        if (rax_23 == 0x161)
            rdx_15 = &data_143657fa0
        else if (rax_23 == 0x162 || rax_23 != 0x163)
            rdx_15 = &data_143657fa2
        else
            rdx_15 = &data_143657fa4
    
    rsi += sx.d(*(rdx_15 + sx.q(i) * 6))

return zx.q(rsi + 0x54f5d)
