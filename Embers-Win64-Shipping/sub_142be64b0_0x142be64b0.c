// 函数: sub_142be64b0
// 地址: 0x142be64b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x18)
int32_t r11 = 0
char* rsi = rax + 0x200d
char* rdi = rax + 0x200e
char* rbx = rax + 0x200f
char* rbp = rax + 0x200c
uint32_t i_1 = ((zx.d(*rbp) << 8 | zx.d(*rsi)) << 8 | zx.d(*rdi)) << 8 | zx.d(*rbx)

if (i_1 u> 0)
    uint32_t i
    
    do
        uint32_t rcx_3 = zx.d(rsi[4])
        rsi = &rsi[0xc]
        uint32_t r8_1 = zx.d(rbp[4])
        rdi = &rdi[0xc]
        uint32_t rdx = zx.d(rbp[8])
        rbp = &rbp[0xc]
        rbx = &rbx[0xc]
        uint32_t r8_7 = ((r8_1 << 8 | rcx_3) << 8 | zx.d(rdi[-8])) << 8 | zx.d(rbx[-8])
        uint32_t r9_7 = ((zx.d(*rbp) << 8 | zx.d(*rsi)) << 8 | zx.d(*rdi)) << 8 | zx.d(*rbx)
        
        if (arg2 u< r8_7)
            break
        
        if (arg2 u<= (((rdx << 8 | zx.d(rsi[-4])) << 8 | zx.d(rdi[-4])) << 8 | zx.d(rbx[-4])))
            if (r9_7 u> r8_7 - arg2 - 1)
                return 0
            
            r11 = r9_7 - r8_7 + arg2
            break
        
        i = i_1
        i_1 -= 1
    while (i != 1)

return zx.q(r11)
