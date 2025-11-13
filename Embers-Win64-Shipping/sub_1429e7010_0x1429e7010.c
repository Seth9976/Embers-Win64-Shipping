// 函数: sub_1429e7010
// 地址: 0x1429e7010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_1429e0bd0(arg1, 8)

if (rax == 0x49)
    int32_t rax_1 = sub_1429e0bd0(arg1, rax - 0x41)
    
    if (rax_1 == 0x83 && sub_1429e0bd0(arg1, rax_1 - 0x7b) == 0x42)
        return 1

return 0
