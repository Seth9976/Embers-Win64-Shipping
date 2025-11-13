// 函数: sub_141960e70
// 地址: 0x141960e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
*(arg1 + 8) = *arg3
*(arg1 + 0x18) = arg3[1]
*(arg1 + 0x28) = arg3[2]
*(arg1 + 0x38) = arg3[3]
*(arg1 + 0x48) = arg3[4]
*(arg1 + 0x58) = arg3[5]
*(arg1 + 0x68) = arg3[6]
*(arg1 + 0x78) = arg3[7]
*(arg1 + 0x88) = arg3[8]
*(arg1 + 0x98) = arg3[9]
arg1[0x15] = arg3[0xa].q
void* rax_1 = arg1[1]

if (rax_1 != 0)
    *(rax_1 + 8) += 1

void* rax_2 = arg1[2]

if (rax_2 != 0)
    *(rax_2 + 8) += 1

void* rax_3 = arg1[5]

if (rax_3 != 0)
    *(rax_3 + 8) += 1

void* rax_4 = arg1[6]

if (rax_4 != 0)
    *(rax_4 + 8) += 1

void* rax_5 = arg1[4]

if (rax_5 != 0)
    *(rax_5 + 8) += 1

void* rax_6 = arg1[3]

if (rax_6 != 0)
    *(rax_6 + 8) += 1

void* rax_7 = arg1[7]

if (rax_7 != 0)
    *(rax_7 + 8) += 1

void* rax_8 = arg1[8]

if (rax_8 != 0)
    *(rax_8 + 8) += 1

void* rax_9 = arg1[9]

if (rax_9 != 0)
    *(rax_9 + 8) += 1

return arg1
