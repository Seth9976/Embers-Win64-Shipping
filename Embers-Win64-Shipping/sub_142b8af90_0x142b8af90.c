// 函数: sub_142b8af90
// 地址: 0x142b8af90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_142a94fd0(arg2)

if (*(arg1 + 0x490) == 0x201)
    sub_142b888c0(arg1 + 0xf0, "Scripts%short", nullptr, rax, arg3)

if (*(arg1 + 0x490) != 0x201 || (*(arg3 + 8) & 1) != 0)
    sub_142b888c0(arg1 + 0xf0, "Scripts", nullptr, rax, arg3)

return sub_142b88730(arg1, 1, arg3) __tailcall
