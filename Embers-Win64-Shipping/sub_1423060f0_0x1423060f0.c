// 函数: sub_1423060f0
// 地址: 0x1423060f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d3a3a0(arg1, nullptr)
arg1[2] = 0xffffffff
arg1[3].b = 0
*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
sub_1405947f0(&arg1[4], 9)
int32_t rax = arg1[6] + 9
arg1[6] = rax

if (rax s> arg1[7])
    sub_140594770(&arg1[4])

sub_1405a7220(*(arg1 + 0x10), 9, "Clothing", 9, 0x3f)
*(arg1 + 0x20) = 0
arg1[0xa].b = 0
*(arg1 + 0x50) = 0
arg1[0xc] = 0xffffffff
arg1[0xd] = 0
__builtin_memset(&arg1[0x10], 0, 0x14)
int64_t arg_8 = 0

if (arg1[0x15] s<= 0xffffffff)
    sub_1405947f0(&arg1[0x12], 0)

int16_t* rax_1 = *(arg1 + 0x48)

if (rax_1 != 0)
    *rax_1 = 0

*(arg1 + 0x34) = 0
arg1[0xc] = 0xffffffff
*(arg1 + 0x40) = 0
int32_t rax_2 = arg1[0x15]
arg_8 = 0
arg1[0x14] = 0

if (rax_2 s< 0 && rax_2 != 0)
    sub_1405947f0(&arg1[0x12], 0)

int16_t* rax_3 = *(arg1 + 0x48)

if (rax_3 != 0)
    *rax_3 = 0

arg1[0xe] = 0
return arg1
