// 函数: sub_1423dc1a0
// 地址: 0x1423dc1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

data_143f5b268 = arg3
int16_t* var_18 = nullptr
int32_t var_10 = 0
sub_1405947f0(&var_18, 6)
int32_t rax = var_10 + 6

if (rax s> 0)
    sub_140594770(&var_18)

UnDecorator::getReferenceType(var_18, u"STAT ", 0xc)
int64_t r8 = -1

do
    r8 += 1
while (*(arg4 + (r8 << 1)) != 0)

sub_140a20ba0(&var_18, arg4, r8.d)
int64_t rdi_1 = *(arg1 + 0x28)
int16_t* const rsi = &data_142d40450

if (rax != 0)
    rsi = var_18

sub_140b19e60()
int64_t result = (*(rdi_1 + 8))(arg1 + 0x28, arg2, rsi, &data_1439a8bd0)
int16_t* rcx_5 = var_18

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5)
