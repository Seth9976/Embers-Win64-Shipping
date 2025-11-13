// 函数: sub_142a25c40
// 地址: 0x142a25c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = *arg4
int64_t rbp = arg4[4]
arg4[2] |= arg4[3]
arg4[6] |= arg4[7]
int64_t rax_2 = arg4[6]
int16_t r14 = arg4[9].w
*(arg4 + 0x4c) |= *(arg4 + 0x4e)
int16_t rax_4 = *(arg4 + 0x4c)
*(arg4 + 0x54) |= *(arg4 + 0x56)
int16_t r9 = *(arg4 + 0x54)
arg4[1] |= r11 & 0x1111111111111111
int16_t r15 = arg4[0xa].w
int64_t r11_1 = r11 & 0xeeeeeeeeeeeeeeee
*arg4 = r11_1
arg4[5] |= rbp & 0xff000000ff
int64_t rbp_1 = rbp & 0xffffff00ffffff00
arg4[4] = rbp_1
*(arg4 + 0x4a) |= r14 & 0x1111
r14 &= 0xeeee
arg4[9].w = r14
*(arg4 + 0x52) |= r15 & 0xf
r15 &= 0xfff0
arg4[0xa].w = r15
int32_t rcx = *(arg1 + 0x35c)

if (arg2 + 8 s> rcx)
    int64_t rbx_1 = sx.q(rcx - arg2)
    char rax_13 = (rbx_1 + 1).b
    arg4[1] &= (1 << rbx_1.b << 3) - 1
    arg4[5] &= (1 << rbx_1.b << 3) - 1
    arg4[2] &= (1 << rbx_1.b << 3) - 1
    arg4[8] &= (1 << rbx_1.b << 3) - 1
    arg4[6] = rax_2 & ((1 << rbx_1.b << 3) - 1)
    *(arg4 + 0x52) &= (1 << ((rax_13 * 2) & 0xfc)) - 1
    *(arg4 + 0x4a) &= (1 << ((rax_13 * 2) & 0xfc)) - 1
    arg4[0xb].w &= (1 << ((rax_13 * 2) & 0xfc)) - 1
    r9 &= (1 << ((rax_13 * 2) & 0xfc)) - 1
    *arg4 = r11_1 & ((1 << rbx_1.b << 3) - 1)
    int16_t r11_3 = *(arg4 + 0x52)
    arg4[4] = rbp_1 & ((1 << rbx_1.b << 3) - 1)
    arg4[9].w = r14 & ((1 << ((rax_13 * 2) & 0xfc)) - 1)
    arg4[0xa].w = r15 & ((1 << ((rax_13 * 2) & 0xfc)) - 1)
    *(arg4 + 0x4c) = rax_4 & ((1 << ((rax_13 * 2) & 0xfc)) - 1)
    *(arg4 + 0x54) = r9
    
    if (rbx_1 == 1)
        *(arg4 + 0x52) = r9 | r11_3
        *(arg4 + 0x54) = 0
    else if (rbx_1 == 5)
        int16_t rcx_4 = r9 & 0xff00
        *(arg4 + 0x52) = rcx_4 | r11_3
        *(arg4 + 0x54) = not.w(rcx_4) & r9

int32_t rcx_5 = *(arg1 + 0x364)
uint32_t result = arg3 + 8

if (result s> rcx_5)
    int64_t rbx_2 = sx.q(rcx_5 - arg3)
    int64_t r9_2 = sx.q((1 << rbx_2.b) - 1) * 0x101010101010101
    *arg4 &= r9_2
    arg4[4] &= r9_2
    arg4[1] &= r9_2
    arg4[5] &= r9_2
    arg4[2] &= r9_2
    arg4[6] &= r9_2
    arg4[8] &= r9_2
    result = 0x1111
    *(arg4 + 0x4a) &= (1 << ((rbx_2 + 1) u>> 1).b) * 0x1111 - 0x1111
    *(arg4 + 0x4c) &= (1 << ((rbx_2 + 1) u>> 1).b) * 0x1111 - 0x1111
    arg4[9].w &= (1 << ((rbx_2 + 1) u>> 1).b) * 0x1111 - 0x1111
    arg4[0xb].w &= (1 << (rbx_2 u>> 1).b) * 0x1111 - 0x1111
    arg4[0xa].w &= (1 << ((rbx_2 + 1) u>> 1).b) * 0x1111 - 0x1111
    *(arg4 + 0x52) &= (1 << ((rbx_2 + 1) u>> 1).b) * 0x1111 - 0x1111
    *(arg4 + 0x54) &= (1 << ((rbx_2 + 1) u>> 1).b) * 0x1111 - 0x1111
    int16_t r11_4 = *(arg4 + 0x4a)
    int16_t rdx_2 = *(arg4 + 0x4c)
    
    if (rbx_2 == 1)
        *(arg4 + 0x4c) = 0
        *(arg4 + 0x4a) = rdx_2 | r11_4
    else if (rbx_2 == 5)
        int16_t rcx_14 = rdx_2 & 0xcccc
        result.w = rcx_14 | r11_4
        *(arg4 + 0x4a) = result.w
        *(arg4 + 0x4c) = not.w(rcx_14) & rdx_2

if (arg3 == 0)
    result = -0x1010102
    *arg4 &= 0xfefefefefefefefe
    arg4[9].w &= 0xeeee
    arg4[1] &= 0xfefefefefefefefe
    *(arg4 + 0x4a) &= 0xeeee
    arg4[2] &= 0xfefefefefefefefe
    *(arg4 + 0x4c) &= 0xeeee

return result
