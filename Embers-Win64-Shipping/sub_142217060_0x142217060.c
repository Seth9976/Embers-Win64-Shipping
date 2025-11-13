// 函数: sub_142217060
// 地址: 0x142217060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_142192ca0(arg1[2], 0)
int64_t r8 = *arg1

if ((*(r8 + 0x118))(arg1, rax, r8) == 0 || (arg1[0x1c].b & 1) == 0)
    return 0

void*** result_1 = sub_1421ab380(0x140)
void*** result = result_1

if (result_1 == 0)
    result = nullptr
else
    *(rax + 0x30)
    sub_1421a88a0(result_1)
    result[5].d &= 0xfffffffe
    result[7].d = 0xffffffff
    *(result + 0x3c) = (*(result + 0x3c) & 0xffffffc2) | 2
    result[4] = 0
    *result = &data_1432e4490
    result[8].d = 0x41480000
    *(result + 0x44) = 0x41c80000
    sub_1421a88d0(&result[0xa])
    result[0x24] = 0
    result[0xa] = &data_1432e43d8
    result[0x25] = 0
    result[0x26].d = 0xffffffff
    *(result + 0x134) = 0
    result[0x27].d = 1
    *(result + 0x13c) = 1

int32_t r8_3 = (*(result + 0x3c) & 0xffffffe3) | 3
*(result + 0x3c) = r8_3
int32_t r8_4 = r8_3 | 0x20

if (*(arg1[0x47] + 0x34) f<= (zx.o(0)).d)
    r8_4 = r8_3 & 0xffffffdf

*(result + 0x3c) = r8_4
char rax_9 = (*(*arg1 + 0x218))(arg1, &result[0xa])
void** r8_5 = *result

if (rax_9 != 0)
    r8_5[0x10](result, zx.q(arg2), r8_5)
    return result

(*r8_5)(result, 1, r8_5)
return nullptr
