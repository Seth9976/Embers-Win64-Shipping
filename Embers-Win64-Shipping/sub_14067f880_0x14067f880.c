// 函数: sub_14067f880
// 地址: 0x14067f880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
int16_t* var_18 = nullptr
int32_t var_10 = 0
sub_1405947f0(&var_18, 3)
int32_t rbx = var_10 + 3

if (rbx s> 0)
    sub_140594770(&var_18)

int16_t* rdi = var_18
UnDecorator::getReferenceType(rdi, &data_142d6acb4, 6)
int16_t* const rdx_1

if (rbx == 0)
    rdx_1 = &data_142d40450
else
    rsi = rbx - 1
    rdx_1 = rdi

int64_t result = (*(*arg1 + 0x150))(arg1, rdx_1, sx.q(rsi) * 2)

if (rdi == 0)
    return result

return sub_140a74f90(rdi)
