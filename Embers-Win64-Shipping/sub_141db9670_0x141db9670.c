// 函数: sub_141db9670
// 地址: 0x141db9670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141c4f800(arg1 + 0x218)
int64_t rcx_1 = *(arg1 + 0x1f8)

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

*(arg1 + 0x188) = &data_142d6a040
int64_t rcx_2 = *(arg1 + 0x1e0)

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_1405ae180(arg1 + 0x190)
int64_t rcx_4 = *(arg1 + 0xb0)

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t i = 2
void* rsi = arg1 + 0xa8

do
    int32_t j_1 = *(rsi - 8)
    rsi -= 0x10
    void* rcx_5 = *rsi
    i -= 1
    
    if (j_1 != 0)
        int64_t* rbx_1 = rcx_5 + 0x98
        int32_t j
        
        do
            int64_t rcx_6 = *rbx_1
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
            
            rbx_1[-0xe] = &data_142d6a040
            int64_t rcx_7 = rbx_1[-3]
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)
            
            sub_1405ae180(&rbx_1[-0xd])
            rbx_1 = &rbx_1[0x16]
            j = j_1
            j_1 -= 1
        while (j != 1)
        rcx_5 = *rsi
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
while (i != 0)

sub_141c4f9c0(arg1 + 0x78)
*(arg1 + 0x68) = 0
int64_t rcx_10 = *(arg1 + 0x60)

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

*(arg1 + 0x28) = 0

if (*(arg1 + 0x2c) != 0)
    sub_1405c55e0(arg1 + 0x20, 0)

*(arg1 + 0x50) = 0xffffffff
*(arg1 + 0x54) = 0
sub_14059a8e0(arg1 + 0x30, 0)
int64_t rcx_13 = *(arg1 + 0x40)

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

int64_t rcx_14 = *(arg1 + 0x20)

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
