// 函数: sub_141951880
// 地址: 0x141951880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d3ff08
arg1[1].d = 0
*(arg1 + 0xc) = 0
arg1[2].w = 0x100
arg1[3] = 0
arg1[4].d = 0
*(arg1 + 0x24) = 0
*arg1 = &data_142ff8b88
arg1[5] = arg3

if (arg3 != 0)
    *(arg3 + 8) += 1

arg1[6] = arg2
int32_t arg_20 = 0
int64_t rcx = sx.q(data_1439c74c8)
int32_t rbx
int32_t r12

if (0x400 - rcx.d s<= 1)
    memcpy(&arg_20, &data_143efbd00 + (rcx << 2), (0x400 - rcx.d) << 2)
    data_143effa28(0x400, &data_143efbd00)
    r12 = 1 - (0x400 - rcx.d)
    memcpy(&(&arg_20)[sx.q(0x400 - rcx.d)], &data_143efbd00, r12 << 2)
    rbx = arg_20
else
    rbx = *(&data_143efbd00 + (rcx << 2))
    r12 = (rcx + 1).d
    arg_20 = rbx

int32_t rbp_1 = data_1439c7498
arg2.b = 1
data_1439c74c8 = r12
void* rax_2 = sub_14190d690(arg1[6], arg2.b)
int64_t rdx_1 = sx.q(rbp_1 - 1) * 5
int64_t rcx_5 = *(rax_2 + 8)

if (*(rcx_5 + (rdx_1 << 3) + 0x10) != 0x8c2a || *(rcx_5 + (rdx_1 << 3) + 0x14) != rbx)
    int32_t var_38_1 = 1
    sub_14190a090(arg1[6], rax_2, rbp_1 - 1, 0x8c2a, rbx, 0xffffffff)

data_143f001b8(0x8c2a, zx.q(*(zx.q(arg4) * 0x1c + &data_143efeda0)), zx.q(*(arg3 + 0x28)))
arg1[3].d = arg_20
*(arg1 + 0x1c) = *(arg3 + 0x28)
int32_t rax_5 = *(zx.q(arg4) * 0x1c + &data_143efeda0)
arg1[4].d = rax_5
*(arg1 + 0x24) = rax_5.b
return arg1
