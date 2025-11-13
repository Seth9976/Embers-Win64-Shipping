// 函数: sub_141011c60
// 地址: 0x141011c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0xa] = &data_142efcd90
void* rcx = arg1[0xb]

if (rcx != 0)
    int32_t rax_1 = *(rcx + 0x14)
    *(rcx + 0x14) -= 1
    
    if (rax_1 == 1)
        int64_t* rcx_1 = arg1[0xb]
        
        if (rcx_1 != 0)
            sub_141011360(rcx_1, rax_1.b)

sub_1405d1550(&arg1[4])
*arg1 = &data_142d3ff08

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
