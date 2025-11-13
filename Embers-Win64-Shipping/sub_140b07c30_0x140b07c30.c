// 函数: sub_140b07c30
// 地址: 0x140b07c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
*(arg1 + 0x18) = 0
int64_t rbx = **arg2
sub_140b1b610()
int128_t zmm0 = data_143de69c8.o
int64_t var_40 = rbx
void** const var_48 = &data_142e768d8
int128_t var_58 = zmm0
*(arg1 + 0x20) = 0
*(arg1 + 0x28) = 0
sub_140b0c1e0(arg1 + 0x20, &var_58)
bool cond:0 = (var_58.d | var_58:4.d | var_58:8.d | var_58:0xc.d) == 0
void** const* rcx_5 = &var_48
*(arg1 + 0x60) = 1

if (cond:0)
    rcx_5 = nullptr

if (rcx_5 != 0)
    void** const r8_1 = *rcx_5
    (*r8_1)(rcx_5, 0, r8_1)

__security_check_cookie(rax_1 ^ &var_78)
return arg1
