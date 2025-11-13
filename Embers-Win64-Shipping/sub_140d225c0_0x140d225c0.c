// 函数: sub_140d225c0
// 地址: 0x140d225c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = *(arg2 + 0x20)
void* i_2 = arg2

for (; i != 0; i = *(i + 0x20))
    arg2 = i

int64_t arg_8 = *(arg2 + 0x18)
int16_t* var_18
sub_140b63b70(&arg_8, &var_18)
int16_t* const rsi = &data_142d40450
int16_t* const rcx_1 = &data_142d40450
int32_t var_10

if (var_10 != 0)
    rcx_1 = var_18

sub_140bcc090(rcx_1, arg3, 2, 1, 0, 0)
int16_t* rcx_2 = var_18

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t result = arg1()

for (void* i_1 = *(i_2 + 0x20); i_1 != 0; i_1 = *(i_1 + 0x20))
    i_2 = i_1

arg_8 = *(i_2 + 0x18)
sub_140b63b70(&arg_8, &var_18)

if (var_10 != 0)
    rsi = var_18

sub_140bcc090(rsi, arg3, 2, 2, 0, 0)
int16_t* rcx_5 = var_18

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

return result
