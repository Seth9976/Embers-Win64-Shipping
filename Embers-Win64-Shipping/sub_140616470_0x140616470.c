// 函数: sub_140616470
// 地址: 0x140616470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 0x10)
std::ostream::write(arg2, *(rdx + 8), sx.q(*(rdx + 0x10)))
std::ostream::put(arg2, 0xff)
std::ostream::put(arg2, *(arg1 + 8))
void* rdx_4 = *(arg1 + 0x18)
std::ostream::write(arg2, *(rdx_4 + 8), sx.q(*(rdx_4 + 0x10)))
int64_t* rdx_6 = *(arg1 + 0x20)

if (rdx_6[3] u>= 0x10)
    rdx_6 = *rdx_6

return std::ostream::write(arg2, rdx_6, sx.q(**(arg1 + 0x18))) __tailcall
