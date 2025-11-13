// 函数: sub_140b54f90
// 地址: 0x140b54f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t* rcx = *(arg1 + 0x60)

if (rcx != 0)
    int64_t* rax_2 = sub_140b4cd20(rcx, arg2)
    *(arg1 + 0x88) = 0
    return rax_2

int64_t* rax = j_sub_140a82f30(0x10)

if (rax == 0)
    *(arg1 + 0x60) = rax
    *(arg1 + 0x88) = 0
    return rax

int64_t* rax_1 = sub_140b4c5b0(rax, arg2)
*(arg1 + 0x60) = rax_1
*(arg1 + 0x88) = 0
return rax_1
