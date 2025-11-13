// 函数: sub_140791020
// 地址: 0x140791020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2[1].d)
int128_t zmm6 = data_14399f5f0
int64_t var_30 = 0
int32_t rax_1 = (rdi + 1).d
arg2[1].d = rax_1

if (rax_1 s> *(arg2 + 0xc))
    sub_1405c4e40(arg2)

int64_t result = *arg2
int64_t rcx_2 = rdi << 5
*(rcx_2 + result) = (arg1 + 0x58).o
*(rcx_2 + result + 0x10) = zmm6
return result
