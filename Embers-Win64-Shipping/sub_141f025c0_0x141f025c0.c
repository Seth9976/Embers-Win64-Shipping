// 函数: sub_141f025c0
// 地址: 0x141f025c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141db5b80(arg1)
*arg1 = &data_14324ba78
int64_t arg_8
uint64_t rbx = *sub_140b58260(&arg_8, u"PortalComponent", 1)
int64_t* rax_1 = sub_142531910()
void* rax_2 = sub_140cd9110(arg1, rbx, rax_1, rax_1, 1, 0)
int32_t var_10 = 0x42c80000
int32_t var_20 = 0x42c80000
int64_t var_28 = _mm_unpacklo_ps(0x41200000, 0x42c80000)
arg1[0x44] = rax_2
sub_141f49070(rax_2, &var_28)
arg1[0x26] = arg1[0x44]
void arg_18
uint64_t rbx_1 = *sub_140b58260(&arg_18, u"DrawBox0", 1)
int64_t* rax_5 = sub_1424814a0()
void* rax_6 = sub_140cd9110(arg1, rbx_1, rax_5, rax_5, 1, 0)
void* rdx_3 = arg1[0x44]
arg_8 = 0
sub_141f4a650(rax_6, rdx_3, 0)
*(rax_6 + 0x20e) |= 8
int64_t r9_2 = *rax_6
(*(r9_2 + 0x620))(rax_6, data_143f3a590, 1, r9_2)
int32_t var_10_1 = 0x3f800000
*(rax_6 + 0x420) = _mm_unpacklo_ps(0x3f800000, 0x3f800000)
*(rax_6 + 0x428) = 0x3f800000
arg1[0x44][0x3e] = rax_6
return arg1
