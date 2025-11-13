// 函数: sub_141998350
// 地址: 0x141998350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg4) * 0x28
uint32_t r10 = *(rbx + 0x1439c85e8)
uint32_t rax_1 = r10
uint32_t rdi = *(rbx + &data_1439c85ec)
uint32_t r9 = *(rbx + 0x1439c85f0)
uint32_t rsi_1 = arg3 u>> arg5
uint32_t r11_1 = arg1 u>> arg5
uint32_t rbp_1 = arg2 u>> arg5

if (r11_1 u>= r10)
    rax_1 = r11_1

uint32_t rax_6 = r9

if (rsi_1 u>= r9)
    rax_6 = rsi_1

uint32_t rcx_3 = rdi

if (rbp_1 u>= rdi)
    rcx_3 = rbp_1

return zx.q(divu.dp.d(0:(rdi - 1 + rcx_3), rdi))
    * zx.q(divu.dp.d(0:(rax_1 - 1 + r10), r10) * (&data_1439c85f4)[sx.q(arg4) * 0xa])
    * zx.q(divu.dp.d(0:(rax_6 - 1 + r9), r9))
