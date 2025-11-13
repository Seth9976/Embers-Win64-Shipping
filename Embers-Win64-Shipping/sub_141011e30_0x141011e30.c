// 函数: sub_141011e30
// 地址: 0x141011e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x14] = &data_142efcd90
void* rcx = arg1[0x15]

if (rcx != 0)
    int32_t rax_1 = *(rcx + 0x14)
    *(rcx + 0x14) -= 1
    
    if (rax_1 == 1)
        int64_t* rcx_1 = arg1[0x15]
        
        if (rcx_1 != 0)
            sub_141011360(rcx_1, rax_1.b)

sub_14100e260(&arg1[0x10])
sub_14100f2e0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
