// 函数: sub_140b8c990
// 地址: 0x140b8c990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 8)

if (rcx == 0)
    return 

if (arg3 == 0)
    sub_1409d7d20(rcx + 0x58, arg2)
else
    sub_140664c50(rcx + 0x58, arg2)

void var_28
sub_140a96170(&var_28)
int64_t var_38
sub_140b8aa60(*(arg1 + 8), sub_140b1aa20(&var_38), &var_28)
int64_t rcx_5 = var_38

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

sub_140599090(arg1 + 0x30)
int64_t* var_20

if (var_20 == 0)
    return 

var_20[1].d -= 1

if (var_20[1].d != 1)
    return 

(**var_20)(var_20)
int32_t rdi_1 = *(var_20 + 0xc)
*(var_20 + 0xc) -= 1

if (rdi_1 == 1)
    (*(*var_20 + 8))(var_20, zx.q(rdi_1))
