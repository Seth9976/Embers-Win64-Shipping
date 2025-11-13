// 函数: sub_140aaf410
// 地址: 0x140aaf410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rdi = *(arg1 + 0x10)
EnterCriticalSection(&rdi[0x30])
sub_140aaf5f0(rdi, arg2)

if (rdi != -0x30)
    LeaveCriticalSection(&rdi[0x30])

char* rdi_1 = *(arg1 + 0x20)
EnterCriticalSection(&rdi_1[0x30])
sub_140aaf5f0(rdi_1, arg2)

if (rdi_1 != -0x30)
    LeaveCriticalSection(&rdi_1[0x30])

char* rdi_2 = *(arg1 + 0x30)
EnterCriticalSection(&rdi_2[0x30])
int64_t result = sub_140aaf5f0(rdi_2, arg2)

if (rdi_2 == -0x30)
    return result

return LeaveCriticalSection(&rdi_2[0x30])
