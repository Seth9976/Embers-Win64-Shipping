// 函数: sub_141be6120
// 地址: 0x141be6120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x6e0)
void var_48

if (rbx != 0)
    sub_140f60ba0(rbx, sub_140f1a8d0(&var_48, arg2))
sub_140627710(arg1 + 0x5e8, arg2)
*(arg1 + 0x600) ^= (*(arg1 + 0x600) ^ arg2[3].d) & 1
int32_t rcx_6 = ((arg2[3].d ^ *(arg1 + 0x600)) & 2) ^ *(arg1 + 0x600)
*(arg1 + 0x600) = rcx_6
int32_t rdx_5 = ((arg2[3].d ^ rcx_6) & 4) ^ rcx_6
*(arg1 + 0x600) = rdx_5
int32_t result = ((arg2[3].d ^ rdx_5) & 8) ^ rdx_5
*(arg1 + 0x600) = result
return result
