// 函数: sub_141998400
// 地址: 0x141998400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rdx = arg2 u>> arg4
uint32_t r11_1 = arg1 u>> arg4
uint32_t rcx_1 = 1
int64_t rbx = sx.q(arg3) * 0x28
uint32_t rax_1 = 1

if (rdx u>= 1)
    rax_1 = rdx

if (r11_1 u>= 1)
    rcx_1 = r11_1

return zx.q(divu.dp.d(0:(rcx_1 - 1 + *(rbx + 0x1439c85e8)), *(rbx + 0x1439c85e8)))
    * zx.q(divu.dp.d(0:(rax_1 - 1 + *(rbx + &data_1439c85ec)), *(rbx + &data_1439c85ec)))
    * sx.q((&data_1439c85f4)[sx.q(arg3) * 0xa])
