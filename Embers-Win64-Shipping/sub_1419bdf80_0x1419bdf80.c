// 函数: sub_1419bdf80
// 地址: 0x1419bdf80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14300d250
sub_14198bce0(arg1)
int64_t* rcx = arg1[0xb]

if (rcx != 0)
    (*(*rcx + 0x38))(rcx)

int64_t rcx_1 = arg1[8]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

sub_1419948a0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
