// 函数: sub_14271ad80
// 地址: 0x14271ad80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1426392c0(arg1, arg2)
arg1[7].b = 0x7f
*arg1 = &data_143482548
arg1[5] = &data_143482828
__builtin_memset(&arg1[0xe], 0, 0x20)
sub_1426a6430(&arg1[0x12])
__builtin_memset(&arg1[0x1a], 0, 0x20)
arg1[0x1e].d = 0xffffffff
arg1[0x1f] = 0
arg1[0x20] = 0
*(arg1 + 0x3c) |= 8
arg1[0x1e].d = data_143b57f9c
int64_t* rax_1 = sub_14272b250()
void* rax_2 = rax_1[0x23]

if (rax_2 == 0)
    int64_t rdx = *rax_1
    (*(rdx + 0x390))(rax_1, rdx)
    rax_2 = rax_1[0x23]

*(arg1 + 0xb4) = *(rax_2 + 0x88)
int64_t* rax_4 = sub_14272b250()
void* rax_5 = rax_4[0x23]

if (rax_5 == 0)
    int64_t rdx_1 = *rax_4
    (*(rdx_1 + 0x390))(rax_4, rdx_1)
    rax_5 = rax_4[0x23]

arg1[0x16].d ^= (zx.d(*(rax_5 + 0x94)) << 5 ^ arg1[0x16].d) & 0x20
int64_t* rax_10 = sub_14272b250()
void* rax_11 = rax_10[0x23]

if (rax_11 == 0)
    int64_t rdx_2 = *rax_10
    (*(rdx_2 + 0x390))(rax_10, rdx_2)
    rax_11 = rax_10[0x23]

arg1[0x16].d = (((zx.d(*(rax_11 + 0x95)) << 3 ^ arg1[0x16].d) & 8) ^ arg1[0x16].d) | 4
sub_142639b70(arg1, sub_142729c10())
sub_142639ae0(arg1, sub_142729c10())
*(arg1 + 0x109) &= 0xfe
arg1[0x21].b = 5
return arg1
