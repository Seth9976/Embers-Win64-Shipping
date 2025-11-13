// 函数: sub_142a25110
// 地址: 0x142a25110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *(arg2 + 0x35c)
int32_t rax_4 = (((r9 + 7) s>> 3) * arg3) s>> (*(arg2 + 0x4540)).b << 3

if (rax_4 s< r9)
    r9 = rax_4

*arg1 = r9
int32_t r8 = *(arg2 + 0x35c)
int32_t rdx_4 = (((r8 + 7) s>> 3) * (arg3 + 1)) s>> (*(arg2 + 0x4540)).b << 3

if (rdx_4 s< r8)
    r8 = rdx_4

arg1[1] = r8
return arg3 + 1
