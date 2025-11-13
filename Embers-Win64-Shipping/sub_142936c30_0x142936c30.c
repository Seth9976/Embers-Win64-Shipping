// 函数: sub_142936c30
// 地址: 0x142936c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rax = sub_1428e4770(arg2)
void* rcx_1 = *(arg1 + 0x60)

while (*(rcx_1 + 8) != 0)
    if (rax == *rcx_1)
        return sub_1428a6ba0(*(rcx_1 + 8)) __tailcall
    
    rcx_1 += 0x18

return sub_1428ea330(arg1, arg2) __tailcall
