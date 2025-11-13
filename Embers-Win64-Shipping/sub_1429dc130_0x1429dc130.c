// 函数: sub_1429dc130
// 地址: 0x1429dc130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = arg1[3]
int128_t* rcx = *arg1
int64_t arg_8 = arg1[1]
int32_t rax_1 = sub_1429e7e70(rcx, rdx, &arg_8, arg2)
void* rdx_1 = *arg1
int64_t r8_1 = arg_8
arg1[5].d = rax_1
arg1[2] = r8_1

if (*(rdx_1 + 0x4818) == 0)
    if (rax_1 != 0)
        *(*(rdx_1 + 0x4820) + 0xb8) = 1
        *(*arg1 + 0x4ec0) = 1
else if (rax_1 != 0 || arg1[3] - 1 + arg1[1] u> r8_1)
    CRITICAL_SECTION* lpCriticalSection = *(rdx_1 + 0x47e8)
    void* rdi = *(rdx_1 + 0x4828)
    sub_1429e7450(rdi)
    arg1[0xf].d = 1
    EnterCriticalSection(lpCriticalSection)
    *(*(*arg1 + 0x4820) + 0xb8) = 1
    LeaveCriticalSection(lpCriticalSection)
    *(*arg1 + 0x4ec0) = 1
    sub_1429e7460(rdi)
    sub_1429e7470(rdi)
    return 0

int64_t result
result.b = arg1[5].d == 0
return result
