// 函数: sub_1418d3730
// 地址: 0x1418d3730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142feee28
sub_1418e55e0(arg1)
void* rbx = arg1[0x2d]
AcquireSRWLockExclusive(rbx + 0x470)
sub_1407c23d0(rbx + 0x478 + zx.q(*(arg1 + 0x144)) * 0x50, arg1[3])
ReleaseSRWLockExclusive(rbx + 0x470)
int64_t rcx_4 = arg1[0x2b]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[0x29]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

sub_1405ae080(&arg1[0x1e])
sub_1418d38b0(&arg1[4])
int64_t rcx_8 = arg1[1]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

*arg1 = &data_142dd6680
return &data_142dd6680
