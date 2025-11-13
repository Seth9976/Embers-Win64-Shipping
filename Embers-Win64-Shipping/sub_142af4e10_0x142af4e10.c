// 函数: sub_142af4e10
// 地址: 0x142af4e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* r10 = *(arg1 + 8)
uint64_t r9 = zx.q(*r10)

if (r9.d u>= data_1440168e8.d)
    if (arg2 != 0)
        *arg2 = 0
    
    return nullptr

uint64_t r8_1 = zx.q(*(data_1440168a0 + (r9 << 1)))
r9.w += 1
int64_t rax_1 = data_1440168d8
*r10 = r9.w
char* result = rax_1 + (r8_1 << 1)

if (arg2 == 0)
    return result

int64_t rcx = -1

do
    rcx += 1
while (result[rcx] != 0)

*arg2 = rcx.d
return result
