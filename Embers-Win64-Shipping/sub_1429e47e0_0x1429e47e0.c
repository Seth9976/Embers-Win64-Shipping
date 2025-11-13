// 函数: sub_1429e47e0
// 地址: 0x1429e47e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1429e6730(arg1, 3, arg3)
int64_t i_4 = 2
int64_t rbx = arg1 + 0xe
int64_t i_3 = 2
int64_t i

do
    sub_1429e6730(rbx - 0xb, 1, arg3)
    sub_1429e6730(rbx - 0xa, 0xa, arg3)
    sub_1429e6730(rbx, 1, arg3)
    sub_1429e6730(rbx + 1, 0xa, arg3)
    rbx += 0x21
    i = i_3
    i_3 -= 1
while (i != 1)
int64_t rbp = arg1 + 0x19
int64_t i_5 = 2
int64_t result
int64_t i_1

do
    int64_t rbx_1 = rbp
    int64_t j_1 = 2
    int64_t j
    
    do
        sub_1429e6730(rbx_1, 3, arg3)
        rbx_1 += 3
        j = j_1
        j_1 -= 1
    while (j != 1)
    result = sub_1429e6730(rbp + 6, (j_1 + 3).d, arg3)
    rbp += 0x21
    i_1 = i_5
    i_5 -= 1
while (i_1 != 1)

if (arg2 != 0)
    int64_t rbx_2 = arg1 + 0x23
    int64_t i_2
    
    do
        sub_1429e6730(rbx_2 - 1, 1, arg3)
        result = sub_1429e6730(rbx_2, 1, arg3)
        rbx_2 += 0x21
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)

return result
