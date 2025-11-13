// 函数: sub_142a8ee00
// 地址: 0x142a8ee00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg3
int16_t* r10 = arg4

if ((*(arg1 + 8) & 1) != 0)
    int64_t rax
    rax.b = 0xff
    return rax

int16_t r11 = *(arg1 + 8)
int32_t rax_2

if (r11 s< 0)
    rax_2 = *(arg1 + 0xc)
else
    rax_2 = sx.d(r11) s>> 5

if (arg2 s< 0)
    arg2 = 0
else if (arg2 s> rax_2)
    arg2 = rax_2

if (rbx s>= 0)
    int32_t rax_3 = rax_2 - arg2
    
    if (rbx s> rax_3)
        rbx = rax_3
else
    rbx = 0

int32_t r9 = 0

if (r10 != 0)
    r9 = arg5

int32_t rcx = 0

if (r10 != 0)
    rcx = arg6

void* r8_1

if ((r11.b & 2) == 0)
    r8_1 = *(arg1 + 0x18)
else
    r8_1 = arg1 + 0xa

int16_t* r11_1 = r8_1 + (sx.q(arg2) << 1)

if (r9 != 0)
    r10 = &r10[sx.q(r9)]

int64_t rax_4

if (r11_1 == r10)
    if (rcx s< 0)
        rcx = std::_WChar_traits<wchar_t>::length(&r10[sx.q(r9)]).d
    
    if (rbx != rcx)
        return zx.q((((rbx - rcx) | 0x1000000) s>> 0x18).b)
else
    int32_t arg_8 = 0
    rax_4 = sub_142a90a70(r11_1, rbx, r10, rcx, arg7 | 0x10000, &arg_8)
    
    if (rax_4.d != 0)
        return zx.q((rax_4.d | 0x1000000) s>> 0x18)

rax_4.b = 0
return rax_4
