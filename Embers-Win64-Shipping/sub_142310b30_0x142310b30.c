// 函数: sub_142310b30
// 地址: 0x142310b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = *(arg1 + 0x7a0)

if (rsi != 0xffffffff || *(arg1 + 0x430) == 0)
    return zx.q(rsi)

void* rax = sub_141f64a80(arg1)

if (rax == 0)
    return zx.q(rsi)

void* rax_1 = *(arg1 + 0x430)
int32_t i = 0

if (*(rax_1 + 0x1b0) s<= 0)
    return rsi

int64_t* rdi_1 = nullptr

do
    int32_t rax_2 = sub_142249710(rax, *(rdi_1 + *(rax_1 + 0x1a8)))
    
    if (rax_2 != 0xffffffff)
        return rax_2
    
    rax_1 = *(arg1 + 0x430)
    i += 1
    rdi_1 += 0xc
while (i s< *(rax_1 + 0x1b0))

return rsi
