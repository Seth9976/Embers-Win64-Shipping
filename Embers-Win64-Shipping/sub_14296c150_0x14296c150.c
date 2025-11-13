// 函数: sub_14296c150
// 地址: 0x14296c150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)
int32_t* rax = *(arg1 + 8)
void* rcx = *(rax + 8)

if (*(rcx + 0x18) != 0 && *(rax + 0x10) != 0)
    *rax = 2

return sub_14296bd40(rcx) __tailcall
