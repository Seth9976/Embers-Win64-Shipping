// 函数: sub_140fcafe0
// 地址: 0x140fcafe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t optval = arg2
int32_t arg_8 = 4
int32_t optlen = 4
int64_t rbx
rbx.b = setsockopt(*(arg1 + 0x28), 0xffff, 0x1002, &optval, 4) == 0
optlen.q = &arg_8
getsockopt(*(arg1 + 0x28), 0xffff, 0x1002, arg3, optlen)
return zx.q(rbx.b)
