// 函数: sub_140fcbd90
// 地址: 0x140fcbd90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x158)

if (result == 0)
    return result

result[1] = 0
result[2] = 0
*(result + 0xf4) = 0
__builtin_memset(result + 0xfc, 0xff, 0x20)
__builtin_memset(result + 0x11c, 0, 0x1e)
memset(&result[4], 0, 0x120)
*result = &data_142ef35e0
result[3] = &data_142ef3cf0
sub_140b4c850(&result[0x28], 0)
void arg_18
data_143f0f1a0 = sub_141987fc0(*sub_140b58260(&arg_18, u"PCD3D_SM5", 1))
uint64_t rflags
int32_t temp0
temp0, rflags = _bit_scan_reverse(0x4000)
data_1439c7a78 = 0x4000
int32_t rax_4 = 0x20 << 0x1a s>> 0x1f
uint64_t rflags_1
int32_t temp0_1
temp0_1, rflags_1 = _bit_scan_reverse(0x3fff)
int32_t rdx

if (rax_4 == 0)
    rdx = 0x20
else
    rdx = 0x1f - temp0_1

int32_t rax_7 = (not.d(rax_4) & (0x20 - rdx)) + 1

if (rax_7 s>= 0xe)
    rax_7 = 0xe

data_1439c7a00 = rax_7
return result
