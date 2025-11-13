// 函数: sub_1403fe780
// 地址: 0x1403fe780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = arg1[4].d
uint32_t rbx_1 = r11 u>> arg4
int32_t rax = 1 << arg4

if (arg2 == 0)
    arg1[4].d = r11 - (rax - arg3) * rbx_1
    return sub_1403fe4a0(arg1) __tailcall

*(arg1 + 0x24) += r11 - (rax - arg2) * rbx_1
arg1[4].d = (arg3 - arg2) * rbx_1
return sub_1403fe4a0(arg1) __tailcall
