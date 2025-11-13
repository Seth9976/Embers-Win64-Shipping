// 函数: sub_1423bd4f0
// 地址: 0x1423bd4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9_1 = arg1[0x10]
int32_t rax = *(r9_1 + 0xc0)

if (rax s<= arg2)
    arg2 = rax

int32_t result = *(r9_1 + 0xc4)

if (result s<= arg3)
    arg3 = result

if (arg2 == *(arg1 + 0xa4) && arg3 == arg1[0x15].d)
    return result

*(arg1 + 0xa4) = arg2
arg1[0x15].d = arg3
return sub_1419ba620(arg1, arg4, arg3) __tailcall
