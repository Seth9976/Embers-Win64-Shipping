// 函数: sub_14101a2c0
// 地址: 0x14101a2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = j_sub_140a82f30(0xc8)

if (result == 0)
    return result

int32_t rbx = arg1[0xf].d
int32_t rbp = *(arg1 + 0x7c)
int32_t rsi = arg1[0xe].d
int32_t rdi = *(arg1 + 0x74)
int32_t r14 = arg1[0x10].d
sub_14100d5f0(result, *arg1, *(arg1 + 0xc), &arg1[3], *(arg1 + 0x2c), *(arg1 + 0x14), arg1[2].d)
*(result + 0x74) = rbp
result[0xe].d = rbx
result[0xf].d = rdi
*(result + 0x7c) = rsi
result[0x10].d = r14
__builtin_memset(&result[0x11], 0, 0x30)
*(result + 0xbc) = 0
result[0x18].b = 0
uint64_t rflags
int32_t temp0_1
temp0_1, rflags = _bit_scan_reverse(((
    zx.q(divu.dp.d(0:(result[0xe].d - 1 + *(result + 0x74)), *(result + 0x74))) << 1)
    + -ffffffffffffffff).d)
result[0x17].d = temp0_1
sub_141033dd0(result)
return result
