// 函数: sub_140e9ff50
// 地址: 0x140e9ff50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0x56]

if (rcx != 0)
    int32_t temp0_1 = *(rcx + 0xc)
    *(rcx + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx + 8))(rcx, 1)

sub_140de0ac0(arg1)

if ((arg2 & 1) == 0 || (arg2 & 4) != 0)
    return arg1

sub_140a74f90(arg1)
return arg1
