// 函数: sub_1420d8400
// 地址: 0x1420d8400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141db5b80(arg1)
*arg1 = &data_1432c1e90
void arg_8
uint64_t rbx = *sub_140b58260(&arg_8, u"BoxComponent0", 1)
int64_t* rax_1 = sub_1424814a0()
void* rax_2 = sub_140cd9110(arg1, rbx, rax_1, rax_1, 1, 0)
arg1[0x44] = rax_2
arg1[0x26] = rax_2
*(rax_2 + 0x14f) = 2
int32_t rax_3 = data_143a2e4c8
int64_t* rcx_2 = arg1[0x44]
int64_t var_18 = data_143a2e4c0
int32_t var_10 = rax_3
sub_141f48ee0(rcx_2, &var_18)
sub_141ef5320(arg1[0x44], 0)
void* rax_4 = arg1[0x44]
int64_t r8_1
r8_1.b = 1
arg1[0x45].b = 1
*(rax_4 + 0x41c) |= 1
void* rax_5 = arg1[0x44]
*(rax_5 + 0x14d) &= 0xef
void* rax_6 = arg1[0x44]
*(rax_6 + 0x20e) |= 8
int64_t* rcx_4 = arg1[0x44]
(*(*rcx_4 + 0x620))(rcx_4, data_143f3a590, r8_1)
void* rcx_5 = arg1[0x44]
int32_t var_10_1 = 0x3f000000
*(rcx_5 + 0x420) = _mm_unpacklo_ps(0x3f000000, 0x3f000000)
*(rcx_5 + 0x428) = 0x3f000000
sub_141dd7d00(arg1, 0)
return arg1
