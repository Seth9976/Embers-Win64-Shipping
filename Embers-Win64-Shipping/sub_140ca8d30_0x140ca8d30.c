// 函数: sub_140ca8d30
// 地址: 0x140ca8d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140cebe30(arg1, arg2)
void* var_28 = arg1
void* const i_1

if (arg1 == 0)
    i_1 = nullptr
else
    i_1 = *(arg1 + 0x50)

int32_t var_18 = 0xffffffff
int16_t var_14 = 0x100
char var_12 = 0
int64_t result = sub_1406328d0(&var_28)
void* i_2

for (void* const i = i_1; i != 0; i = i_2)
    if (sub_140cc1840(i) == 0)
        *(i + 0x30) |= arg2
    
    i_2 = *(i + 0x20)
    result = sub_1406328d0(&var_28)

return result
