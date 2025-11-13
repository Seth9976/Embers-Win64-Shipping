// 函数: sub_142a48fb0
// 地址: 0x142a48fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = arg3

if ((*(arg1 + 8) & 1) != 0)
    int64_t rax
    rax.b = 0xff
    return rax

int16_t r9 = *(arg1 + 8)
int32_t i_3

if (r9 s< 0)
    i_3 = *(arg1 + 0xc)
else
    i_3 = sx.d(r9) s>> 5

if (arg2 s< 0)
    arg2 = 0
else if (arg2 s> i_3)
    arg2 = i_3

if (i_2 s>= 0)
    i_3 -= arg2
    
    if (i_2 s> i_3)
        i_2 = i_3
else
    i_2 = 0

if (arg4 == 0)
    i_3.b = i_2 != 0
    return i_3

void* r8_1

if ((r9.b & 2) == 0)
    r8_1 = *(arg1 + 0x18)
else
    r8_1 = arg1 + 0xa

int16_t* rdi = r8_1 + (sx.q(arg2) << 1)
int64_t rax_3 = sx.q(arg5)
int16_t* rbx_1 = arg4 + (rax_3 << 1)
int32_t i_1 = arg6

if (i_1 s< 0)
    i_1 = std::_WChar_traits<wchar_t>::length(&rbx_1[rax_3])

int32_t i

if (i_2 == i_1)
    i = i_2
    r8_1.b = 0
else
    i = i_1
    
    if (i_2 s< i_1)
        i = i_2
    
    r8_1 = 0xffffffff
    
    if (i_2 s>= i_1)
        r8_1 = 1

if (i s> 0 && rdi != rbx_1)
    do
        uint32_t rcx_2 = zx.d(*rdi)
        rdi = &rdi[1]
        uint32_t rax_4 = zx.d(*rbx_1)
        rbx_1 = &rbx_1[1]
        
        if (rcx_2 != rax_4)
            return zx.q((((rcx_2 - rax_4) | 0x8000) s>> 0xf).b)
        
        i -= 1
    while (i s> 0)

return zx.q(r8_1.b)
