// 函数: sub_1403cc480
// 地址: 0x1403cc480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg1 + 0x128)

if (rax != 0)
    jump(rax)

png_error(arg1, "Call to NULL read function")
noreturn
