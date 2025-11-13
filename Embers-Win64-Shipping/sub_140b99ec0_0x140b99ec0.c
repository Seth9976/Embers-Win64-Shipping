// 函数: sub_140b99ec0
// 地址: 0x140b99ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

*(arg2 + 0x50) = 0
int64_t rcx = *(arg2 + 0x48)

if (rcx != 0)
    sub_140a74f90(rcx)

bool cond:0_1 = *(arg2 + 0x14) == 0
*(arg2 + 0x10) = 0

if (not(cond:0_1))
    sub_1405a5410(arg2 + 8, 0)

*(arg2 + 0x38) = 0xffffffff
*(arg2 + 0x3c) = 0
sub_14059a8e0(arg2 + 0x18, 0)
int64_t rcx_3 = *(arg2 + 0x28)

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = *(arg2 + 8)

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

j_sub_140a74f90(arg2)
