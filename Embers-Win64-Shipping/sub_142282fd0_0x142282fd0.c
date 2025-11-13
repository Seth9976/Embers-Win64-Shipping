// 函数: sub_142282fd0
// 地址: 0x142282fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(*(arg1 + 0x220))
int32_t i_1 = 0
int64_t rsi = *(arg1 + 0x218)
uint64_t var_18 = 0
uint64_t r14 = 0
int32_t var_10 = rbx.d

if (rbx.d != 0)
    sub_1405a4be0(&var_18, rbx.d, 0)
    r14 = var_18
    memcpy(r14, rsi, (rbx << 4).d)
    rbx = zx.q(var_10)

uint64_t rbx_1 = r14
int64_t rsi_3 = (sx.q(rbx.d) << 4) + r14

if (r14 != rsi_3)
    do
        sub_1422a9370(arg1, *rbx_1)
        rbx_1 += 0x10
    while (rbx_1 != rsi_3)

sub_1405d16e0(arg1 + 0x40, nullptr)

for (int32_t i = 0; i u< 6; i += 1)
    sub_1405d16e0(sx.q(i) * 0x38 + 0x68 + arg1 + 0x10, nullptr)

sub_1405d16e0(arg1 + 0x1c8, nullptr)
sub_1405d16e0(arg1 + 0x200, nullptr)
sub_1405d16e0(arg1 + 0x48, nullptr)

do
    sub_1405d16e0((sx.q(i_1) + 2) * 0x38 + arg1 + 0x10, nullptr)
    i_1 += 1
while (i_1 u< 6)

sub_1405d16e0(arg1 + 0x1d0, nullptr)
int64_t* result = sub_1405d16e0(arg1 + 0x208, nullptr)

if (r14 == 0)
    return result

return sub_140a74f90(r14)
