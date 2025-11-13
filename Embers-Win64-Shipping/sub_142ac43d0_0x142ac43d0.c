// 函数: sub_142ac43d0
// 地址: 0x142ac43d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r10 = arg4
int32_t rdi_1 = arg6 + arg7
char r11 = arg5
char r9 = arg1

if (rdi_1 s>= 0x5265c00)
    uint32_t i_4 = rdi_1 u/ 0x5265c00
    uint64_t i_2 = zx.q(i_4)
    rdi_1 += i_4 * 0xfad9a400
    uint64_t i
    
    do
        r10 += 1
        r11 = (sx.d(r11) s% 7).b + 1
        
        if (r10 s> arg2)
            r10 = 1
            r9 += 1
        
        i = i_2
        i_2 -= 1
    while (i != 1)

if (rdi_1 s< 0)
    uint64_t i_3 = zx.q((0xffffffff - rdi_1) u/ 0x5265c00 + 1)
    rdi_1 += ((0xffffffff - rdi_1) u/ 0x5265c00 + 1) * 0x5265c00
    uint64_t i_1
    
    do
        r10 -= 1
        r11 = r11 + 5 - ((sx.d(r11) + 5) s/ 7).b * 7 + 1
        
        if (r10 s< 1)
            r10 = arg3
            r9 -= 1
        
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

if (r9 s< arg9)
    return 0xffffffff

if (r9 s> arg9)
    return 1

char rsi = arg2
int32_t rbx_1 = 0

if (arg11 s<= arg2)
    rsi = arg11

if (arg8 == 1)
    rbx_1 = sx.d(rsi)
else if (arg8 == 2)
    if (rsi s<= 0)
        int32_t r9_1 = sx.d(arg2)
        rbx_1 = (sx.d(rsi) + 1) * 7 - (r9_1 + 7 + sx.d(r11) - sx.d(r10) - sx.d(arg10)) s% 7 + r9_1
    else
        rbx_1 = sx.d(rsi) * 7 - 6 + (sx.d(arg10) + 6 + sx.d(r10) - sx.d(r11)) s% 7
else if (arg8 == 3)
    int32_t r8 = sx.d(rsi)
    rbx_1 = (sx.d(arg10) + 0x31 + sx.d(r10) - sx.d(r11) - r8) s% 7 + r8
else if (arg8 == 4)
    int32_t rbx_2 = sx.d(rsi)
    rbx_1 = rbx_2 - (rbx_2 + 0x31 + sx.d(r11) - sx.d(r10) - sx.d(arg10)) s% 7

int32_t rax_32 = sx.d(r10)

if (rax_32 s>= rbx_1)
    if (rax_32 s> rbx_1)
        return 1
    
    if (rdi_1 s>= arg12)
        int32_t rbp
        rbp.b = rdi_1 s> arg12
        return zx.q(rbp)

return 0xffffffff
