// 函数: sub_141c879c0
// 地址: 0x141c879c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = *(arg1 + 8)
int96_t var_20 = (*(arg1 + 0x10)).12
int64_t var_48 = *(arg1 + 0x30)
void* rax_1 = *(arg1 + 0x38)
void* var_40 = rax_1
int128_t var_38 = *(arg1 + 0x20)

if (rax_1 != 0)
    *(rax_1 + 0xc) += 1

var_20.q(sx.q(var_20:8.d) + rdx, &var_38, &var_48)
int64_t result
result.b = 1
return result
