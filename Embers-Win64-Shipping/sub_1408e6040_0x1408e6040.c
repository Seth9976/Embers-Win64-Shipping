// 函数: sub_1408e6040
// 地址: 0x1408e6040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_1
sub_140865c40(arg1 + 0x18, &result_1, arg2)
int64_t result = sx.q(result_1)
int64_t rcx_1

if (result.d == 0xffffffff)
    rcx_1 = 0
else
    rcx_1 = *(arg1 + 0x18) + result * 0x18

int64_t* rdi = rcx_1 + 8

if (rcx_1 == 0)
    rdi = nullptr

if (rdi == 0)
    result.b = 0
    return result

void* rdi_1 = *rdi
CRITICAL_SECTION* lpCriticalSection = rdi_1 + 0xc0
EnterCriticalSection(lpCriticalSection)
rdi_1.b = *(rdi_1 + 0x80) s> 0

if (lpCriticalSection != 0)
    LeaveCriticalSection(lpCriticalSection)

return zx.q(rdi_1.b)
