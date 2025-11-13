// 函数: sub_1426bf7d0
// 地址: 0x1426bf7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x84)
arg1[0x12].d &= 0xfffffffe
*(arg1 + 0x84) = 1
arg1[0x11].d = 1

if (rax == 0)
    void* rax_1 = arg1[7]
    
    if (rax_1 != 0)
        sub_14273f4b0(arg1, *(rax_1 + 0xb0))
        int64_t rax_2
        rax_2.b = 1
        return rax_2
    
    sub_14273f4b0(arg1, 0)

rax.b = 1
return rax
