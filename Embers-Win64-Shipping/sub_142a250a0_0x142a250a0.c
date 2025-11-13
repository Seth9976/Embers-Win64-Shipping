// 函数: sub_142a250a0
// 地址: 0x142a250a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *(arg2 + 0x364)
int32_t rax_4 = (((r9 + 7) s>> 3) * arg3) s>> (*(arg2 + 0x453c)).b << 3

if (rax_4 s< r9)
    r9 = rax_4

*(arg1 + 8) = r9
int32_t r8 = *(arg2 + 0x364)
int32_t rdx_4 = (((r8 + 7) s>> 3) * (arg3 + 1)) s>> (*(arg2 + 0x453c)).b << 3

if (rdx_4 s< r8)
    r8 = rdx_4

*(arg1 + 0xc) = r8
return arg3 + 1
