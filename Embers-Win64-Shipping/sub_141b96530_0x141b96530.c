// 函数: sub_141b96530
// 地址: 0x141b96530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r9 = *(arg1 + 8)
void** const var_48 = &data_1430838a0
int64_t var_40 = *r9
uint64_t var_38 = 0
int64_t rdi = sx.q(r9[2].d)
int64_t rsi = r9[1]
int32_t var_30 = rdi.d
int32_t var_2c

if (rdi.d != 0)
    sub_1405c4a00(&var_38, rdi.d, 0)
    memcpy(var_38, rsi, (rdi << 3).d)
else
    var_2c = 0

int64_t var_28
sub_140d3a3a0(&var_28, sub_141bae980(&var_40, arg3))
arg2[4].b &= 0xfc
void** rax_2 = sub_140a82f30(0x28, 8)
arg2[4].b |= 1
void** rdx_4 = rax_2
bool cond:0 = (arg2[4].b & 2) != 0
*arg2 = rax_2

if (cond:0)
    rdx_4 = arg2

*rdx_4 = &data_1430838a0
rdx_4[1] = var_40
rdx_4[2] = 0
rdx_4[2] = var_38
var_38 = 0
rdx_4[3].d = var_30
*(rdx_4 + 0x1c) = var_2c
var_30.q = 0
rdx_4[4] = var_28
uint64_t rcx_5 = var_38

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

return arg2
