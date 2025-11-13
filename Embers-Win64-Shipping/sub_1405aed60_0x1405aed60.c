// 函数: sub_1405aed60
// 地址: 0x1405aed60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405ae080(&arg1[0x2c])
sub_1405ae080(&arg1[0x22])
sub_1405ae100(&arg1[0x17])
sub_1405ae200(&arg1[0xd])
int64_t* rcx_4 = arg1[8]

if (rcx_4 != 0)
    int32_t temp0_1 = *(rcx_4 + 0xc)
    *(rcx_4 + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx_4 + 8))(rcx_4, 1)

return sub_140d163b0(arg1) __tailcall
