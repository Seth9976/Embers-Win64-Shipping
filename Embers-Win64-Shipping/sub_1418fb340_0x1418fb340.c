// 函数: sub_1418fb340
// 地址: 0x1418fb340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)
int32_t rax = (rdi + 1).d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1405a4d70(arg1)

*(*arg1 + (rdi << 3)) = "VK_KHR_surface"
int64_t rdi_1 = sx.q(arg1[1].d)
int32_t rax_2 = (rdi_1 + 1).d
arg1[1].d = rax_2

if (rax_2 s> *(arg1 + 0xc))
    sub_1405a4d70(arg1)

*(*arg1 + (rdi_1 << 3)) = "VK_KHR_win32_surface"
int64_t rdi_2 = sx.q(arg1[1].d)
int32_t rax_4 = (rdi_2 + 1).d
arg1[1].d = rax_4

if (rax_4 s> *(arg1 + 0xc))
    sub_1405a4d70(arg1)

int64_t result = *arg1
*(result + (rdi_2 << 3)) = "VK_KHR_get_surface_capabilities2"
return result
