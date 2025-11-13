// 函数: sub_1413c58e0
// 地址: 0x1413c58e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = arg1 + 0x1588

for (int64_t i = 2; i != 0; )
    int64_t rcx = *(rsi - 0x10)
    rsi -= 0x10
    i -= 1
    
    if (rcx != 0)
        sub_140a74f90(rcx)

int64_t rcx_1 = *(arg1 + 0x1558)

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

sub_1405d1550(arg1 + 0x1538)
sub_1405d1550(arg1 + 0x1530)
sub_1405d1550(arg1 + 0x1528)
sub_1413c44e0(arg1 + 0xde0)

if (*(arg1 + 0xdc4) != 0)
    *(arg1 + 0xdc4) = 0

int64_t rcx_6 = *(arg1 + 0xcf0)

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rcx_7 = *(arg1 + 0xc50)

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

sub_1413c3330(arg1 + 0xb90)
*(arg1 + 0xb88) = 0
int64_t rcx_9 = *(arg1 + 0xb80)

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

*(arg1 + 0xb48) = 0

if (*(arg1 + 0xb4c) != 0)
    sub_140638cc0(arg1 + 0xb40, 0)

*(arg1 + 0xb70) = 0xffffffff
*(arg1 + 0xb74) = 0
sub_14059a8e0(arg1 + 0xb50, 0)
int64_t rcx_12 = *(arg1 + 0xb60)

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

int64_t rcx_13 = *(arg1 + 0xb40)

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

if (*(arg1 + 0x6a0) != 0)
    *(arg1 + 0x6a0) = 0

sub_1413c5a50(arg1 + 0x50)
int64_t i_2 = 4
void* rsi_1 = arg1 + 0x38
int64_t i_1

do
    rsi_1 -= 8
    sub_1405d1550(rsi_1)
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
return sub_1405d1550(arg1 + 0x10) __tailcall
