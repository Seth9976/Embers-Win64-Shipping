// 函数: sub_140e105c0
// 地址: 0x140e105c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

AcquireSRWLockShared(&arg1[0xa])
int32_t arg_8
sub_1408297c0(arg1, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
int64_t rdx_3

if (rax.d == 0xffffffff)
    rdx_3 = 0
else
    rdx_3 = (rax << 6) + *arg1

int64_t result = rdx_3 + 8

if (rdx_3 == 0)
    result = 0

ReleaseSRWLockShared(&arg1[0xa])
return result
