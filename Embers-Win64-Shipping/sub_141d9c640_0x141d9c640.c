// 函数: sub_141d9c640
// 地址: 0x141d9c640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = sub_140a82f30(0x28, 8)
*arg2 = rax
*rax = &data_143239850
rax[1] = *(arg1 + 8)
rax[2].d = *(arg1 + 0x10)
rax[3] = 0
rax[4].d = 0

if (arg1 + 0x18 != &rax[3] && *(arg1 + 0x20) != 0)
    int64_t* rcx_1 = *(arg1 + 0x18)
    
    if (rcx_1 != 0)
        int64_t r8_1 = *rcx_1
        (*(r8_1 + 0x40))(rcx_1, &rax[3], r8_1)

*rax = &data_143239870
return &rax[1]
