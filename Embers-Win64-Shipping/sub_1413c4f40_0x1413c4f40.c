// 函数: sub_1413c4f40
// 地址: 0x1413c4f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg1 + 0xdc) == 0
*(arg1 + 0xd8) = 0

if (not(cond:0))
    sub_1405c5570(arg1 + 0xd0, 0)

*(arg1 + 0x100) = 0xffffffff
*(arg1 + 0x104) = 0
sub_14059a8e0(arg1 + 0xe0, 0)
int64_t rcx_2 = *(arg1 + 0xf0)

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = *(arg1 + 0xd0)

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = *(arg1 + 0xb8)

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = *(arg1 + 0xa8)

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

sub_1405ae080(arg1 + 0x48)
int64_t* rcx_7 = *(arg1 + 0x40)

if (rcx_7 != 0)
    (*(*rcx_7 + 0x38))(rcx_7)

int64_t result = sub_1419948a0(arg1 + 0x28)
int64_t rcx_9 = *(arg1 + 0x18)

if (rcx_9 != 0)
    result = sub_140a74f90(rcx_9)

int64_t rcx_10 = *(arg1 + 8)

if (rcx_10 == 0)
    return result

return sub_140a74f90(rcx_10)
