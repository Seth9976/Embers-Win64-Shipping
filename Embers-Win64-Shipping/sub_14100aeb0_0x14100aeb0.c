// 函数: sub_14100aeb0
// 地址: 0x14100aeb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d3ff08
arg1[1].d = 0
*(arg1 + 0xc) = 0
*arg1 = &data_142efcaf0
arg1[2].w = 0x100
*(arg1 + 0x18) = *arg2
*(arg1 + 0x28) = arg2[1]
*(arg1 + 0x38) = arg2[2]
*(arg1 + 0x48) = arg2[3]
*(arg1 + 0x58) = arg2[4]
*(arg1 + 0x68) = arg2[5]
*(arg1 + 0x78) = arg2[6]
*(arg1 + 0x88) = arg2[7]
*(arg1 + 0x98) = arg2[8]
*(arg1 + 0xa8) = arg2[9]
arg1[0x17] = arg2[0xa].q
arg1[0x18] = arg3
arg1[0x1e] = arg4
void* rax_1 = arg1[3]
*(rax_1 + 8) += 1
void* rax_2 = arg1[4]
*(rax_2 + 8) += 1
void* rax_3 = arg1[5]

if (rax_3 != 0)
    *(rax_3 + 8) += 1

void* rax_4 = arg1[6]

if (rax_4 != 0)
    *(rax_4 + 8) += 1

void* rax_5 = arg1[7]

if (rax_5 != 0)
    *(rax_5 + 8) += 1

void* rax_6 = arg1[8]

if (rax_6 != 0)
    *(rax_6 + 8) += 1

void* rax_7 = *arg2

if (rax_7 == 0)
    arg1[0x19] = rax_7
    arg1[0x1a] = rax_7
    arg1[0x1b] = rax_7
    arg1[0x1c] = rax_7
else
    *(arg1 + 0xc8) = *(rax_7 + 0x220)
    *(arg1 + 0xd8) = *(rax_7 + 0x230)

void* rax_8 = arg1[4]

if (rax_8 == 0 || *(rax_8 + 0xdc) == 0)
    rax_8.b = 0
else
    rax_8.b = 1

arg1[0x1d].b = rax_8.b
void* rax_9 = arg1[7]

if (rax_9 == 0 || *(rax_9 + 0xd8) == 0)
    rax_9.b = 0
else
    rax_9.b = 1

*(arg1 + 0xeb) = rax_9.b
void* rax_10 = arg1[5]

if (rax_10 == 0 || *(rax_10 + 0xd8) == 0)
    rax_10.b = 0
else
    rax_10.b = 1

*(arg1 + 0xe9) = rax_10.b
void* rax_11 = arg1[6]

if (rax_11 == 0 || *(rax_11 + 0xd8) == 0)
    rax_11.b = 0
else
    rax_11.b = 1

*(arg1 + 0xea) = rax_11.b
void* rax_12 = arg1[8]

if (rax_12 != 0 && *(rax_12 + 0xd8) != 0)
    *(arg1 + 0xec) = 1
    return arg1

*(arg1 + 0xec) = 0
return arg1
