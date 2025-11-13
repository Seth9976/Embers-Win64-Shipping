// 函数: sub_141410bc0
// 地址: 0x141410bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x60)
*(arg1 + 0x60) = (sx.q(data_1439c7a30) u>> 2).d
int64_t rax_2
int64_t rdx
rdx:rax_2 = mulu.dp.q(-0x5555555555555555, sx.q(data_1439c7a2c))
uint32_t rdx_1 = (rdx u>> 5).d

if (rdx_1 u>= 0xffff)
    rdx_1 = 0xffff

*(arg1 + 0x64) = rdx_1
*(arg1 + 0x128) = 0
*(arg1 + 0x130) = 0
*(arg1 + 0x134) = 2
*(arg1 + 0x200) = 0
*(arg1 + 0x210) = 0
*(arg1 + 0x214) = 4
*(arg1 + 0x220) = 1
return arg1
