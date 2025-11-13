// 函数: sub_14100fec0
// 地址: 0x14100fec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142efcfe8
int64_t* rcx = arg1[0x610]

if (rcx != 0)
    (**rcx)(rcx, 1)

arg1[0x651].d = 0
int64_t rcx_1 = arg1[0x650]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

arg1[0x649].d = 0

if (*(arg1 + 0x324c) != 0)
    sub_14092fa50(&arg1[0x648], 0)

*(arg1 + 0x3274) = 0
arg1[0x64e].d = 0xffffffff
sub_14059a8e0(&arg1[0x64a], 0)
int64_t rcx_4 = arg1[0x64c]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[0x648]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = arg1[0x646]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rcx_7 = arg1[0x644]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

arg1[0x63e] = &data_142efcd90
void* rax_2 = arg1[0x63f]

if (rax_2 != 0)
    int32_t rsi_1 = *(rax_2 + 0x14)
    *(rax_2 + 0x14) -= 1
    
    if (rsi_1 == 1)
        int64_t* rcx_8 = arg1[0x63f]
        
        if (rcx_8 != 0)
            sub_141011360(rcx_8, rsi_1.b)

sub_14100e260(&arg1[0x63a])
sub_14100f2e0(&arg1[0x62a])
sub_141010000(&arg1[0x612])
sub_1405d1550(&arg1[0x60b])
return sub_14100d9f0(&arg1[8]) __tailcall
