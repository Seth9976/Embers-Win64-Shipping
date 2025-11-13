// 函数: sub_140759700
// 地址: 0x140759700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_14396e9e8 == data_14396ea14)
    sub_140767c70()

*arg1 = 0
arg1[1] = data_14396f0d8
arg1[2].w = data_14396f0e0
*(arg1 + 0x12) = 0xffffffff
__builtin_memset(&arg1[3], 0, 0x18)
arg1[6] = data_14396f0d8
arg1[7].w = data_14396f0e0
*(arg1 + 0x3a) = 0xffffffff
__builtin_memset(&arg1[8], 0, 0x18)
arg1[0xb] = data_14396f0d8
arg1[0xc].w = data_14396f0e0
*(arg1 + 0x62) = 0xffffffff
arg1[0xd] = 0
arg1[0xe] = 0
sub_140747710(arg1, arg2)
sub_140747710(&arg1[5], arg2)
int32_t arg_8
sub_140759010(&data_14396ea30, &arg_8, arg2)
int64_t rax_7 = sx.q(arg_8)
void* const rax_9

if (rax_7.d == 0xffffffff)
    rax_9 = nullptr
else
    rax_9 = rax_7 * 0x58 + data_14396ea30

int128_t* rdx_3 = rax_9 + 0x28

if (rax_9 == 0)
    rdx_3 = nullptr

if (rdx_3 != 0)
    sub_140747710(&arg1[5], rdx_3)

sub_140759010(&data_14396e9e0, &arg_8, arg2)
int64_t rax_10 = sx.q(arg_8)
void* const rax_12

if (rax_10.d == 0xffffffff)
    rax_12 = nullptr
else
    rax_12 = rax_10 * 0x58 + data_14396e9e0

int64_t* rdx_5 = rax_12 + 0x28

if (rax_12 == 0)
    rdx_5 = nullptr

int64_t var_48
int64_t var_30

if (rdx_5 == 0)
    int64_t var_40_1 = data_14396f0d8
    int16_t var_38_1 = data_14396f0e0
    var_48 = 0
    int32_t var_36_1 = 0xffffffff
    var_30 = 0
    int64_t var_28_1 = 0
else
    sub_140745220(&var_48, rdx_5)

sub_140747710(&arg1[0xa], &var_48)

if (var_30 != 0)
    sub_140a74f90(var_30)

return arg1
