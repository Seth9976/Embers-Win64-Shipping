// 函数: sub_1413c42c0
// 地址: 0x1413c42c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg1 + 8)

if (rsi != 0)
    sub_1408081b0(rsi + 0x28)
    sub_1405ec8a0(rsi + 0x38)
    sub_1405d1550(rsi + 0x30)
    sub_1405d1550(rsi + 0x28)
    sub_1408081b0(rsi + 8)
    sub_1405ec8a0(rsi + 0x18)
    sub_1405d1550(rsi + 0x10)
    sub_1405d1550(rsi + 8)
    j_sub_140a74f90(rsi)

void* rsi_1 = *(arg1 + 0x10)

if (rsi_1 != 0)
    sub_1408081b0(rsi_1 + 0x28)
    sub_1405ec8a0(rsi_1 + 0x38)
    sub_1405d1550(rsi_1 + 0x30)
    sub_1405d1550(rsi_1 + 0x28)
    sub_1408081b0(rsi_1 + 8)
    sub_1405ec8a0(rsi_1 + 0x18)
    sub_1405d1550(rsi_1 + 0x10)
    sub_1405d1550(rsi_1 + 8)
    j_sub_140a74f90(rsi_1)

sub_1413c30d0(arg1 + 0x1e8)
int64_t rcx_19 = *(arg1 + 0x1d8)

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

void* rbx = arg1 + 0x1c8
int64_t rcx_20 = *rbx

if (rcx_20 != 0)
    sub_140a74f90(rcx_20)

int64_t i

for (i = 2; i != 0; )
    int64_t rcx_21 = *(rbx - 0x10)
    rbx -= 0x10
    i -= 1
    
    if (rcx_21 != 0)
        sub_140a74f90(rcx_21)

sub_140745ac0(arg1 + 0x198)
*(arg1 + 0x190) = i.d
int64_t rcx_23 = *(arg1 + 0x188)

if (rcx_23 != 0)
    sub_140a74f90(rcx_23)

*(arg1 + 0x150) = i.d

if (*(arg1 + 0x154) != i.d)
    sub_1405a5410(arg1 + 0x148, 0)

*(arg1 + 0x178) = 0xffffffff
*(arg1 + 0x17c) = i.d
sub_14059a8e0(arg1 + 0x158, 0)
int64_t rcx_26 = *(arg1 + 0x168)

if (rcx_26 != 0)
    sub_140a74f90(rcx_26)

int64_t rcx_27 = *(arg1 + 0x148)

if (rcx_27 != 0)
    sub_140a74f90(rcx_27)

int64_t rcx_28 = *(arg1 + 0x138)

if (rcx_28 != 0)
    sub_140a74f90(rcx_28)

int64_t rcx_29 = *(arg1 + 0x128)

if (rcx_29 != 0)
    sub_140a74f90(rcx_29)

int64_t rcx_30 = *(arg1 + 0x118)

if (rcx_30 != 0)
    sub_140a74f90(rcx_30)

sub_1405ae100(arg1 + 0xc8)
int64_t rcx_32 = *(arg1 + 0xa8)

if (rcx_32 != 0)
    sub_140a74f90(rcx_32)

void* result = sub_1405ae100(arg1 + 0x58)
int64_t rcx_34 = *(arg1 + 0x38)

if (rcx_34 != 0)
    result = sub_140a74f90(rcx_34)

int64_t rcx_35 = *(arg1 + 0x28)

if (rcx_35 == 0)
    return result

return sub_140a74f90(rcx_35)
