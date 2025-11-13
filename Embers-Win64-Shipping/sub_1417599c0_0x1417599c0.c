// 函数: sub_1417599c0
// 地址: 0x1417599c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rbx = arg1

if (arg2.d f<= *(arg3 + 0x9c))
    return 0

int64_t rsi = sx.q(arg1[0x71].d)
int32_t rax = (rsi + 1).d
arg1[0x71].d = rax

if (rax s> *(arg1 + 0x714))
    sub_1417501f0(arg1, rsi.d)

int128_t* rcx = rbx[0x70].q
int128_t* rax_1 = rbx
void* rdx_2 = rsi * 0xe0

if (rcx != 0)
    rax_1 = rcx

*(rax_1 + rdx_2) = *arg3
*(rax_1 + rdx_2 + 0x10) = arg3[1]
*(rax_1 + rdx_2 + 0x20) = arg3[2]
*(rax_1 + rdx_2 + 0x30) = arg3[3]
*(rax_1 + rdx_2 + 0x40) = arg3[4]
*(rax_1 + rdx_2 + 0x50) = arg3[5]
*(rax_1 + rdx_2 + 0x60) = arg3[6]
*(rax_1 + rdx_2 + 0x70) = arg3[7]
*(rax_1 + rdx_2 + 0x80) = *(arg3 + 0x80)
*(rax_1 + rdx_2 + 0x90) = arg3[9]
*(rax_1 + rdx_2 + 0xa0) = arg3[0xa]
*(rax_1 + rdx_2 + 0xb0) = arg3[0xb]
*(rax_1 + rdx_2 + 0xc0) = arg3[0xc]
*(rax_1 + rdx_2 + 0xd0) = arg3[0xd]
int128_t* rax_2 = rbx[0x70].q

if (rax_2 != 0)
    rbx = rax_2

return rdx_2 + rbx
