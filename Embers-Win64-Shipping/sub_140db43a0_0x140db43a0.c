// 函数: sub_140db43a0
// 地址: 0x140db43a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8_1 = *arg1
void* rdx_2 = (sx.q(arg1[1].d) << 5) + *(r8_1 + 0x10)
char result = *(rdx_2 + 0x1b) | 1
bool cond:0 = *(rdx_2 + 0x18) == 0
*(rdx_2 + 0x1b) = result

if (cond:0)
    result &= 0xfd
    *(rdx_2 + 0x1b) = result
else if ((result & 6) == 0)
    return sub_140db8590(r8_1 + 0x20, rdx_2) __tailcall

return result
