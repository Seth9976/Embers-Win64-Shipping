// 函数: sub_140f9bc10
// 地址: 0x140f9bc10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140745b20(&arg1[0x64])
sub_140745b20(&arg1[0x61])
sub_140745b20(&arg1[0x5d])
int32_t i_1 = arg1[0x58].d
int64_t* rbx = arg1[0x57]

if (i_1 != 0)
    int32_t i
    
    do
        int64_t* rcx_3 = *rbx
        
        if (rcx_3 != 0)
            (**rcx_3)(rcx_3, 1)
        
        rbx = &rbx[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

arg1[0x58].d = 0

if (*(arg1 + 0x2c4) != 0)
    sub_140638c50(&arg1[0x57], 0)

int64_t rcx_5 = arg1[0x57]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

arg1[0x55] = &data_142d82a88
return sub_140de0ac0(arg1) __tailcall
