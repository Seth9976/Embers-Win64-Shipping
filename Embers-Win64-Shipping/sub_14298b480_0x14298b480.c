// 函数: sub_14298b480
// 地址: 0x14298b480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg1[6].b == 0
*arg1 = &Imf_2_3::StdIFStream::`vftable'{for `Imf_2_3::IStream'}

if (not(cond:0))
    int64_t* rcx = arg1[5]
    
    if (rcx != 0)
        void* rcx_1 = rcx + sx.q(*(*rcx + 4))
        (**rcx_1)(rcx_1, 1)

sub_14297aba0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
