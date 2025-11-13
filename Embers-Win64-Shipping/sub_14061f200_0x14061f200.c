// 函数: sub_14061f200
// 地址: 0x14061f200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
sub_141ed2eb0(arg1, sub_140d20910())
*arg1 = &data_142d68f50
arg1[5] = &data_142d69338
int64_t rax_3 = j_sub_140a82f30(0x20)
int64_t var_58 = rax_3
__builtin_strncpy(rax_3, "RtMidi Input Client", 0x14)
sub_14061ed80(&arg1[0x16], 0, &var_58, 0x64)
j_sub_140a74f90(rax_3)
int64_t var_40 = 0xf
int64_t var_48 = 0
var_58.b = 0
int64_t rax_4 = j_sub_140a82f30(0x20)
int64_t var_38 = rax_4
__builtin_strncpy(rax_4, "RtMidi Output Client", 0x15)
sub_14061eff0(&arg1[0x18], 0)
j_sub_140a74f90(rax_4)
int64_t var_28 = 0
int64_t var_20 = 0xf
var_38.b = 0
__builtin_memset(&arg1[0x1a], 0, 0x30)
arg1[0x21] = 0
arg1[0x22] = 0
int64_t* rax_5 = j_sub_140a82f30(0x28)

if (rax_5 == 0)
    rax_5 = nullptr
else
    *rax_5 = 0
    __builtin_memset(&rax_5[2], 0, 0x18)

arg1[0x25] = rax_5
arg1[0x24] = rax_5
*(arg1 + 0x3a) |= 2
arg1[0x20].b = 0
__security_check_cookie(rax_1 ^ &var_78)
return arg1
