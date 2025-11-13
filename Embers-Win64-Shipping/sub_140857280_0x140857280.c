// 函数: sub_140857280
// 地址: 0x140857280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14085aab0(arg1)
void* i = *(arg1 + 0x68)

for (void* rdi_2 = sx.q(*(arg1 + 0x70)) * 0x30 + i; i != rdi_2; i += 0x30)
    if (sub_1407faf10(i) != 0)
        j_sub_140809aa0(sub_1407faf10(i))

int16_t var_18 = 0x101
int64_t var_48
__builtin_memset(&var_48, 0, 0x30)
sub_140749a20(&var_48, arg1, 1)
return sub_140746d50(&var_48)
