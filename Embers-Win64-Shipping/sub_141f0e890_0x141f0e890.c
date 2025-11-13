// 函数: sub_141f0e890
// 地址: 0x141f0e890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x180)

if (result == 0)
    return 0

int64_t arg_10 = 0
sub_1422883b0(result, arg1, 0)
*result = &data_14326e208
result[0x2a] = 0
int32_t rbp = arg1[0x82].d
int64_t r15 = arg1[0x81]
result[0x2b].d = rbp

if (rbp != 0)
    sub_14174fe60(&result[0x2a], rbp, 0)
    memcpy(result[0x2a], r15, rbp * 0x34)
else
    *(result + 0x15c) = 0

result[0x2c] = 0
int64_t rbp_1 = sx.q(arg1[0x84].d)
int64_t r15_1 = arg1[0x83]
result[0x2d].d = rbp_1.d

if (rbp_1.d != 0)
    sub_1407751d0(&result[0x2c], rbp_1.d, 0)
    memcpy(result[0x2c], r15_1, (rbp_1 * 0x28).d)
else
    *(result + 0x16c) = 0

result[0x2e] = 0
sub_141f009d0(&result[0x2e], arg1[0x86], arg1[0x87].d, 0, 0)
*(result + 0x39) &= 0xfe
return result
