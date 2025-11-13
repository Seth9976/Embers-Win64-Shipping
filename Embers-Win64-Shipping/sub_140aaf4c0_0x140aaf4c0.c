// 函数: sub_140aaf4c0
// 地址: 0x140aaf4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rdi = *(arg1 + 0x18)
EnterCriticalSection(&rdi[0x30])
sub_140aaf5f0(rdi, arg2)

if (rdi != -0x30)
    LeaveCriticalSection(&rdi[0x30])

char* rdi_1 = *(arg1 + 0x28)
EnterCriticalSection(&rdi_1[0x30])
sub_140aaf5f0(rdi_1, arg2)

if (rdi_1 != -0x30)
    LeaveCriticalSection(&rdi_1[0x30])

char* rdi_2 = *(arg1 + 0x38)
EnterCriticalSection(&rdi_2[0x30])
sub_140aaf5f0(rdi_2, arg2)

if (rdi_2 != -0x30)
    LeaveCriticalSection(&rdi_2[0x30])

char* rdi_3 = *(arg1 + 0x48)
EnterCriticalSection(&rdi_3[0x30])
sub_140aaf5f0(rdi_3, arg2)

if (rdi_3 != -0x30)
    LeaveCriticalSection(&rdi_3[0x30])

char* rdi_4 = *(arg1 + 0x58)
EnterCriticalSection(&rdi_4[0x30])
sub_140aaf5f0(rdi_4, arg2)

if (rdi_4 != -0x30)
    LeaveCriticalSection(&rdi_4[0x30])

char* rdi_5 = *(arg1 + 0x68)
EnterCriticalSection(&rdi_5[0x30])
int64_t result = sub_140aaf5f0(rdi_5, arg2)

if (rdi_5 == -0x30)
    return result

return LeaveCriticalSection(&rdi_5[0x30])
