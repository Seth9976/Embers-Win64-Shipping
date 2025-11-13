// 函数: sub_142454ee0
// 地址: 0x142454ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_1 = *(arg2 + 0x20)
int64_t r9
r9.b = rax_1 != 0
*(arg2 + 0x20) = r9 + rax_1
void* rax = *(arg1 + 0x130)
int128_t* result

if (rax == 0)
    result = &data_143dbb0c0
else
    result = rax + 0x1c0

*arg3 = *result
arg3[1] = result[1]
arg3[2] = result[2]
return result
