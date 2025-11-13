// 函数: sub_141f519f0
// 地址: 0x141f519f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f58940(arg1)
sub_140a1d5c0(arg1 + 0x68)
*(arg1 + 0x60) = &data_142da7708
*(arg1 + 0x48) = &data_142e0ef98
sub_14081c9d0(arg1 + 0x58)
int64_t result = sub_1419948a0(arg1 + 0x48)
int64_t rcx_3 = *(arg1 + 0x38)

if (rcx_3 != 0)
    result = sub_140a74f90(rcx_3)

int64_t rcx_4 = *(arg1 + 0x20)

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

int64_t* rbx = *(arg1 + 0x18)

if (rbx == 0)
    return result

DepFile::~DepFile(rbx)
return j_sub_140a74f90(rbx)
