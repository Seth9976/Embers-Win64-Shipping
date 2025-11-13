// 函数: sub_1423c0d50
// 地址: 0x1423c0d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = arg4
void* r9 = arg2 + 8
void* rax_1 = *(arg2 + 0x158)
int64_t rsi = sx.q(*(arg1 + 0xcc)) * 0x28

if (rax_1 != 0)
    r9 = rax_1

int64_t rcx_1 = sx.q(arg3) * 3
void* r11 = r9 + (rcx_1 << 3)
int32_t r9_2 = divu.dp.d(0:(*(r9 + (rcx_1 << 3)) - 1 + *(rsi + 0x1439c85e8)), *(rsi + 0x1439c85e8))
    * (&data_1439c85f4)[sx.q(*(arg1 + 0xcc)) * 0xa]

if (r9_2 == arg5 || arg5 == 0)
    return memcpy(rbx, *(r11 + 8), *(r11 + 0x10)) __tailcall

uint32_t result = divu.dp.d(0:(*(r11 + 4) - 1 + *(rsi + &data_1439c85ec)), *(rsi + &data_1439c85ec))
int64_t rdi = *(r11 + 8)

if (result != 0)
    uint64_t rsi_1 = zx.q(r9_2)
    uint64_t rbp_1 = zx.q(result)
    uint64_t i
    
    do
        result = memcpy(rbx, rdi, rsi_1.d)
        rdi += rsi_1
        rbx += zx.q(arg5)
        i = rbp_1
        rbp_1 -= 1
    while (i != 1)

return result
