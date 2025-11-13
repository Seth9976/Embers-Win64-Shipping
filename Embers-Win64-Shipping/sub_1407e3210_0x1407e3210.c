// 函数: sub_1407e3210
// 地址: 0x1407e3210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x24) = 1
*arg1 = &data_142dc38e8
arg1[4].d = 0
*(arg1 + 0x34) = data_143dbb1f8.q
int32_t rax = data_143dbb200
*(arg1 + 0x3c) = rax
arg1[5] = *(arg1 + 0x34)
arg1[6].d = rax
arg1[8].b = 0
arg1[9] = 0
arg1[0xa] = 0
sub_140843230(&arg1[0xb])
sub_140843230(&arg1[0x78])
__builtin_memset(&arg1[0xe5], 0, 0x50)
void* rcx_2 = &arg1[0xf9]
arg1[0xf0] = arg2
__builtin_memset(&arg1[0xf1], 0, 0x40)
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_1 = *(rcx_2 + 0x10)

if (rax_1 != 0)
    rcx_2 = rax_1

*rcx_2 = 0
*(rcx_2 + 8) = 0
arg1[0xfd].d = 0xffffffff
*(arg1 + 0x7ec) = 0
arg1[0xff] = 0
arg1[0x100].d = 0
__builtin_memset(&arg1[0x101], 0, 0x20)
*(arg1 + 0x84c) = 0
sub_14081a4a0(&arg1[0x10a])
__builtin_memset(&arg1[0x121], 0, 0x20)
arg1[0x125].d = 0xffffffff
*(arg1 + 0x92c) = 0
arg1[0x127] = 0
arg1[0x128].d = 0
*(arg1 + 0x944) = 1
__builtin_memset(&arg1[0x129], 0, 0x14)
arg1[1].b = 0
int64_t* rax_2 = j_sub_140a82f30(0xd0)
int64_t* rbx_1 = rax_2

if (rax_2 == 0)
    rbx_1 = nullptr
else
    sub_1407e3000(rax_2, &data_143ce2ed0)
    __builtin_memset(&rbx_1[8], 0, 0x1c)
    __builtin_memset(&rbx_1[0xc], 0, 0x2c)
    rbx_1[0x12].d = 0
    rbx_1[0x13] = 0
    rbx_1[0x14] = 0
    rbx_1[0x17] = 0
    rbx_1[0x18].d = 0
    *(rbx_1 + 0xc4) = 2
    rbx_1[0x19].d = 0xffffffff
    *(rbx_1 + 0xcc) = 0

void* rax_3 = arg1[0xf0]
arg1[0xef] = rbx_1

if (rax_3 == 0)
    arg1[0x121] = 0
    return arg1

arg1[0x121] = *(rax_3 + 0x6f0)
return arg1
