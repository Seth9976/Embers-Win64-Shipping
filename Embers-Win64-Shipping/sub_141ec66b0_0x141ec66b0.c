// 函数: sub_141ec66b0
// 地址: 0x141ec66b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result

if (((*(arg1 + 8) u>> 4).b & 1) == 0)
    result = *(arg1 + 0x20)
else
    result = nullptr

void* rcx = *(result + 0x348)

if (rcx == 0)
    return result

int64_t var_28 = data_143e1dfa8
int64_t var_20_1 = data_143e1dfb0
void* rax_4 = data_143e1dfb8
void* var_18_1 = rax_4

if (rax_4 != 0)
    *(rax_4 + 8) += 1

return sub_1424158a0(rcx, &var_28)
