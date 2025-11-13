// 函数: sub_142c09480
// 地址: 0x142c09480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || *arg1 == 0)
    return 

int32_t rax = *arg1
*arg1 -= 1

if (rax != 1)
    return 

CRITICAL_SECTION* lpCriticalSection = *(arg1 + 8)
*arg1 = 0xffff2153
int32_t var_28
int32_t var_28_1 = var_28

if (lpCriticalSection != 0)
    sub_142bf2560(&lpCriticalSection[1], lpCriticalSection)
    DeleteCriticalSection(lpCriticalSection)
    j_sub_140a74f90(lpCriticalSection)

sub_142c070a0(&arg1[0x18])
j_sub_140a74f90(*(arg1 + 0x38))
j_sub_140a74f90(arg1)
