// 函数: sub_141369730
// 地址: 0x141369730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_1405fba70(*arg1, 1)

if (result == 0)
    return result

char temp0
int32_t temp1
temp0:temp1 = sx.q(arg1[1])
uint32_t rdx_1 = zx.d(temp0)
int32_t rax_2 = temp1 + rdx_1
int32_t r9_1 = rax_2 s>> 8
int128_t var_48
sub_141356d10(&var_48, zx.d(rax_2.b) - rdx_1)
int32_t rcx_3 = r9_1 & 0x80000001

if (rcx_3 s< 0)
    rcx_3 = ((rcx_3 - 1) | 0xfffffffe) + 1

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(r9_1)
bool var_3c = rcx_3 == 1
int32_t rax_8 = (temp3 - temp2) s>> 1
int32_t rcx_7 = rax_8 & 0x80000001

if (rcx_7 s< 0)
    rcx_7 = ((rcx_7 - 1) | 0xfffffffe) + 1

int32_t temp4
int32_t temp5
temp4:temp5 = sx.q(rax_8)
int128_t var_28 = var_48
int32_t var_30
int32_t var_10 = var_30
int32_t var_34 = ((temp5 - temp4) s>> 1) s% 0xa
int64_t var_18 = (rcx_7 == 1).q
return sub_141368d30(arg1, &var_28)
