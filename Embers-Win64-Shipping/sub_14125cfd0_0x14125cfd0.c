// 函数: sub_14125cfd0
// 地址: 0x14125cfd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0x1b8)

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t* rcx_1 = *(arg1 + 0x1b0)

if (rcx_1 != 0)
    rcx_1[9].d -= 1
    
    if (rcx_1[9].d == 1)
        sub_140a2f6e0(rcx_1)

int64_t rcx_2 = *(arg1 + 0xe8)

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = *(arg1 + 0xd8)

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

sub_1412687b0(arg1 + 0xb8)
int64_t rcx_5 = *(arg1 + 0xc8)

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

sub_14108c350(arg1 + 0xb8)
sub_141095f70(arg1 + 0xa0, 0)
int64_t rcx_8 = *(arg1 + 0xa0)

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

return sub_1405d1550(arg1 + 8) __tailcall
