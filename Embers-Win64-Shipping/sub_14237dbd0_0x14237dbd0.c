// 函数: sub_14237dbd0
// 地址: 0x14237dbd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141db5b80(arg1)
*arg1 = &data_143335d68
sub_141dd7d00(arg1, 0)
uint64_t rbx = data_143f597e0
int64_t* rax = sub_1425b0750()
void* rax_1
int64_t r8_1
rax_1, r8_1 = sub_140cd9110(arg1, rbx, rax, rax, 1, 0)
arg1[0x44] = rax_1
r8_1.b = 1
int64_t r9_1 = *rax_1
(*(r9_1 + 0x620))(rax_1, data_143f3a598, r8_1, r9_1)
*(arg1[0x44] + 0x14f) = 0
sub_141f256b0(arg1[0x44], 0)
void* rax_3 = arg1[0x44]
*(rax_3 + 0x44d) |= 8
int64_t rbx_1 = arg1[2]
arg1[0x26] = arg1[0x44]
char rcx_4 = 0

if (rbx_1 == sub_1425b0690())
    rcx_4 = 2

*(arg1 + 0x5b) &= 0xfd
*(arg1 + 0x5b) |= rcx_4
return arg1
