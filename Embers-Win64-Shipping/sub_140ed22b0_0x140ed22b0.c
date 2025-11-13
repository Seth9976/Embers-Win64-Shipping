// 函数: sub_140ed22b0
// 地址: 0x140ed22b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x20) s<= 1)
    return 

int64_t rdx_2 = sx.q(*(arg1 + 0x20)) * 2
int64_t rax_1 = *(arg1 + 0x18)
int64_t* rbx_1 = *(rax_1 + (rdx_2 << 3) - 8)
*(rax_1 + (rdx_2 << 3) - 8) = 0
*(rax_1 + (rdx_2 << 3) - 0x10) = 0
sub_140dbae50(arg1 + 0x18, *(arg1 + 0x20) - 1, 1, 1)

if (rbx_1 == 0)
    return 

rbx_1[1].d -= 1

if (rbx_1[1].d != 1)
    return 

(**rbx_1)(rbx_1)
int32_t temp1_1 = *(rbx_1 + 0xc)
*(rbx_1 + 0xc) -= 1

if (temp1_1 == 1)
    jump(*(*rbx_1 + 8))
