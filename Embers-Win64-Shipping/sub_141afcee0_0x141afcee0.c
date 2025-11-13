// 函数: sub_141afcee0
// 地址: 0x141afcee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140f23e90(&arg1[0xb])
int64_t rcx_1 = arg1[9]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = arg1[7]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_1408462b0(&arg1[3])
*arg1 = &data_142d4ba40
int64_t* rcx_4 = arg1[2]

if (rcx_4 != 0)
    int32_t temp0_1 = *(rcx_4 + 0xc)
    *(rcx_4 + 0xc) -= 1
    
    if (temp0_1 == 1)
        jump(*(*rcx_4 + 8))

return &data_142d4ba40
