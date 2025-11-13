// 函数: sub_1422dc860
// 地址: 0x1422dc860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
*arg1 = &data_143321788

if (arg1[0x90].d s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        int64_t* rcx = *(rsi_1 + arg1[0x8f])
        (*(*rcx + 8))(rcx)
        i += 1
        rsi_1 = &rsi_1[1]
    while (i s< arg1[0x90].d)

sub_141412c30(&arg1[0x48])
sub_141412c30(&arg1[2])
*arg1 = &data_142f28578

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
