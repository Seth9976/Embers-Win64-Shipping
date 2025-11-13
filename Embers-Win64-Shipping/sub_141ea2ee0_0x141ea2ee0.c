// 函数: sub_141ea2ee0
// 地址: 0x141ea2ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = *(arg2 + 0xb0)
int32_t rbx = 1
int32_t rdi_1 = rdi & 8
int32_t rsi_1 = rdi & 4

if (rsi_1 != 0 || rdi_1 != 0)
    char rax_1 = sub_1423f16c0(data_143f5b298)
    
    if (rsi_1 != 0 && sub_1423f1650(data_143f5b298) != 0)
        rbx = 0
    else if (rdi_1 != 0 && rax_1 != 0)
        rbx = 0

return zx.q(rbx * 2)
