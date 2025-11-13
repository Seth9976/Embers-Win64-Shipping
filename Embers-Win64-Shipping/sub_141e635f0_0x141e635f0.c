// 函数: sub_141e635f0
// 地址: 0x141e635f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[0xc]
int64_t var_18 = 0
int32_t var_10 = 0

if (rcx != 0)
    sub_14238e610(rcx, &var_18)

sub_141e63330(arg1)
int64_t rsi = var_18
uint64_t var_28 = 0
int32_t var_1c = 0
int64_t rdi = sx.q(var_10)
int32_t var_20 = rdi.d

if (rdi.d != 0)
    sub_1405c4a00(&var_28, rdi.d, 0)
    memcpy(var_28, rsi, (rdi << 3).d)

int64_t result = sub_1405a9f90(&arg1[0xf], &var_28)
uint64_t rcx_5 = var_28

if (rcx_5 != 0)
    result = sub_140a74f90(rcx_5)

int64_t rcx_6 = var_18

if (rcx_6 == 0)
    return result

return sub_140a74f90(rcx_6)
