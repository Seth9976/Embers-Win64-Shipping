// 函数: sub_1426e4070
// 地址: 0x1426e4070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg2
uint64_t rdx = zx.q(*(rax + 0x260))
uint64_t result = *(rax + 0x110)
void* r10_1 = zx.q(*(arg1 + 0x52)) + *(rdx * 0x58 + result + 0x30)

if ((*(r10_1 + 9) & 1) == 0)
    result = zx.q(*(r10_1 + 8))
    *arg3 = result.d

if (*(arg1 + 0x60) s<= 0)
    return result

char var_15
char var_15_1 = var_15 & 0xfe
int64_t var_20_1 = *(*(arg1 + 0x58) + 8)
int16_t var_18_1 = rdx.w
int64_t var_28 = 0
char var_16_1 = 2
return sub_1426a96e0(arg2, &var_28)
