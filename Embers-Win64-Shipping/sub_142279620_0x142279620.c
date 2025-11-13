// 函数: sub_142279620
// 地址: 0x142279620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm0 = *arg3
int32_t rdx_2 = zx.d(arg4) << 3 | (arg1[0x4e2].d & 0xfffffff7)
*(arg1 + 0x25c) = arg2
int64_t rax_2 = *arg1
arg1[0x4e2].d = (rdx_2 & 0xffffefff) | 4
*(arg1 + 0x24c) = zmm0
int64_t result = (*(rax_2 + 0x740))(zmm0)
arg1[0x4cd].d = 0
return result
