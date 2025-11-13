// 函数: sub_140bd86a0
// 地址: 0x140bd86a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x40))(arg2, *(arg1 + 0x230), zx.q(*(arg1 + 0x238)), arg1, 0)
(*(*arg2 + 0x40))(arg2, *(arg1 + 0x240), zx.q(*(arg1 + 0x248)), arg1, 0)
(*(*arg2 + 0x40))(arg2, *(arg1 + 0x250), zx.q(*(arg1 + 0x258)), arg1, 0)
(*(*arg2 + 0x40))(arg2, *(arg1 + 0x260), zx.q(*(arg1 + 0x268)), arg1, 0)
(*(*arg2 + 0x40))(arg2, *(arg1 + 0x270), zx.q(*(arg1 + 0x278)), arg1, 0)
(*(*arg2 + 0x40))(arg2, *(arg1 + 0x280), zx.q(*(arg1 + 0x288)), arg1, 0)
int64_t i = *(arg1 + 0x290)

for (int64_t rbp_2 = (sx.q(*(arg1 + 0x298)) << 4) + i; i != rbp_2; i += 0x10)
    (*(*arg2 + 0x38))(arg2, i + 8, 0, 0)

(*(*arg2 + 0x38))(arg2, arg1 + 0x2a0, arg1, 0)
return sub_140bd83c0(arg1, arg2) __tailcall
