// 函数: sub_142025560
// 地址: 0x142025560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
arg3.b = 1
char rax
int64_t r8
rax, r8 = sub_140b0f6c0(&arg_18, u"OPEN")

if (rax != 0)
    return (*(*(arg1 - 0x28) + 0x260))(arg1 - 0x28, arg_18, arg4, arg2)

r8.b = 1
char rax_3
int64_t r8_2
rax_3, r8_2 = sub_140b0f6c0(&arg_18, u"DISCONNECT")

if (rax_3 != 0)
    return (*(*(arg1 - 0x28) + 0x268))(arg1 - 0x28, arg_18, arg4, arg2)

r8_2.b = 1
char rax_6
int64_t r8_4
rax_6, r8_4 = sub_140b0f6c0(&arg_18, u"RECONNECT")

if (rax_6 != 0)
    return (*(*(arg1 - 0x28) + 0x270))(arg1 - 0x28, arg_18, arg4, arg2)

r8_4.b = 1

if (sub_140b0f6c0(&arg_18, u"TRAVEL") == 0)
    return 0

return (*(*(arg1 - 0x28) + 0x278))(arg1 - 0x28, arg_18, arg4, arg2)
