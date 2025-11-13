// 函数: sub_1427dfc00
// 地址: 0x1427dfc00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_18
void* var_c8 = &arg_18
sub_1427da200(arg2, zx.q(arg3), arg1 + 0x1d8, &data_143b7be30)
sub_1427d49c0(arg2, arg1 + 0x240)
sub_1427d4b20(arg2, arg1 + 0x260)
sub_1427d4c90(arg2, arg1 + 0x280)
void var_90
memset(&var_90, 0, 0x80)
sub_14280c5d0(&var_90)
sub_1427da610(arg2, zx.q(arg3 + 7), arg1 + 0x2a0, &data_143b7b040, &var_90)
int128_t var_b0 = *(arg1 + 0x2c0)
int128_t var_a0 = *(arg1 + 0x2d0)
sub_1427e5d10(arg2, *(arg1 + 0x2c0))
int32_t* rax = arg2[0xc]
int32_t rcx_8 = 0x18c

if (rax != 0)
    rcx_8 = 0x18c + *rax

int32_t var_b4 = rcx_8
uint64_t rdx_6 = 0x1cd
int32_t* rcx_9 = arg2[0xb]
char var_b8 = 1

if (rcx_9 != 0)
    rdx_6 = zx.q(*rcx_9)
    *rcx_9 = (rdx_6 + 1).d

sub_1427de350(arg2, rdx_6, &var_b8)
sub_1427e5c70(arg2)
sub_1427d4ee0(arg2, arg1 + 0x2e0)
sub_1427d3ed0(arg2, arg1 + 0x310)
sub_1427d3ed0(arg2, arg1 + 0x330)
return zx.q(arg3 + 0xd)
