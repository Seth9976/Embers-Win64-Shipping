// 函数: sub_1427d4060
// 地址: 0x1427d4060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_30 = *arg2
int128_t var_20 = arg2[1]
sub_1427e5d10(arg1, *arg2)
int32_t* rcx = arg1[0xc]
int32_t rax = 0x12

if (rcx != 0)
    rax = *rcx + 0x12

int32_t* rcx_1 = arg1[0xb]
uint64_t rdx_1 = 0x1b
char var_38 = 1
int32_t var_34 = rax

if (rcx_1 != 0)
    rdx_1 = zx.q(*rcx_1)
    *rcx_1 = (rdx_1 + 1).d

sub_1427de280(arg1, rdx_1, &var_38)
return sub_1427e5c70(arg1) __tailcall
