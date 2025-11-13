// 函数: sub_142b482f0
// 地址: 0x142b482f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = (*(*arg1 + 0x30))()
int64_t result = (*(*arg1 + 0x38))(arg1)
int64_t rdi_1 = 0
uint64_t rsi_3 = (result - rbx + 7) u>> 3

if (rbx u> result)
    rsi_3 = 0

if (rsi_3 != 0)
    do
        int64_t* rcx_1 = *rbx
        result = (*(*rcx_1 + 0x20))(rcx_1, arg2)
        rdi_1 += 1
        rbx = &rbx[1]
    while (rdi_1 != rsi_3)

return result
