// 函数: sub_142a6de00
// 地址: 0x142a6de00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = 1
void* rcx = arg1[0x29]

if (rcx != 0)
    rax = sub_141d9f9a0(rcx)

int32_t arg_8 = 0

if (rax != 0 && (*(*arg1 + 0xd8))(arg1, 0, &arg_8) != 0 && (*(*arg1 + 0xd8))(arg1, 1, &arg_8) != 0)
    return 1

return 0
