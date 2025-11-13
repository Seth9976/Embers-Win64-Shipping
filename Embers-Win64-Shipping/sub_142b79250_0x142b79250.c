// 函数: sub_142b79250
// 地址: 0x142b79250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_142b790c0(arg1, arg2)
int64_t rdx = *arg1
int64_t r9 = sx.q(rax)
int32_t r8 = *(rdx + (r9 << 2))
void* rcx = rdx + (r9 << 2)
int32_t r8_1

if (arg2 != (r8 & 0xffffff00))
    r8_1 = *(rdx + (sx.q(rax + 1) << 2)) & 0x7f
else
    r8_1 = r8 & 0x7f
    
    if (r8_1 == 0)
        int32_t rax_1
        
        do
            rax_1 = *(rcx - 4)
            rcx -= 4
        while (rax_1.b s< 0)
        
        return zx.q(rax_1) & 0xffffff00

if (arg2.w != 0)
    return sub_142b2c220(arg2, arg3, r8_1) __tailcall

return sub_142b2c290(arg2, arg3, r8_1) __tailcall
