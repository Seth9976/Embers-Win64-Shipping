// 函数: sub_141e38180
// 地址: 0x141e38180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
int64_t* rdx = &arg1[7]
int64_t* rcx = &arg1[0x11]
int64_t arg_8
__builtin_memset(&arg_8, 0, 0x14)
*arg1 = &data_143248868
arg1[5] = 0
arg1[6] = 0
*(rdx + 0x1c) = 0x80
int64_t* rax = rdx[2]

if (rax != 0)
    rdx = rax

*rdx = 0
rdx[1] = 0
arg1[0xb].d = 0xffffffff
*(arg1 + 0x5c) = 0
arg1[0xd] = 0
arg1[0xe].d = 0
arg1[0xf] = 0
arg1[0x10] = 0
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax_1 = rcx[2]

if (rax_1 != 0)
    rcx = rax_1

*rcx = 0
rcx[1] = 0
void* rcx_1 = &arg1[0x1b]
arg1[0x15].d = 0xffffffff
*(arg1 + 0xac) = 0
arg1[0x17] = 0
arg1[0x18].d = 0
arg1[0x19] = 0
arg1[0x1a] = 0
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_2 = *(rcx_1 + 0x10)

if (rax_2 != 0)
    rcx_1 = rax_2

*rcx_1 = 0
*(rcx_1 + 8) = 0
arg1[0x1f].d = 0xffffffff
*(arg1 + 0xfc) = 0
arg1[0x21] = 0
arg1[0x22].d = 0
arg1[0x27] = 0
arg1[0x23].d = 0xffffffff
*(arg1 + 0x11c) = 0
__builtin_memset(&arg1[0x25], 0, 0x14)

if (*(arg1 + 0x13c) s<= 0xffffffff)
    sub_1405947f0(&arg1[0x26], 0)

int16_t* rax_3 = arg1[0x26]

if (rax_3 != 0)
    *rax_3 = 0

arg1[0x24].d = 0
arg1[0x2c] = 0
arg1[0x28].d = 0xffffffff
*(arg1 + 0x144) = 0
__builtin_memset(&arg1[0x2a], 0, 0x14)
int32_t rax_4 = *(arg1 + 0x164)
arg_8 = 0

if (rax_4 s< 0 && rax_4 != 0)
    sub_1405947f0(&arg1[0x2b], 0)

int16_t* rax_5 = arg1[0x2b]

if (rax_5 != 0)
    *rax_5 = 0

arg1[0x29].d = 0
return arg1
