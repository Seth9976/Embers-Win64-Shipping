// 函数: sub_142bf5fe0
// 地址: 0x142bf5fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* lpCriticalSection = sub_140dc0ea0(1, 0x440)

if (lpCriticalSection == 0)
    return lpCriticalSection

InitializeCriticalSection(lpCriticalSection)
lpCriticalSection->__offset(0x28).q = arg1
lpCriticalSection->__offset(0x34).b = arg2
lpCriticalSection->__offset(0x35).b = arg3
lpCriticalSection->__offset(0x30).d = 2
int32_t var_28
int32_t var_28_1 = var_28
lpCriticalSection->__offset(0x38).d = 0
void* rax = lpCriticalSection + 0x3c
int64_t i_1 = 0x10
int64_t i

do
    __builtin_memset(rax, 0xff, 0x40)
    rax += 0x40
    i = i_1
    i_1 -= 1
while (i != 1)
return lpCriticalSection
