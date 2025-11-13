// 函数: sub_142af4c20
// 地址: 0x142af4c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = arg2[1].d
uint32_t rdi

if (arg1 == rcx + 1)
    void* rdx = *arg2
    int64_t r8_1 = sx.q(*(rdx + 0x28))
    int64_t rax_1
    
    if (r8_1.d s< *(rdx + 0x2c))
        rax_1 = *(rdx + 0x30)
    
    if (r8_1.d s>= *(rdx + 0x2c) || *(rax_1 + (r8_1 << 1)) u>= 0xd800)
        uint32_t rax_3 = sub_142aea870(rdx, arg3)
        arg2[1].d += 1
        rdi = rax_3
    else
        rdi = zx.d(*(rax_1 + (r8_1 << 1)))
        *(rdx + 0x28) = (r8_1 + 1).d
        arg2[1].d += 1
else if (arg1 != rcx)
    sub_142aea770(*arg2, arg1 - rcx - 1, arg3)
    void* rdx_7 = *arg2
    int64_t r8_4 = sx.q(*(rdx_7 + 0x28))
    int64_t rax_10
    
    if (r8_4.d s< *(rdx_7 + 0x2c))
        rax_10 = *(rdx_7 + 0x30)
    
    if (r8_4.d s>= *(rdx_7 + 0x2c) || *(rax_10 + (r8_4 << 1)) u>= 0xd800)
        rdi = sub_142aea870(rdx_7, arg3)
    else
        rdi = zx.d(*(rax_10 + (r8_4 << 1)))
        *(rdx_7 + 0x28) = (r8_4 + 1).d
    
    arg2[1].d = arg1
else
    void* rdx_1 = *arg2
    int32_t rax_4 = *(rdx_1 + 0x28)
    
    if (rax_4 s<= 0 || *(*(rdx_1 + 0x30) + (sx.q(rax_4 - 1) << 1)) u>= 0xd800)
        rdi = sub_142aeabf0(rdx_1)
    else
        *(rdx_1 + 0x28) = rax_4 - 1
        rdi = zx.d(*(*(*arg2 + 0x30) + (sx.q(rax_4 - 1) << 1)))
    
    void* rdx_3 = *arg2
    int64_t r8_3 = sx.q(*(rdx_3 + 0x28))
    
    if (r8_3.d s>= *(rdx_3 + 0x2c) || *(*(rdx_3 + 0x30) + (r8_3 << 1)) u>= 0xd800)
        sub_142aea870(rdx_3, arg3)
    else
        *(rdx_3 + 0x28) = (r8_3 + 1).d

if (rdi u> 0xffff)
    return 0

return zx.q(rdi.w)
