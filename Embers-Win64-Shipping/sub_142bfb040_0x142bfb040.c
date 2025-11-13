// 函数: sub_142bfb040
// 地址: 0x142bfb040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || *arg1 == 0)
    return 

int32_t rax = *arg1
*arg1 -= 1

if (rax != 1)
    return 

CRITICAL_SECTION* lpCriticalSection = *(arg1 + 8)
*arg1 = 0xffff2153

if (lpCriticalSection != 0)
    sub_142bf2560(&lpCriticalSection[1], lpCriticalSection)
    DeleteCriticalSection(lpCriticalSection)
    j_sub_140a74f90(lpCriticalSection)

int64_t* i_1 = *(arg1 + 0x168)

if (i_1 != 0)
    int64_t* i
    
    do
        i = i_1[1]
        sub_142c09480(*i_1)
        j_sub_140a74f90(i_1)
        i_1 = i
    while (i != 0)

int32_t var_28
int32_t var_28_3 = var_28
*(arg1 + 0x40)
sub_142c09f40(&arg1[0x12])
int64_t rax_1 = *(arg1 + 0x20)

if (rax_1 != 0)
    rax_1(*(arg1 + 0x18))

j_sub_140a74f90(arg1)
