// 函数: sub_142c13d40
// 地址: 0x142c13d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r8_2 = (zx.d(*arg1) << 8) + zx.d(arg1[1])

if (r8_2 != 1)
    if (r8_2 == 2)
        return sub_142c13dd0(arg1, arg2) __tailcall
    
    uint32_t rax
    rax.b = 0
    return rax

uint32_t rax_2 = zx.d(arg1[3])
void* r9_1 = &arg1[4]
uint32_t r8_6 = zx.d(arg1[2]) << 8
uint32_t i_2 = r8_6 + rax_2

if (r8_6 != neg.d(rax_2))
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        uint32_t rax_3 = zx.d(*r9_1)
        uint32_t rcx_1 = zx.d(*(r9_1 + 1))
        r9_1 += 2
        *arg2 |= 1 << (((rcx_1 - (rax_3 << 8)) u>> 4 & 0x1f) u% 0x20)
        i = i_1
        i_1 -= 1
    while (i != 1)

sub_142c13ed0(&arg2[1], &arg1[4], i_2, 2)
int64_t rax_7
rax_7.b = 1
return rax_7
