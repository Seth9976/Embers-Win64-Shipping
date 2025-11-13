// 函数: sub_140be3e90
// 地址: 0x140be3e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x19].d &= 0x80000000
arg1[0x16] = 0
arg1[0x17] = 0
*(arg1 + 0xcc) = 0
arg1[0x1a] = 0
arg1[0x1f].d = 0

if (*(arg1 + 0xfc) != 0)
    sub_1405a5410(&arg1[0x1e], 0)

arg1[0x21].d = 0

if (*(arg1 + 0x10c) != 0)
    sub_1405c5570(&arg1[0x20], 0)

arg1[0x23] = 0
arg1[0x3c].d = 0

if (*(arg1 + 0x1e4) != 0)
    sub_1405a5410(&arg1[0x3b], 0)

arg1[0x45].d = 0

if (*(arg1 + 0x22c) != 0)
    sub_1405a5410(&arg1[0x44], 0)

(*(*arg1 + 0x2c8))(arg1, 0)
arg1[9] = 0
arg1[0xd].d = 0

if (*(arg1 + 0x6c) != 0)
    sub_1405c5510(&arg1[0xc], 0)

*(arg1 + 0x5c) = 0
__builtin_memset(&arg1[0xe], 0, 0x18)
arg1[0x18] = 0
arg1[0x13].d = 0

if (*(arg1 + 0x9c) != 0)
    sub_1405c5570(&arg1[0x12], 0)

int64_t* rdi = arg1[0x14]

if (rdi != 0)
    sub_140846450(rdi)
    j_sub_140a74f90(rdi)
    arg1[0x14] = 0

sub_1405b8890(&arg1[0x26], 0)
AcquireSRWLockExclusive(&arg1[0x3a])
sub_1405b8890(&arg1[0x30], 0)
ReleaseSRWLockExclusive(&arg1[0x3a])
arg1[0xe] = 0
int64_t* i_1 = arg1[0xa]

if (i_1 != 0)
    int64_t* i
    
    do
        i = i_1[4]
        (**i_1)()
        i_1 = i
    while (i != 0)

arg1[0xa] = 0
int64_t result = j_sub_140a74f90(arg1[0x15])
arg1[0x15] = 0
return result
