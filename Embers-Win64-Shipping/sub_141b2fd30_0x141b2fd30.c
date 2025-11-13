// 函数: sub_141b2fd30
// 地址: 0x141b2fd30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x10) = 0

if (*(arg1 + 0x14) s<= 0xffffffff)
    sub_1405dadb0(arg1 + 8, 0)

int32_t rax = *(arg1 + 0x4c)
*(arg1 + 0x48) = 0

if (rax s< 0 && rax != 0)
    sub_1405c5660(arg1 + 0x40, 0)

sub_141f98dc0(arg1 + 0x50)
*(arg1 + 0x18) = data_143f2c430
*(arg1 + 0x1c) = 1
int64_t var_30
__builtin_memset(&var_30, 0, 0x20)
*(arg1 + 0x20) = var_30.o
*(arg1 + 0x30) = 0
*(arg1 + 0x38) = 0
return 0
