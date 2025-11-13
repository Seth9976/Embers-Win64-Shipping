// 函数: sub_141918550
// 地址: 0x141918550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *arg1
int64_t* r15 = arg1[1]
int64_t i_1 = 6
void* rsi_1 = arg2 - rbp
int32_t* rbx = rbp + 0xb0
int64_t i

do
    sub_14192af30(rsi_1 - 0xb0 + rbx, &rbx[-0x2c])
    *(rbx + rsi_1) = *rbx
    rbx = &rbx[0x2e]
    i = i_1
    i_1 -= 1
while (i != 1)
*(arg2 + 0x450) = *(rbp + 0x450)
*(arg2 + 0x460) = *(rbp + 0x460)
*(arg2 + 0x470) = *(rbp + 0x470)
*(arg2 + 0x480) = *(rbp + 0x480)
*(arg2 + 0x490) = *(rbp + 0x490)
*(arg2 + 0x4a0) = *(rbp + 0x4a0)
*(arg2 + 0x4b0) = *(rbp + 0x4b0)
*(arg2 + 0x4c0) = *(rbp + 0x4c0)
sub_14192af30(arg2 + 0x4c8, r15)
*(arg2 + 0x578) = r15[0x16].d
return arg2
