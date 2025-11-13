// 函数: sub_141411200
// 地址: 0x141411200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142f7e2a8
arg1[1] = arg3
arg1[2] = arg4
arg1[3] = *arg8
arg1[4] = arg8[1]
arg1[5].d = arg8[2].d
arg1[6] = arg8[3]
arg1[7] = arg8[4]
arg1[8] = arg8[5]
arg1[9] = arg8[6]
arg1[0xa].d = arg8[7].d
arg1[0xb] = arg5
arg1[0xc] = 0
arg1[0xe].d = 0
__builtin_memset(&arg1[0x10], 0, 0x31)
data_143f0f224
*(arg1 + 0xb1) = arg7
uint64_t r8 = zx.q(*(data_143f02a38 + 4))
*(arg1 + 0x6c) = r8.d
uint32_t rdx_1 = (r8 << 3).d
*(arg1 + 0x74) = *(data_143ed2de8 + 4)
void* rax_12
rax_12.b = *(data_143ed2da0 + 4) != 0
*(arg1 + 0x79) = rax_12.b
void* rax_13
rax_13.b = *(data_143ed2db8 + 4) != 0
arg1[0xf].b = rax_13.b

if (rdx_1 s> *(arg1 + 0x8c))
    sub_14083ad10(&arg1[0x10], rdx_1)
    r8 = zx.q(*(arg1 + 0x6c))

uint32_t rdx_2 = (r8 << 3).d

if (rdx_2 s> *(arg1 + 0x9c))
    sub_14083ad10(&arg1[0x12], rdx_2)
    r8 = zx.q(*(arg1 + 0x6c))

uint32_t rdx_3 = (r8 << 3).d

if (rdx_3 s> *(arg1 + 0xac))
    sub_14113b8b0(&arg1[0x14], rdx_3)

data_143ed4aa8 = arg1
return arg1
