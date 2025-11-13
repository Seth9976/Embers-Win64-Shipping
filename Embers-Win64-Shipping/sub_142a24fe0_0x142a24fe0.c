// 函数: sub_142a24fe0
// 地址: 0x142a24fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = *(arg2 + 0x35c)
int32_t rax_4 = (((r10 + 7) s>> 3) * arg3) s>> (*(arg2 + 0x4540)).b << 3

if (rax_4 s< r10)
    r10 = rax_4

*arg1 = r10
int32_t r8 = *(arg2 + 0x35c)
int32_t rdx_4 = (((r8 + 7) s>> 3) * (arg3 + 1)) s>> (*(arg2 + 0x4540)).b << 3

if (rdx_4 s< r8)
    r8 = rdx_4

arg1[1] = r8
int32_t rdx_5 = *(arg2 + 0x364)
int32_t rax_10 = (((rdx_5 + 7) s>> 3) * arg4) s>> (*(arg2 + 0x453c)).b << 3

if (rax_10 s< rdx_5)
    rdx_5 = rax_10

arg1[2] = rdx_5
int32_t r8_1 = *(arg2 + 0x364)
int32_t rdx_10 = (((r8_1 + 7) s>> 3) * (arg4 + 1)) s>> (*(arg2 + 0x453c)).b << 3

if (rdx_10 s< r8_1)
    r8_1 = rdx_10

arg1[3] = r8_1
return arg4 + 1
