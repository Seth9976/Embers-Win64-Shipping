// 函数: sub_140b31040
// 地址: 0x140b31040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg2[1].d
int32_t rsi = rax - 1

if (rax == 0)
    rsi = 0

int16_t* const rdi

if (rax == 0)
    rdi = &data_142d40450
else
    rdi = *arg2

int64_t rcx = arg1[1]
int64_t rdx = sx.q(rsi)
int64_t r14 = rdx * 2

if (r14 + rcx u>= arg1[2])
    sub_140b38e20(arg1, rdx)
    rcx = arg1[1]

arg1[1] = rcx + (sx.q(rsi) << 1)
memcpy(rcx, rdi, r14.d)
return arg1
