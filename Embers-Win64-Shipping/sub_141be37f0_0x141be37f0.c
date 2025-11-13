// 函数: sub_141be37f0
// 地址: 0x141be37f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x38) = *arg2
*(arg1 + 0x48) = arg2[1]
uint128_t result = zx.o(arg2[2].q)
*(arg1 + 0x58) = result.q
void* rcx = *(arg1 + 0x68)

if (rcx == 0)
    return result

result = *(arg1 + 0x38)
char var_28 = 1
int64_t var_20 = 0
int32_t var_18_1 = 0
uint128_t result_1 = result
sub_141b780e0(rcx, rcx + 0x20, &result_1, 1)
sub_140745b20(&var_20)
void* rcx_2 = *(arg1 + 0x68)
uint128_t result_2 = *(arg1 + 0x48)
var_28 = 1
var_20 = 0
int32_t var_18_2 = 0
result_1 = result_2
sub_141b77f70(rcx_2, rcx_2 + 0x48, &result_1, 1)
sub_140745b20(&var_20)
result_1.d = *(arg1 + 0x58)
result_1:4.d = *(arg1 + 0x5c)
result_1:8.b = 1
var_28.q = 0
var_20.d = 0
sub_141b91c60(*(arg1 + 0x68), &result_1)
return sub_140745b20(&var_28)
