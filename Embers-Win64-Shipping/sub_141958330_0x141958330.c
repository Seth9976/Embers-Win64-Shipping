// 函数: sub_141958330
// 地址: 0x141958330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = arg1

if (wglGetCurrentContext() == arg2)
    return data_143effca0(1, &arg_8)

CRITICAL_SECTION* lpCriticalSection = data_143f01c30
EnterCriticalSection(lpCriticalSection)
int64_t rdi_1 = sx.q(data_143f01c28)
int32_t var_10 = arg_8
int32_t rax_3 = (rdi_1 + 1).d
bool cond:0 = rax_3 s<= data_143f01c2c
data_143f01c28 = rax_3

if (not(cond:0))
    sub_1405a4f90(&data_143f01c20)

int64_t result = data_143f01c20
*(result + rdi_1 * 0x10) = arg2.o

if (lpCriticalSection == 0)
    return result

return LeaveCriticalSection(lpCriticalSection)
