// 函数: sub_141a76060
// 地址: 0x141a76060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = &arg1[2]
*arg1 = 0
arg1[1] = 0
rdx[2] = 0
rdx[3].d = 0
*(rdx + 0x1c) = 0x80
int64_t* rax = rdx[2]
int64_t var_20 = 0
int64_t var_18 = 0

if (rax != 0)
    rdx = rax

*rdx = 0
rdx[1] = 0
*(arg1 + 0x34) = 0
arg1[6].d = 0xffffffff
arg1[8] = 0
arg1[9].d = 0
void* rdx_1 = &arg1[0xc]
arg1[0xa] = 0
arg1[0xb] = 0
*(rdx_1 + 0x1c) = 0x80
void* rax_1 = *(rdx_1 + 0x10)

if (rax_1 != 0)
    rdx_1 = rax_1

__builtin_memset(rdx_1, 0, 0x1c)
*(arg1 + 0x84) = 0
arg1[0x10].d = 0xffffffff
arg1[0x12] = 0
arg1[0x13].d = 0
int32_t var_28 = data_1439d5118
sub_141a6e830(&arg1[0xa], &data_143f2ad40, &var_28)

if (var_20 != 0)
    sub_140a74f90(var_20)

return arg1
