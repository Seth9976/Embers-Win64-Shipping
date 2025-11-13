// 函数: sub_142c1a200
// 地址: 0x142c1a200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r14 = zx.d(*arg1)
uint64_t r15 = zx.q(arg1[1])
int64_t rbp_3 = (zx.q(r14) << 8) + 1 + r15
uint16_t r9 = zx.w(arg1[rbp_3 << 1])
void* rbp_4 = &arg1[rbp_3 << 1]
uint32_t rsi = zx.d(*(rbp_4 + 1))
uint64_t rcx_5

if (r9 * 0x100 == neg.w(rsi.w))
    rcx_5 = 2
else
    rcx_5 = zx.q(((zx.d(r9.b) << 8) + rsi) * 2)

void* rcx_6 = rcx_5 + rbp_4
uint64_t rdx = zx.q(*(rcx_6 + 1))
uint32_t rdi = zx.d(*rcx_6)
uint64_t rax_2 = (zx.q(rdi) << 8) + rdx
int64_t result = sub_142c1d850(arg2, (r14 << 8) + r15.d, &arg1[2], (zx.d(r9.b) << 8) + rsi, 
    rbp_4 + 2, (rdi << 8) + rdx.d, rcx_6 + 2, 
    (zx.d(*(rcx_6 + (rax_2 << 1) + 2)) << 8) + zx.d(*(rcx_6 + (rax_2 << 1) + 3)), 
    rcx_6 + ((rax_2 + 2) << 1), arg3)
return result
