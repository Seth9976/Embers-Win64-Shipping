// 函数: sub_14081cbc0
// 地址: 0x14081cbc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1408081b0(arg1 + 0x10)
sub_1408081b0(arg1 + 0xd0)
int64_t* rcx_2 = *(arg1 + 0x40)
*(arg1 + 8) = 0
*(arg1 + 0x58) = 0

if (rcx_2 != 0)
    (**rcx_2)(rcx_2, 1)
    *(arg1 + 0x40) = 0
    *(arg1 + 0x48) = 0

sub_1408081b0(arg1 + 0xd0)
sub_1405ec8a0(arg1 + 0xe0)
sub_1405d1550(arg1 + 0xd8)
sub_1405d1550(arg1 + 0xd0)
int64_t rcx_7 = *(arg1 + 0xc0)

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

sub_1405ae080(arg1 + 0x70)
int64_t rcx_9 = *(arg1 + 0x60)

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t* rcx_10 = *(arg1 + 0x50)

if (rcx_10 != 0)
    rcx_10[1].d -= 1
    
    if (rcx_10[1].d == 1)
        (**rcx_10)(rcx_10, 1)

int64_t rcx_11 = *(arg1 + 0x30)

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

sub_1408081b0(arg1 + 0x10)
sub_1405ec8a0(arg1 + 0x20)
sub_1405d1550(arg1 + 0x18)
return sub_1405d1550(arg1 + 0x10) __tailcall
