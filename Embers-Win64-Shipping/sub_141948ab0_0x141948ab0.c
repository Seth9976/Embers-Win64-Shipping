// 函数: sub_141948ab0
// 地址: 0x141948ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg2

if (data_143f01c92 != 0)
    sub_140a80f40()

arg2.b = 1
void* rax = sub_14190d690(arg1, arg2.b)
int32_t r9 = *(rbx + 0x84)
int32_t r8_1 = data_1439c7498 - 1
int32_t r10 = *(rbx + 0x80)
int64_t rdx = sx.q(r8_1) * 5
int64_t rcx_2 = *(rax + 8)

if (*(rcx_2 + (rdx << 3) + 0x10) != r9 || *(rcx_2 + (rdx << 3) + 0x14) != r10)
    int32_t var_48_1 = *(rbx + 0x34)
    sub_14190a090(arg1, rax, r8_1, r9, r10, 0)

if (*(rax + 0x428) != 0)
    data_143effcd8(0x88ec, 0)
    *(rax + 0x428) = 0

int64_t rax_2 = sx.q(*(rbx + 0x3c))
int64_t rbp_1 = rax_2 * 5
data_143effac0(0xcf5, 1)

if ((&data_143efedb8)[rax_2 * 7].b == 0)
    data_143effac0(0xcf2, zx.q(divu.dp.d(0:(arg4[6]), *((rbp_1 << 3) + 0x1439c85e8))))
    data_143effac0(0x806e, zx.q(divu.dp.d(0:(arg4[7]), *((rbp_1 << 3) + &data_1439c85ec))))
    data_143effc08(zx.q(*(rbx + 0x84)), zx.q(arg3), zx.q(*arg4), zx.q(arg4[1]), arg4[2], arg4[6], 
        arg4[7], arg4[8], *(rax_2 * 0x1c + &data_143efedb0), *(rax_2 * 0x1c + &data_143efedb0:4), 
        arg6)
else
    int32_t r8_2 = arg4[8]
    data_143effc40(zx.q(*(rbx + 0x84)), zx.q(arg3), zx.q(*arg4), zx.q(arg4[1]), arg4[2], arg4[6], 
        arg4[7], r8_2, *(rax_2 * 0x1c + &data_143efeda0 + ((zx.q(*(rbx + 0x40) u>> 4) & 1) << 2)), 
        r8_2 * arg5, arg6)

data_143effac0(0xcf5, 4)
data_143effac0(0x806e, 0)
jump(data_143effac0)
