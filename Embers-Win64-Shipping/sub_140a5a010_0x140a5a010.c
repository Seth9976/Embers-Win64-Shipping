// 函数: sub_140a5a010
// 地址: 0x140a5a010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax
rax.b = arg3 u<= 0x10
int32_t rcx
rcx.b = arg2 u<= 0x7ff0

if ((rcx & rax) != 0)
    return zx.q((&data_143db7150)[zx.q(0x2c - zx.d(*(((arg2 + 0xf) u>> 4) + &data_143db71d0)))])

int32_t rax_5 = data_143db71c0

if (arg3 u>= rax_5)
    rax_5 = arg3

uint64_t rcx_2 = zx.q(rax_5)
return (arg2 - 1 + rcx_2) & not.q(rcx_2 - 1)
