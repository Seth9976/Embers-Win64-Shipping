// 函数: sub_140bd19b0
// 地址: 0x140bd19b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x18)

if (((rcx u>> 0x11).b & 1) != 0)
    int64_t rax_4 = *(arg1 + 0x10)
    *(arg1 + 0x18) = rcx & 0xfffdffff
    *(arg1 + 0x10) = 0
    return rax_4

int64_t* rax_2 = j_sub_140a82f30(0x18)

if (rax_2 == 0)
    *(arg1 + 0x10) = 0
    return 0

*rax_2 = *(arg1 + 0x10)
rax_2[1] = 0
rax_2[2] = 0
*(arg1 + 0x10) = 0
return rax_2
