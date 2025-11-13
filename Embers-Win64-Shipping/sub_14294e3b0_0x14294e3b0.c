// 函数: sub_14294e3b0
// 地址: 0x14294e3b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)
void* rax = *(arg1 + 8)
int64_t r11 = *(rax + 0x70)

if (r11 != 0)
    jump(r11)

int64_t rax_1 = *(rax + 0x68)

if (rax_1 == 0)
    return sub_14294e410(arg1, arg2, arg3, arg4, arg5) __tailcall

if (arg3 != 2)
    return 0

jump(rax_1)
