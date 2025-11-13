// 函数: sub_142b80b10
// 地址: 0x142b80b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg3)
int32_t rsi = arg2
int32_t r11 = (rdi << 3).d
int32_t* r10_1 = arg1 + (rdi << 2) + 0x18
uint32_t i

for (i = zx.d((arg2 u>> (0x20 - r11.b)).b); i u>= *r10_1; i = zx.d((rsi u>> (0x20 - r11.b)).b))
    uint32_t rax_1
    
    if (r11 s>= 0x20)
        rax_1 = 0
    else
        rax_1 = 0xffffffff u>> r11.b
    
    rdi = zx.q(rdi.d - 1)
    rsi = (rsi & (0xffffff00 << (0x20 - r11.b) | rax_1)) | r10_1[-5] << (0x20 - r11.b)
    r11 = (rdi << 3).d
    r10_1 -= 4

int32_t rcx_4 = (rdi << 3).d
uint32_t r9_2

if (rcx_4 s>= 0x20)
    r9_2 = 0
else
    r9_2 = 0xffffffff u>> rcx_4.b

return zx.q((i + 1) << (0x20 - rcx_4.b))
    | ((zx.q(0xffffff00 << (0x20 - rcx_4.b)) | zx.q(r9_2)) & zx.q(rsi))
