// 函数: sub_141d33230
// 地址: 0x141d33230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

AcquireSRWLockExclusive(arg2 + 0x20)
int64_t* rbx_1 = *(arg2 + 8)
int64_t rdi_1 = 0
uint64_t rsi_2 = sx.q(*(arg2 + 0x10)) << 3 u>> 3

if (rbx_1 u> &rbx_1[sx.q(*(arg2 + 0x10))])
    rsi_2 = 0

if (rsi_2 != 0)
    do
        int64_t* rcx_1 = *rbx_1
        
        if (rcx_1 != 0)
            (**rcx_1)(rcx_1, 1)
        
        rbx_1 = &rbx_1[1]
        rdi_1 += 1
    while (rdi_1 != rsi_2)

*(arg2 + 0x10) = 0

if (*(arg2 + 0x14) s<= 0xffffffff)
    sub_1405c5570(arg2 + 8, 0)

ReleaseSRWLockExclusive(arg2 + 0x20)
int64_t rcx_4 = *(arg2 + 8)

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

j_sub_140a74f90(arg2)
